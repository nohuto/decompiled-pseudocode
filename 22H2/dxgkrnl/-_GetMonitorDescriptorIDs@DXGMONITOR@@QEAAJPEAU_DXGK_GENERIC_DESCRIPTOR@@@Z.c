/*
 * XREFs of ?_GetMonitorDescriptorIDs@DXGMONITOR@@QEAAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z @ 0x1C0182FF4
 * Callers:
 *     MonitorGetMonitorDescriptorIDs @ 0x1C01827EC (MonitorGetMonitorDescriptorIDs.c)
 * Callees:
 *     ?EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z @ 0x1C001E5F0 (-EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z @ 0x1C001E6A0 (-EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1C0022534 (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?DisplayID_GetManufacturerName@@YAJPEBUDisplayIDObj@@PEAG@Z @ 0x1C005FD50 (-DisplayID_GetManufacturerName@@YAJPEBUDisplayIDObj@@PEAG@Z.c)
 *     ?DisplayID_GetProductCode@@YAJPEBUDisplayIDObj@@PEAG@Z @ 0x1C005FE20 (-DisplayID_GetProductCode@@YAJPEBUDisplayIDObj@@PEAG@Z.c)
 *     MonitorLogBadEDID @ 0x1C02F4608 (MonitorLogBadEDID.c)
 */

__int64 __fastcall DXGMONITOR::_GetMonitorDescriptorIDs(
        __int64 ***this,
        struct _DXGK_GENERIC_DESCRIPTOR *a2,
        __int64 a3)
{
  unsigned __int8 *v5; // rdi
  __int64 **v6; // rax
  __int64 *v7; // rax
  unsigned __int8 *v8; // r14
  int IsEDIDBaseBlock; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 result; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // eax
  WCHAR v20; // ax
  __int128 v21; // xmm1
  __int64 v22; // xmm0_8
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  int ManufacturerName; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdi
  int ProductCode; // eax
  __int64 v32; // rax
  unsigned __int16 v33[8]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v34; // [rsp+30h] [rbp-58h]
  __int64 v35; // [rsp+40h] [rbp-48h]
  WCHAR v36; // [rsp+48h] [rbp-40h]

  if ( !a2 )
  {
    v23 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v23);
  }
  a2->HardwareId[0] = 0;
  v5 = 0LL;
  a2->InstanceId[0] = 0;
  a2->CompatibleId[0] = 0;
  a2->DeviceText[0] = 0;
  if ( !*((_DWORD *)this + 32) )
    goto LABEL_22;
  v6 = this[17];
  if ( !v6 )
    goto LABEL_22;
  v7 = *v6;
  if ( !v7 )
    goto LABEL_22;
  do
  {
    if ( *((_DWORD *)v7 + 2) == 2 )
      break;
    v7 = (__int64 *)*v7;
  }
  while ( v7 );
  if ( !v7 )
  {
LABEL_22:
    v26 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v26 + 24) = this;
    WdLogEvent5_WdWarning(v26);
    LODWORD(v13) = -1071841279;
    goto LABEL_23;
  }
  v8 = (unsigned __int8 *)(v7 + 3);
  IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock((unsigned __int8 *)v7 + 24);
  v13 = IsEDIDBaseBlock;
  if ( IsEDIDBaseBlock < 0 )
  {
    v24 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v24 + 24) = v8;
    *(_QWORD *)(v24 + 32) = v13;
    WdLogEvent5_WdWarning(v24);
    MonitorLogBadEDID(v8, (unsigned int)v13);
  }
  else
  {
    v5 = v8;
    LODWORD(v13) = 0;
  }
  if ( (int)v13 < 0 )
  {
LABEL_23:
    if ( this[20] )
    {
      ManufacturerName = DisplayID_GetManufacturerName((const struct DisplayIDObj *)(this + 21), v33);
      v30 = ManufacturerName;
      if ( ManufacturerName < 0
        || (ProductCode = DisplayID_GetProductCode((const struct DisplayIDObj *)(this + 21), &v33[6]),
            v30 = ProductCode,
            ProductCode < 0) )
      {
        v32 = WdLogNewEntry5_WdError(v29, v28);
        *(_QWORD *)(v32 + 24) = this[20];
        *(_QWORD *)(v32 + 32) = v30;
        WdLogEvent5_WdError(v32);
        return (unsigned int)v30;
      }
      WORD2(v34) = 0;
      goto LABEL_15;
    }
    return (unsigned int)v13;
  }
  result = EDIDV1_IsEDIDBaseBlock(v5);
  if ( (int)result < 0 )
    return result;
  v15 = EDIDV1_ObtainMonitorManufacturerName(v5, v33);
  v13 = v15;
  if ( v15 < 0 || (v19 = EDIDV1_ObtainMonitorProductCodeID(v5, &v33[3]), v13 = v19, v19 < 0) )
  {
    v25 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    *(_QWORD *)(v25 + 24) = v5;
    *(_QWORD *)(v25 + 32) = v13;
    WdLogEvent5_WdWarning(v25);
    MonitorLogBadEDID(v5, (unsigned int)v13);
    return (unsigned int)v13;
  }
  v33[7] = 0;
LABEL_15:
  v20 = v36;
  v21 = v34;
  *(_OWORD *)a2->HardwareId = *(_OWORD *)v33;
  v22 = v35;
  *(_OWORD *)&a2->HardwareId[8] = v21;
  *(_QWORD *)&a2->HardwareId[16] = v22;
  a2->HardwareId[20] = v20;
  return 0LL;
}
