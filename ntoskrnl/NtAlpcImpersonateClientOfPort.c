/*
 * XREFs of NtAlpcImpersonateClientOfPort @ 0x1406D4A10
 * Callers:
 *     NtImpersonateClientOfPort @ 0x1409755F0 (NtImpersonateClientOfPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     AlpcpImpersonateMessage @ 0x1406D4C70 (AlpcpImpersonateMessage.c)
 *     AlpcpCaptureIdMessage @ 0x1406D4EB0 (AlpcpCaptureIdMessage.c)
 *     AlpcpReferenceConnectedPort @ 0x1406D4F38 (AlpcpReferenceConnectedPort.c)
 *     SeImpersonateClientEx @ 0x140773900 (SeImpersonateClientEx.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     AlpcpLookupMessage @ 0x1407CA7C0 (AlpcpLookupMessage.c)
 *     AlpcpUnlockBlob @ 0x1407CDB50 (AlpcpUnlockBlob.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x140977A1C (AlpcpEnterStateChangeEventMessageLog.c)
 */

__int64 __fastcall NtAlpcImpersonateClientOfPort(void *a1, __int64 a2, unsigned __int64 a3)
{
  void *v5; // r10
  PVOID v6; // rbx
  struct _KTHREAD *CurrentThread; // rax
  void *v8; // r13
  KPROCESSOR_MODE PreviousMode; // dl
  int v10; // r14d
  unsigned __int64 v11; // rdi
  int v12; // r15d
  BOOL v13; // r12d
  NTSTATUS v14; // esi
  int v15; // r9d
  ULONG_PTR v16; // rdi
  __int64 v18; // rax
  int Object; // [rsp+20h] [rbp-B8h]
  int v20; // [rsp+30h] [rbp-A8h] BYREF
  ULONG_PTR BugCheckParameter2[3]; // [rsp+38h] [rbp-A0h] BYREF
  struct _SECURITY_CLIENT_CONTEXT ClientContext; // [rsp+50h] [rbp-88h] BYREF
  PVOID v24; // [rsp+E8h] [rbp+10h] BYREF
  int v25; // [rsp+F8h] [rbp+20h] BYREF

  v5 = a1;
  v6 = 0LL;
  BugCheckParameter2[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v25 = 0;
  v20 = 0;
  BugCheckParameter2[1] = 0LL;
  v8 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  LOBYTE(v24) = PreviousMode;
  if ( a2 )
  {
    AlpcpCaptureIdMessage(a2, &v25, &v20);
    v10 = v25;
    if ( !v25 )
    {
LABEL_28:
      v14 = -1073741811;
      goto LABEL_11;
    }
    v5 = a1;
    PreviousMode = (char)v24;
  }
  else
  {
    v10 = v25;
  }
  v11 = a3 >> 2;
  if ( (unsigned int)(a3 >> 2) > 3 )
    goto LABEL_28;
  v12 = a3 & 1;
  v13 = (((4 * (_DWORD)v11) | 2) & (unsigned int)a3) != 0LL;
  v24 = 0LL;
  v14 = ObReferenceObjectByHandle(v5, 1u, AlpcPortObjectType, PreviousMode, &v24, 0LL);
  v6 = v24;
  if ( v14 < 0 )
    goto LABEL_11;
  if ( !v10 )
  {
    v18 = AlpcpReferenceConnectedPort(v24);
    v8 = (void *)v18;
    if ( !v18 )
    {
      v14 = -1073741790;
      goto LABEL_11;
    }
    if ( (*(_DWORD *)(v18 + 256) & 0x10000) == 0 )
    {
      v14 = -1073741790;
      goto LABEL_11;
    }
    if ( (*(_DWORD *)(v18 + 416) & 0x400) != 0 )
    {
      v14 = -1073741790;
      goto LABEL_11;
    }
    ClientContext = *(struct _SECURITY_CLIENT_CONTEXT *)(v18 + 64);
    if ( v13 )
    {
      if ( (int)v11 > ClientContext.SecurityQos.ImpersonationLevel )
      {
        v14 = -1073741790;
        goto LABEL_11;
      }
      ClientContext.SecurityQos.ImpersonationLevel = v11;
    }
    v14 = SeImpersonateClientEx(&ClientContext, 0LL);
    goto LABEL_11;
  }
  v14 = AlpcpLookupMessage((_DWORD)v24, v10, v20, v15, (__int64)BugCheckParameter2);
  if ( v14 >= 0 )
  {
    Object = v11;
    v16 = BugCheckParameter2[0];
    v14 = AlpcpImpersonateMessage((_DWORD)v6, BugCheckParameter2[0], v12, v13, Object);
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterStateChangeEventMessageLog(v16);
    AlpcpUnlockBlob(v16);
  }
LABEL_11:
  if ( v8 )
    ObfDereferenceObject(v8);
  if ( v6 )
    ObfDereferenceObject(v6);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v14;
}
