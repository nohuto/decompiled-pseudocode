/*
 * XREFs of NtUserWin32kSysCallFilterStub @ 0x1C014DA60
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     ??$GenerateNonTerminatingUserModeWerReport@$02@@YAXKPEAXAEAY02_K@Z @ 0x1C013FDA8 (--$GenerateNonTerminatingUserModeWerReport@$02@@YAXKPEAXAEAY02_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U3@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$03@@2@Z @ 0x1C013FE50 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U3@U-$_tlgWrapperByVal@$03@@.c)
 *     ?GetProcessAppContainerSid@@YAPEAGXZ @ 0x1C01400B8 (-GetProcessAppContainerSid@@YAPEAGXZ.c)
 *     ?GetProcessCommandLine@@YAPEAGXZ @ 0x1C01401E8 (-GetProcessCommandLine@@YAPEAGXZ.c)
 *     ?_ShouldCaptureWerReport@@YAHK@Z @ 0x1C01407F8 (-_ShouldCaptureWerReport@@YAHK@Z.c)
 *     EtwSyscallFilterMessage @ 0x1C016B670 (EtwSyscallFilterMessage.c)
 */

void __fastcall NtUserWin32kSysCallFilterStub(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r14d
  const char *v4; // r12
  char *ProcessAppContainerSid; // rsi
  char *ProcessCommandLine; // rdi
  __int64 Win32KFilterSet; // r15
  const WCHAR *v8; // r13
  const WCHAR *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 CurrentProcess; // rax
  const char *ProcessImageFileName; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // [rsp+50h] [rbp-29h] BYREF
  const WCHAR *v19; // [rsp+58h] [rbp-21h] BYREF
  __int64 v20; // [rsp+60h] [rbp-19h] BYREF
  const WCHAR *v21; // [rsp+68h] [rbp-11h] BYREF
  const char *v22; // [rsp+70h] [rbp-9h] BYREF
  __int64 v23; // [rsp+78h] [rbp-1h] BYREF
  __int128 v24; // [rsp+80h] [rbp+7h] BYREF
  __int64 v25; // [rsp+90h] [rbp+17h]

  v3 = a2;
  v4 = (const char *)a1;
  ProcessAppContainerSid = GetProcessAppContainerSid(a1, a2, a3);
  ProcessCommandLine = GetProcessCommandLine();
  Win32KFilterSet = (unsigned int)PsGetWin32KFilterSet();
  v8 = &word_1C0248490;
  v9 = &word_1C0248490;
  if ( ProcessAppContainerSid )
    v9 = (const WCHAR *)ProcessAppContainerSid;
  v19 = v9;
  if ( ProcessCommandLine )
    v8 = (const WCHAR *)ProcessCommandLine;
  if ( !v4 )
    v4 = (const char *)&unk_1C0263738;
  EtwSyscallFilterMessage(v4, v9, v8, Win32KFilterSet);
  CurrentProcess = PsGetCurrentProcess(v11, v10, v12);
  ProcessImageFileName = (const char *)PsGetProcessImageFileName(CurrentProcess);
  DbgPrintEx(0x70u, 4u, "NtUserWin32kSysCallFilterStub: SyscallName='%s', Process='%s'\n", v4, ProcessImageFileName);
  if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() )
  {
    if ( !HIDWORD(qword_1C0290658[2 * (unsigned int)Win32KFilterSet]) && (unsigned int)_ShouldCaptureWerReport(v3) )
    {
      *(_QWORD *)&v24 = 41LL;
      *((_QWORD *)&v24 + 1) = v3;
      v25 = Win32KFilterSet;
      GenerateNonTerminatingUserModeWerReport<3>(v15, v3, &v24);
    }
    if ( (unsigned int)dword_1C0288368 > 5 && tlgKeywordOn((__int64)&dword_1C0288368, 0x800000000000LL) )
    {
      v20 = 0x1000000LL;
      v18 = Win32KFilterSet;
      v21 = v8;
      v22 = v4;
      v23 = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v16,
        byte_1C0256794,
        v17,
        (__int64)&v23,
        (void **)&v22,
        &v19,
        &v21,
        (__int64)&v18,
        (__int64)&v20);
    }
  }
  if ( ProcessAppContainerSid )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, ProcessAppContainerSid);
  if ( ProcessCommandLine )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, ProcessCommandLine);
}
