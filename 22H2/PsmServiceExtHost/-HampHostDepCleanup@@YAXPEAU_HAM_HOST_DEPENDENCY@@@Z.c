/*
 * XREFs of ?HampHostDepCleanup@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x180035CE4
 * Callers:
 *     ?HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x180035C9C (-HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 * Callees:
 *     CempListEntryIsNull @ 0x1800087D8 (CempListEntryIsNull.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000A04C (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampHostProcessDepCleanup@@YAXPEAU_HAM_HOST_PROCESS_DEPENDENCY@@@Z @ 0x180035D9C (-HampHostProcessDepCleanup@@YAXPEAU_HAM_HOST_PROCESS_DEPENDENCY@@@Z.c)
 *     ?HampHostDynamicDepCleanup@@YAXPEAU_HAM_HOST_DYNAMIC_DEPENDENCY@@@Z @ 0x180035E54 (-HampHostDynamicDepCleanup@@YAXPEAU_HAM_HOST_DYNAMIC_DEPENDENCY@@@Z.c)
 */

void __fastcall HampHostDepCleanup(struct _HAM_HOST_DEPENDENCY *a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rdx
  _QWORD *v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rdx
  bool v7; // zf
  __int64 v8; // rbx
  __int64 v9; // rdx

  if ( !(unsigned int)CempListEntryIsNull((_QWORD *)a1 + 2) )
  {
    v3 = *v2;
    if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v4 = (_QWORD *)v2[1], (_QWORD *)*v4 != v2) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    *(_OWORD *)v2 = 0LL;
  }
  if ( *((_BYTE *)a1 + 40) )
  {
    if ( *((_BYTE *)a1 + 40) == 1 )
    {
      HampHostDynamicDepCleanup(a1);
    }
    else if ( (unsigned int)*((unsigned __int8 *)a1 + 40) - 3 <= 1 )
    {
      v5 = *((_QWORD *)a1 + 6);
      RmpAcquireGlobalLock();
      v7 = (*(_QWORD *)(v5 + 592))-- == 1LL;
      if ( v7 )
        RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v5 - 64), v6);
      RmpReleaseGlobalLock();
      v8 = *((_QWORD *)a1 + 7);
      RmpAcquireGlobalLock();
      v7 = (*(_QWORD *)(v8 + 592))-- == 1LL;
      if ( v7 )
        RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v8 - 64), v9);
      RmpReleaseGlobalLock();
    }
  }
  else
  {
    HampHostProcessDepCleanup(a1);
  }
}
