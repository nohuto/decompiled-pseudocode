/*
 * XREFs of ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C0182B14
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0183AE8 (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C0009A28 (-RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C000A258 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z @ 0x1C001E4FC (-EDIDV1_ObtainMonitorSerialNumber@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z @ 0x1C001E5F0 (-EDIDV1_ObtainMonitorProductCodeID@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z @ 0x1C001E6A0 (-EDIDV1_ObtainMonitorManufacturerName@@YAJPEBEPEAG@Z.c)
 *     ?EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z @ 0x1C001E780 (-EDIDV1_ObtainMonitorManufactureDate@@YAJPEBEPEAEPEAG@Z.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1C0022534 (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C00248E0 (__report_rangecheckfailure.c)
 *     memcmp @ 0x1C0028BC0 (memcmp.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?DisplayID_GetManufactureDate@@YAJPEBUDisplayIDObj@@PEAEPEAG@Z @ 0x1C005FCDC (-DisplayID_GetManufactureDate@@YAJPEBUDisplayIDObj@@PEAEPEAG@Z.c)
 *     ?DisplayID_GetManufacturerName@@YAJPEBUDisplayIDObj@@PEAG@Z @ 0x1C005FD50 (-DisplayID_GetManufacturerName@@YAJPEBUDisplayIDObj@@PEAG@Z.c)
 *     ?DisplayID_GetProductCode@@YAJPEBUDisplayIDObj@@PEAG@Z @ 0x1C005FE20 (-DisplayID_GetProductCode@@YAJPEBUDisplayIDObj@@PEAG@Z.c)
 *     ?DisplayID_GetSerialNumber@@YAJPEBUDisplayIDObj@@PEAG@Z @ 0x1C005FE98 (-DisplayID_GetSerialNumber@@YAJPEBUDisplayIDObj@@PEAG@Z.c)
 *     MonitorUnifyCCDMonitorString @ 0x1C018B554 (MonitorUnifyCCDMonitorString.c)
 *     ?GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z @ 0x1C020DEAC (-GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z.c)
 *     MonitorLogBadEDID @ 0x1C02F4608 (MonitorLogBadEDID.c)
 */

__int64 __fastcall DXGMONITOR::_PrepareMonitorCCDName(DXGMONITOR *this, __int64 a2, __int64 a3)
{
  unsigned __int8 *v4; // rdi
  __int64 **v5; // rax
  __int64 *v6; // rax
  unsigned __int8 *v7; // r14
  int IsEDIDBaseBlock; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rsi
  char v13; // al
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rsi
  int v19; // eax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // rsi
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r14
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rsi
  unsigned int v31; // ecx
  unsigned __int64 v32; // rax
  __int64 v33; // rcx
  unsigned __int64 v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  struct _LIST_ENTRY *Flink; // r14
  __int64 v38; // rdi
  PVOID v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 *v46; // rax
  _OWORD *v47; // rdi
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  char v52; // al
  char v53; // cl
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rcx
  const UNICODE_STRING *v58; // rsi
  DXGADAPTER *v59; // rcx
  ULONG v60; // ecx
  __int64 v61; // rdx
  __int64 v62; // rcx
  unsigned __int16 v63; // di
  wchar_t *v64; // rax
  wchar_t *v65; // r14
  struct _UNICODE_STRING *v66; // rbx
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  int ManufacturerName; // eax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rsi
  int ProductCode; // eax
  int SerialNumber; // eax
  int ManufactureDate; // eax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rsi
  __int64 v85; // rax
  __int64 v86; // rcx
  unsigned __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  int v91; // eax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  unsigned int v97; // edx
  __int64 v98; // rax
  unsigned __int8 v99[4]; // [rsp+28h] [rbp-79h] BYREF
  unsigned __int16 v100[2]; // [rsp+2Ch] [rbp-75h] BYREF
  struct _UNICODE_STRING String; // [rsp+30h] [rbp-71h] BYREF
  unsigned __int64 v102; // [rsp+40h] [rbp-61h] BYREF
  _OWORD v103[2]; // [rsp+48h] [rbp-59h] BYREF
  WCHAR SourceString[3]; // [rsp+68h] [rbp-39h] BYREF
  unsigned __int16 v105[3]; // [rsp+6Eh] [rbp-33h] BYREF
  unsigned __int16 v106; // [rsp+74h] [rbp-2Dh] BYREF
  unsigned __int16 v107[3]; // [rsp+76h] [rbp-2Bh] BYREF
  unsigned __int16 v108[10]; // [rsp+7Ch] [rbp-25h] BYREF
  wchar_t v109; // [rsp+90h] [rbp-11h]
  __int16 v110; // [rsp+92h] [rbp-Fh]
  wchar_t v111; // [rsp+94h] [rbp-Dh]
  wchar_t v112; // [rsp+96h] [rbp-Bh]
  wchar_t v113; // [rsp+98h] [rbp-9h]
  wchar_t v114; // [rsp+9Ah] [rbp-7h]
  __int16 v115; // [rsp+9Ch] [rbp-5h]
  wchar_t v116; // [rsp+9Eh] [rbp-3h]
  wchar_t v117; // [rsp+A0h] [rbp-1h]
  __int16 v118; // [rsp+A2h] [rbp+1h]
  __int16 v119; // [rsp+ACh] [rbp+Bh]
  __int16 v120; // [rsp+B8h] [rbp+17h] BYREF

  if ( *((_QWORD *)this + 66) )
  {
    v68 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v68);
  }
  if ( *((_DWORD *)this + 108) != 1 )
  {
    v47 = (_OWORD *)((char *)this + 520);
    *((_QWORD *)this + 71) = 0LL;
    RtlInitUnicodeString((PUNICODE_STRING)((char *)this + 520), L"SIMULATED");
    v52 = 0;
    *((_BYTE *)this + 516) = 0;
    goto LABEL_38;
  }
  v4 = 0LL;
  if ( !*((_DWORD *)this + 32) )
    goto LABEL_54;
  v5 = (__int64 **)*((_QWORD *)this + 17);
  if ( !v5 )
    goto LABEL_54;
  v6 = *v5;
  if ( !v6 )
    goto LABEL_54;
  do
  {
    if ( *((_DWORD *)v6 + 2) == 2 )
      break;
    v6 = (__int64 *)*v6;
  }
  while ( v6 );
  if ( !v6 )
  {
LABEL_54:
    v70 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v70 + 24) = this;
    WdLogEvent5_WdWarning(v70);
    goto LABEL_55;
  }
  v7 = (unsigned __int8 *)(v6 + 3);
  IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock((unsigned __int8 *)v6 + 24);
  v12 = IsEDIDBaseBlock;
  if ( IsEDIDBaseBlock < 0 )
  {
    v69 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v69 + 24) = v7;
    *(_QWORD *)(v69 + 32) = v12;
    WdLogEvent5_WdWarning(v69);
    MonitorLogBadEDID(v7, (unsigned int)v12);
  }
  else
  {
    v4 = v7;
    LODWORD(v12) = 0;
  }
  if ( (int)v12 < 0 )
  {
LABEL_55:
    v13 = 0;
    if ( !*((_QWORD *)this + 20) )
      goto LABEL_56;
    goto LABEL_13;
  }
  v13 = 1;
