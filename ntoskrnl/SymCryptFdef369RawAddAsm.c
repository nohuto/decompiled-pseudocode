/*
 * XREFs of SymCryptFdef369RawAddAsm @ 0x140409680
 * Callers:
 *     SymCryptFdef369ModAddGeneric @ 0x140403AD0 (SymCryptFdef369ModAddGeneric.c)
 *     SymCryptFdef369ModSubGeneric @ 0x140403DD0 (SymCryptFdef369ModSubGeneric.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SymCryptFdef369RawAddAsm(_QWORD *a1, _QWORD *a2, _QWORD *a3, int a4)
{
  int v4; // r9d
  bool v5; // cf
  _BOOL8 v6; // rtt
  __int64 v7; // rax
  __int64 v8; // rax
  _BOOL8 v9; // rtt
  __int64 v10; // rax
  __int64 v11; // rax
  _BOOL8 v12; // rtt

  v4 = a4 + 1;
  v5 = 0;
  do
  {
    v6 = v5;
    v5 = __CFADD__(v5, *a1) | __CFADD__(*a2, v5 + *a1);
    *a3 = *a2 + v6 + *a1;
    v7 = a1[1];
    v9 = v5;
    v5 = __CFADD__(v5, v7);
    v8 = v9 + v7;
    v5 |= __CFADD__(a2[1], v8);
    a3[1] = a2[1] + v8;
    v10 = a1[2];
    v12 = v5;
    v5 = __CFADD__(v5, v10);
    v11 = v12 + v10;
    v5 |= __CFADD__(a2[2], v11);
    a3[2] = a2[2] + v11;
    a1 += 3;
    a2 += 3;
    a3 += 3;
    --v4;
  }
  while ( v4 );
  return v5;
}
