/*
 * XREFs of GdiUnmapGDIW32PIDLockedBitmaps @ 0x1C0091850
 * Callers:
 *     GdiProcessCallout @ 0x1C014D030 (GdiProcessCallout.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0038B54 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0038BD8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     EngAcquireSemaphore @ 0x1C0038DC0 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0079AF0 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 __fastcall GdiUnmapGDIW32PIDLockedBitmaps(__int64 a1)
{
  __int64 **v2; // rbx
  __int64 *v3; // rdx
  int v4; // r8d
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 *v7; // rax
  __int64 *v8; // rcx
  __int64 v9; // rax
  __int64 **v10; // r8
  HSEMAPHORE v11; // [rsp+30h] [rbp+8h] BYREF

  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v11);
  v11 = ghsemMapRot;
  EngAcquireSemaphore(ghsemMapRot);
  v2 = (__int64 **)(a1 + 224);
  v3 = *v2;
  if ( *v2 )
  {
    while ( v3 != (__int64 *)v2 )
    {
      v7 = v3;
      v8 = v3;
      v3 = (__int64 *)*v3;
      *(v7 - 33) = 0LL;
      *(v7 - 34) = 0LL;
      v9 = *v7;
      if ( *(__int64 **)(v9 + 8) != v8 || (v10 = (__int64 **)v8[1], *v10 != v8) )
        __fastfail(3u);
      *v10 = (__int64 *)v9;
      *(_QWORD *)(v9 + 8) = v10;
      v8[1] = (__int64)v8;
      *v8 = (__int64)v8;
    }
  }
  v2[1] = (__int64 *)v2;
  *v2 = (__int64 *)v2;
  SEMOBJ::vUnlock((PERESOURCE *)&v11);
  result = EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v4);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDynamicModeChange);
    return PsLeavePriorityRegion(v6);
  }
  return result;
}
