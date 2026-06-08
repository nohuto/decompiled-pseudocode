/*
 * XREFs of InitAcpiPerfStates @ 0x1C0031BE8
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0028EB0 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0003AB4 (WPP_RECORDER_SF_D.c)
 *     Display_PCT_PTC @ 0x1C0006774 (Display_PCT_PTC.c)
 *     Display_PSS @ 0x1C00068E0 (Display_PSS.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EAD0 (_guard_dispatch_icall_nop.c)
 *     AcpiEval_PCT_PTC @ 0x1C0025AE8 (AcpiEval_PCT_PTC.c)
 *     AcpiEval_PSS @ 0x1C00262C4 (AcpiEval_PSS.c)
 *     AcpiEval_XPSS @ 0x1C0026AFC (AcpiEval_XPSS.c)
 *     ValidateAcpi2PStates @ 0x1C002A86C (ValidateAcpi2PStates.c)
 *     ValidateXPssPStates @ 0x1C002CA04 (ValidateXPssPStates.c)
 */

__int64 __fastcall InitAcpiPerfStates(__int64 a1)
{
  __int64 v1; // rdx
  int v3; // esi
  int v4; // edi
  int v5; // r8d
  int v6; // r9d
  int v7; // ebp
  int v8; // eax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int *v12; // rdi
  int v13; // edx
  int v14; // r8d
  __int64 v16; // [rsp+28h] [rbp-30h]
  unsigned int v17; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 208);
  v17 = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(WdfDriverGlobals, v1, 0LL);
  v3 = 0;
  v4 = AcpiEval_PCT_PTC(a1, 1413697631, a1 + 408);
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
  v7 = v3;
  if ( (*(_DWORD *)(a1 + 272) & 0x40000000) != 0 )
  {
    v8 = AcpiEval_XPSS(a1, (_QWORD *)(a1 + 440));
    v4 = v8;
    if ( v8 < 0 )
    {
      if ( v8 == -1073741772 )
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
        LODWORD(v16) = v8;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0xDu,
          (__int64)&WPP_bbe0b3150a27308fbe0acf4b28c7c946_Traceguids,
          v16);
      }
      *(_QWORD *)(a1 + 272) &= ~0x40000000uLL;
    }
  }
  if ( (*(_DWORD *)(a1 + 272) & 0x30000000) != 0 )
  {
    v9 = AcpiEval_PSS(a1, (_QWORD *)(a1 + 432));
    v4 = v9;
    if ( v9 < 0 )
    {
      if ( v9 == -1073741772 )
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
        LODWORD(v16) = v9;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0xFu,
          (__int64)&WPP_bbe0b3150a27308fbe0acf4b28c7c946_Traceguids,
          v16);
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
      v3 = v7;
    if ( v3 >= 0 )
    {
      if ( (*(_DWORD *)(a1 + 272) & 0x40000000) != 0 )
      {
        v4 = ValidateXPssPStates(a1 + 408, *(unsigned int **)(a1 + 440), &v17);
        if ( v4 < 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(a1 + 1096), v17);
          *(_QWORD *)(a1 + 272) &= ~0x40000000uLL;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v16) = v4;
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              3u,
              0x10u,
              (__int64)&WPP_bbe0b3150a27308fbe0acf4b28c7c946_Traceguids,
              v16);
          }
        }
      }
      if ( (*(_DWORD *)(a1 + 272) & 0x30000000) != 0 )
      {
        v10 = *(_QWORD *)(a1 + 432);
        v17 = 0;
        v4 = ValidateAcpi2PStates(a1 + 408, v10, &v17);
        if ( v4 < 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(a1 + 1096), v17);
          *(_QWORD *)(a1 + 272) &= 0xFFFFFFFFCFFFFFFFuLL;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v16) = v4;
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              3u,
              0x11u,
              (__int64)&WPP_bbe0b3150a27308fbe0acf4b28c7c946_Traceguids,
              v16);
          }
        }
      }
      v11 = *(_QWORD *)(a1 + 272);
      if ( (v11 & 0x40000000) != 0 )
      {
        v12 = *(unsigned int **)(a1 + 440);
      }
      else
      {
        if ( (v11 & 0x30000000) == 0 )
        {
          v3 = v4;
          goto LABEL_43;
        }
        v12 = *(unsigned int **)(a1 + 432);
      }
      Display_PCT_PTC((unsigned __int8 *)(a1 + 408), "_PCT", v5, v6);
      Display_PSS(v12, v13, v14);
    }
  }
LABEL_43:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return (unsigned int)v3;
}
