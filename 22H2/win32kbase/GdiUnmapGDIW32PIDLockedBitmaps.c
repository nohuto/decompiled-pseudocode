/*
 * XREFs of GdiUnmapGDIW32PIDLockedBitmaps @ 0x1C0073F80
 * Callers:
 *     GdiProcessCallout @ 0x1C0073730 (GdiProcessCallout.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0039FC4 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003A048 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     EngAcquireSemaphore @ 0x1C003A230 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C007B1D0 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 __fastcall GdiUnmapGDIW32PIDLockedBitmaps(__int64 a1)
{
  __int64 **v2; // rbx
  __int64 *v3; // rdx
  __int64 result; // rax
  __int64 *v5; // rax
  __int64 *v6; // rcx
  __int64 v7; // rax
  __int64 **v8; // r8
  HSEMAPHORE v9; // [rsp+30h] [rbp+8h] BYREF

  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v9);
  v9 = ghsemMapRot;
  EngAcquireSemaphore(ghsemMapRot);
  v2 = (__int64 **)(a1 + 224);
  v3 = *v2;
  if ( *v2 )
  {
    while ( v3 != (__int64 *)v2 )
    {
      v5 = v3;
      v6 = v3;
      v3 = (__int64 *)*v3;
      *(v5 - 33) = 0LL;
      *(v5 - 34) = 0LL;
      v7 = *v5;
      if ( *(__int64 **)(v7 + 8) != v6 || (v8 = (__int64 **)v6[1], *v8 != v6) )
        __fastfail(3u);
      *v8 = (__int64 *)v7;
      *(_QWORD *)(v7 + 8) = v8;
      v6[1] = (__int64)v6;
      *v6 = (__int64)v6;
    }
  }
  v2[1] = (__int64 *)v2;
  *v2 = (__int64 *)v2;
  SEMOBJ::vUnlock((PERESOURCE *)&v9);
  result = EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDynamicModeChange);
    return PsLeavePriorityRegion();
  }
  return result;
}
