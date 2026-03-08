/*
 * XREFs of DpiFdoConnectInterrupt @ 0x1C01F0E70
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01F17F0 (DpiFdoStartAdapter.c)
 * Callees:
 *     memset @ 0x1C0027640 (memset.c)
 *     DpiFdoGetInterruptIrql @ 0x1C01F0F98 (DpiFdoGetInterruptIrql.c)
 *     DpiLdaGetInterruptIrqlForChain @ 0x1C03A38A0 (DpiLdaGetInterruptIrqlForChain.c)
 */

__int64 __fastcall DpiFdoConnectInterrupt(_QWORD *a1)
{
  __int64 v1; // rdi
  __int64 v3; // r14
  int InterruptIrqlForChain; // eax
  unsigned int v5; // ebx
  unsigned __int8 v7; // bl
  NTSTATUS v8; // eax
  _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int8 v10; // [rsp+90h] [rbp+20h] BYREF

  v1 = a1[8];
  v10 = 0;
  v3 = *(_QWORD *)(v1 + 40);
  if ( *(_DWORD *)(v1 + 504) )
    InterruptIrqlForChain = DpiLdaGetInterruptIrqlForChain(a1, &v10);
  else
    InterruptIrqlForChain = DpiFdoGetInterruptIrql(*(_QWORD *)(v1 + 1288), &v10);
  v5 = InterruptIrqlForChain;
  if ( InterruptIrqlForChain < 0 )
  {
    if ( !*(_BYTE *)(v1 + 480)
      && !*(_BYTE *)(v1 + 2695)
      && !*(_BYTE *)(v1 + 1159)
      && !*(_BYTE *)(v1 + 2696)
      && !*(_BYTE *)(v1 + 2692)
      && !*(_BYTE *)(v1 + 2697) )
    {
      WdLogSingleEntry1(2LL, InterruptIrqlForChain);
    }
    return v5;
  }
  memset(&Parameters, 0, sizeof(Parameters));
  if ( *(_QWORD *)(v3 + 184) )
  {
    v7 = v10;
    WdLogSingleEntry1(4LL, v10);
    Parameters.FullySpecified.PhysicalDeviceObject = *(PDEVICE_OBJECT *)(v1 + 152);
    Parameters.FullySpecified.InterruptObject = (PKINTERRUPT *)(v1 + 1368);
    Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)DpiFdoMessageInterruptRoutine;
    Parameters.FullySpecified.SpinLock = *(PKSPIN_LOCK *)(v1 + 1456);
    Parameters.MessageBased.FallBackServiceRoutine = (PKSERVICE_ROUTINE)DpiFdoLineInterruptRoutine;
    Parameters.Version = 3;
    Parameters.FullySpecified.ServiceContext = a1;
    *(_WORD *)&Parameters.MessageBased.SynchronizeIrql = v7;
    v8 = IoConnectInterruptEx(&Parameters);
    v5 = v8;
    if ( v8 < 0 )
    {
      WdLogSingleEntry1(2LL, v8);
      if ( v5 == -1073741275 )
        return (unsigned int)-1073741823;
    }
    else
    {
      *(_DWORD *)(v1 + 1360) = Parameters.Version;
      *(_QWORD *)(v1 + 1376) = *Parameters.FullySpecified.InterruptObject;
    }
    return v5;
  }
  if ( *(_BYTE *)(v1 + 1154) )
    return 3221226021LL;
  WdLogSingleEntry1(2LL, (int)v5);
  return 3221225473LL;
}
