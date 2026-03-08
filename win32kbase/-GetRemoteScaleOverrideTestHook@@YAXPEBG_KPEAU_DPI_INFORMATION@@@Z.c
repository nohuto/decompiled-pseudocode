/*
 * XREFs of ?GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z @ 0x1C00D6948
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0022E20 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     ?RtlStringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C0070DEC (-RtlStringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?ScaleOverrideTestHookCore@DpiInternal@@YAXQEBGPEAK@Z @ 0x1C00D69FC (-ScaleOverrideTestHookCore@DpiInternal@@YAXQEBGPEAK@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

void __fastcall GetRemoteScaleOverrideTestHook(const unsigned __int16 *a1, __int64 a2, struct _DPI_INFORMATION *a3)
{
  unsigned int *v4; // r8
  unsigned __int16 v5[8]; // [rsp+20h] [rbp-29h] BYREF
  unsigned __int16 v6[8]; // [rsp+30h] [rbp-19h] BYREF
  __int128 v7; // [rsp+40h] [rbp-9h]
  __int128 v8; // [rsp+50h] [rbp+7h]
  __int128 v9; // [rsp+60h] [rbp+17h]
  __int128 v10; // [rsp+70h] [rbp+27h]
  __int64 v11; // [rsp+80h] [rbp+37h]
  int v12; // [rsp+88h] [rbp+3Fh]
  __int16 v13; // [rsp+8Ch] [rbp+43h]

  if ( gbOSTestSigningEnabled )
  {
    v11 = 0LL;
    *(_OWORD *)v6 = *(_OWORD *)L"REMOTE_MONITOR_";
    v7 = *(_OWORD *)L"ONITOR_";
    v8 = 0LL;
    v12 = 0;
    v9 = 0LL;
    v13 = 0;
    v10 = 0LL;
    if ( (int)RtlStringCchCatW(v6, 47LL, a1) >= 0 )
    {
      *(_DWORD *)v5 = 0;
      DpiInternal::ScaleOverrideTestHookCore((DpiInternal *)v6, v5, v4);
      if ( *(_DWORD *)v5 )
      {
        *((_DWORD *)a3 + 2) = *(_DWORD *)v5;
        *((_DWORD *)a3 + 21) = 1234567;
      }
    }
  }
}
