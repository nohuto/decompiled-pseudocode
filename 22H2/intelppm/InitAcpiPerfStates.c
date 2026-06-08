/*
 * XREFs of InitAcpiPerfStates @ 0x1C00225FC
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0022D64 (ProcLibDeviceStart.c)
 * Callees:
 *     Display_PSS @ 0x1C0002238 (Display_PSS.c)
 *     Display_PCT_PTC @ 0x1C0002404 (Display_PCT_PTC.c)
 *     WPP_RECORDER_SF_D @ 0x1C0003658 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0003718 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00047F0 (_guard_dispatch_icall_nop.c)
 *     ValidateAcpi2PStates @ 0x1C00238FC (ValidateAcpi2PStates.c)
 *     AcpiEval_PSS @ 0x1C0024514 (AcpiEval_PSS.c)
 *     AcpiEval_PCT_PTC @ 0x1C0024A28 (AcpiEval_PCT_PTC.c)
 *     ValidateXPssPStates @ 0x1C0030968 (ValidateXPssPStates.c)
 *     AcpiEval_XPSS @ 0x1C00330CC (AcpiEval_XPSS.c)
 */

__int64 __fastcall InitAcpiPerfStates(__int64 a1)
{
  __int64 v1; // rdx
  int v3; // esi
  int v4; // edi
  int v5; // ebp
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned int *v8; // rdi
  char v9; // dl
  int v10; // r8d
  int v12; // eax
  __int64 v13; // [rsp+28h] [rbp-30h]
  unsigned int v14; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 208);
  v14 = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(WdfDriverGlobals, v1, 0LL);
  v3 = 0;
  v4 = AcpiEval_PCT_PTC(a1, 1413697631LL, a1 + 408);
  if ( v4 < 0 )
  {
    if ( v4 == -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          2u,
          0xAu,
          (__int64)&WPP_bbe0b3150a27308fbe0acf4b28c7c946_Traceguids);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0xBu,
        (__int64)&WPP_bbe0b3150a27308fbe0acf4b28c7c946_Traceguids,
        v4);
    }
    v3 = v4;
  }
  v5 = v3;
  if ( (*(_DWORD *)(a1 + 272) & 0x40000000) != 0 )
  {
    v12 = AcpiEval_XPSS(a1, a1 + 440);
    v4 = v12;
    if ( v12 < 0 )
    {
      if ( v12 == -1073741772 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            2u,
            0xCu,
            (__int64)&WPP_bbe0b3150a27308fbe0acf4b28c7c946_Traceguids);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v13) = v12;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0xDu,
          (__int64)&WPP_bbe0b3150a27308fbe0acf4b28c7c946_Traceguids,
          v13);
      }
      *(_QWORD *)(a1 + 272) &= ~0x40000000uLL;
    }
  }
  if ( (*(_DWORD *)(a1 + 272) & 0x30000000) != 0 )
  {
    v4 = AcpiEval_PSS(a1, a1 + 432);
    if ( v4 < 0 )
    {
      if ( v4 == -1073741772 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            4u,
            2u,
            0xEu,
            (__int64)&WPP_bbe0b3150a27308fbe0acf4b28c7c946_Traceguids);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v13) = v4;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0xFu,
          (__int64)&WPP_bbe0b3150a27308fbe0acf4b28c7c946_Traceguids,
          v13);
      }
      *(_QWORD *)(a1 + 272) &= 0xFFFFFFFFCFFFFFFFuLL;
      if ( (*(_QWORD *)(a1 + 272) & 0x40000000LL) != 0 )
        v4 = 0;
    }
  }
  if ( v3 >= 0 )
  {
    v3 = v4;
    if ( v4 >= 0 )
      v3 = v5;
    if ( v3 >= 0 )
    {
      if ( (*(_DWORD *)(a1 + 272) & 0x40000000) != 0 )
      {
        v4 = ValidateXPssPStates(a1 + 408, *(_QWORD *)(a1 + 440), &v14);
        if ( v4 < 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(a1 + 1096), v14);
          *(_QWORD *)(a1 + 272) &= ~0x40000000uLL;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v13) = v4;
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              3u,
              0x10u,
              (__int64)&WPP_bbe0b3150a27308fbe0acf4b28c7c946_Traceguids,
              v13);
          }
        }
      }
      if ( (*(_DWORD *)(a1 + 272) & 0x30000000) != 0 )
      {
        v6 = *(_QWORD *)(a1 + 432);
        v14 = 0;
        v4 = ValidateAcpi2PStates(a1 + 408, v6, &v14);
        if ( v4 < 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(a1 + 1096), v14);
          *(_QWORD *)(a1 + 272) &= 0xFFFFFFFFCFFFFFFFuLL;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v13) = v4;
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              3u,
              0x11u,
              (__int64)&WPP_bbe0b3150a27308fbe0acf4b28c7c946_Traceguids,
              v13);
          }
        }
      }
      v7 = *(_QWORD *)(a1 + 272);
      if ( (v7 & 0x40000000) != 0 )
      {
        v8 = *(unsigned int **)(a1 + 440);
      }
      else
      {
        if ( (v7 & 0x30000000) == 0 )
        {
          v3 = v4;
          goto LABEL_16;
        }
        v8 = *(unsigned int **)(a1 + 432);
      }
      Display_PCT_PTC(a1 + 408, (__int64)"_PCT");
      Display_PSS(v8, v9, v10);
    }
  }
LABEL_16:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return (unsigned int)v3;
}
