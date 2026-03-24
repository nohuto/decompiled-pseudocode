/*
 * XREFs of UserDetachQueueFromInputWindow @ 0x1C00F2C08
 * Callers:
 *     UserDetachQueueFromInputWindowApiExt @ 0x1C00F2BF0 (UserDetachQueueFromInputWindowApiExt.c)
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C003883C (IsWindowBeingDestroyed.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C004EFF4 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C006B8B8 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C00EF434 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     ?DetachInputQueue@CInputQueueProp@@QEAAXPEAVIInputQueue@@@Z @ 0x1C00F2C98 (-DetachInputQueue@CInputQueueProp@@QEAAXPEAVIInputQueue@@@Z.c)
 */

void __fastcall UserDetachQueueFromInputWindow(unsigned __int64 a1, struct IInputQueue *a2)
{
  __int64 v4; // rcx
  CWindowProp *v5; // rbx
  int v6; // [rsp+40h] [rbp+18h] BYREF
  CWindowProp *v7; // [rsp+48h] [rbp+20h] BYREF

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
        if ( !*((_DWORD *)v5 + 6) )
          CWindowProp::RemoveAndDeleteProp(v5);
      }
    }
  }
  if ( !v6 )
    UserSessionSwitchLeaveCrit(v4);
}
