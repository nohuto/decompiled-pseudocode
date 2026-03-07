__int64 __fastcall DxgMonitor::MonitorModes::_ProcessMonitorResolutionKey(
        DxgMonitor::MonitorModes *this,
        void *a2,
        struct _KEY_BASIC_INFORMATION *a3)
{
  unsigned __int16 NameLength; // ax
  NTSTATUS v6; // eax
  unsigned int v7; // edi
  int v8; // r15d
  int v9; // r12d
  unsigned __int16 v10; // si
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  __int64 v17; // rax
  void *v18; // rcx
  void *v20; // rbx
  __int64 v21; // rax
  _QWORD *v22; // rdi
  int valid; // eax
  DxgMonitor::MonitorModes *v24; // rdi
  DxgMonitor::MonitorModes **v25; // rcx
  int v26; // [rsp+30h] [rbp-39h] BYREF
  int v27; // [rsp+34h] [rbp-35h] BYREF
  int v28; // [rsp+38h] [rbp-31h] BYREF
  int v29; // [rsp+3Ch] [rbp-2Dh] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-29h] BYREF
  void *v31; // [rsp+48h] [rbp-21h] BYREF
  struct _UNICODE_STRING v32; // [rsp+50h] [rbp-19h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-9h] BYREF
  WCHAR SourceString[8]; // [rsp+70h] [rbp+7h] BYREF

  NameLength = a3->NameLength;
  Handle = 0LL;
  v26 = 0;
  v27 = 0;
  v32.Length = NameLength;
  v32.MaximumLength = NameLength;
  *(_DWORD *)(&v32.MaximumLength + 1) = 0;
  v32.Buffer = a3->Name;
  if ( !(unsigned __int8)ParseResolutionKeyName(&v32, &v26, &v27) )
  {
    WdLogSingleEntry0(2LL);
    v7 = -1073741823;
    goto LABEL_10;
  }
  if ( Handle )
    ZwClose(Handle);
  Handle = 0LL;
  v6 = DxgkOpenRegistrySubkey(&Handle, 0x20019u, a2, &v32);
  v7 = v6;
  if ( v6 < 0 )
  {
    WdLogSingleEntry1(2LL, v6);
    goto LABEL_10;
  }
  wcscpy(SourceString, L"ModeX");
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  v8 = v26;
  v9 = v27;
  v10 = 1;
  while ( 1 )
  {
    v31 = 0LL;
    SourceString[4] = v10 + 48;
    v11 = DxgkRetrieveValueFromRegistry(Handle, &DestinationString, &v31);
    v16 = v11;
    if ( v11 < 0 )
    {
      v17 = WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
      *(_QWORD *)(v17 + 24) = v10;
      v18 = v31;
      *(_QWORD *)(v17 + 32) = v16;
      if ( v18 )
        goto LABEL_13;
      goto LABEL_8;
    }
    v20 = v31;
    v27 = 0;
    v26 = 0;
    v28 = 0;
    v29 = 0;
    if ( !(unsigned __int8)ParseFreqRangeValue(
                             (_DWORD)v31,
                             (unsigned int)&v27,
                             (unsigned int)&v26,
                             (unsigned int)&v28,
                             (__int64)&v29) )
      break;
    v21 = operator new[](0x40uLL, 0x4D677844u, 256LL);
    v22 = (_QWORD *)v21;
    if ( !v21 )
    {
      WdLogSingleEntry0(2LL);
      v7 = -1073741801;
      goto LABEL_27;
    }
    *(_DWORD *)(v21 + 4) = v27;
    *(_DWORD *)(v21 + 12) = v26;
    *(_DWORD *)(v21 + 20) = v28;
    *(_DWORD *)v21 = 4;
    *(_DWORD *)(v21 + 36) = 1;
    *(_DWORD *)(v21 + 40) = v8;
    *(_DWORD *)(v21 + 44) = v9;
    *(_DWORD *)(v21 + 8) = 1;
    *(_DWORD *)(v21 + 16) = 1;
    *(_DWORD *)(v21 + 24) = 1;
    *(_DWORD *)(v21 + 28) = v29;
    *(_DWORD *)(v21 + 32) = 1;
    valid = IsValidFrequencyRange((const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)v21);
    if ( valid < 0 )
    {
      WdLogSingleEntry1(3LL, valid);
      operator delete(v22);
    }
    else
    {
      v24 = (DxgMonitor::MonitorModes *)(v22 + 6);
      v25 = (DxgMonitor::MonitorModes **)*((_QWORD *)this + 23);
      if ( *v25 != (DxgMonitor::MonitorModes *)((char *)this + 176) )
        __fastfail(3u);
      *(_QWORD *)v24 = (char *)this + 176;
      *((_QWORD *)v24 + 1) = v25;
      *v25 = v24;
      *((_QWORD *)this + 23) = v24;
      ++*((_DWORD *)this + 42);
      ++*((_DWORD *)this + 43);
    }
    if ( v20 )
    {
      v18 = v20;
LABEL_13:
      operator delete(v18);
    }
LABEL_8:
    if ( ++v10 >= 9u )
    {
      v7 = 0;
      goto LABEL_10;
    }
  }
  WdLogSingleEntry1(2LL, v10);
  v7 = -1073741823;
LABEL_27:
  if ( v20 )
    operator delete(v20);
LABEL_10:
  if ( Handle )
    ZwClose(Handle);
  return v7;
}
