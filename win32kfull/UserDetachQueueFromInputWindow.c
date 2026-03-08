/*
 * XREFs of UserDetachQueueFromInputWindow @ 0x1C00E05B8
 * Callers:
 *     UserDetachQueueFromInputWindowApiExt @ 0x1C00E05A0 (UserDetachQueueFromInputWindowApiExt.c)
 * Callees:
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C0024800 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C002B7B4 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 *     IsWindowBeingDestroyed @ 0x1C0039B60 (IsWindowBeingDestroyed.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C003C250 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     ?DetachInputQueue@CInputQueueProp@@QEAAXPEAVIInputQueue@@@Z @ 0x1C00E0648 (-DetachInputQueue@CInputQueueProp@@QEAAXPEAVIInputQueue@@@Z.c)
 */

void __fastcall UserDetachQueueFromInputWindow(int a1, struct IInputQueue *a2)
{
  __int64 v4; // rcx
  CInputQueueProp *v5; // rbx
  char v6; // [rsp+40h] [rbp+18h] BYREF
  CInputQueueProp *v7; // [rsp+48h] [rbp+20h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v6);
  v4 = HMValidateHandleNoSecure(a1, 1);
  if ( v4 )
  {
    if ( !(unsigned int)IsWindowBeingDestroyed(v4) )
    {
      v7 = 0LL;
      if ( CWindowProp::GetProp<CInputQueueProp>(v4, (__int64 *)&v7) )
      {
        v5 = v7;
        CInputQueueProp::DetachInputQueue(v7, a2);
        if ( !*((_DWORD *)v5 + 8) )
          CWindowProp::RemoveAndDeleteProp(v5);
      }
    }
  }
  if ( !v6 )
    UserSessionSwitchLeaveCrit(v4);
}