LABEL_13:
  v119 = 0;
  if ( v13 )
  {
    v14 = EDIDV1_ObtainMonitorManufacturerName(v4, SourceString);
    v18 = v14;
    if ( v14 >= 0 )
    {
      v19 = EDIDV1_ObtainMonitorProductCodeID(v4, v105);
      v18 = v19;
      if ( v19 >= 0 )
      {
        v20 = EDIDV1_ObtainMonitorSerialNumber(v4, v107);
        v18 = v20;
        if ( v20 >= 0 )
        {
          v102 = 20LL;
          v109 = 0;
          if ( (int)RtlStringCchLengthW(SourceString, 0x23uLL, &v102) < 0 )
          {
            v72 = WdLogNewEntry5_WdAssertion(v22, v21);
            WdLogEvent5_WdAssertion(v72);
          }
          v23 = v102;
          if ( v102 > 0x17 )
          {
            v73 = WdLogNewEntry5_WdAssertion(v22, v21);
            WdLogEvent5_WdAssertion(v73);
          }
          v99[0] = 0;
          v100[0] = 0;
          v24 = EDIDV1_ObtainMonitorManufactureDate(v4, v99, v100);
          v28 = v24;
          if ( v24 < 0 )
          {
            v74 = WdLogNewEntry5_WdWarning(v26, v25, v27);
            *(_QWORD *)(v74 + 24) = v4;
            *(_QWORD *)(v74 + 32) = v28;
            WdLogEvent5_WdWarning(v74);
            MonitorLogBadEDID(v4, (unsigned int)v28);
          }
          v29 = v99[0];
          SourceString[v23] = 95;
          v30 = v23 + 1;
          SourceString[v30++] = a0123456789abcd_0[v29 >> 4];
          v31 = v100[0];
          SourceString[v30++] = a0123456789abcd_0[v29 & 0xF];
          SourceString[v30++] = 95;
          SourceString[v30++] = a0123456789abcd_0[(unsigned __int64)v31 >> 12];
          SourceString[v30++] = a0123456789abcd_0[(v31 >> 8) & 0xF];
          SourceString[v30++] = a0123456789abcd_0[(unsigned __int8)v31 >> 4];
          SourceString[v30++] = a0123456789abcd_0[v31 & 0xF];
          SourceString[v30++] = 95;
          v32 = v4[127];
          v33 = v32 & 0xF;
          SourceString[v30++] = a0123456789abcd_0[v32 >> 4];
          SourceString[v30] = a0123456789abcd_0[v33];
          v34 = v30 + 1;
          if ( 2 * v34 >= 0x46 )
            _report_rangecheckfailure();
          SourceString[v34] = 0;
          goto LABEL_25;
        }
      }
    }
    v71 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v71 + 24) = v4;
    *(_QWORD *)(v71 + 32) = v18;
    WdLogEvent5_WdWarning(v71);
    MonitorLogBadEDID(v4, (unsigned int)v18);
  }
  else
  {
    ManufacturerName = DisplayID_GetManufacturerName((DXGMONITOR *)((char *)this + 168), SourceString);
    v78 = ManufacturerName;
    if ( ManufacturerName >= 0 )
    {
      ProductCode = DisplayID_GetProductCode((DXGMONITOR *)((char *)this + 168), &v106);
      v78 = ProductCode;
      if ( ProductCode >= 0 )
      {
        SerialNumber = DisplayID_GetSerialNumber((DXGMONITOR *)((char *)this + 168), v108);
        v78 = SerialNumber;
        if ( SerialNumber >= 0 )
        {
          v99[0] = 0;
          v100[0] = 0;
          ManufactureDate = DisplayID_GetManufactureDate((DXGMONITOR *)((char *)this + 168), v99, v100);
          v84 = ManufactureDate;
          if ( ManufactureDate < 0 )
          {
            v85 = WdLogNewEntry5_WdError(v83, v82);
            *(_QWORD *)(v85 + 24) = *((_QWORD *)this + 20);
            *(_QWORD *)(v85 + 32) = v84;
            WdLogEvent5_WdError(v85);
          }
          v108[8] = 95;
          v110 = 95;
          v34 = 29LL;
          v108[9] = a0123456789abcd_0[(unsigned __int64)v99[0] >> 4];
          v109 = a0123456789abcd_0[v99[0] & 0xF];
          v111 = a0123456789abcd_0[(unsigned __int64)v100[0] >> 12];
          v112 = a0123456789abcd_0[((unsigned __int64)v100[0] >> 8) & 0xF];
          v113 = a0123456789abcd_0[((unsigned __int64)v100[0] >> 4) & 0xF];
          v86 = *((unsigned int *)this + 45);
          v114 = a0123456789abcd_0[v100[0] & 0xF];
          LOBYTE(v86) = *(_BYTE *)(v86 + *((_QWORD *)this + 21) - 1);
          v25 = (unsigned __int8)v86;
          v115 = 95;
          v118 = 0;
          v87 = (unsigned __int64)(unsigned __int8)v86 >> 4;
          v33 = v86 & 0xF;
          v116 = a0123456789abcd_0[v87];
          v117 = a0123456789abcd_0[(unsigned int)v33];
LABEL_25:
          if ( v34 >= 0x23 )
          {
            v89 = WdLogNewEntry5_WdAssertion(v33, v25);
            WdLogEvent5_WdAssertion(v89);
          }
          KeAcquireGuardedMutex(&DXGMONITOR::_UniqueTableLock);
          Flink = DXGMONITOR::_UniqueEntryList.Flink;
          v38 = 0LL;
          while ( Flink != &DXGMONITOR::_UniqueEntryList )
          {
            v38 = (__int64)Flink;
            if ( HIDWORD(Flink[1].Flink) == v34 && !memcmp(&Flink[1].Blink, SourceString, 2 * v34) )
            {
              Flink = 0LL;
              break;
            }
            Flink = Flink->Flink;
          }
          if ( Flink )
          {
            v39 = operator new[](2 * v34 + 32, 0x4D677844u, PagedPool);
            v38 = (__int64)v39;
            if ( !v39 )
            {
              v93 = WdLogNewEntry5_WdLowResource(v41, v40, v42, v43);
              WdLogEvent5_WdLowResource(v93);
              KeReleaseGuardedMutex(&DXGMONITOR::_UniqueTableLock);
              return 3221225495LL;
            }
            *((_DWORD *)v39 + 5) = v34;
            *((_DWORD *)v39 + 4) = 1;
            if ( (int)RtlStringCchCopyW((unsigned __int16 *)v39 + 12, v34 + 1, SourceString) < 0 )
            {
              v95 = WdLogNewEntry5_WdAssertion(v45, v44);
              WdLogEvent5_WdAssertion(v95);
            }
            *(_WORD *)(v38 + 2 * v34 + 24) = 0;
            v46 = (__int64 *)qword_1C00B3FB0;
            if ( *(struct _LIST_ENTRY **)qword_1C00B3FB0 != &DXGMONITOR::_UniqueEntryList )
              __fastfail(3u);
            *(_QWORD *)v38 = &DXGMONITOR::_UniqueEntryList;
            *(_QWORD *)(v38 + 8) = v46;
            *v46 = v38;
            qword_1C00B3FB0 = v38;
          }
          else
          {
            if ( !v38 )
            {
              v90 = WdLogNewEntry5_WdAssertion(v36, v35);
              WdLogEvent5_WdAssertion(v90);
            }
            v91 = *(_DWORD *)(v38 + 16);
            if ( !v91 )
            {
              v92 = WdLogNewEntry5_WdAssertion(v36, v35);
              WdLogEvent5_WdAssertion(v92);
              v91 = *(_DWORD *)(v38 + 16);
            }
            *(_DWORD *)(v38 + 16) = v91 + 1;
          }
          *((_QWORD *)this + 71) = v38;
          KeReleaseGuardedMutex(&DXGMONITOR::_UniqueTableLock);
          v47 = (_OWORD *)((char *)this + 520);
          if ( !RtlCreateUnicodeString((PUNICODE_STRING)((char *)this + 520), SourceString) )
          {
LABEL_75:
            v94 = WdLogNewEntry5_WdLowResource(v49, v48, v50, v51);
            WdLogEvent5_WdLowResource(v94);
            return 3221225495LL;
          }
          v52 = 1;
          goto LABEL_37;
        }
      }
    }
    v88 = WdLogNewEntry5_WdError(v77, v76);
    *(_QWORD *)(v88 + 24) = *((_QWORD *)this + 20);
    *(_QWORD *)(v88 + 32) = v78;
    WdLogEvent5_WdError(v88);
  }
