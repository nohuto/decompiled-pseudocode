/*
 * XREFs of NtUserGetInteractiveControlDeviceInfo @ 0x1C01FA000
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C00E5E60 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?GetDeviceInfo@InteractiveControlManager@@QEAAJKPEAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z @ 0x1C0251D8C (-GetDeviceInfo@InteractiveControlManager@@QEAAJKPEAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z.c)
 */

__int64 __fastcall NtUserGetInteractiveControlDeviceInfo(unsigned int a1, _OWORD *Address)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // ebx
  ULONG64 v8; // rcx
  __int64 CurrentProcessWow64Process; // rax
  InteractiveControlManager *v10; // rax
  __int128 v12; // [rsp+38h] [rbp-40h] BYREF
  __int128 v13; // [rsp+48h] [rbp-30h]
  __int64 v14; // [rsp+58h] [rbp-20h]

  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  EnterSharedCrit(0LL, 1LL);
  v7 = 0;
  if ( Address )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v5);
    ProbeForWrite(Address, 0x28uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
    v10 = InteractiveControlManager::Instance();
    if ( (int)InteractiveControlManager::GetDeviceInfo(v10, a1, (struct tagINTERACTIVECTRL_DEVICE_INFO *)&v12) >= 0 )
    {
      v8 = MmUserProbeAddress;
      if ( (unsigned __int64)Address >= MmUserProbeAddress )
        Address = (_OWORD *)MmUserProbeAddress;
      *Address = v12;
      Address[1] = v13;
      *((_QWORD *)Address + 4) = v14;
      v7 = 1;
    }
  }
  else
  {
    UserSetLastError(87LL, v4, v6);
  }
  UserSessionSwitchLeaveCrit(v8);
  return v7;
}
