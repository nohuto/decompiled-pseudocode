/*
 * XREFs of RtlFnToFxFrame @ 0x1402ECBDC
 * Callers:
 *     RtlpWow64CtxToAmd64 @ 0x14077D078 (RtlpWow64CtxToAmd64.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlFnToFxFrame(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r11
  char v3; // r9
  unsigned int v4; // r10d
  __int16 v5; // bx
  __int64 v6; // rax
  char result; // al

  v2 = (_QWORD *)(a1 + 32);
  *(_WORD *)a1 = *(_WORD *)a2;
  v3 = 0;
  v4 = 0;
  *(_WORD *)(a1 + 2) = *(_WORD *)(a2 + 4);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 12);
  *(_WORD *)(a1 + 12) = *(_WORD *)(a2 + 16);
  *(_WORD *)(a1 + 6) = *(_WORD *)(a2 + 18);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 20);
  *(_WORD *)(a1 + 20) = *(_WORD *)(a2 + 24);
  v5 = *(_WORD *)(a2 + 8);
  do
  {
    v6 = 10 * v4;
    *v2 = *(_QWORD *)(v6 + a2 + 28);
    v2 += 2;
    *((_WORD *)v2 - 4) = *(_WORD *)(v6 + a2 + 36);
    result = 2 * v3 + ((v5 & 0xC000) != 0xC000);
    v5 *= 4;
    ++v4;
    v3 = result;
  }
  while ( v4 < 8 );
  *(_BYTE *)(a1 + 4) = result;
  return result;
}
