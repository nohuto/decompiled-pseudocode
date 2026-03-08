/*
 * XREFs of W32kGenerateMoveData @ 0x1C0272E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall W32kGenerateMoveData(__int64 a1)
{
  __int64 v1; // rbx
  int IsRemoteAndNotDisconnectConnection; // eax
  unsigned int v3; // ecx

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  IsRemoteAndNotDisconnectConnection = UserIsRemoteAndNotDisconnectConnection();
  v3 = 0;
  if ( IsRemoteAndNotDisconnectConnection || *(_DWORD *)(v1 + 8684) )
    return 1;
  return v3;
}
