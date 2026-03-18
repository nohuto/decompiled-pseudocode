/*
 * XREFs of NtUserGetInteractiveControlDeviceInfo @ 0x1C01F4AD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C010C048 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?GetDeviceInfo@InteractiveControlManager@@QEAAJKPEAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z @ 0x1C024ED7C (-GetDeviceInfo@InteractiveControlManager@@QEAAJKPEAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z.c)
 */

__int64 __fastcall NtUserGetInteractiveControlDeviceInfo(__int64 a1, _OWORD *Address, __int64 a3)
{
  _OWORD *v3; // rdi
  unsigned int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  ULONG64 v8; // rcx
  __int64 CurrentProcessWow64Process; // rax
  InteractiveControlManager *v10; // rax
  __int128 v12; // [rsp+38h] [rbp-40h] BYREF
  __int128 v13; // [rsp+48h] [rbp-30h]
  __int64 v14; // [rsp+58h] [rbp-20h]

  v3 = Address;
  v4 = a1;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  EnterSharedCrit(a1, Address, a3);
  v7 = 0;
  if ( v3 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v6);
    ProbeForWrite(v3, 0x28uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
    v10 = InteractiveControlManager::Instance();
    if ( (int)InteractiveControlManager::GetDeviceInfo(v10, v4, (struct tagINTERACTIVECTRL_DEVICE_INFO *)&v12) >= 0 )
    {
      v8 = MmUserProbeAddress;
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (_OWORD *)MmUserProbeAddress;
      *v3 = v12;
      v3[1] = v13;
      *((_QWORD *)v3 + 4) = v14;
      v7 = 1;
    }
  }
  else
  {
    UserSetLastError(87LL, v5);
  }
  UserSessionSwitchLeaveCrit(v8);
  return v7;
}
