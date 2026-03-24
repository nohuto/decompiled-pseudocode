/*
 * XREFs of ?_GetMonitorEldInformation@DXGMONITOR@@QEAAJPEAU_MONITOR_PACKED_ELD_INFORMATION@@@Z @ 0x1C01828F0
 * Callers:
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C0181CDC (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?EDIDV1_FillProductIdManufacturerName@@YAJPEBEPEAG1@Z @ 0x1C000D804 (-EDIDV1_FillProductIdManufacturerName@@YAJPEBEPEAG1@Z.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1C0022534 (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     ?_GetMonitorCCDMonitorID@DXGMONITOR@@QEAAJEKPEAG@Z @ 0x1C0133C9C (-_GetMonitorCCDMonitorID@DXGMONITOR@@QEAAJEKPEAG@Z.c)
 *     MonitorLogBadEDID @ 0x1C02F4608 (MonitorLogBadEDID.c)
 */

__int64 __fastcall DXGMONITOR::_GetMonitorEldInformation(
        __int64 ***this,
        struct _MONITOR_PACKED_ELD_INFORMATION *a2,
        __int64 a3)
{
  unsigned int v5; // r13d
  unsigned __int16 *v6; // r14
  unsigned __int8 *v7; // r12
  __int64 **v8; // rax
  __int64 *v9; // rax
  unsigned __int8 *v10; // r15
  int IsEDIDBaseBlock; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rbx
  SIZE_T v21; // rax
  unsigned __int16 *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int MonitorCCDMonitorID; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rbx
  unsigned int Length; // esi
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  ULONG HashValue; // [rsp+70h] [rbp+40h] BYREF
  unsigned __int16 v49; // [rsp+78h] [rbp+48h] BYREF

  v5 = 130;
  v6 = 0LL;
  if ( !a2 )
  {
    v38 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v38);
  }
  if ( *((_DWORD *)this + 108) != 1 )
  {
    v39 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v39);
  }
  v7 = 0LL;
  if ( !*((_DWORD *)this + 32) )
    goto LABEL_34;
  v8 = this[17];
  if ( !v8 )
    goto LABEL_34;
  v9 = *v8;
  if ( !v9 )
    goto LABEL_34;
  do
  {
    if ( *((_DWORD *)v9 + 2) == 2 )
      break;
    v9 = (__int64 *)*v9;
  }
  while ( v9 );
  if ( v9 )
  {
    v10 = (unsigned __int8 *)(v9 + 3);
    IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock((unsigned __int8 *)v9 + 24);
    v15 = IsEDIDBaseBlock;
    if ( IsEDIDBaseBlock < 0 )
    {
      v40 = WdLogNewEntry5_WdWarning(v13, v12, v14);
      *(_QWORD *)(v40 + 24) = v10;
      *(_QWORD *)(v40 + 32) = v15;
      WdLogEvent5_WdWarning(v40);
      MonitorLogBadEDID(v10, (unsigned int)v15);
    }
    else
    {
      v7 = v10;
      LODWORD(v15) = 0;
    }
    if ( (int)v15 >= 0 )
    {
      LOWORD(HashValue) = 0;
      v49 = 0;
      v16 = EDIDV1_FillProductIdManufacturerName(v7, (unsigned __int16 *)&HashValue, &v49);
      v20 = v16;
      if ( v16 >= 0 )
      {
        *((_WORD *)a2 + 4) = HashValue;
        *((_WORD *)a2 + 5) = v49;
        goto LABEL_15;
      }
      v41 = WdLogNewEntry5_WdWarning(v18, v17, v19);
      *(_QWORD *)(v41 + 24) = v7;
      *(_QWORD *)(v41 + 32) = v20;
      WdLogEvent5_WdWarning(v41);
      MonitorLogBadEDID(v7, (unsigned int)v20);
    }
  }
  else
  {
LABEL_34:
    v42 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v42 + 24) = this;
    WdLogEvent5_WdWarning(v42);
  }
  *((_DWORD *)a2 + 2) = 0;
  while ( 1 )
  {
LABEL_15:
    if ( v6 )
      operator delete[](v6);
    v5 *= 2;
    v21 = 2LL * v5;
    if ( !is_mul_ok(v5, 2uLL) )
      v21 = -1LL;
    v22 = (unsigned __int16 *)operator new[](v21, 0x4D677844u, PagedPool);
    v6 = v22;
    if ( !v22 )
      break;
    MonitorCCDMonitorID = DXGMONITOR::_GetMonitorCCDMonitorID((DXGMONITOR *)this, 0LL, v5, v22);
    v30 = MonitorCCDMonitorID;
    if ( MonitorCCDMonitorID != -2147483643 && MonitorCCDMonitorID != -1073741789 )
    {
      if ( MonitorCCDMonitorID < 0 )
      {
        v43 = WdLogNewEntry5_WdError(v29, v28);
        *(_QWORD *)(v43 + 24) = this;
        *(_QWORD *)(v43 + 32) = v30;
        WdLogEvent5_WdError(v43);
      }
      else
      {
        HashValue = 0;
        DestinationString = 0LL;
        RtlInitUnicodeString(&DestinationString, v6);
        Length = DestinationString.Length;
        DestinationString.Length = (DestinationString.Length >> 1) & 0xFFFE;
        LODWORD(v30) = RtlHashUnicodeString(&DestinationString, 1u, 0, &HashValue);
        if ( (int)v30 < 0 )
        {
          v44 = WdLogNewEntry5_WdAssertion(v33, v32);
          WdLogEvent5_WdAssertion(v44);
        }
        *(_QWORD *)a2 = HashValue;
        if ( Length > 2 )
        {
          DestinationString.MaximumLength -= DestinationString.Length;
          v34 = (unsigned __int64)DestinationString.Length >> 1;
          DestinationString.Length = Length - DestinationString.Length;
          DestinationString.Buffer = &v6[v34];
          LODWORD(v30) = RtlHashUnicodeString(&DestinationString, 1u, 0, &HashValue);
          if ( (int)v30 < 0 )
          {
            v45 = WdLogNewEntry5_WdAssertion(v36, v35);
            WdLogEvent5_WdAssertion(v45);
          }
          *(_QWORD *)a2 |= (unsigned __int64)HashValue << 32;
        }
      }
LABEL_29:
      operator delete[](v6);
      return (unsigned int)v30;
    }
    LODWORD(v30) = -1073741789;
    if ( v5 >= 0x410 )
      goto LABEL_29;
  }
  v46 = WdLogNewEntry5_WdLowResource(v24, v23, v25, v26);
  WdLogEvent5_WdLowResource(v46);
  return 3221225495LL;
}
