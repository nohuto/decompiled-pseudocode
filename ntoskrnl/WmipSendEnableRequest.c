/*
 * XREFs of WmipSendEnableRequest @ 0x140786FAC
 * Callers:
 *     WmipEnableCollectOrEvent @ 0x14069C2A8 (WmipEnableCollectOrEvent.c)
 * Callees:
 *     WmipReferenceEntry @ 0x14069C27C (WmipReferenceEntry.c)
 *     WmipUnreferenceEntry @ 0x14069C9D0 (WmipUnreferenceEntry.c)
 *     WmipSendEnableDisableRequest @ 0x1407870B0 (WmipSendEnableDisableRequest.c)
 *     WmipReleaseCollectionEnabled @ 0x140872A3C (WmipReleaseCollectionEnabled.c)
 *     WmipWaitForCollectionEnabled @ 0x1409DEE58 (WmipWaitForCollectionEnabled.c)
 */

__int64 __fastcall WmipSendEnableRequest(ULONG_PTR BugCheckParameter2, char a2)
{
  int v4; // ecx
  int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // r8
  int *v8; // r15
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // r14d
  int v12; // eax

  if ( a2 )
  {
    v4 = *(_DWORD *)(BugCheckParameter2 + 88);
    v5 = 2;
    *(_DWORD *)(BugCheckParameter2 + 88) = v4 + 1;
  }
  else
  {
    v4 = *(_DWORD *)(BugCheckParameter2 + 92);
    v5 = 4;
    *(_DWORD *)(BugCheckParameter2 + 92) = v4 + 1;
  }
  if ( v4 || (v5 & *(_DWORD *)(BugCheckParameter2 + 16)) != 0 )
  {
    if ( !a2 && (v5 & *(_DWORD *)(BugCheckParameter2 + 16)) != 0 )
      WmipWaitForCollectionEnabled(BugCheckParameter2);
    return 0;
  }
  else
  {
    WmipReferenceEntry(BugCheckParameter2);
    *(_DWORD *)(BugCheckParameter2 + 16) |= v5;
    do
    {
      LOBYTE(v7) = a2;
      LOBYTE(v6) = a2 != 0 ? 4 : 6;
      v8 = (int *)(BugCheckParameter2 + 88);
      v11 = WmipSendEnableDisableRequest(v6, BugCheckParameter2, v7);
      if ( a2 )
        v12 = *v8;
      else
        v12 = *(_DWORD *)(BugCheckParameter2 + 92);
      if ( v12 )
        break;
      LOBYTE(v10) = a2;
      LOBYTE(v9) = a2 != 0 ? 5 : 7;
      v11 = WmipSendEnableDisableRequest(v9, BugCheckParameter2, v10);
      if ( !a2 )
        v8 = (int *)(BugCheckParameter2 + 92);
    }
    while ( *v8 );
    *(_DWORD *)(BugCheckParameter2 + 16) &= ~v5;
    if ( !a2 )
      WmipReleaseCollectionEnabled(BugCheckParameter2);
    WmipUnreferenceEntry((__int64)&WmipGEChunkInfo, (volatile signed __int64 *)BugCheckParameter2);
  }
  return v11;
}
