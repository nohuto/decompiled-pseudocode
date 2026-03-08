/*
 * XREFs of ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C01F9AA4
 * Callers:
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FBF54 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@.c)
 * Callees:
 *     ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C000296C (-RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0019400 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C0024370 (__report_rangecheckfailure.c)
 *     memcmp @ 0x1C00270F0 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     MonitorUnifyCCDMonitorString @ 0x1C01F88E4 (MonitorUnifyCCDMonitorString.c)
 *     ?GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z @ 0x1C02B2CB4 (-GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z.c)
 *     MonitorLogBadEDID @ 0x1C03BFCE4 (MonitorLogBadEDID.c)
 */

__int64 __fastcall DXGMONITOR::_PrepareMonitorCCDName(DXGMONITOR *this)
{
  _QWORD *v2; // rsi
  __int64 v3; // rdi
  int v4; // eax
  __int64 v5; // rsi
  int v6; // eax
  int v7; // eax
  unsigned __int64 v8; // rsi
  int v9; // eax
  unsigned int v10; // r14d
  unsigned int v11; // edx
  unsigned int v12; // ecx
  unsigned __int64 v13; // rsi
  unsigned __int8 v14; // al
  unsigned __int64 v15; // rsi
  struct _LIST_ENTRY *Flink; // r14
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 *v19; // rax
  unsigned __int16 *v20; // rdi
  char v21; // al
  _QWORD *v22; // rdx
  __int64 v23; // r8
  const UNICODE_STRING *v24; // rsi
  __int64 v25; // rcx
  ULONG v26; // ecx
  unsigned __int16 v27; // di
  __int64 v28; // rax
  struct _UNICODE_STRING *v29; // rbx
  unsigned int v31; // edx
  __int64 v32; // rax
  _BYTE v33[4]; // [rsp+28h] [rbp-79h] BYREF
  unsigned __int16 v34; // [rsp+2Ch] [rbp-75h] BYREF
  struct _UNICODE_STRING String; // [rsp+30h] [rbp-71h] BYREF
  _BYTE v36[24]; // [rsp+40h] [rbp-61h] BYREF
  unsigned __int64 v37; // [rsp+58h] [rbp-49h] BYREF
  WCHAR SourceString[40]; // [rsp+68h] [rbp-39h] BYREF
  __int16 v39; // [rsp+B8h] [rbp+17h] BYREF

  if ( *((_QWORD *)this + 50) )
    WdLogSingleEntry0(1LL);
  if ( *((_DWORD *)this + 78) != 1 )
  {
    v20 = (unsigned __int16 *)((char *)this + 392);
    *((_QWORD *)this + 55) = 0LL;
    RtlInitUnicodeString((PUNICODE_STRING)((char *)this + 392), L"SIMULATED");
    v21 = 0;
    *((_BYTE *)this + 384) = 0;
    goto LABEL_30;
  }
  v2 = (_QWORD *)*((_QWORD *)this + 27);
  if ( v2[20] )
  {
    v37 = 0LL;
    memset(SourceString, 0, 0x46uLL);
    v3 = v2[16];
    if ( !v3 )
      v3 = v2[17];
    *(_QWORD *)v36 = 4587520LL;
    *(_QWORD *)&v36[8] = SourceString;
    v4 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v3 + 64LL))(v3, v36);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v3 + 72LL))(v3, v36);
      v5 = v6;
      if ( v6 >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v3 + 80LL))(v3, v36);
        v5 = v7;
        if ( v7 >= 0 )
        {
          if ( (int)RtlStringCchLengthW(SourceString, 0x23uLL, &v37) < 0 )
            WdLogSingleEntry0(1LL);
          v8 = v37;
          if ( v37 > 0x17 )
            WdLogSingleEntry0(1LL);
          v33[0] = 0;
          v34 = 0;
          v9 = (*(__int64 (__fastcall **)(__int64, _BYTE *, unsigned __int16 *))(*(_QWORD *)v3 + 88LL))(v3, v33, &v34);
          v10 = v9;
          if ( v9 < 0 )
          {
            WdLogSingleEntry1(3LL, v9);
            MonitorLogBadEDID(v10);
          }
          v11 = v34;
          v12 = v33[0];
          SourceString[v8] = 95;
          v13 = v8 + 1;
          SourceString[v13++] = a0123456789abcd[(unsigned __int64)v12 >> 4];
          SourceString[v13++] = a0123456789abcd[v12 & 0xF];
          SourceString[v13++] = 95;
          SourceString[v13++] = a0123456789abcd[(unsigned __int64)v11 >> 12];
          SourceString[v13++] = a0123456789abcd[(v11 >> 8) & 0xF];
          SourceString[v13++] = a0123456789abcd[(unsigned __int8)v11 >> 4];
          SourceString[v13++] = a0123456789abcd[v11 & 0xF];
          SourceString[v13++] = 95;
          v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 96LL))(v3);
          SourceString[v13++] = a0123456789abcd[(unsigned __int64)v14 >> 4];
          SourceString[v13] = a0123456789abcd[v14 & 0xF];
          v15 = v13 + 1;
          if ( 2 * v15 >= 0x46 )
            _report_rangecheckfailure();
          SourceString[v15] = 0;
          if ( v15 >= 0x23 )
            WdLogSingleEntry0(1LL);
          KeAcquireGuardedMutex(&DXGMONITOR::_UniqueTableLock);
          Flink = DXGMONITOR::_UniqueEntryList.Flink;
          v17 = 0LL;
          while ( Flink != &DXGMONITOR::_UniqueEntryList )
          {
            v17 = (__int64)Flink;
            if ( HIDWORD(Flink[1].Flink) == v15 && !memcmp(&Flink[1].Blink, SourceString, 2 * v15) )
              goto LABEL_48;
            Flink = Flink->Flink;
          }
          if ( !Flink )
          {
LABEL_48:
            if ( !v17 )
              WdLogSingleEntry0(1LL);
            if ( !*(_DWORD *)(v17 + 16) )
              WdLogSingleEntry0(1LL);
            ++*(_DWORD *)(v17 + 16);
            goto LABEL_27;
          }
          v18 = operator new[](2 * v15 + 32, 0x4D677844u, 256LL);
          v17 = v18;
          if ( !v18 )
          {
            WdLogSingleEntry0(6LL);
            KeReleaseGuardedMutex(&DXGMONITOR::_UniqueTableLock);
            return 3221225495LL;
          }
          *(_DWORD *)(v18 + 20) = v15;
          *(_DWORD *)(v18 + 16) = 1;
          if ( (int)RtlStringCchCopyW((char *)(v18 + 24), v15 + 1, (char *)SourceString) < 0 )
            WdLogSingleEntry0(1LL);
          *(_WORD *)(v17 + 2 * v15 + 24) = 0;
          v19 = (__int64 *)qword_1C013CBC8;
          if ( *(struct _LIST_ENTRY **)qword_1C013CBC8 != &DXGMONITOR::_UniqueEntryList )
            __fastfail(3u);
          *(_QWORD *)v17 = &DXGMONITOR::_UniqueEntryList;
          *(_QWORD *)(v17 + 8) = v19;
          *v19 = v17;
          qword_1C013CBC8 = v17;
