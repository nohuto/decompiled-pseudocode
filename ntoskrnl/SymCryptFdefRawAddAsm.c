/*
 * XREFs of SymCryptFdefRawAddAsm @ 0x1404001A0
 * Callers:
 *     SymCryptFdefIntAddMixedSize @ 0x1403FD55C (SymCryptFdefIntAddMixedSize.c)
 *     SymCryptFdefRawAdd @ 0x1403FDCDC (SymCryptFdefRawAdd.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SymCryptFdefRawAddAsm(_QWORD *a1, _QWORD *a2, _QWORD *a3, int a4)
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
  __int64 v13; // rax
  __int64 v14; // rax
  _BOOL8 v15; // rtt

  v4 = 2 * a4;
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
    v13 = a1[3];
    v15 = v5;
    v5 = __CFADD__(v5, v13);
    v14 = v15 + v13;
    v5 |= __CFADD__(a2[3], v14);
    a3[3] = a2[3] + v14;
    a1 += 4;
    a2 += 4;
    a3 += 4;
    --v4;
  }
  while ( v4 );
  return v5;
}
