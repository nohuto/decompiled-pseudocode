/*
 * XREFs of ?DequeueMouseEvents@CMouseProcessor@@AEAA_KPEAURawMouseEvent@1@@Z @ 0x1C00DCE50
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C003ADD4 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0044EA0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     ?_Dequeue@CMouseQueue@CMouseProcessor@@AEAAXPEAURawMouseEvent@2@@Z @ 0x1C00DCEE4 (-_Dequeue@CMouseQueue@CMouseProcessor@@AEAAXPEAURawMouseEvent@2@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::DequeueMouseEvents(
        CMouseProcessor *this,
        struct CMouseProcessor::RawMouseEvent *a2)
{
  CInpPushLock *v2; // rbx
  unsigned __int16 *v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdi
  unsigned __int16 v9; // ax
  __int64 v10; // r14

  v2 = (CMouseProcessor *)((char *)this + 2768);
  v4 = (unsigned __int16 *)((char *)this + 72);
  RIMLockExclusive((__int64)this + 2768);
  v8 = v4[1345];
  v9 = v4[1345];
  if ( v9 )
  {
    v10 = v4[1345];
    do
    {
      CMouseProcessor::CMouseQueue::_Dequeue((CMouseProcessor::CMouseQueue *)v4, a2);
      a2 = (struct CMouseProcessor::RawMouseEvent *)((char *)a2 + 168);
      --v10;
    }
    while ( v10 );
    v9 = v4[1345];
  }
  if ( v9 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
  CInpPushLock::UnLockExclusive(v2);
  return v8;
}
