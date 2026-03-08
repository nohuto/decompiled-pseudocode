/*
 * XREFs of WmipLegacyEtwWorker @ 0x14084D950
 * Callers:
 *     WmipProcessSynchronousEtw @ 0x1408689F0 (WmipProcessSynchronousEtw.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402046C0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     WmipReferenceEntry @ 0x14069C27C (WmipReferenceEntry.c)
 *     WmipUnreferenceEntry @ 0x14069C9D0 (WmipUnreferenceEntry.c)
 *     EtwUnregister @ 0x14076F9E0 (EtwUnregister.c)
 *     WmipProcessLegacyEtwRegister @ 0x14084DA68 (WmipProcessLegacyEtwRegister.c)
 *     WmipProcessLegacyEtwCallback @ 0x1409DEC30 (WmipProcessLegacyEtwCallback.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipLegacyEtwWorker(ULONG_PTR a1)
{
  __int64 v2; // rcx
  void **v3; // rsi
  void ***v4; // rbx
  void **v5; // rax
  int v6; // ecx
  int v8; // ecx
  REGHANDLE v9; // rbp

  WmipReferenceEntry(a1);
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v2 = *(_QWORD *)(a1 + 128);
  v3 = (void **)(v2 + 24);
  if ( !v2 )
    v3 = (void **)(a1 + 136);
  while ( 1 )
  {
    v4 = (void ***)*v3;
    if ( *v3 == v3 )
      break;
    if ( v4[1] != v3 || (v5 = *v4, (*v4)[1] != v4) )
      __fastfail(3u);
    *v3 = v5;
    v5[1] = v3;
    KeReleaseMutex(&WmipSMMutex, 0);
    v6 = *((_DWORD *)v4 + 4);
    if ( v6 )
    {
      v8 = v6 - 1;
      if ( v8 )
      {
        if ( v8 == 1 )
          WmipProcessLegacyEtwCallback(v4, a1);
      }
      else
      {
        KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
        v9 = *(_QWORD *)(a1 + 104);
        *(_QWORD *)(a1 + 104) = 0LL;
        KeReleaseMutex(&WmipSMMutex, 0);
        if ( v9 )
          EtwUnregister(v9);
      }
    }
    else
    {
      WmipProcessLegacyEtwRegister(a1, v4);
    }
    WmipUnreferenceEntry((__int64)&WmipGEChunkInfo, (volatile signed __int64 *)a1);
    ExFreePoolWithTag(v4, 0x70696D57u);
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  }
  *(_DWORD *)(a1 + 16) &= ~0x10u;
  *(_QWORD *)(a1 + 128) = 0LL;
  KeReleaseMutex(&WmipSMMutex, 0);
  return WmipUnreferenceEntry((__int64)&WmipGEChunkInfo, (volatile signed __int64 *)a1);
}
