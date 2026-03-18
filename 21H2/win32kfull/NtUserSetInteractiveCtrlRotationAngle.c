/*
 * XREFs of NtUserSetInteractiveCtrlRotationAngle @ 0x1C01FD5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C010C048 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?SetDeviceComponentResolution@InteractiveControlManager@@QEAAJKW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C024FB40 (-SetDeviceComponentResolution@InteractiveControlManager@@QEAAJKW4_INTERACTIVECTRL_COMPONENT_TYPE.c)
 */

__int64 __fastcall NtUserSetInteractiveCtrlRotationAngle(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int v5; // ebx
  unsigned int v6; // esi
  unsigned int v7; // edi
  struct InteractiveControlManager *v8; // rax
  __int64 v9; // rcx
  int v11; // [rsp+48h] [rbp+10h] BYREF

  v5 = a3;
  v6 = a2;
  v7 = a1;
  EnterSharedCrit(a1, a2, a3);
  v11 = v5;
  if ( v6 - 1 > 7 )
    v6 = 3;
  v8 = InteractiveControlManager::Instance();
  InteractiveControlManager::SetDeviceComponentResolution(v8, v7, v6, a4, &v11);
  UserSessionSwitchLeaveCrit(v9);
  return 1LL;
}
