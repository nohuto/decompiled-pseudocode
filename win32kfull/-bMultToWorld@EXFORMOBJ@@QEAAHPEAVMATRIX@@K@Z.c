/*
 * XREFs of ?bMultToWorld@EXFORMOBJ@@QEAAHPEAVMATRIX@@K@Z @ 0x1C02D1834
 * Callers:
 *     NtGdiModifyWorldTransform @ 0x1C0002990 (NtGdiModifyWorldTransform.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z @ 0x1C02900F0 (--0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z.c)
 */

int __fastcall EXFORMOBJ::bMultToWorld(struct MATRIX **this, struct MATRIX *a2, int a3)
{
  __int128 v3; // xmm0
  __int128 v5; // xmm1
  struct MATRIX *v7; // rdx
  struct MATRIX *v8; // r8
  _BYTE v10[16]; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v11[2]; // [rsp+30h] [rbp-38h] BYREF
  int v12; // [rsp+50h] [rbp-18h]

  v3 = *(_OWORD *)a2;
  v5 = *((_OWORD *)a2 + 1);
  v12 = *((_DWORD *)a2 + 8);
  v11[0] = v3;
  v11[1] = v5;
  EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v10, a2, 0);
  v7 = *this;
  if ( a3 == 2 )
  {
    v8 = *this;
    v7 = (struct MATRIX *)v11;
  }
  else
  {
    v8 = (struct MATRIX *)v11;
  }
  return EXFORMOBJ::bMultiply((EXFORMOBJ *)v10, v7, v8, 0);
}
