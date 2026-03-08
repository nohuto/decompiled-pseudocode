/*
 * XREFs of SeSetSessionIdTokenWithLinked @ 0x1409C66C0
 * Callers:
 *     <none>
 * Callees:
 *     SepReferenceTokenByHandle @ 0x140247A20 (SepReferenceTokenByHandle.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     SepDeReferenceLogonSessionDirect @ 0x1402BE52C (SepDeReferenceLogonSessionDirect.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     SeSetSessionIdToken @ 0x140743440 (SeSetSessionIdToken.c)
 *     SepReferenceLogonSessionSilo @ 0x140773DF8 (SepReferenceLogonSessionSilo.c)
 */

__int64 __fastcall SeSetSessionIdTokenWithLinked(void *a1, ULONG a2, __int64 a3, __int64 a4)
{
  void *v5; // rsi
  int v6; // ebx
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v8; // rdi
  PERESOURCE v9; // rdx
  void *v10; // r14
  _QWORD *v12; // [rsp+40h] [rbp-20h] BYREF
  _QWORD *v13; // [rsp+48h] [rbp-18h] BYREF
  __int64 v14; // [rsp+50h] [rbp-10h] BYREF
  POWNER_ENTRY OwnerTable; // [rsp+A0h] [rbp+40h] BYREF
  PVOID Object; // [rsp+A8h] [rbp+48h] BYREF

  Object = 0LL;
  v5 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v6 = SepReferenceTokenByHandle(a1, 8u, KeGetCurrentThread()->PreviousMode, a4, &Object, &OwnerTable, &v14);
  if ( v6 < 0 )
  {
    v8 = (PERESOURCE *)Object;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v8 = (PERESOURCE *)Object;
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(v8[6], 1u);
    if ( *((_BYTE *)v8 + 204) )
    {
      v6 = -1073741525;
      goto LABEL_13;
    }
    v6 = SepReferenceLogonSessionSilo(
           &v8[27]->SystemResourcesList.Blink,
           *(_QWORD *)&v8[27][1].OwnerEntry.0,
           (__int64 *)&v12);
    if ( v6 >= 0 )
    {
      v9 = v8[27];
      v10 = (void *)v12[6];
      OwnerTable = v9->OwnerTable;
      if ( OwnerTable )
      {
        v6 = SepReferenceLogonSessionSilo(&OwnerTable, *(_QWORD *)&v9[1].OwnerEntry.0, (__int64 *)&v13);
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
    ExReleaseResourceLite(v8[6]);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ObfDereferenceObjectWithTag(Object, 0x74726853u);
  }
  if ( v12 )
    SepDeReferenceLogonSessionDirect(v12);
  if ( v13 )
    SepDeReferenceLogonSessionDirect(v13);
  return (unsigned int)v6;
}
