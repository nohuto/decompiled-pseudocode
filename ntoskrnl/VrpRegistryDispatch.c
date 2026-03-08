/*
 * XREFs of VrpRegistryDispatch @ 0x14079B8A0
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x14027B290 (IofCompleteRequest.c)
 */

__int64 __fastcall VrpRegistryDispatch(__int64 a1, __int64 a2)
{
  char v2; // cl
  unsigned int v3; // ebx

  v2 = **(_BYTE **)(a2 + 184);
  if ( !v2 || v2 == 2 || v2 == 18 )
    v3 = 0;
  else
    v3 = -1073741808;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_DWORD *)(a2 + 48) = v3;
  IofCompleteRequest((PIRP)a2, 0);
  return v3;
}
