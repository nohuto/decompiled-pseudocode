/*
 * XREFs of SeCreateClientSecurityEx @ 0x1406D5D70
 * Callers:
 *     AlpcpImpersonateMessage @ 0x1406D4C70 (AlpcpImpersonateMessage.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x140718670 (AlpcpGetEffectiveTokenMessage.c)
 *     AlpcpExposeTokenAttribute @ 0x1407CE140 (AlpcpExposeTokenAttribute.c)
 * Callees:
 *     SepReconcileTrustSidWithProcessProtection @ 0x140247C30 (SepReconcileTrustSidWithProcessProtection.c)
 *     PsGetCurrentServerSilo @ 0x140248480 (PsGetCurrentServerSilo.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402666A0 (PsReferencePrimaryTokenWithTag.c)
 *     PsIsHostSilo @ 0x14030F2E0 (PsIsHostSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     SepCreateClientSecurityEx @ 0x1406D5F10 (SepCreateClientSecurityEx.c)
 *     PsReferenceImpersonationTokenEx @ 0x1406D6630 (PsReferenceImpersonationTokenEx.c)
 *     SepUpdateSiloInClientSecurity @ 0x1409CC168 (SepUpdateSiloInClientSecurity.c)
 */

__int64 __fastcall SeCreateClientSecurityEx(__int64 a1, int a2, unsigned __int8 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 Process; // rsi
  __int64 *v10; // rbp
  int v11; // r12d
  char v12; // r13
  __int64 result; // rax
  unsigned int v14; // esi
  __int64 CurrentServerSilo; // rbx
  unsigned int v16; // ebx
  char v17; // [rsp+60h] [rbp-38h] BYREF
  char v18; // [rsp+61h] [rbp-37h] BYREF
  _BYTE v19[2]; // [rsp+62h] [rbp-36h] BYREF
  int v20; // [rsp+64h] [rbp-34h] BYREF
  __int64 v21; // [rsp+68h] [rbp-30h] BYREF
  char v22; // [rsp+A0h] [rbp+8h] BYREF

  v17 = 0;
  v20 = 0;
  v22 = 0;
  v18 = 0;
  v21 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( (struct _KTHREAD *)a1 == CurrentThread )
    Process = (__int64)CurrentThread->ApcState.Process;
  else
    Process = *(_QWORD *)(a1 + 544);
  v10 = (__int64 *)PsReferenceImpersonationTokenEx(a1, 0LL, 1665361235LL, v19, &v17, &v20, &v22);
  if ( v10 )
  {
    v12 = v17;
    v11 = 2;
  }
  else
  {
    v10 = (__int64 *)PsReferencePrimaryTokenWithTag(Process, 0x63436553u);
    v11 = 1;
    v12 = 0;
    v22 = *(_BYTE *)(Process + 2170);
  }
  SepReconcileTrustSidWithProcessProtection(v10[138], (__int64)&v22, &v18, &v21);
  result = SepCreateClientSecurityEx((_DWORD)v10, a2, a3, v11, v12, v20, 1, a1, v18, v21, a4);
  v14 = result;
  if ( (int)result < 0 || !*(_BYTE *)(a4 + 8) )
  {
    ObfDereferenceObjectWithTag(v10, 0x63436553u);
    return v14;
  }
  if ( *(PEPROCESS *)(a1 + 544) != PsInitialSystemProcess )
    return result;
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( PsIsHostSilo(CurrentServerSilo) )
    return v14;
  result = SepUpdateSiloInClientSecurity(a4, CurrentServerSilo);
  v16 = result;
  if ( (int)result < 0 )
  {
    ObfDereferenceObjectWithTag(v10, 0x63436553u);
    return v16;
  }
  return result;
}
