/*
 * XREFs of NtClearEvent @ 0x140668DB0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     KeResetEvent @ 0x140344C50 (KeResetEvent.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     ExpResetCrossVmEvent @ 0x14095CA28 (ExpResetCrossVmEvent.c)
 */

NTSTATUS __cdecl NtClearEvent(HANDLE EventHandle)
{
  KPROCESSOR_MODE PreviousMode; // bp
  NTSTATUS v3; // eax
  struct _DMA_ADAPTER *v4; // rbx
  NTSTATUS v5; // edi
  NTSTATUS v7; // eax
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF
  PVOID v9; // [rsp+60h] [rbp+18h] BYREF

  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v3 = ObReferenceObjectByHandle(EventHandle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
  v4 = (struct _DMA_ADAPTER *)Object;
  v5 = v3;
  if ( v3 < 0 )
  {
    if ( v3 == -1073741788 )
    {
      if ( ExCrossVmEventObjectType )
      {
        v9 = 0LL;
        v7 = ObReferenceObjectByHandle(EventHandle, 2u, ExCrossVmEventObjectType, PreviousMode, &v9, 0LL);
        v4 = (struct _DMA_ADAPTER *)v9;
        v5 = v7;
        if ( v7 >= 0 )
          v5 = ExpResetCrossVmEvent(v9, 0LL);
      }
    }
  }
  else
  {
    KeResetEvent((PRKEVENT)Object);
  }
  if ( v4 )
    HalPutDmaAdapter(v4);
  return v5;
}
