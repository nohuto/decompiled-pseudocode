/*
 * XREFs of NtImpersonateThread @ 0x140714610
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     memset @ 0x140413800 (memset.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     SeCreateClientSecurity @ 0x1406D6B30 (SeCreateClientSecurity.c)
 *     SeImpersonateClientEx @ 0x140714780 (SeImpersonateClientEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall NtImpersonateThread(HANDLE Handle, HANDLE a2, struct _SECURITY_QUALITY_OF_SERVICE *a3)
{
  KPROCESSOR_MODE PreviousMode; // di
  NTSTATUS result; // eax
  NTSTATUS v8; // edi
  struct _DMA_ADAPTER *v9; // rbx
  PVOID Object; // [rsp+38h] [rbp-80h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+40h] [rbp-78h] BYREF
  struct _SECURITY_CLIENT_CONTEXT ClientContext; // [rsp+60h] [rbp-58h] BYREF
  PVOID v13; // [rsp+D8h] [rbp+20h] BYREF

  *(_QWORD *)&ClientSecurityQos.Length = 0LL;
  *(_DWORD *)&ClientSecurityQos.ContextTrackingMode = 0;
  memset(&ClientContext, 0, sizeof(ClientContext));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && ((unsigned __int8)a3 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  ClientSecurityQos = *a3;
  Object = 0LL;
  result = ObReferenceObjectByHandle(a2, 0x200u, (POBJECT_TYPE)PsThreadType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v13 = 0LL;
    v8 = ObReferenceObjectByHandle(Handle, 0x100u, (POBJECT_TYPE)PsThreadType, PreviousMode, &v13, 0LL);
    v9 = (struct _DMA_ADAPTER *)Object;
    if ( v8 >= 0 )
    {
      v8 = SeCreateClientSecurity((PETHREAD)Object, &ClientSecurityQos, 0, &ClientContext);
      if ( v8 >= 0 )
      {
        v8 = SeImpersonateClientEx(&ClientContext, (PETHREAD)v13);
        HalPutDmaAdapter((PADAPTER_OBJECT)ClientContext.ClientToken);
      }
      HalPutDmaAdapter((PADAPTER_OBJECT)v13);
    }
    HalPutDmaAdapter(v9);
    return v8;
  }
  return result;
}
