/*
 * XREFs of GreCombineTransform @ 0x1C02D2210
 * Callers:
 *     NtGdiCombineTransform @ 0x1C02C4800 (NtGdiCombineTransform.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

int __fastcall GreCombineTransform(struct _XFORML *a1, __int64 a2, __int64 a3)
{
  int result; // eax
  _OWORD *v6; // [rsp+20h] [rbp-49h] BYREF
  int v7; // [rsp+2Ch] [rbp-3Dh]
  _OWORD v8[2]; // [rsp+30h] [rbp-39h] BYREF
  int v9; // [rsp+50h] [rbp-19h]
  _OWORD v10[2]; // [rsp+58h] [rbp-11h] BYREF
  int v11; // [rsp+78h] [rbp+Fh]
  _OWORD v12[2]; // [rsp+80h] [rbp+17h] BYREF
  int v13; // [rsp+A0h] [rbp+37h]

  v11 = 0;
  v9 = 0;
  v13 = 0;
  memset(v10, 0, sizeof(v10));
  memset(v8, 0, sizeof(v8));
  memset(v12, 0, sizeof(v12));
  vConvertXformToMatrix(a2, v10);
  vConvertXformToMatrix(a3, v8);
  v7 = 0;
  v6 = v12;
  result = EXFORMOBJ::bMultiply((EXFORMOBJ *)&v6, (struct MATRIX *)v10, (struct MATRIX *)v8, 0);
  if ( result )
  {
    *((_DWORD *)v6 + 8) = 32;
    EXFORMOBJ::vGetCoefficient((EXFORMOBJ *)&v6, a1);
    return 1;
  }
  return result;
}
