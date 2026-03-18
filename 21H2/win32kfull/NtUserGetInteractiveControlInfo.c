/*
 * XREFs of NtUserGetInteractiveControlInfo @ 0x1C01F4C40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C010C048 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C024F350 (-GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z.c)
 */

__int64 __fastcall NtUserGetInteractiveControlInfo(__int64 a1, _OWORD *a2, __int64 a3)
{
  _OWORD *v3; // rdi
  unsigned int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 CurrentProcessWow64Process; // rax
  InteractiveControlManager *v9; // rax
  ULONG64 v10; // rcx
  __int128 v12; // [rsp+48h] [rbp-30h] BYREF
  __int64 v13; // [rsp+58h] [rbp-20h]
  int v14; // [rsp+60h] [rbp-18h]

  v3 = a2;
  v4 = a1;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0;
  EnterSharedCrit(a1, a2, a3);
  v7 = 0;
  if ( v4 && v3 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v6);
    ProbeForWrite(v3, 0x1CuLL, CurrentProcessWow64Process != 0 ? 1 : 4);
    v9 = InteractiveControlManager::Instance();
    if ( (int)InteractiveControlManager::GetReportInfo(
                v9,
                (unsigned __int16)v4,
                HIWORD(v4),
                (struct tagINTERACTIVECTRL_INFO *)&v12) >= 0 )
    {
      v10 = MmUserProbeAddress;
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (_OWORD *)MmUserProbeAddress;
      *v3 = v12;
      *((_QWORD *)v3 + 2) = v13;
      *((_DWORD *)v3 + 6) = v14;
      v7 = 1;
    }
  }
  else
  {
    UserSetLastError(87LL, v5);
  }
  UserSessionSwitchLeaveCrit(v10);
  return v7;
}
