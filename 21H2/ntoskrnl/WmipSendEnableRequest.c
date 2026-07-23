/*
 * XREFs of WmipSendEnableRequest @ 0x14061FF94
 * Callers:
 *     WmipEnableCollectOrEvent @ 0x140633890 (WmipEnableCollectOrEvent.c)
 * Callees:
 *     WmipUnreferenceEntry @ 0x14062E428 (WmipUnreferenceEntry.c)
 *     WmipReferenceEntry @ 0x1406339F4 (WmipReferenceEntry.c)
 *     WmipSendEnableDisableRequest @ 0x14077E1C0 (WmipSendEnableDisableRequest.c)
 *     WmipReleaseCollectionEnabled @ 0x140781B54 (WmipReleaseCollectionEnabled.c)
 *     WmipWaitForCollectionEnabled @ 0x140933AC4 (WmipWaitForCollectionEnabled.c)
 */

__int64 __fastcall WmipSendEnableRequest(_DWORD *BugCheckParameter2, char a2)
{
  int v4; // ecx
  int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // r14d
  int v11; // eax

  if ( a2 )
  {
    v4 = BugCheckParameter2[22];
    v5 = 2;
    BugCheckParameter2[22] = v4 + 1;
  }
  else
  {
    v4 = BugCheckParameter2[23];
    v5 = 4;
    BugCheckParameter2[23] = v4 + 1;
  }
  if ( v4 || (v5 & BugCheckParameter2[4]) != 0 )
  {
    if ( !a2 && (v5 & BugCheckParameter2[4]) != 0 )
      WmipWaitForCollectionEnabled(BugCheckParameter2);
    return 0;
  }
  else
  {
    WmipReferenceEntry((ULONG_PTR)BugCheckParameter2);
    BugCheckParameter2[4] |= v5;
    do
    {
      LOBYTE(v7) = a2;
      LOBYTE(v6) = a2 != 0 ? 4 : 6;
      v10 = WmipSendEnableDisableRequest(v6, BugCheckParameter2, v7);
      if ( a2 )
        v11 = BugCheckParameter2[22];
      else
        v11 = BugCheckParameter2[23];
      if ( v11 )
        break;
      LOBYTE(v9) = a2;
      LOBYTE(v8) = a2 != 0 ? 5 : 7;
      v10 = WmipSendEnableDisableRequest(v8, BugCheckParameter2, v9);
    }
    while ( a2 ? BugCheckParameter2[22] : BugCheckParameter2[23] );
    BugCheckParameter2[4] &= ~v5;
    if ( !a2 )
      WmipReleaseCollectionEnabled(BugCheckParameter2);
    WmipUnreferenceEntry(&WmipGEChunkInfo, BugCheckParameter2);
  }
  return v10;
}
