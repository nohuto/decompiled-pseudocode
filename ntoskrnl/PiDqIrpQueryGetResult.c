/*
 * XREFs of PiDqIrpQueryGetResult @ 0x1407480E0
 * Callers:
 *     PiDqDispatch @ 0x140745C20 (PiDqDispatch.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     PiDqQuerySerializeActionQueue @ 0x140746290 (PiDqQuerySerializeActionQueue.c)
 *     PiDqIrpComplete @ 0x140746C78 (PiDqIrpComplete.c)
 *     PiDqQueryGetNextIoctlInfo @ 0x14074715C (PiDqQueryGetNextIoctlInfo.c)
 *     PiDqQueryFreeActiveData @ 0x1407910F8 (PiDqQueryFreeActiveData.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 */

__int64 __fastcall PiDqIrpQueryGetResult(__int64 a1)
{
  int v2; // ebx
  _QWORD *v3; // r13
  char v4; // al
  int *v5; // r14
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v7; // rdi
  int v8; // eax
  unsigned int *v9; // r14
  struct _KTHREAD *v10; // rcx
  struct _KTHREAD *v11; // rax
  unsigned int v12; // eax
  struct _KTHREAD *v14; // rax
  int v15; // [rsp+30h] [rbp-78h]
  __int64 *BugCheckParameter2; // [rsp+38h] [rbp-70h]
  __int64 v17; // [rsp+40h] [rbp-68h]
  int *v18; // [rsp+40h] [rbp-68h]
  _OWORD v19[5]; // [rsp+58h] [rbp-50h] BYREF
  char v20; // [rsp+B8h] [rbp+10h]
  unsigned int v21; // [rsp+C0h] [rbp+18h] BYREF
  unsigned int v22; // [rsp+C8h] [rbp+20h] BYREF

  v2 = 0;
  v17 = *(_QWORD *)(a1 + 184);
  v3 = *(_QWORD **)(*(_QWORD *)(v17 + 48) + 32LL);
  v15 = *(_DWORD *)(v17 + 24);
  v4 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v19[0] = 0LL;
  v5 = (int *)(v3 + 27);
  if ( v3 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v7 = (ULONG_PTR)(v3 + 8);
    BugCheckParameter2 = v3 + 8;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v3 + 8), 0LL);
    v8 = *v5;
    if ( (*v5 & 8) != 0 )
    {
      v2 = -1073741536;
      goto LABEL_7;
    }
    if ( (v8 & 4) != 0 )
    {
      if ( (v8 & 1) != 0 )
      {
        v2 = -1073741670;
LABEL_7:
        ExReleasePushLockEx(v3 + 8, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        if ( v2 >= 0 )
        {
          v9 = (unsigned int *)(v17 + 8);
          v18 = (int *)v9;
          if ( *v9 < 0x10 )
          {
            v2 = -1073741789;
          }
          else
          {
            if ( v15 == 4653063 )
            {
              ProbeForWrite(*(volatile void **)(a1 + 112), *v9, 8u);
              v7 = (ULONG_PTR)(v3 + 8);
              v5 = (int *)(v3 + 27);
              v2 = PiDqQuerySerializeActionQueue((__int64)v3, *(_QWORD *)(a1 + 112), *v18, (int *)&v21, &v22);
              if ( v2 >= 0 )
              {
                v10 = KeGetCurrentThread();
                --v10->KernelApcDisable;
                ExAcquirePushLockExclusiveEx((ULONG_PTR)BugCheckParameter2, 0LL);
                PiDqQueryGetNextIoctlInfo((__int64)v3, *v18, v22, v19);
                ExReleasePushLockEx(BugCheckParameter2, 0LL);
                KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              }
              goto LABEL_12;
            }
            if ( *(_QWORD *)(a1 + 24) )
            {
              v14 = KeGetCurrentThread();
              --v14->KernelApcDisable;
              ExAcquirePushLockExclusiveEx((ULONG_PTR)(v3 + 8), 0LL);
              if ( !v3[23] && (_QWORD *)v3[24] == v3 + 24 && (*(_DWORD *)(v3[3] + 40LL) & 1) != 0 )
              {
                _InterlockedExchange64((volatile __int64 *)(a1 + 104), (__int64)PiDqIrpCancel);
                if ( *(_BYTE *)(a1 + 68) )
                {
                  v2 = -1073741536;
                }
                else
                {
                  v3[22] = a1;
                  *(_BYTE *)(*(_QWORD *)(a1 + 184) + 3LL) |= 1u;
                  v2 = 259;
                }
              }
              else
              {
                PiDqQueryGetNextIoctlInfo((__int64)v3, *v9, 0, v19);
                v21 = 16;
              }
              ExReleasePushLockEx(v3 + 8, 0LL);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            }
            else
            {
              v2 = -1073741811;
            }
          }
          v5 = (int *)(v3 + 27);
        }
LABEL_12:
        v4 = v20;
        goto LABEL_13;
      }
      if ( (v8 & 0x10) == 0 )
      {
        *v5 = v8 | 0x10;
        v20 = 1;
        goto LABEL_7;
      }
    }
    v2 = -1073741637;
    goto LABEL_7;
  }
  v2 = -1073741637;
  v7 = 64LL;
LABEL_13:
  if ( v2 != 259 )
  {
    if ( v4 )
    {
      v11 = KeGetCurrentThread();
      --v11->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v7, 0LL);
      v12 = *v5 & 0xFFFFFFEF;
      *v5 = v12;
      if ( v2 < 0 )
      {
        *v5 = v12 | 1;
        PiDqQueryFreeActiveData(v3);
      }
      ExReleasePushLockEx((__int64 *)v7, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
    PiDqIrpComplete((IRP *)a1, v2, v21, v19);
  }
  return (unsigned int)v2;
}
