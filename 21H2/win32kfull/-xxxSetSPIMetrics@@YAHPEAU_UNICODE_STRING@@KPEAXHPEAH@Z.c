/*
 * XREFs of ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x1C0132090
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00DD338 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     DwmAsyncNotifyAnimationChange @ 0x1C002C098 (DwmAsyncNotifyAnimationChange.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     ValidateExternalLogFont @ 0x1C00E3320 (ValidateExternalLogFont.c)
 *     ?xxxSPISetMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@H@Z @ 0x1C01320F4 (-xxxSPISetMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@H@Z.c)
 *     ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x1C01D6A78 (-SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01D6B7C (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1C01D71E8 (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 *     ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1C01D72B4 (-xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSetSPIMetrics(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        struct tagMINIMIZEDMETRICS *a3,
        int a4,
        int *a5)
{
  int v8; // eax
  int v9; // ecx
  int v11; // ebx
  void *v12; // rax

  *a5 = 0;
  switch ( (_DWORD)a2 )
  {
    case ',':
      v8 = xxxSPISetMinMetrics(a1, a3, a4);
LABEL_3:
      v9 = v8;
      goto LABEL_4;
    case '"':
      if ( (unsigned int)ValidateExternalLogFont((__int64)a3) )
      {
        v8 = SPISetIconTitleFont(a1, (struct tagLOGFONTW *)a3, a4);
        goto LABEL_3;
      }
      break;
    case '*':
      if ( (unsigned int)ValidateExternalLogFont((__int64)a3 + 24)
        && (unsigned int)ValidateExternalLogFont((__int64)a3 + 124)
        && (unsigned int)ValidateExternalLogFont((__int64)a3 + 224)
        && (unsigned int)ValidateExternalLogFont((__int64)a3 + 316)
        && (unsigned int)ValidateExternalLogFont((__int64)a3 + 408) )
      {
        v8 = xxxSPISetNCMetrics(a1, a3, a4);
        goto LABEL_3;
      }
      break;
    case '.':
      if ( (unsigned int)ValidateExternalLogFont((__int64)a3 + 16) )
      {
        v8 = SPISetIconMetrics(a1, a3, a4);
        goto LABEL_3;
      }
      break;
    case 'I':
      v11 = *((_DWORD *)a3 + 1);
      v12 = (void *)ReferenceDwmApiPort(a1, a2);
      DwmAsyncNotifyAnimationChange(v12, v11, 0LL);
      if ( a4 )
      {
        v9 = SetWindowMetricInt(a1, 0x95u, v11);
        if ( !v9 )
          return 1LL;
      }
      else
      {
        v9 = 0;
      }
      if ( v11 )
        gdwPUDFlags |= 0x10000u;
      else
        gdwPUDFlags &= ~0x10000u;
LABEL_4:
      *a5 = v9;
      return 1LL;
  }
  UserSetLastError(87LL, a2, (__int64)a3);
  return 0LL;
}