LABEL_56:
  v47 = (_OWORD *)((char *)this + 520);
  *((_QWORD *)this + 71) = 0LL;
  RtlInitUnicodeString((PUNICODE_STRING)((char *)this + 520), L"NOEDID");
  v52 = 0;
LABEL_37:
  *((_BYTE *)this + 516) = v52;
LABEL_38:
  v53 = v52;
  if ( *((_QWORD *)this + 66) && v52 )
  {
    MonitorUnifyCCDMonitorString(v47);
    v53 = *((_BYTE *)this + 516);
  }
  *(_OWORD *)((char *)this + 536) = *v47;
  if ( v53 )
    *((_WORD *)this + 268) -= 6;
  v54 = *((_QWORD *)this + 4);
  v55 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v54 + 8) + 16LL) + 216LL) + 64LL);
  v56 = *(_QWORD *)(v55 + 4848);
  v57 = v55 + 4840;
  v58 = (const UNICODE_STRING *)(v57 & -(__int64)(v56 != 0));
  if ( v58 )
  {
    String = 0LL;
    v59 = *(DXGADAPTER **)(*(_QWORD *)(v54 + 8) + 16LL);
    if ( (*((_DWORD *)v59 + 87) & 0x40000) != 0 )
    {
      v97 = *((_DWORD *)this + 11);
      memset(v103, 0, 24);
      DXGADAPTER::GetVirtualMonitorInfo(v59, v97, (struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *)v103);
      if ( WORD4(v103[0]) )
        String = *(struct _UNICODE_STRING *)((char *)v103 + 8);
    }
    v120 = 0;
    if ( !String.Length )
    {
      v60 = *((_DWORD *)this + 11);
      *(_QWORD *)&String.Length = 1310720LL;
      String.Buffer = (wchar_t *)&v120;
      if ( RtlIntegerToUnicodeString(v60, 0x10u, &String) < 0 )
      {
        v98 = WdLogNewEntry5_WdAssertion(v62, v61);
        WdLogEvent5_WdAssertion(v98);
      }
    }
    v63 = String.Length + v58->Length + 8;
    v64 = (wchar_t *)operator new[](v63, 0x4D677844u, PagedPool);
    v65 = v64;
    if ( v64 )
    {
      memset(v64, 0, v63);
      v66 = (struct _UNICODE_STRING *)((char *)this + 552);
      *v66 = 0LL;
      v66->MaximumLength = v63;
      v66->Buffer = v65;
      RtlAppendUnicodeToString(v66, L"_");
      RtlAppendUnicodeStringToString(v66, v58);
      RtlAppendUnicodeToString(v66, L"_");
      RtlAppendUnicodeStringToString(v66, &String);
      return 0LL;
    }
    goto LABEL_75;
  }
  v96 = WdLogNewEntry5_WdError(v57, v54);
  *(_QWORD *)(v96 + 24) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL) + 216LL);
  WdLogEvent5_WdError(v96);
  return 3221225473LL;
}
