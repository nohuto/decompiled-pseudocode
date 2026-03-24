/*
 * XREFs of ?UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z @ 0x1C0257F14
 * Callers:
 *     ?FlushBufferedInput@InteractiveControlDevice@@QEAAXI@Z @ 0x1C0256CC8 (-FlushBufferedInput@InteractiveControlDevice@@QEAAXI@Z.c)
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x1C02574D0 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C00E5B10 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?ClearBackgroundAccessors@InteractiveControlManager@@QEAAJK@Z @ 0x1C0251590 (-ClearBackgroundAccessors@InteractiveControlManager@@QEAAJK@Z.c)
 *     ?ClearDeviceFocus@InteractiveControlManager@@QEAAJK@Z @ 0x1C0251684 (-ClearDeviceFocus@InteractiveControlManager@@QEAAJK@Z.c)
 *     ?SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND@@@Z @ 0x1C02526F4 (-SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND.c)
 */

struct tagWND *__fastcall InteractiveControlDevice::UpdateInputTarget(InteractiveControlDevice *this, int a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 v5; // rax
  struct InteractiveControlManager *v6; // rax
  InteractiveControlManager *v7; // rax
  int v8; // edx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rcx
  InteractiveControlManager *v13; // rax
  int v14; // edx
  __int64 v15; // r8
  __int64 v16; // r9

  v2 = *((_QWORD *)this + 6);
  v3 = 0LL;
  if ( v2 && (a2 & *((_DWORD *)this + 14)) != 0 )
  {
    v5 = *(_QWORD *)(v2 + 40);
    if ( *(char *)(v5 + 20) < 0 || *(char *)(v5 + 19) < 0 )
    {
      v7 = InteractiveControlManager::Instance();
      InteractiveControlManager::ClearBackgroundAccessors(v7, v8, v9, v10);
    }
    else
    {
      v6 = InteractiveControlManager::Instance();
      InteractiveControlManager::SetDeviceFocus((__int64)v6, 0, 0LL, v2);
    }
  }
  v11 = *((_QWORD *)this + 5);
  if ( v11 )
  {
    v12 = *(_QWORD *)(v11 + 40);
    if ( *(char *)(v12 + 20) < 0 || *(char *)(v12 + 19) < 0 )
    {
      v13 = InteractiveControlManager::Instance();
      InteractiveControlManager::ClearDeviceFocus(v13, v14, v15, v16);
    }
    else
    {
      return (struct tagWND *)*((_QWORD *)this + 5);
    }
  }
  return (struct tagWND *)v3;
}
