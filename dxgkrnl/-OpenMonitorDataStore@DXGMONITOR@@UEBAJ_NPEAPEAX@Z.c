__int64 __fastcall DXGMONITOR::OpenMonitorDataStore(DXGMONITOR *this, char a2, void **a3)
{
  bool v3; // zf
  char v7; // bp
  unsigned __int16 v8; // ax
  unsigned int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rcx
  NTSTATUS v12; // edi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rax
  struct _UNICODE_STRING Destination; // [rsp+20h] [rbp-28h] BYREF

  v3 = *((_DWORD *)this + 76) == 1;
  Destination = 0LL;
  if ( !v3 )
    WdLogSingleEntry0(1LL);
  if ( !*((_WORD *)this + 192) )
  {
    WdLogSingleEntry2(2LL, (char *)this - 8, -1073741637LL);
    return 3221225659LL;
  }
  v7 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 80LL))(*((_QWORD *)this + 20)) )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 96LL))(*((_QWORD *)this + 20)) )
    {
      v7 = 1;
      goto LABEL_5;
    }
    v20 = WdLogNewEntry5_WdTrace(v17, v16, v18, v19);
    *(_QWORD *)(v20 + 24) = (char *)this - 8;
    *(_QWORD *)(v20 + 32) = -1073741637LL;
    return 3221225659LL;
  }
LABEL_5:
  v8 = *((_WORD *)this + 192) + 170;
  Destination.MaximumLength = v8;
  if ( v7 )
  {
    v8 += *((_WORD *)this + 208);
    Destination.MaximumLength = v8;
  }
  Destination.Buffer = (wchar_t *)operator new[](v8, 0x4D677844u, 256LL);
  if ( Destination.Buffer )
  {
    RtlAppendUnicodeToString(
      &Destination,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\MonitorDataStore");
    RtlAppendUnicodeToString(&Destination, L"\\");
    RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)this + 24);
    if ( v7 )
      RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)this + 26);
    v9 = a2 != 0 ? 0xFFF2FFDA : 0;
    v12 = DxgkOpenRegistrySubkey(a3, v9 + 983103, 0LL, &Destination);
    if ( v12 == -1073741772
      && (a2 || (v12 = DxgkCreateRegistrySubkey(a3, v9 + 983103, 0LL, &Destination), v12 == -1073741772)) )
    {
      v21 = WdLogNewEntry5_WdTrace(v11, v10, v13, v14);
      *(_QWORD *)(v21 + 24) = (char *)this - 8;
      *(_QWORD *)(v21 + 32) = -1073741772LL;
    }
    else if ( v12 < 0 )
    {
      WdLogSingleEntry2(2LL, (char *)this - 8, v12);
    }
    operator delete(Destination.Buffer);
    return (unsigned int)v12;
  }
  else
  {
    WdLogSingleEntry1(6LL, (char *)this - 8);
    return 3221225495LL;
  }
}
