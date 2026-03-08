/*
 * XREFs of ?SnapFurtherFromEdge@WindowArrangement@@YA_NXZ @ 0x1C0230C44
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01F0DC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

char __fastcall WindowArrangement::SnapFurtherFromEdge(WindowArrangement *this)
{
  int *v1; // rdx
  _DWORD v3[3]; // [rsp+0h] [rbp-28h] BYREF
  char v4; // [rsp+Ch] [rbp-1Ch] BYREF

  v3[0] = 0;
  v1 = v3;
  v3[1] = 1;
  v3[2] = 2;
  while ( *((_BYTE *)&unk_1C035C1E0 + *v1) > 1u )
  {
    if ( ++v1 == (int *)&v4 )
      return 1;
  }
  return 0;
}
