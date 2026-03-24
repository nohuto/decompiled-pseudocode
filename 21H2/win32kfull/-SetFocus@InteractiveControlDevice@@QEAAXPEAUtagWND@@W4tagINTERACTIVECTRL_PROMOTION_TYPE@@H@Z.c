/*
 * XREFs of ?SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z @ 0x1C02581F8
 * Callers:
 *     ?ClearDeviceFocus@InteractiveControlManager@@QEAAJK@Z @ 0x1C0251C44 (-ClearDeviceFocus@InteractiveControlManager@@QEAAJK@Z.c)
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C02525A8 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND@@@Z @ 0x1C0252CB4 (-SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C0256DD4 (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 * Callees:
 *     ?GetPreviousInputReport@InteractiveControlDevice@@QEAAHPEAU_LIST_ENTRY@@PEAPEAVInteractiveControlInput@@@Z @ 0x1C0257368 (-GetPreviousInputReport@InteractiveControlDevice@@QEAAHPEAU_LIST_ENTRY@@PEAPEAVInteractiveContro.c)
 *     ?QueueInput@InteractiveControlDevice@@QEAAXPEAU_LIST_ENTRY@@PEAVInteractiveControlInput@@@Z @ 0x1C0257C70 (-QueueInput@InteractiveControlDevice@@QEAAXPEAU_LIST_ENTRY@@PEAVInteractiveControlInput@@@Z.c)
 *     ?SetMessagePromotionType@InteractiveControlDevice@@IEAAXW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C0258448 (-SetMessagePromotionType@InteractiveControlDevice@@IEAAXW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z.c)
 *     ?SetTargetWindow@InteractiveControlDevice@@IEAAXPEAUtagWND@@@Z @ 0x1C02584A4 (-SetTargetWindow@InteractiveControlDevice@@IEAAXPEAUtagWND@@@Z.c)
 *     ??0InteractiveControlInput@@QEAA@PEAVInteractiveControlDevice@@@Z @ 0x1C025856C (--0InteractiveControlInput@@QEAA@PEAVInteractiveControlDevice@@@Z.c)
 *     ?GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I@Z @ 0x1C0258710 (-GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@.c)
 */

void __fastcall InteractiveControlDevice::SetFocus(__int64 a1, struct tagWND *a2, unsigned int a3, int a4)
{
  struct _LIST_ENTRY *v4; // rdi
  __int64 v9; // rax
  struct InteractiveControlInput *v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rax
  InteractiveControlInput *v13; // rax
  InteractiveControlInput *v14; // r15
  void *v15; // rcx
  InteractiveControlInput *v16; // rax
  struct _LIST_ENTRY *v17; // r14
  struct InteractiveControlInput *v18; // [rsp+50h] [rbp+8h] BYREF

  v18 = 0LL;
  v4 = (struct _LIST_ENTRY *)(a1 + 16);
  if ( *(_DWORD *)(a1 + 364) && *(_QWORD *)(a1 + 368) )
    v4 = *(struct _LIST_ENTRY **)(a1 + 368);
  if ( a2 != *(struct tagWND **)(a1 + 40) )
  {
    if ( (unsigned int)InteractiveControlDevice::GetPreviousInputReport(
                         (InteractiveControlDevice *)a1,
                         v4,
                         (struct _LIST_ENTRY **)&v18) )
    {
      if ( a2 )
        v9 = *(_QWORD *)a2;
      else
        v9 = 0LL;
      v10 = v18;
      v11 = *((_QWORD *)v18 + 2);
      if ( v11 == v9 )
        goto LABEL_21;
      v12 = ValidateHwnd(v11);
      if ( v12 )
        InteractiveControlInput::GenerateMessages(v10, v12, *(unsigned int *)(a1 + 64), 16LL);
      v13 = (InteractiveControlInput *)Win32AllocPool(96LL, 1819440195LL);
      if ( v13 )
        v14 = InteractiveControlInput::InteractiveControlInput(v13, (struct InteractiveControlDevice *)a1);
      else
        v14 = 0LL;
      *(_OWORD *)((char *)v14 + 52) = *(_OWORD *)((char *)v10 + 52);
      *(_QWORD *)((char *)v14 + 68) = *(_QWORD *)((char *)v10 + 68);
      *((_DWORD *)v14 + 19) = *((_DWORD *)v10 + 19);
      InteractiveControlDevice::QueueInput((InteractiveControlDevice *)a1, v4, (struct _LIST_ENTRY *)v14);
      v15 = v14;
    }
    else
    {
      v16 = (InteractiveControlInput *)Win32AllocPool(96LL, 1819440195LL);
      if ( v16 )
        v17 = (struct _LIST_ENTRY *)InteractiveControlInput::InteractiveControlInput(
                                      v16,
                                      (struct InteractiveControlDevice *)a1);
      else
        v17 = 0LL;
      InteractiveControlDevice::QueueInput((InteractiveControlDevice *)a1, v4, v17);
      v15 = v17;
    }
    InteractiveControlInput::GenerateMessages(v15, a2, a3, 8LL);
LABEL_21:
    InteractiveControlDevice::SetTargetWindow((InteractiveControlDevice *)a1, a2);
  }
  if ( a4 )
  {
    if ( a3 != *(_DWORD *)(a1 + 64) )
      InteractiveControlDevice::SetMessagePromotionType(a1, a3);
  }
}
