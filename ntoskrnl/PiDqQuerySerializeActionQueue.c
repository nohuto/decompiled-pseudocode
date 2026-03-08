/*
 * XREFs of PiDqQuerySerializeActionQueue @ 0x140746290
 * Callers:
 *     PiDqIrpQueryCreate @ 0x140745F08 (PiDqIrpQueryCreate.c)
 *     PiDqIrpQueryGetResult @ 0x1407480E0 (PiDqIrpQueryGetResult.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     PiDqActionDataCreate @ 0x140746614 (PiDqActionDataCreate.c)
 *     PiDqQueryActionQueueEntryFree @ 0x140746890 (PiDqQueryActionQueueEntryFree.c)
 *     PiDqActionDataFree @ 0x1407468D4 (PiDqActionDataFree.c)
 *     PiDqQueryGetObjectManager @ 0x140746CE4 (PiDqQueryGetObjectManager.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140746D28 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqQuerySerializeActionQueue(__int64 a1, __int64 a2, int a3, int *a4, _DWORD *a5)
{
  int v7; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v9; // r15
  int v10; // ebx
  struct _ERESOURCE *ObjectManager; // rax
  struct _KTHREAD *v12; // rax
  struct _KTHREAD *v13; // rax
  _QWORD *v14; // rax
  __int64 *v15; // rbx
  __int64 v16; // rcx
  struct _KTHREAD *v18; // rax
  _QWORD v19[3]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v20; // [rsp+48h] [rbp-60h] BYREF
  int v21; // [rsp+50h] [rbp-58h]
  int v22; // [rsp+54h] [rbp-54h]
  PVOID P; // [rsp+58h] [rbp-50h]
  __int64 v24; // [rsp+60h] [rbp-48h]
  PVOID v25; // [rsp+B8h] [rbp+10h] BYREF
  int *v26; // [rsp+C8h] [rbp+20h]

  v26 = a4;
  v7 = 0;
  v19[0] = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  v20 = a2;
  v21 = a3;
  v22 = 16;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = (__int64 *)(a1 + 64);
  v19[1] = a1 + 64;
  ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
  v10 = *(_DWORD *)(a1 + 216);
  ExReleasePushLockEx(v9, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( (v10 & 0x20) == 0 )
  {
    ObjectManager = (struct _ERESOURCE *)PiDqQueryGetObjectManager(a1);
    v7 = PiDqObjectManagerEnumerateAndRegisterQuery(ObjectManager);
  }
  if ( v7 < 0 )
  {
LABEL_30:
    *a4 = 0;
    *a5 = 0;
  }
  else
  {
    v7 = MesEncodeIncrementalHandleCreate(&v20, PiDqSerializationAlloc, &PiDqSerializationWrite, v19);
    if ( v7 >= 0 )
    {
      v7 = MesIncrementalHandleReset(v19[0], &v20, 0LL, 0LL, 0LL, *(_DWORD *)(a1 + 216) & 2);
      if ( v7 >= 0 )
      {
        *a4 = v22;
        *a5 = 0;
        v12 = KeGetCurrentThread();
        --v12->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v9, 0LL);
        v19[2] = a1 + 184;
        v25 = *(PVOID *)(a1 + 184);
        *(_QWORD *)(a1 + 184) = 0LL;
        ExReleasePushLockEx(v9, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        do
        {
          if ( v25 )
          {
            NdrMesTypeEncode3(v19[0], "TP 3\a", &off_140001BD0, &off_140C02F08, 1, &v25);
            if ( BYTE5(v24) )
            {
              v7 = -1073741819;
              goto LABEL_30;
            }
            if ( BYTE4(v24) )
            {
              v18 = KeGetCurrentThread();
              --v18->KernelApcDisable;
              ExAcquirePushLockExclusiveEx((ULONG_PTR)v9, 0LL);
              *(_QWORD *)(a1 + 184) = v25;
              v25 = 0LL;
              ExReleasePushLockEx(v9, 0LL);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              *a5 = v24 + 16;
              break;
            }
            *a4 = v22;
            PiDqActionDataFree(v25);
            v25 = 0LL;
          }
          v13 = KeGetCurrentThread();
          --v13->KernelApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)v9, 0LL);
          v14 = (_QWORD *)(a1 + 192);
          v15 = *(__int64 **)(a1 + 192);
          if ( v15 == (__int64 *)(a1 + 192) )
          {
            ExReleasePushLockEx(v9, 0LL);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            break;
          }
          v16 = *v15;
          if ( (_QWORD *)v15[1] != v14 || *(__int64 **)(v16 + 8) != v15 )
            __fastfail(3u);
          *v14 = v16;
          *(_QWORD *)(v16 + 8) = v14;
          --*(_DWORD *)(a1 + 208);
          ExReleasePushLockEx(v9, 0LL);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          v7 = PiDqActionDataCreate(*(_QWORD *)(a1 + 24), a1 + 32, v15, &v25);
          PiDqQueryActionQueueEntryFree(v15);
          if ( v7 == -1073741772 )
            v7 = 0;
        }
        while ( v7 >= 0 );
      }
    }
    if ( v7 < 0 )
      goto LABEL_30;
  }
  if ( v25 )
    PiDqActionDataFree(v25);
  if ( P )
    ExFreePoolWithTag(P, 0x58706E50u);
  if ( v19[0] )
    MesHandleFree();
  return (unsigned int)v7;
}
