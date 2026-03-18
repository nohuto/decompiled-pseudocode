/*
 * XREFs of ?HMDestroyUnlockedObjectWorkerAtomic@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00305C8
 * Callers:
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C0030704 (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 * Callees:
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C0029C98 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x1C002DB2C (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     HMUnlockObject @ 0x1C0038FB0 (HMUnlockObject.c)
 *     ?Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z @ 0x1C004E740 (-Identify@IdentifyPrimaryDestroyTarget@@AEAAXPEAU_HANDLEENTRY@@@Z.c)
 *     HMRemoveHandleForObjectWorker @ 0x1C0050550 (HMRemoveHandleForObjectWorker.c)
 *     EtwTraceUserDestroyHandle @ 0x1C0050604 (EtwTraceUserDestroyHandle.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     HMCleanupGrantedHandle @ 0x1C0141578 (HMCleanupGrantedHandle.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall HMDestroyUnlockedObjectWorkerAtomic(struct _HANDLEENTRY *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // r15d
  __int64 v6; // rdi
  struct _HANDLEENTRY *v7; // rbp
  _QWORD **v8; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int EtwUserHandleType; // eax
  char v17; // al
  void *v18; // rcx
  char v19; // [rsp+40h] [rbp+8h] BYREF

  if ( !gbInDestroyHandleTableObjects && !(unsigned int)AtomicExecutionCheck::GetCount() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  v19 = 0;
  IdentifyPrimaryDestroyTarget::Identify((IdentifyPrimaryDestroyTarget *)&v19, a1);
  v5 = gcInHMDestroyUnlockedObjectWorker;
  v6 = 0LL;
  v7 = gphePrimaryDestroyTarget;
  v8 = (_QWORD **)gpKernelHandleTable;
  ++gcInHMDestroyUnlockedObjectWorker;
  v9 = a1 - qword_1C0294B68;
  *((_BYTE *)a1 + 25) |= 2u;
  v10 = *((unsigned __int8 *)a1 + 24);
  v11 = 3LL * (unsigned int)(v9 >> 5);
  if ( (_BYTE)v10 == 19 || (_BYTE)v10 == 22 )
  {
    EtwUserHandleType = GetEtwUserHandleType(v10);
    EtwTraceUserDestroyHandle(*v8[v11], EtwUserHandleType, 0LL);
    if ( (*((_BYTE *)a1 + 25) & 0x20) != 0 )
    {
      HMCleanupGrantedHandle(*v8[v11]);
      *((_BYTE *)a1 + 25) &= ~0x20u;
    }
    v17 = *((_BYTE *)a1 + 24);
    if ( v17 == 19 )
    {
      v18 = (void *)v8[v11][4];
    }
    else
    {
      if ( v17 != 22 )
      {
LABEL_24:
        HMRemoveHandleForObjectWorker(a1);
        goto LABEL_7;
      }
      v6 = v8[v11][2];
      v18 = *(void **)(v6 + 32);
    }
    ObfDereferenceObject(v18);
    goto LABEL_24;
  }
  (*(&gahti + 3 * v10))((ULONG_PTR)v8[3 * (unsigned int)(v9 >> 5)]);
LABEL_7:
  if ( !gbInDestroyHandleTableObjects && v6 )
    HMUnlockObject(v6, v12, v14, v15);
  gcInHMDestroyUnlockedObjectWorker = v5;
  if ( v7 )
  {
    if ( gphePrimaryDestroyTarget != v7 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
    gphePrimaryDestroyTarget = v7;
  }
  if ( v19 )
    gphePrimaryDestroyTarget = 0LL;
}
