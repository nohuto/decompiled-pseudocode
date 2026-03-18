/*
 * XREFs of GdiUnmapGDIW32PIDLockedBitmaps @ 0x1C0016AF0
 * Callers:
 *     GdiProcessCallout @ 0x1C0016BD0 (GdiProcessCallout.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002E800 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E8B8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 __fastcall GdiUnmapGDIW32PIDLockedBitmaps(__int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rdx
  __int64 result; // rax
  _QWORD *v5; // r8
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  HSEMAPHORE v9; // [rsp+30h] [rbp+8h] BYREF

  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v9);
  v9 = ghsemMapRot;
  EngAcquireSemaphore(ghsemMapRot);
  v2 = (_QWORD *)(a1 + 224);
  v3 = (_QWORD *)*v2;
  if ( *v2 )
  {
    while ( v3 != v2 )
    {
      v5 = (_QWORD *)*v3;
      v6 = v3;
      v7 = v3;
      v3 = v5;
      *(v6 - 33) = 0LL;
      *(v6 - 34) = 0LL;
      if ( (_QWORD *)v5[1] != v6 || (v8 = (_QWORD *)v6[1], (_QWORD *)*v8 != v7) )
        __fastfail(3u);
      *v8 = v5;
      v5[1] = v8;
      v7[1] = v7;
      *v7 = v7;
    }
  }
  v2[1] = v2;
  *v2 = v2;
  SEMOBJ::vUnlock((SEMOBJ *)&v9);
  result = EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    return PsLeavePriorityRegion();
  }
  return result;
}
