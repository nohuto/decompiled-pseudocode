/*
 * XREFs of WmipDoDisableRequest @ 0x140786F08
 * Callers:
 *     WmipSendDisableRequest @ 0x140786EB4 (WmipSendDisableRequest.c)
 *     WmipEnableCollectionForNewGuid @ 0x140868484 (WmipEnableCollectionForNewGuid.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x14087EB44 (WmipDisableCollectionForRemovedGuid.c)
 * Callees:
 *     WmipSendEnableDisableRequest @ 0x1407870B0 (WmipSendEnableDisableRequest.c)
 *     WmipReleaseCollectionEnabled @ 0x140872A3C (WmipReleaseCollectionEnabled.c)
 */

__int64 __fastcall WmipDoDisableRequest(_DWORD *a1, char a2, __int64 a3)
{
  _DWORD *v4; // rbx
  char v5; // bp
  int *v6; // r14
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // r15d
  int v10; // eax
  int v12; // [rsp+60h] [rbp+18h]

  v12 = a3;
  v4 = a1;
  v5 = a2 != 0 ? 5 : 7;
  do
  {
    LOBYTE(a3) = a2;
    LOBYTE(a1) = v5;
    v6 = v4 + 22;
    v9 = WmipSendEnableDisableRequest(a1, v4, a3);
    if ( a2 )
      v10 = *v6;
    else
      v10 = v4[23];
    if ( !v10 )
      break;
    LOBYTE(v8) = a2;
    LOBYTE(v7) = a2 != 0 ? 4 : 6;
    v9 = WmipSendEnableDisableRequest(v7, v4, v8);
    if ( !a2 )
      v6 = v4 + 23;
  }
  while ( !*v6 );
  v4[4] &= ~v12;
  if ( !a2 )
    WmipReleaseCollectionEnabled(v4);
  return v9;
}
