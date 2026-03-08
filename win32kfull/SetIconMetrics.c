/*
 * XREFs of SetIconMetrics @ 0x1C010C85C
 * Callers:
 *     UserOnGreTextReady @ 0x1C00B8554 (UserOnGreTextReady.c)
 *     xxxInitWindowStation @ 0x1C00C1348 (xxxInitWindowStation.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C010AFDC (xxxUpdatePerUserSystemParameters.c)
 *     ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x1C01C8AB0 (-SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z.c)
 * Callees:
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C010C82C (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     ?GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z @ 0x1C010CE38 (-GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z.c)
 *     ?GetLocalizedInt@@YAHIH@Z @ 0x1C010CEAC (-GetLocalizedInt@@YAHIH@Z.c)
 *     UserSetAltScaleFont @ 0x1C010E47C (UserSetAltScaleFont.c)
 *     UserSetFont @ 0x1C010E6E8 (UserSetFont.c)
 *     GreMarkDeletableFont @ 0x1C010E8B4 (GreMarkDeletableFont.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SetIconMetrics(struct _UNICODE_STRING *a1, unsigned int *a2)
{
  struct HLFONT__ **v4; // rbx
  int v5; // esi
  int v6; // edx
  int LocalizedInt; // eax
  int v8; // edx
  int v9; // eax
  __int64 v10; // rdx
  signed int v11; // r8d
  int v12; // ecx
  _BYTE v14[4]; // [rsp+40h] [rbp-98h] BYREF
  int TWIPSMetricById; // [rsp+44h] [rbp-94h]
  int v16; // [rsp+48h] [rbp-90h]
  int v17; // [rsp+4Ch] [rbp-8Ch]

  memset_0(v14, 0, 0x6CuLL);
  v4 = (struct HLFONT__ **)(GetSessionDpiMetrics() + 64);
  v5 = UserSetFont(
         a1,
         (unsigned __int64)(a2 + 4) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64),
         154LL,
         v4);
  if ( v5 )
  {
    Get96DpiMetrics();
    v5 = UserSetAltScaleFont((int)*v4);
    if ( !v5 )
    {
      GreMarkDeletableFont(*v4);
      GreDeleteObject(*v4);
      *v4 = 0LL;
      InvalidateKMDpiMetricsCacheDPIMETRICS();
      return 0LL;
    }
  }
  InvalidateKMDpiMetricsCacheDPIMETRICS();
  if ( !v5 )
    return 0LL;
  if ( !a2 )
  {
    FastGetProfileIntFromID(a1, 23LL, 66LL);
    v17 = 0;
    LocalizedInt = GetLocalizedInt(0x71u, v6);
    TWIPSMetricById = GetTWIPSMetricById(a1, 0x40u, LocalizedInt);
    v9 = GetLocalizedInt(0x72u, v8);
    v16 = GetTWIPSMetricById(a1, 0x41u, v9);
    a2 = (unsigned int *)v14;
  }
  v10 = a2[1];
  v11 = a2[2];
  v12 = *(_DWORD *)(gpsi + 2304LL);
  if ( (int)v10 <= v12 )
    v10 = (unsigned int)v12;
  a2[1] = v10;
  if ( v11 <= *(_DWORD *)(gpsi + 2308LL) )
    v11 = *(_DWORD *)(gpsi + 2308LL);
  a2[2] = v11;
  SetDpiDepSysMet(18LL, v10);
  SetDpiDepSysMet(19LL, a2[2]);
  *(_DWORD *)(gpsi + 2476LL) = EngMulDiv(*(_DWORD *)(gpsi + 2356LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2480LL) = EngMulDiv(*(_DWORD *)(gpsi + 2360LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  if ( a2[3] )
    gdwPUDFlags |= 0x200000u;
  else
    gdwPUDFlags &= ~0x200000u;
  return 1LL;
}
