/*
 * XREFs of _anonymous_namespace_::SendFramesReports @ 0x18010AB70
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::FramesReport::_FramesReport @ 0x18010AC84 (_anonymous_namespace_--FramesReport--_FramesReport.c)
 *     _anonymous_namespace_::SendFramesReport @ 0x18010B170 (_anonymous_namespace_--SendFramesReport.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall anonymous_namespace_::SendFramesReports(PTP_CALLBACK_INSTANCE Instance, PVOID Context, PTP_WORK Work)
{
  PSLIST_ENTRY v3; // rbx
  bool v4; // di
  struct _SLIST_ENTRY *v5; // rdx
  PSLIST_ENTRY v6; // rdi
  void *v7; // rbx
  struct _SLIST_ENTRY *v8; // rcx
  struct _SLIST_ENTRY *i; // rax
  _QWORD OutputBuffer[2]; // [rsp+30h] [rbp-38h] BYREF
  _SLIST_HEADER ListHead; // [rsp+40h] [rbp-28h] BYREF

  v3 = InterlockedFlushSList((PSLIST_HEADER)qword_1803E2C80 + 3);
  if ( v3 )
  {
    InitializeSListHead(&ListHead);
    v4 = CallNtPowerInformation(SystemExecutionState, 0LL, 0, OutputBuffer, 4u) >= 0 && (OutputBuffer[0] & 2) != 0;
    do
    {
      v5 = v3;
      if ( v4 )
      {
        v8 = (struct _SLIST_ENTRY *)*((_QWORD *)&v3[1].Next + 1);
        for ( i = v3[1].Next; i != v8; i += 30 )
          LODWORD(i[8].Next) |= 0x20u;
      }
      v3 = v3->Next;
      InterlockedPushEntrySList(&ListHead, v5);
    }
    while ( v3 );
    v6 = InterlockedFlushSList(&ListHead);
    while ( v6 )
    {
      OutputBuffer[0] = v6;
      anonymous_namespace_::SendFramesReport(OutputBuffer);
      v7 = (void *)OutputBuffer[0];
      v6 = v6->Next;
      if ( OutputBuffer[0] )
      {
        anonymous_namespace_::FramesReport::_FramesReport(OutputBuffer[0]);
        operator delete(v7, 0xC0uLL);
      }
    }
  }
}
