/*
 * XREFs of SymCryptFdef369RawSubAsm @ 0x1404096D0
 * Callers:
 *     SymCryptFdef369ModAddGeneric @ 0x140403AD0 (SymCryptFdef369ModAddGeneric.c)
 *     SymCryptFdef369ModSubGeneric @ 0x140403DD0 (SymCryptFdef369ModSubGeneric.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SymCryptFdef369RawSubAsm(unsigned __int64 *a1, _QWORD *a2, _QWORD *a3, int a4)
{
  int v4; // r9d
  bool v5; // cf
  unsigned __int64 v6; // rtt
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rtt
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rtt

  v4 = a4 + 1;
  v5 = 0;
  do
  {
    v6 = v5 + *a2;
    v5 = *a1 < v6;
    *a3 = *a1 - v6;
    v7 = a1[1];
    v8 = v5 + a2[1];
    v5 = v7 < v8;
    a3[1] = v7 - v8;
    v9 = a1[2];
    v10 = v5 + a2[2];
    v5 = v9 < v10;
    a3[2] = v9 - v10;
    a1 += 3;
    a2 += 3;
    a3 += 3;
    --v4;
  }
  while ( v4 );
  return v5;
}
