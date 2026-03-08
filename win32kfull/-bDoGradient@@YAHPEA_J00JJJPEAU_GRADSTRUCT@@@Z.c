/*
 * XREFs of ?bDoGradient@@YAHPEA_J00JJJPEAU_GRADSTRUCT@@@Z @ 0x1C028EFD4
 * Callers:
 *     ?bCalulateColorGradient@@YAHPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z @ 0x1C028EE1C (-bCalulateColorGradient@@YAHPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z.c)
 * Callees:
 *     ?MDiv64@@YA_J_J00@Z @ 0x1C0017A70 (-MDiv64@@YA_J_J00@Z.c)
 */

__int64 __fastcall bDoGradient(__int64 *a1, __int64 *a2, __int64 *a3, int a4, int a5, int a6, struct _GRADSTRUCT *a7)
{
  __int64 v10; // r14
  int v11; // r11d
  __int64 v12; // rbx
  __int64 v13; // rbp
  int v14; // r10d
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // r11
  __int64 v18; // r8
  __int64 v19; // r10
  __int64 v20; // rax
  __int64 v21; // r11
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // r10
  __int64 result; // rax

  v10 = a4;
  v11 = *(_DWORD *)a7 * (a6 - a4) - *((_DWORD *)a7 + 1) * (a5 - a4);
  v12 = *((int *)a7 + 5);
  v13 = v11;
  v14 = *((_DWORD *)a7 + 3) * (a5 - a4) - *((_DWORD *)a7 + 2) * (a6 - a4);
  v15 = v14;
  if ( v12 < 0 )
  {
    v15 = -(__int64)v14;
    v13 = -(__int64)v11;
    v12 = -v12;
  }
  v16 = MDiv64(v15, *((_QWORD *)a7 + 4), v12);
  *a1 = v15 * v17 + v16;
  v20 = MDiv64(v13, v19, v18);
  v23 = *((int *)a7 + 4);
  *a2 = v13 * v21 + v20;
  result = 1LL;
  *a3 = (((v22 >> 1) + 1) * v24 - v23 - 1) / v12 + v23 + ((v22 >> 1) + 1) * v21 + (v10 << 48);
  return result;
}
