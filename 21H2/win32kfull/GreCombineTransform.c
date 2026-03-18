/*
 * XREFs of GreCombineTransform @ 0x1C015F83C
 * Callers:
 *     NtGdiCombineTransform @ 0x1C013A620 (NtGdiCombineTransform.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall GreCombineTransform(struct _XFORML *a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  _OWORD *v7; // [rsp+20h] [rbp-49h] BYREF
  int v8; // [rsp+2Ch] [rbp-3Dh]
  _OWORD v9[2]; // [rsp+30h] [rbp-39h] BYREF
  int v10; // [rsp+50h] [rbp-19h]
  _OWORD v11[2]; // [rsp+58h] [rbp-11h] BYREF
  int v12; // [rsp+78h] [rbp+Fh]
  _OWORD v13[2]; // [rsp+80h] [rbp+17h] BYREF
  int v14; // [rsp+A0h] [rbp+37h]

  v12 = 0;
  v10 = 0;
  v14 = 0;
  memset(v11, 0, sizeof(v11));
  memset(v9, 0, sizeof(v9));
  memset(v13, 0, sizeof(v13));
  vConvertXformToMatrix(a2, v11);
  vConvertXformToMatrix(a3, v9);
  v5 = 0;
  v7 = v13;
  v8 = 0;
  if ( EXFORMOBJ::bMultiply((EXFORMOBJ *)&v7, (struct MATRIX *)v11, (struct MATRIX *)v9, 0) )
  {
    *((_DWORD *)v7 + 8) = 32;
    EXFORMOBJ::vGetCoefficient((EXFORMOBJ *)&v7, a1);
    return 1;
  }
  return v5;
}
