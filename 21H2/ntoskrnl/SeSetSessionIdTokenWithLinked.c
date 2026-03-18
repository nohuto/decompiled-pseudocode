/*
 * XREFs of SeSetSessionIdTokenWithLinked @ 0x1409C6320
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     SepDeReferenceLogonSessionDirect @ 0x1402D6A98 (SepDeReferenceLogonSessionDirect.c)
 *     SepReferenceTokenByHandle @ 0x1402F8F70 (SepReferenceTokenByHandle.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     SepReferenceLogonSessionSilo @ 0x14066B900 (SepReferenceLogonSessionSilo.c)
 *     SeSetSessionIdToken @ 0x1407530D0 (SeSetSessionIdToken.c)
 */

__int64 __fastcall SeSetSessionIdTokenWithLinked(void *a1, ULONG a2, __int64 a3, int a4)
{
  void *v5; // rsi
  int v6; // ebx
  struct _KTHREAD *CurrentThread; // rax
  PVOID v8; // rdi
  __int64 v9; // rdx
  void *v10; // r14
  _QWORD *v12; // [rsp+40h] [rbp-20h] BYREF
  _QWORD *v13; // [rsp+48h] [rbp-18h] BYREF
  __int64 v14; // [rsp+50h] [rbp-10h] BYREF
  __int64 v15; // [rsp+A0h] [rbp+40h] BYREF
  PVOID Object; // [rsp+A8h] [rbp+48h] BYREF

  Object = 0LL;
  v5 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v6 = SepReferenceTokenByHandle(a1, 8u, KeGetCurrentThread()->PreviousMode, a4, &Object, &v15, &v14);
  if ( v6 < 0 )
  {
    v8 = Object;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v8 = Object;
    ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
    if ( *((_BYTE *)v8 + 204) )
    {
      v6 = -1073741525;
      goto LABEL_13;
    }
    v6 = SepReferenceLogonSessionSilo(
           (_DWORD *)(*((_QWORD *)v8 + 27) + 8LL),
           *(_QWORD *)(*((_QWORD *)v8 + 27) + 160LL),
           (__int64 *)&v12);
    if ( v6 >= 0 )
    {
      v9 = *((_QWORD *)v8 + 27);
      v10 = (void *)v12[6];
      v15 = *(_QWORD *)(v9 + 16);
      if ( v15 )
      {
        v6 = SepReferenceLogonSessionSilo(&v15, *(_QWORD *)(v9 + 160), (__int64 *)&v13);
        if ( v6 < 0 )
          goto LABEL_13;
        v5 = (void *)v13[6];
      }
      if ( !v10 || (v6 = SeSetSessionIdToken(v10, a2), v6 >= 0) )
      {
        if ( v5 )
          v6 = SeSetSessionIdToken(v5, a2);
      }
    }
  }
LABEL_13:
  if ( v8 )
  {
    ExReleaseResourceLite(*((PERESOURCE *)v8 + 6));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    ObfDereferenceObjectWithTag(Object, 0x74726853u);
  }
  if ( v12 )
    SepDeReferenceLogonSessionDirect(v12);
  if ( v13 )
    SepDeReferenceLogonSessionDirect(v13);
  return (unsigned int)v6;
}
