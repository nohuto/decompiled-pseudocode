/*
 * XREFs of NtQueryEvent @ 0x140692760
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1406CD560 (ProbeForWrite.c)
 *     ExpQueryCrossVmEvent @ 0x14095C960 (ExpQueryCrossVmEvent.c)
 */

NTSTATUS __cdecl NtQueryEvent(
        HANDLE EventHandle,
        EVENT_INFORMATION_CLASS EventInformationClass,
        PVOID EventInformation,
        ULONG EventInformationLength,
        PULONG ReturnLength)
{
  KPROCESSOR_MODE PreviousMode; // r12
  PULONG v8; // rdi
  __int64 v9; // rcx
  NTSTATUS v10; // eax
  int v11; // esi
  struct _DMA_ADAPTER *v12; // r14
  int v14; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object; // [rsp+38h] [rbp-30h] BYREF
  PVOID v16; // [rsp+40h] [rbp-28h] BYREF
  PVOID v17; // [rsp+48h] [rbp-20h]
  int v18; // [rsp+78h] [rbp+10h] BYREF

  v18 = 0;
  v14 = 0;
  if ( EventInformationClass )
    return -1073741821;
  if ( EventInformationLength != 8 )
    return -1073741820;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(EventInformation, 8uLL, 4u);
    v8 = ReturnLength;
    if ( ReturnLength )
    {
      v9 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v9 = (__int64)ReturnLength;
      *(_DWORD *)v9 = *(_DWORD *)v9;
    }
  }
  else
  {
    v8 = ReturnLength;
  }
  Object = 0LL;
  v10 = ObReferenceObjectByHandle(EventHandle, 1u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
  v11 = v10;
  v12 = (struct _DMA_ADAPTER *)Object;
  v17 = Object;
  LODWORD(Object) = v10;
  if ( v10 < 0 )
  {
    if ( v10 == -1073741788 )
    {
      if ( ExCrossVmEventObjectType )
      {
        v16 = 0LL;
        v11 = ObReferenceObjectByHandle(EventHandle, 1u, ExCrossVmEventObjectType, PreviousMode, &v16, 0LL);
        v12 = (struct _DMA_ADAPTER *)v16;
        v17 = v16;
        LODWORD(Object) = v11;
        if ( v11 >= 0 )
        {
          v11 = ExpQueryCrossVmEvent(v16, &v18, &v14);
          LODWORD(Object) = v11;
        }
      }
    }
  }
  else
  {
    v14 = *(_DWORD *)(&v12->Size + 1);
    v18 = v12->Version & 0x7F;
  }
  if ( v11 >= 0 )
  {
    if ( PreviousMode )
    {
      *(_DWORD *)EventInformation = v18;
      *((_DWORD *)EventInformation + 1) = v14;
      if ( v8 )
        *v8 = 8;
    }
    else
    {
      *(_DWORD *)EventInformation = v18;
      *((_DWORD *)EventInformation + 1) = v14;
      if ( v8 )
        *v8 = 8;
    }
  }
  if ( v12 )
    HalPutDmaAdapter(v12);
  return v11;
}
