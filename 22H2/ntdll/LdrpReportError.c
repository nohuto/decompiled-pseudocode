/*
 * XREFs of LdrpReportError @ 0x18003F2B4
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x18002FDC0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpSnapModule @ 0x1800323F0 (LdrpSnapModule.c)
 *     LdrpProcessWork @ 0x1800600EC (LdrpProcessWork.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1800152F0 (RtlInitAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x180019580 (RtlAnsiStringToUnicodeString.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     StringCbPrintfW @ 0x18004C564 (StringCbPrintfW.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtRaiseHardError @ 0x1800A01F0 (NtRaiseHardError.c)
 *     LdrpLogDbgPrint @ 0x1800CDB18 (LdrpLogDbgPrint.c)
 *     RtlRaiseStatus @ 0x180102540 (RtlRaiseStatus.c)
 */

void __fastcall LdrpReportError(_UNICODE_STRING *a1, const CHAR *a2, NTSTATUS a3)
{
  _UNICODE_STRING *p_DestinationString; // rdi
  char v6; // r14
  int v7; // ecx
  ULONG v8; // r15d
  ULONG v9; // r12d
  _DWORD *v10; // rsi
  int v11; // ecx
  _DWORD *v12; // r13
  _UNICODE_STRING v13; // [rsp+40h] [rbp-C0h] BYREF
  ULONG Response; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  _STRING SourceString; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 Parameters; // [rsp+78h] [rbp-88h] BYREF
  _UNICODE_STRING *v18; // [rsp+80h] [rbp-80h]
  __int64 v19; // [rsp+88h] [rbp-78h]
  wchar_t pszDest[8]; // [rsp+90h] [rbp-70h] BYREF
  char v21; // [rsp+A0h] [rbp-60h] BYREF

  p_DestinationString = a1;
  if ( a1 )
  {
    v6 = 1;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"Unknown");
    p_DestinationString = &DestinationString;
    v6 = 0;
  }
  switch ( a3 )
  {
    case -1073741515:
      v9 = 1;
      *(_QWORD *)&v13.Length = 0LL;
      v13.Buffer = 0LL;
      v8 = 1;
      Parameters = (unsigned __int64)p_DestinationString;
      break;
    case -1073741512:
      StringCbPrintfW(pszDest, 0xEuLL, L"#%d", (unsigned __int16)a2);
      RtlInitUnicodeString(&v13, pszDest);
      v11 = LdrpDebugFlags;
      v8 = 3;
      v19 = -1073741512LL;
      Parameters = (unsigned __int64)a2;
      v9 = 2;
      v18 = p_DestinationString;
      v12 = (_DWORD *)((char *)&LdrpLogLevelStateTable + 16 * ((unsigned __int8)v6 ^ 1u));
      if ( ((*v12 | 1) & LdrpDebugFlags) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          857,
          (unsigned int)"LdrpReportError",
          (unsigned __int8)v6 ^ 1,
          (__int64)"Locating export at ordinal %d for DLL \"%wZ\" failed with status: 0x%08lx.\n",
          (_DWORD)a2,
          p_DestinationString,
          -1073741512);
        v11 = LdrpDebugFlags;
      }
      if ( (v11 & v12[1]) != 0 )
        __debugbreak();
      break;
    case -1073741511:
      RtlInitAnsiString(&SourceString, a2);
      v13.Buffer = (wchar_t *)&v21;
      v13.MaximumLength = 256;
      if ( RtlAnsiStringToUnicodeString(&v13, &SourceString, 0) < 0 )
        v13.Length = 0;
      v7 = LdrpDebugFlags;
      Parameters = (unsigned __int64)&v13;
      v8 = 3;
      v19 = -1073741511LL;
      v18 = p_DestinationString;
      v9 = 3;
      v10 = (_DWORD *)((char *)&LdrpLogLevelStateTable + 16 * ((unsigned __int8)v6 ^ 1u));
      if ( ((*v10 | 1) & LdrpDebugFlags) != 0 )
      {
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrutil.c",
          883,
          (unsigned int)"LdrpReportError",
          (unsigned __int8)v6 ^ 1,
          (__int64)"Locating export \"%wZ\" for DLL \"%wZ\" failed with status: 0x%08lx.\n",
          &v13,
          p_DestinationString,
          -1073741511);
        v7 = LdrpDebugFlags;
      }
      if ( (v7 & v10[1]) != 0 )
        __debugbreak();
      break;
    default:
      *(_QWORD *)&v13.Length = 0LL;
      v9 = 3;
      v13.Buffer = 0LL;
      v8 = 3;
      break;
  }
  if ( v6 )
  {
    if ( NtRaiseHardError(a3, v8, v9, &Parameters, 1u, &Response) >= 0 && LdrInitState != 3 )
      ++LdrpFatalHardErrorCount;
    if ( (unsigned int)(a3 + 1073741512) <= 1 )
      RtlRaiseStatus(a3);
  }
}
