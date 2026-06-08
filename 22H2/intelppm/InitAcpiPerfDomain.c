/*
 * XREFs of InitAcpiPerfDomain @ 0x1C0022358
 * Callers:
 *     InitAcpiProcessorDomains @ 0x1C00221C4 (InitAcpiProcessorDomains.c)
 * Callees:
 *     Display_xSD @ 0x1C0002088 (Display_xSD.c)
 *     WPP_RECORDER_SF_D @ 0x1C0003658 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0003718 (WPP_RECORDER_SF_.c)
 *     ValidateAcpi_PSD_TSD @ 0x1C00223D4 (ValidateAcpi_PSD_TSD.c)
 *     AcpiEval_PSD_TSD @ 0x1C002398C (AcpiEval_PSD_TSD.c)
 */

__int64 __fastcall InitAcpiPerfDomain(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  unsigned int *v4; // rdi
  unsigned int *v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v3 = AcpiEval_PSD_TSD(a1, 1146310751LL, &v6);
  if ( v3 < 0 )
  {
    v4 = 0LL;
    if ( v3 == -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          2u,
          0xDu,
          (__int64)&WPP_6ae0cf8577b33ee5b85cfe3be672fd7c_Traceguids);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0xEu,
        (__int64)&WPP_6ae0cf8577b33ee5b85cfe3be672fd7c_Traceguids,
        v3);
    }
  }
  else
  {
    v4 = v6;
    LOBYTE(v2) = 1;
    v3 = ValidateAcpi_PSD_TSD(v6, v2);
    if ( v3 < 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1096), 0x200u);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0xFu,
          (__int64)&WPP_6ae0cf8577b33ee5b85cfe3be672fd7c_Traceguids,
          v3);
      v4 = v6;
    }
    else
    {
      v3 = 0;
      Display_xSD(v4, (__int64)"_PSD");
    }
  }
  *(_QWORD *)(a1 + 456) = v4;
  return (unsigned int)v3;
}
