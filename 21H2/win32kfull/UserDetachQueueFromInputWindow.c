/*
 * XREFs of UserDetachQueueFromInputWindow @ 0x1C010E3C8
 * Callers:
 *     UserDetachQueueFromInputWindowApiExt @ 0x1C010E3B0 (UserDetachQueueFromInputWindowApiExt.c)
 * Callees:
 *     ?DetachInputQueue@CInputQueueProp@@QEAAXPEAVIInputQueue@@@Z @ 0x1C0001D54 (-DetachInputQueue@CInputQueueProp@@QEAAXPEAVIInputQueue@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00791A0 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     IsWindowBeingDestroyed @ 0x1C0083884 (IsWindowBeingDestroyed.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C00B3CFC (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C00FF5E0 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 */

void __fastcall UserDetachQueueFromInputWindow(int a1, struct IInputQueue *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  CInputQueueProp *v6; // rbx
  int v7; // [rsp+40h] [rbp+18h] BYREF
  CInputQueueProp *v8; // [rsp+48h] [rbp+20h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v7);
  v4 = HMValidateHandleNoSecure(a1, 1);
  if ( v4 )
  {
    if ( !(unsigned int)IsWindowBeingDestroyed(v4) )
    {
      v8 = 0LL;
      if ( CWindowProp::GetProp<CInputQueueProp>(v4, (__int64 *)&v8) )
      {
        v6 = v8;
        CInputQueueProp::DetachInputQueue(v8, a2, v5);
        if ( !*((_DWORD *)v6 + 8) )
          CWindowProp::RemoveAndDeleteProp(v6);
      }
    }
  }
  if ( !v7 )
    UserSessionSwitchLeaveCrit(v4);
}
