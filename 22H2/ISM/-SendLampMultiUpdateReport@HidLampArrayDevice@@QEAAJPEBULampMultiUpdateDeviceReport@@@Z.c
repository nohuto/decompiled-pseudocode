/*
 * XREFs of ?SendLampMultiUpdateReport@HidLampArrayDevice@@QEAAJPEBULampMultiUpdateDeviceReport@@@Z @ 0x1800A84C0
 * Callers:
 *     ?SendLampStateUpdate@HidLampMultiUpdateReportBuilder@@QEAAJXZ @ 0x1800A9AB4 (-SendLampStateUpdate@HidLampMultiUpdateReportBuilder@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x18009F504 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?CreateAndInitializeOutputBuffer@HidLampMultiUpdateReportParser@@QEAAJPEBULampMultiUpdateDeviceReport@@AEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@PEAI@Z @ 0x1800AB610 (-CreateAndInitializeOutputBuffer@HidLampMultiUpdateReportParser@@QEAAJPEBULampMultiUpdateDeviceR.c)
 */

__int64 __fastcall HidLampArrayDevice::SendLampMultiUpdateReport(
        HidLampArrayDevice *this,
        const struct LampMultiUpdateDeviceReport *a2,
        __int64 a3,
        __int64 a4)
{
  const wchar_t *v4; // rdi
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  const struct std::nothrow_t *v10; // rdx
  PVOID v12; // rbx
  const struct std::nothrow_t *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  signed int LastError; // eax
  const struct std::nothrow_t *v18; // rdx
  unsigned int v19; // edi
  int v20[2]; // [rsp+30h] [rbp-20h] BYREF
  const wchar_t *v21; // [rsp+38h] [rbp-18h] BYREF
  const char *v22; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  ULONG ReportBufferLength; // [rsp+70h] [rbp+20h] BYREF
  PVOID ReportBuffer; // [rsp+80h] [rbp+30h] BYREF
  const wchar_t *v26; // [rsp+88h] [rbp+38h] BYREF

  v4 = (const wchar_t *)((char *)this + 24);
  if ( (unsigned int)dword_1802063F0 > 5 )
  {
    v26 = (const wchar_t *)((char *)this + 24);
    *(_QWORD *)v20 = "Started";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
      (__int64)this,
      byte_1801CB249,
      a3,
      a4,
      (const unsigned __int16 **)v20,
      &v26);
  }
  v7 = *((_QWORD *)this + 76);
  ReportBufferLength = 0;
  ReportBuffer = 0LL;
  v8 = HidLampMultiUpdateReportParser::CreateAndInitializeOutputBuffer(v7, a2, &ReportBuffer, &ReportBufferLength);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v12 = ReportBuffer;
    if ( HidD_SetFeature(*(HANDLE *)(*((_QWORD *)this + 2) + 40LL), ReportBuffer, ReportBufferLength) )
    {
      if ( (unsigned int)dword_1802063F0 > 5 )
      {
        v21 = v4;
        v22 = "Completed successfully";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
          v14,
          byte_1801CB249,
          v15,
          v16,
          (const unsigned __int16 **)&v22,
          &v21);
      }
      if ( v12 )
        operator delete(v12, v13);
      return 0LL;
    }
    else
    {
      LastError = GetLastError();
      v19 = LastError;
      if ( LastError > 0 )
        v19 = (unsigned __int16)LastError | 0x80070000;
      if ( v12 )
        operator delete(v12, v18);
      return v19;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)(unsigned int)v8);
    if ( ReportBuffer )
      operator delete(ReportBuffer, v10);
    return v9;
  }
}