LABEL_27:
          *((_QWORD *)this + 55) = v17;
          KeReleaseGuardedMutex(&DXGMONITOR::_UniqueTableLock);
          v20 = (unsigned __int16 *)((char *)this + 392);
          if ( !RtlCreateUnicodeString((PUNICODE_STRING)((char *)this + 392), SourceString) )
            goto LABEL_54;
          v21 = 1;
          goto LABEL_29;
        }
      }
    }
    WdLogSingleEntry1(3LL, v5);
    MonitorLogBadEDID((unsigned int)v5);
  }
  v20 = (unsigned __int16 *)((char *)this + 392);
  *((_QWORD *)this + 55) = 0LL;
  RtlInitUnicodeString((PUNICODE_STRING)((char *)this + 392), L"NOEDID");
  v21 = 0;
LABEL_29:
  *((_BYTE *)this + 384) = v21;
LABEL_30:
  if ( *((_QWORD *)this + 50) && v21 )
    MonitorUnifyCCDMonitorString(v20);
  *(_OWORD *)((char *)this + 408) = *(_OWORD *)v20;
  if ( *((_BYTE *)this + 384) )
    *((_WORD *)this + 204) -= 6;
  v22 = (_QWORD *)*((_QWORD *)this + 21);
  v23 = *(_QWORD *)(*(_QWORD *)(v22[3] + 16LL) + 216LL);
  v24 = (const UNICODE_STRING *)((*(_QWORD *)(v23 + 64) + 4784LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)(v23 + 64) + 4792LL) != 0LL));
  if ( v24 )
  {
    v25 = *((_QWORD *)this + 21);
    String = 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*v22 + 80LL))(v25) )
    {
      v31 = *((_DWORD *)this + 45);
      v32 = *((_QWORD *)this + 21);
      memset(v36, 0, sizeof(v36));
      DXGADAPTER::GetVirtualMonitorInfo(
        *(DXGADAPTER **)(*(_QWORD *)(v32 + 24) + 16LL),
        v31,
        (struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *)v36);
      if ( *(_WORD *)&v36[8] )
        String = *(struct _UNICODE_STRING *)&v36[8];
    }
    v39 = 0;
    if ( !String.Length )
    {
      v26 = *((_DWORD *)this + 45);
      *(_QWORD *)&String.Length = 1310720LL;
      String.Buffer = (wchar_t *)&v39;
      if ( RtlIntegerToUnicodeString(v26, 0x10u, &String) < 0 )
        WdLogSingleEntry0(1LL);
    }
    v27 = v24->Length + String.Length + 8;
    v28 = operator new[](v27, 0x4D677844u, 256LL);
    if ( v28 )
    {
      v29 = (struct _UNICODE_STRING *)((char *)this + 424);
      *v29 = 0LL;
      v29->MaximumLength = v27;
      v29->Buffer = (wchar_t *)v28;
      RtlAppendUnicodeToString(v29, L"_");
      RtlAppendUnicodeStringToString(v29, v24);
      RtlAppendUnicodeToString(v29, L"_");
      RtlAppendUnicodeStringToString(v29, &String);
      return 0LL;
    }
    else
    {
LABEL_54:
      WdLogSingleEntry0(6LL);
      return 3221225495LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, *(_QWORD *)(*(_QWORD *)(v22[3] + 16LL) + 216LL));
    return 3221225473LL;
  }
}
