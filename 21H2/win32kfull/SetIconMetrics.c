/*
 * XREFs of SetIconMetrics @ 0x1C00C6CF4
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C00B8188 (xxxUpdatePerUserSystemParameters.c)
 *     xxxInitWindowStation @ 0x1C00D42E4 (xxxInitWindowStation.c)
 *     UserOnGreTextReady @ 0x1C00EE588 (UserOnGreTextReady.c)
 *     ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x1C01D2534 (-SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z.c)
 * Callees:
 *     UserSetFont @ 0x1C00C5854 (UserSetFont.c)
 *     GreMarkDeletableFont @ 0x1C00C5A20 (GreMarkDeletableFont.c)
 *     UserSetAltScaleFont @ 0x1C00C5A80 (UserSetAltScaleFont.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C00C6CC4 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     ?GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z @ 0x1C00C72CC (-GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z.c)
 *     ?GetLocalizedInt@@YAHIH@Z @ 0x1C00C7340 (-GetLocalizedInt@@YAHIH@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SetIconMetrics(struct _UNICODE_STRING *a1, unsigned int *a2)
{
  struct HLFONT__ **v4; // rbx
  int v5; // esi
  __int64 v6; // rax
  int v7; // edx
  int LocalizedInt; // eax
  int v9; // edx
  int v10; // eax
  __int64 v11; // rdx
  signed int v12; // r8d
  int v13; // ecx
  _DWORD v15[28]; // [rsp+40h] [rbp-98h] BYREF

  memset(v15, 0, 0x6CuLL);
  v4 = (struct HLFONT__ **)(GetSessionDpiMetrics() + 64);
  v5 = UserSetFont(
         a1,
         (unsigned __int64)(a2 + 4) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64),
         154LL,
         v4);
  if ( v5 )
  {
    v6 = Get96DpiMetrics();
    v5 = UserSetAltScaleFont((HBRUSH)*v4, (__int64 *)(v6 + 64));
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
    v15[3] = 0;
    LocalizedInt = GetLocalizedInt(0x71u, v7);
    v15[1] = GetTWIPSMetricById(a1, 0x40u, LocalizedInt);
    v10 = GetLocalizedInt(0x72u, v9);
    v15[2] = GetTWIPSMetricById(a1, 0x41u, v10);
    a2 = v15;
  }
  v11 = a2[1];
  v12 = a2[2];
  v13 = *(_DWORD *)(gpsi + 2304LL);
  if ( (int)v11 <= v13 )
    v11 = (unsigned int)v13;
  a2[1] = v11;
  if ( v12 <= *(_DWORD *)(gpsi + 2308LL) )
    v12 = *(_DWORD *)(gpsi + 2308LL);
  a2[2] = v12;
  SetDpiDepSysMet(18LL, v11);
  SetDpiDepSysMet(19LL, a2[2]);
  *(_DWORD *)(gpsi + 2476LL) = EngMulDiv(*(_DWORD *)(gpsi + 2356LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2480LL) = EngMulDiv(*(_DWORD *)(gpsi + 2360LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  if ( a2[3] )
    gdwPUDFlags |= 0x200000u;
  else
    gdwPUDFlags &= ~0x200000u;
  return 1LL;
}
