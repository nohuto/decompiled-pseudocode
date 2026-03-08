/*
 * XREFs of ?DiscardFrame@CConnection@DirectComposition@@AEAAJ_K@Z @ 0x1C0090630
 * Callers:
 *     NtDCompositionConfirmFrame @ 0x1C008F990 (NtDCompositionConfirmFrame.c)
 *     ?SetCurrentStats@CFrameStats@CConnection@DirectComposition@@QEAA_NPEAUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z @ 0x1C0090470 (-SetCurrentStats@CFrameStats@CConnection@DirectComposition@@QEAA_NPEAUtagCOMPOSITION_CONFIRM_FRA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CConnection::DiscardFrame(DirectComposition::CConnection *this, __int64 a2)
{
  DirectComposition::CConnection *v2; // rdi
  int v4; // ebx
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = DirectComposition::CConnection::s_pSessionConnection;
  v7 = 0LL;
  v4 = -1073741275;
  v5 = *((_QWORD *)DirectComposition::CConnection::s_pSessionConnection + 23);
  if ( v5 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v5 + 32LL))(v5, a2, &v7);
    if ( v4 >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v2 + 23) + 24LL))(*((_QWORD *)v2 + 23), a2);
    }
  }
  return (unsigned int)v4;
}
