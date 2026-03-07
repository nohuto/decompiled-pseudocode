__int64 __fastcall PopRequestPowerIrp(__int64 a1, char a2, int a3, int a4, __int64 a5, char a6, PIRP Irp)
{
  volatile __int64 *p_Type; // rbp
  char v11; // cl
  __int64 result; // rax
  __int64 v13; // r8
  IRP *v14; // rdi
  __int64 v15; // rsi
  union _IRP::$::$::$665C8370128C04AB892B069E6FB086E8::$8B5CD6CDFBAAB114E6B0B83ED2C2A4E9 *p_CurrentStackLocation; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v18; // rbp
  __int64 v19; // rcx
  __int64 v20; // rdx
  signed __int32 v21; // eax
  signed __int32 v22; // ett
  __int64 v23; // rcx
  char v24; // al
  __int64 v25; // rcx
  __int64 v26; // [rsp+60h] [rbp-28h] BYREF

  v26 = 0LL;
  p_Type = (volatile __int64 *)&Irp->Type;
  if ( Irp )
    _InterlockedExchange64((volatile __int64 *)&Irp->Type, 0LL);
  Irp = 0LL;
  if ( !a2 )
    goto LABEL_6;
  if ( (unsigned __int8)(a2 - 2) > 1u )
    return 3221225712LL;
  if ( (_BYTE)PopCurrentBroadcast )
    v11 = 1;
  else
LABEL_6:
    v11 = 0;
  result = PopAllocateIrp(a1, a3, v11, a6, a4, a5, (__int64)&Irp, (__int64)&v26);
  if ( (int)result >= 0 && (_DWORD)result != 259 )
  {
    v14 = Irp;
    if ( Irp )
    {
      v15 = v26;
      p_CurrentStackLocation = (union _IRP::$::$::$665C8370128C04AB892B069E6FB086E8::$8B5CD6CDFBAAB114E6B0B83ED2C2A4E9 *)&Irp->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&PopRequestCompletion;
      CurrentStackLocation[-1].Context = (PVOID)v15;
      CurrentStackLocation[-1].Control = -32;
      if ( p_Type )
      {
        _InterlockedExchange64(p_Type, (__int64)v14);
        v14 = Irp;
        v15 = v26;
      }
      v18 = p_CurrentStackLocation->CurrentStackLocation;
      if ( a2 )
      {
        v18[-1].Parameters.Create.Options = 1;
        v18[-1].Parameters.Read.ByteOffset.LowPart = a3;
        if ( (_BYTE)PopCurrentBroadcast )
        {
          v25 = *(_QWORD *)(v15 + 200);
          if ( !v25 || (unsigned int)PopFxGetDeviceDStateReason(v25) == 1 )
          {
            LOBYTE(v13) = 1;
            v18[-1].Parameters.Create.EaLength = PopMapInternalActionToIrpAction(
                                                   DWORD2(PopCurrentBroadcast),
                                                   WORD2(PopCurrentBroadcast) >> 12,
                                                   v13);
            v18[-1].Parameters.Read.Length = DWORD1(PopCurrentBroadcast);
          }
        }
        if ( (xmmword_140D1EAD0 & 0x8000) != 0 )
          PopLogNotifyDevice(a1, 0LL, v14);
        v19 = *(_QWORD *)(v15 + 200);
        if ( !v19 || a2 != 2 || PopFxNotifyPreDIrpIssue(v19, (__int64)v14) )
          PopQueueQuerySetIrp(v14);
      }
      else
      {
        v20 = *(_QWORD *)(v15 + 200);
        if ( v20 )
        {
          _m_prefetchw((const void *)(v20 + 32));
          v21 = *(_DWORD *)(v20 + 32);
          do
          {
            v22 = v21;
            v21 = _InterlockedCompareExchange((volatile signed __int32 *)(v20 + 32), v21, v21);
          }
          while ( v22 != v21 );
          v23 = v26;
          v24 = v21 & 1;
          *(_BYTE *)(v26 + 208) = v24;
          v24 ^= 1u;
          *(_BYTE *)(v23 + 209) = v24;
          p_CurrentStackLocation = *(union _IRP::$::$::$665C8370128C04AB892B069E6FB086E8::$8B5CD6CDFBAAB114E6B0B83ED2C2A4E9 **)(v15 + 200);
          if ( v24 )
          {
            PopPepDeviceWaitWake((__int64)p_CurrentStackLocation[7].CurrentStackLocation, 0, v13);
          }
          else
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&p_CurrentStackLocation[30] + 1, 0xFFFFFFFF) == 1 )
              KeSetEvent((PRKEVENT)&p_CurrentStackLocation[31], 0, 0);
            *(_QWORD *)(v15 + 200) = 0LL;
          }
          v14 = Irp;
        }
        v18[-1].Parameters.Read.Length = a3;
        PopDiagTraceIrpStart(p_CurrentStackLocation, v14);
        IofCallDriverSpecifyReturn(v18[-1].DeviceObject, (ULONG_PTR)v14);
      }
      return 259LL;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
