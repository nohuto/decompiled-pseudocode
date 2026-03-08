/*
 * XREFs of ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00779D0
 * Callers:
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C0076074 (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 * Callees:
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C004F93C (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     HMUnlockObject @ 0x1C0072980 (HMUnlockObject.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x1C00785AC (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     ?Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z @ 0x1C00868AC (-Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z.c)
 *     HMRemoveHandleForObjectWorker @ 0x1C00897F0 (HMRemoveHandleForObjectWorker.c)
 *     EtwTraceUserDestroyHandle @ 0x1C00898A4 (EtwTraceUserDestroyHandle.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     HMCleanupGrantedHandle @ 0x1C0153858 (HMCleanupGrantedHandle.c)
 */

void __fastcall HMDestroyUnlockedObjectWorkerAtomic(struct _HANDLEENTRY *a1)
{
  int v2; // r15d
  __int64 v3; // rbp
  struct _HANDLEENTRY *v4; // r14
  _QWORD **v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  unsigned int EtwUserHandleType; // eax
  char v10; // al
  void *v11; // rcx
  int v12; // [rsp+60h] [rbp+8h] BYREF
  int v13; // [rsp+68h] [rbp+10h]

  if ( !gbInDestroyHandleTableObjects && !AtomicExecutionCheck::GetCount() )
  {
    v12 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3492LL);
  }
  LOBYTE(v12) = 0;
  IdentifyPrimaryDestroyTarget::Identify((IdentifyPrimaryDestroyTarget *)&v12, a1);
  v2 = gcInHMDestroyUnlockedObjectWorker;
  v3 = 0LL;
  v4 = gphePrimaryDestroyTarget;
  v5 = (_QWORD **)gpKernelHandleTable;
  ++gcInHMDestroyUnlockedObjectWorker;
  v6 = a1 - qword_1C02D0E08;
  *((_BYTE *)a1 + 25) |= 2u;
  v7 = *((unsigned __int8 *)a1 + 24);
  v8 = 3LL * (unsigned int)(v6 >> 5);
  if ( (_BYTE)v7 == 19 || (_BYTE)v7 == 22 )
  {
    EtwUserHandleType = GetEtwUserHandleType(v7);
    EtwTraceUserDestroyHandle(*v5[v8], EtwUserHandleType, 0LL);
    if ( (*((_BYTE *)a1 + 25) & 0x20) != 0 )
    {
      HMCleanupGrantedHandle(*v5[v8]);
      *((_BYTE *)a1 + 25) &= ~0x20u;
    }
    v10 = *((_BYTE *)a1 + 24);
    if ( v10 == 19 )
    {
      v11 = (void *)v5[v8][4];
    }
    else
    {
      if ( v10 != 22 )
      {
LABEL_24:
        HMRemoveHandleForObjectWorker(a1);
        goto LABEL_7;
      }
      v3 = v5[v8][2];
      v11 = *(void **)(v3 + 32);
    }
    ObfDereferenceObject(v11);
    goto LABEL_24;
  }
  (*(&gahti + 3 * v7))((ULONG_PTR)v5[3 * (unsigned int)(v6 >> 5)]);
LABEL_7:
  if ( !gbInDestroyHandleTableObjects && v3 )
    HMUnlockObject(v3);
  gcInHMDestroyUnlockedObjectWorker = v2;
  if ( v4 )
  {
    if ( gphePrimaryDestroyTarget != v4 )
    {
      v13 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3583LL);
    }
    gphePrimaryDestroyTarget = v4;
  }
  if ( (_BYTE)v12 )
    gphePrimaryDestroyTarget = 0LL;
}
