/*
 * XREFs of ?bDoGradient@@YAHPEA_J00JJJPEAU_GRADSTRUCT@@@Z @ 0x1C014D60C
 * Callers:
 *     ?bCalulateColorGradient@@YAHPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z @ 0x1C014D464 (-bCalulateColorGradient@@YAHPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z.c)
 * Callees:
 *     ?MDiv64@@YA_J_J00@Z @ 0x1C00CFB5C (-MDiv64@@YA_J_J00@Z.c)
 */

__int64 __fastcall bDoGradient(__int64 *a1, __int64 *a2, __int64 *a3, int a4, int a5, int a6, struct _GRADSTRUCT *a7)
{
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // r11
  __int64 v17; // r8
  __int64 v18; // r10
  __int64 v19; // rax
  __int64 v20; // r11
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // r10
  __int64 result; // rax

  v10 = a4;
  v11 = *((int *)a7 + 5);
  v12 = (a5 - a4) * *((_DWORD *)a7 + 3) - (a6 - a4) * *((_DWORD *)a7 + 2);
  v13 = (a6 - a4) * *(_DWORD *)a7 - (a5 - a4) * *((_DWORD *)a7 + 1);
  v14 = v13;
  if ( v11 < 0 )
  {
    v12 = -v12;
    v14 = -(__int64)v13;
    v11 = -v11;
  }
  v15 = MDiv64(v12, *((_QWORD *)a7 + 4), v11);
  *a1 = v12 * v16 + v15;
  v19 = MDiv64(v14, v18, v17);
  v22 = *((int *)a7 + 4);
  *a2 = v14 * v20 + v19;
  result = 1LL;
  *a3 = (((v21 >> 1) + 1) * v23 - v22 - 1) / v11 + v22 + ((v21 >> 1) + 1) * v20 + (v10 << 48);
  return result;
}
