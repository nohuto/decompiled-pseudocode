/*
 * XREFs of ?RetireFrame@CConnection@DirectComposition@@AEAAJ_KAEBUtagCOMPOSITION_STATS@@@Z @ 0x1C02134D0
 * Callers:
 *     ?SetCurrentStats@CFrameStats@CConnection@DirectComposition@@QEAA_NPEAUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z @ 0x1C0081A9C (-SetCurrentStats@CFrameStats@CConnection@DirectComposition@@QEAA_NPEAUtagCOMPOSITION_CONFIRM_FRA.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CConnection::RetireFrame(
        DirectComposition::CConnection *this,
        __int64 a2,
        const struct tagCOMPOSITION_STATS *a3)
{
  DirectComposition::CConnection *v3; // rdi
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-48h] BYREF
  int v11; // [rsp+28h] [rbp-40h] BYREF
  int v12; // [rsp+2Ch] [rbp-3Ch]
  int v13; // [rsp+30h] [rbp-38h]
  __int128 v14; // [rsp+34h] [rbp-34h]
  int v15; // [rsp+44h] [rbp-24h]

  v3 = DirectComposition::CConnection::s_pSessionConnection;
  v10 = 0LL;
  v6 = -1073741275;
  v7 = *((_QWORD *)DirectComposition::CConnection::s_pSessionConnection + 23);
  if ( v7 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v7 + 32LL))(v7, a2, &v10);
    if ( v6 >= 0 )
    {
      v11 = *(_DWORD *)a3;
      v12 = *((_DWORD *)a3 + 2);
      v13 = v12;
      v8 = *((_QWORD *)a3 + 2);
      v14 = 0LL;
      *(_QWORD *)((char *)&v14 + 4) = v8;
      v15 = 0;
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v10 + 24LL))(v10, &v11);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v3 + 23) + 24LL))(*((_QWORD *)v3 + 23), a2);
    }
  }
  return (unsigned int)v6;
}
