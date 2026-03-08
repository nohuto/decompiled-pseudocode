/*
 * XREFs of NtUserWin32kSysCallFilterStub @ 0x1C017A690
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     ??$GenerateNonTerminatingUserModeWerReport@$02@@YAXKPEAXAEAY02_K@Z @ 0x1C0168A38 (--$GenerateNonTerminatingUserModeWerReport@$02@@YAXKPEAXAEAY02_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U3@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$03@@2@Z @ 0x1C0168AE0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U3@U-$_tlgWrapperByVal@$03@@.c)
 *     ?GetProcessAppContainerSid@@YAPEAGXZ @ 0x1C0168D48 (-GetProcessAppContainerSid@@YAPEAGXZ.c)
 *     ?GetProcessCommandLine@@YAPEAGXZ @ 0x1C0168E78 (-GetProcessCommandLine@@YAPEAGXZ.c)
 *     ?_ShouldCaptureWerReport@@YAHK@Z @ 0x1C0169494 (-_ShouldCaptureWerReport@@YAHK@Z.c)
 *     EtwSyscallFilterMessage @ 0x1C01983C0 (EtwSyscallFilterMessage.c)
 */

void __fastcall NtUserWin32kSysCallFilterStub(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r14d
  const char *v5; // r12
  char *ProcessAppContainerSid; // rsi
  char *ProcessCommandLine; // rdi
  __int64 Win32KFilterSet; // r15
  const WCHAR *v9; // r13
  const WCHAR *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 CurrentProcess; // rax
  const char *ProcessImageFileName; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // [rsp+50h] [rbp-29h] BYREF
  const WCHAR *v21; // [rsp+58h] [rbp-21h] BYREF
  __int64 v22; // [rsp+60h] [rbp-19h] BYREF
  const WCHAR *v23; // [rsp+68h] [rbp-11h] BYREF
  const char *v24; // [rsp+70h] [rbp-9h] BYREF
  __int64 v25; // [rsp+78h] [rbp-1h] BYREF
  __int128 v26; // [rsp+80h] [rbp+7h] BYREF
  __int64 v27; // [rsp+90h] [rbp+17h]

  v4 = a2;
  v5 = (const char *)a1;
  ProcessAppContainerSid = GetProcessAppContainerSid(a1, a2, a3, a4);
  ProcessCommandLine = GetProcessCommandLine();
  Win32KFilterSet = (unsigned int)PsGetWin32KFilterSet();
  v9 = &word_1C02856D8;
  v10 = &word_1C02856D8;
  if ( ProcessAppContainerSid )
    v10 = (const WCHAR *)ProcessAppContainerSid;
  v21 = v10;
  if ( ProcessCommandLine )
    v9 = (const WCHAR *)ProcessCommandLine;
  if ( !v5 )
    v5 = (const char *)&unk_1C02A2108;
  EtwSyscallFilterMessage(v5, v10, v9, Win32KFilterSet);
  CurrentProcess = PsGetCurrentProcess(v12, v11, v13, v14);
  ProcessImageFileName = (const char *)PsGetProcessImageFileName(CurrentProcess);
  DbgPrintEx(0x70u, 4u, "NtUserWin32kSysCallFilterStub: SyscallName='%s', Process='%s'\n", v5, ProcessImageFileName);
  if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() )
  {
    if ( !HIDWORD(qword_1C02D1628[2 * (unsigned int)Win32KFilterSet]) && (unsigned int)_ShouldCaptureWerReport(v4) )
    {
      *(_QWORD *)&v26 = 41LL;
      *((_QWORD *)&v26 + 1) = v4;
      v27 = Win32KFilterSet;
      GenerateNonTerminatingUserModeWerReport<3>(v17, v4, &v26);
    }
    if ( (unsigned int)dword_1C02C9368 > 5 && tlgKeywordOn((__int64)&dword_1C02C9368, 0x800000000000LL) )
    {
      v22 = 0x1000000LL;
      v20 = Win32KFilterSet;
      v23 = v9;
      v24 = v5;
      v25 = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v18,
        byte_1C0294E19,
        v19,
        (__int64)&v25,
        (void **)&v24,
        &v21,
        &v23,
        (__int64)&v20,
        (__int64)&v22);
    }
  }
  if ( ProcessAppContainerSid )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, ProcessAppContainerSid);
  if ( ProcessCommandLine )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, ProcessCommandLine);
}
