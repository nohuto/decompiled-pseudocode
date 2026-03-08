/*
 * XREFs of McTemplateU0qff_EventWriteTransfer @ 0x18012D1A8
 * Callers:
 *     ?CalculateEffectiveRefreshRate@CRateInfo@@QEAAXPEAVCFrameInfo@@0@Z @ 0x18004D9D8 (-CalculateEffectiveRefreshRate@CRateInfo@@QEAAXPEAVCFrameInfo@@0@Z.c)
 *     ?SetNominalRefreshPeriod@CRateInfo@@QEAAX_K@Z @ 0x1800512D4 (-SetNominalRefreshPeriod@CRateInfo@@QEAAX_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18019F304 (McGenEventWrite_EventWriteTransfer.c)
 */

__int64 __fastcall McTemplateU0qff_EventWriteTransfer(__int64 a1, __int64 a2, __int64 a3, float a4, char a5)
{
  _BYTE v6[16]; // [rsp+30h] [rbp-50h] BYREF
  int *v7; // [rsp+40h] [rbp-40h]
  __int64 v8; // [rsp+48h] [rbp-38h]
  float *v9; // [rsp+50h] [rbp-30h]
  __int64 v10; // [rsp+58h] [rbp-28h]
  char *v11; // [rsp+60h] [rbp-20h]
  __int64 v12; // [rsp+68h] [rbp-18h]
  int v13; // [rsp+A0h] [rbp+20h] BYREF
  float v14; // [rsp+A8h] [rbp+28h] BYREF

  v14 = a4;
  v13 = a3;
  v7 = &v13;
  v8 = 4LL;
  v9 = &v14;
  v11 = &a5;
  v10 = 4LL;
  v12 = 4LL;
  return McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, a2, a3, 4LL, v6);
}
