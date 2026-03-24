/*
 * XREFs of ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C004264C
 * Callers:
 *     ThreadUnlock1 @ 0x1C002E4A0 (ThreadUnlock1.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0033190 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     DestroyThreadsObjects @ 0x1C0033370 (DestroyThreadsObjects.c)
 *     HMUnlockObjectInternal @ 0x1C0045640 (HMUnlockObjectInternal.c)
 *     HMUnlockObjectWorker @ 0x1C0045770 (HMUnlockObjectWorker.c)
 *     ThreadUnlockWorker1 @ 0x1C007DE70 (ThreadUnlockWorker1.c)
 *     HMDestroyUnlockedObject @ 0x1C00C0AB0 (HMDestroyUnlockedObject.c)
 * Callees:
 *     HMRemoveHandleForObjectWorker @ 0x1C0008458 (HMRemoveHandleForObjectWorker.c)
 *     EtwTraceUserDestroyHandle @ 0x1C000850C (EtwTraceUserDestroyHandle.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x1C00334BC (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0042954 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00429A0 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMUnlockObjectWorker @ 0x1C0045770 (HMUnlockObjectWorker.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     HMCleanupGrantedHandle @ 0x1C0113CB8 (HMCleanupGrantedHandle.c)
 */

void __fastcall HMDestroyUnlockedObjectWorker(struct _HANDLEENTRY *a1)
{
  _QWORD **v2; // r14
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rsi
  char EtwUserHandleType; // al
  char v8; // al
  void *v9; // rcx
  char v10; // [rsp+30h] [rbp+8h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v10);
  v2 = (_QWORD **)gpKernelHandleTable;
  v3 = a1 - qword_1C024FD58;
  v4 = 0LL;
  *((_BYTE *)a1 + 25) |= 2u;
  v5 = *((unsigned __int8 *)a1 + 24);
  v6 = 3LL * (unsigned int)(v3 >> 5);
  if ( (_BYTE)v5 == 19 || (_BYTE)v5 == 22 )
  {
    EtwUserHandleType = GetEtwUserHandleType(v5);
    EtwTraceUserDestroyHandle(*v2[v6], EtwUserHandleType, 0);
    if ( (*((_BYTE *)a1 + 25) & 0x20) != 0 )
    {
      HMCleanupGrantedHandle(*v2[v6]);
      *((_BYTE *)a1 + 25) &= ~0x20u;
    }
    v8 = *((_BYTE *)a1 + 24);
    if ( v8 == 19 )
    {
      v9 = (void *)v2[v6][4];
    }
    else
    {
      if ( v8 != 22 )
      {
LABEL_15:
        HMRemoveHandleForObjectWorker((__int64)a1);
        goto LABEL_4;
      }
      v4 = v2[v6][2];
      v9 = *(void **)(v4 + 32);
    }
    ObfDereferenceObject(v9);
    goto LABEL_15;
  }
  (*(&gahti + 3 * v5))((ULONG_PTR)v2[3 * (unsigned int)(v3 >> 5)]);
LABEL_4:
  if ( !gbInDestroyHandleTableObjects && v4 )
    HMUnlockObjectWorker(v4);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v10);
}
