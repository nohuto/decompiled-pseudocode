/*
 * XREFs of _IsValidParallelButton @ 0x1C00D3CC0
 * Callers:
 *     RIMGetDeviceButtons @ 0x1C0188A98 (RIMGetDeviceButtons.c)
 *     RIMGetPointerDeviceProperties @ 0x1C01897E0 (RIMGetPointerDeviceProperties.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C018520C (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C01852B0 (rimHidP_GetSpecificValueCaps.c)
 */

__int64 __fastcall IsValidParallelButton(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned int v6; // ebx
  unsigned __int16 v7; // di
  int v8; // r9d
  int v9; // edx
  __int16 v11[2]; // [rsp+40h] [rbp-E8h] BYREF
  __int16 v12[6]; // [rsp+44h] [rbp-E4h] BYREF
  _BYTE v13[80]; // [rsp+50h] [rbp-D8h] BYREF
  _BYTE v14[80]; // [rsp+A0h] [rbp-88h] BYREF

  v3 = *(_QWORD *)(a1 + 760);
  v6 = 1;
  v7 = *(_WORD *)(v3 + 4);
  while ( 1 )
  {
    memset(v13, 0, 0x48uLL);
    v11[0] = 1;
    if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 13, v7, 81, (__int64)v13, (__int64)v11, a3) == 1114112 )
    {
      memset(v14, 0, 0x48uLL);
      v8 = a2[28];
      v9 = *a2;
      v12[0] = 1;
      if ( (unsigned int)rimHidP_GetSpecificButtonCaps(0, v9, v7, v8, (__int64)v14, (__int64)v12, a3) != 1114112 )
        break;
    }
    v7 = *(_WORD *)(*(_QWORD *)(v3 + 16) + 24LL * v7 + 8);
    if ( !v7 )
      return v6;
  }
  return 0;
}
