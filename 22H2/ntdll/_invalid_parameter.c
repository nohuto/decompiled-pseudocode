/*
 * XREFs of _invalid_parameter @ 0x18008C838
 * Callers:
 *     _lfind @ 0x18008D630 (_lfind.c)
 *     _snprintf @ 0x18008D7D0 (_snprintf.c)
 *     _snwprintf @ 0x18008D880 (_snwprintf.c)
 *     _splitpath_helper @ 0x18008D9F0 (_splitpath_helper.c)
 *     _strlwr_s @ 0x18008DD10 (_strlwr_s.c)
 *     _strupr @ 0x18008DE00 (_strupr.c)
 *     _strupr_s @ 0x18008DE50 (_strupr_s.c)
 *     swprintf @ 0x18008DEC0 (swprintf.c)
 *     _vscprintf_helper @ 0x18008DF9C (_vscprintf_helper.c)
 *     _vsprintf_l @ 0x18008DFF0 (_vsprintf_l.c)
 *     _vswprintf_l @ 0x18008E0C4 (_vswprintf_l.c)
 *     _vsnprintf_l @ 0x18008E18C (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x18008E25C (_vsnwprintf_l.c)
 *     _wcslwr @ 0x18008E3A0 (_wcslwr.c)
 *     _wcslwr_s @ 0x18008E400 (_wcslwr_s.c)
 *     _wcsnset_s @ 0x18008E4F0 (_wcsnset_s.c)
 *     _wcsset_s @ 0x18008E580 (_wcsset_s.c)
 *     wcstoxq @ 0x18008E644 (wcstoxq.c)
 *     _wcsupr_s @ 0x18008E8F0 (_wcsupr_s.c)
 *     bsearch @ 0x18008F390 (bsearch.c)
 *     bsearch_s @ 0x18008F490 (bsearch_s.c)
 *     qsort @ 0x1800907B0 (qsort.c)
 *     qsort_s @ 0x180090B40 (qsort_s.c)
 *     sprintf @ 0x180090F00 (sprintf.c)
 *     vscan_fn @ 0x1800910DC (vscan_fn.c)
 *     strtoxlX @ 0x180091B6C (strtoxlX.c)
 *     wcstoxlX @ 0x18009276C (wcstoxlX.c)
 *     strtoxq @ 0x180092C10 (strtoxq.c)
 *     _output_l @ 0x180092E80 (_output_l.c)
 *     _woutput_l @ 0x180093810 (_woutput_l.c)
 *     _input_l @ 0x180095DC0 (_input_l.c)
 *     _wctomb_s_l @ 0x1800966A0 (_wctomb_s_l.c)
 *     _fputwc_nolock @ 0x180096774 (_fputwc_nolock.c)
 *     _ungetc_nolock @ 0x18009685C (_ungetc_nolock.c)
 *     x64toa_s @ 0x1800969DC (x64toa_s.c)
 *     xtoa_s @ 0x180096B10 (xtoa_s.c)
 *     x64tow_s @ 0x180096CDC (x64tow_s.c)
 *     xtow_s @ 0x180096E20 (xtow_s.c)
 *     _makepath_s @ 0x180096F60 (_makepath_s.c)
 *     _vsnprintf_s @ 0x1800970E0 (_vsnprintf_s.c)
 *     _snscanf_s @ 0x180097180 (_snscanf_s.c)
 *     _vsnwprintf_s @ 0x1800971F0 (_vsnwprintf_s.c)
 *     _snwscanf_s @ 0x1800972A0 (_snwscanf_s.c)
 *     _splitpath_s @ 0x1800972E0 (_splitpath_s.c)
 *     _strnset_s @ 0x180097580 (_strnset_s.c)
 *     _strset_s @ 0x180097610 (_strset_s.c)
 *     _wmakepath_s @ 0x180097670 (_wmakepath_s.c)
 *     _wsplitpath_s @ 0x1800977F0 (_wsplitpath_s.c)
 *     memcpy_s @ 0x180097AB0 (memcpy_s.c)
 *     memmove_s @ 0x180097B50 (memmove_s.c)
 *     vsprintf_s @ 0x180097BE0 (vsprintf_s.c)
 *     sscanf_s @ 0x180097C30 (sscanf_s.c)
 *     strcat_s @ 0x180097C90 (strcat_s.c)
 *     strcpy_s @ 0x180097D30 (strcpy_s.c)
 *     strncat_s @ 0x180097DC0 (strncat_s.c)
 *     strncpy_s @ 0x180097ED0 (strncpy_s.c)
 *     strtok_s @ 0x180097FC0 (strtok_s.c)
 *     vswprintf_s @ 0x180098160 (vswprintf_s.c)
 *     swscanf_s @ 0x1800981C0 (swscanf_s.c)
 *     wcscat_s @ 0x180098220 (wcscat_s.c)
 *     wcscpy_s @ 0x1800982C0 (wcscpy_s.c)
 *     wcsncat_s @ 0x180098350 (wcsncat_s.c)
 *     wcsncpy_s @ 0x180098470 (wcsncpy_s.c)
 *     wcstok_s @ 0x180098570 (wcstok_s.c)
 *     _output_s @ 0x180098684 (_output_s.c)
 *     _safecrt_wctomb_s @ 0x180098F0C (_safecrt_wctomb_s.c)
 *     _soutput_s @ 0x180098FE8 (_soutput_s.c)
 *     _input_s @ 0x180099558 (_input_s.c)
 *     _sinput_s @ 0x180099F04 (_sinput_s.c)
 *     _swoutput_s @ 0x180099F7C (_swoutput_s.c)
 *     _woutput_s @ 0x18009A0AC (_woutput_s.c)
 *     _swinput_s @ 0x18009AE88 (_swinput_s.c)
 *     _winput_s @ 0x18009AF5C (_winput_s.c)
 *     _fgetwc_nolock @ 0x18009B94C (_fgetwc_nolock.c)
 *     _ungetwc_nolock @ 0x18009B998 (_ungetwc_nolock.c)
 * Callees:
 *     RtlVirtualUnwind @ 0x180030DE0 (RtlVirtualUnwind.c)
 *     RtlLookupFunctionEntry @ 0x180032BE0 (RtlLookupFunctionEntry.c)
 *     DbgPrint @ 0x180051AC0 (DbgPrint.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     RtlCaptureContext @ 0x1800A1640 (RtlCaptureContext.c)
 */

ULONG invalid_parameter()
{
  ULONG64 Rip; // rbx
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v1; // rax
  unsigned __int64 ImageBase; // [rsp+40h] [rbp-508h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+48h] [rbp-500h] BYREF
  PVOID HandlerData; // [rsp+50h] [rbp-4F8h] BYREF
  struct _CONTEXT ContextRecord; // [rsp+60h] [rbp-4E8h] BYREF
  DWORD64 retaddr; // [rsp+548h] [rbp+0h] BYREF

  RtlCaptureContext(&ContextRecord);
  Rip = ContextRecord.Rip;
  v1 = RtlLookupFunctionEntry(ContextRecord.Rip, &ImageBase, 0LL);
  if ( v1 )
  {
    RtlVirtualUnwind(0, ImageBase, Rip, v1, &ContextRecord, &HandlerData, &EstablisherFrame, 0LL);
  }
  else
  {
    ContextRecord.Rip = retaddr;
    ContextRecord.Rsp = (DWORD64)&retaddr;
  }
  return DbgPrint("Invalid parameter passed to C runtime function.\n");
}
