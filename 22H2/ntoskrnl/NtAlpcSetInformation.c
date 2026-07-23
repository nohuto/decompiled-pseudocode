/*
 * XREFs of NtAlpcSetInformation @ 0x1406FF480
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402CB940 (ObfReferenceObject.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     AlpcpInitializeCompletionList @ 0x14065C270 (AlpcpInitializeCompletionList.c)
 *     AlpcpAdjustCompletionListConcurrencyCount @ 0x1406774F0 (AlpcpAdjustCompletionListConcurrencyCount.c)
 *     AlpcpFreeCompletionList @ 0x1406A6214 (AlpcpFreeCompletionList.c)
 *     AlpcpAssociateIoCompletionPort @ 0x1406FF894 (AlpcpAssociateIoCompletionPort.c)
 */

NTSTATUS __cdecl NtAlpcSetInformation(
        HANDLE PortHandle,
        ALPC_PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG Length)
{
  size_t v4; // r15
  struct _KTHREAD *CurrentThread; // rax
  int v8; // r14d
  signed int v9; // edi
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v11; // r13
  unsigned __int32 *v12; // r12
  __int32 v13; // esi
  __int32 v14; // esi
  __int32 v15; // esi
  __int32 v16; // esi
  int v17; // esi
  int v18; // esi
  int v19; // esi
  _DWORD *v20; // rdi
  volatile signed __int64 *v21; // rsi
  ULONG_PTR v22; // rcx
  _QWORD *v23; // rdi
  volatile signed __int64 *v24; // rsi
  ULONG_PTR v25; // rcx
  __int64 *v26; // rdi
  signed __int64 *v27; // rbx
  _QWORD *v28; // rsi
  volatile signed __int64 *v29; // rdi
  char *v30; // rdx
  __m128i v31; // xmm0
  signed int v32; // eax
  KPROCESSOR_MODE v34; // [rsp+30h] [rbp-C8h]
  PVOID Object; // [rsp+38h] [rbp-C0h] BYREF
  unsigned __int32 *v36; // [rsp+40h] [rbp-B8h]
  HANDLE Handle; // [rsp+48h] [rbp-B0h]
  unsigned __int32 *v38; // [rsp+50h] [rbp-A8h]
  _QWORD v39[10]; // [rsp+60h] [rbp-98h] BYREF

  v4 = Length;
  Handle = PortHandle;
  v36 = (unsigned __int32 *)PortInformation;
  memset(v39, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = 0;
  if ( PortHandle
    && (v36
     || PortInformationClass == AlpcUnregisterCompletionListInformation
     || PortInformationClass == AlpcCompletionListRundownInformation) )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    v34 = PreviousMode;
    v11 = (__int64)v36;
    v12 = v36;
    v38 = v36;
    if ( (_DWORD)v4 && PreviousMode )
    {
      if ( (unsigned int)v4 > 0x48 )
      {
        v9 = -1073741820;
        goto LABEL_65;
      }
      if ( (unsigned __int64)v36 >= 0x7FFFFFFF0000LL )
        v11 = 0x7FFFFFFF0000LL;
      v36 = (unsigned __int32 *)v11;
      memmove(v39, (const void *)v11, v4);
      v12 = (unsigned __int32 *)v39;
      v38 = (unsigned __int32 *)v39;
    }
    Object = 0LL;
    v9 = ObReferenceObjectByHandle(Handle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
    if ( v9 < 0 )
      goto LABEL_65;
    v13 = PortInformationClass - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 3;
        if ( !v15 )
        {
          v9 = (_DWORD)v4 != 16 ? 0xC000000D : 0;
          goto LABEL_64;
        }
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 1;
          if ( v17 )
          {
            v18 = v17 - 1;
            if ( !v18 )
            {
              if ( (_DWORD)v4 == 4 && *v12 )
              {
                v26 = (__int64 *)Object;
                v27 = (signed __int64 *)((char *)Object + 352);
                ExAcquirePushLockSharedEx((ULONG_PTR)Object + 352, 0LL);
                if ( v26[45] )
                {
                  AlpcpAdjustCompletionListConcurrencyCount(v26, *v12);
                  v9 = 0;
                }
                else
                {
                  v9 = -1073741811;
                }
                if ( _InterlockedCompareExchange64(v27, 0LL, 17LL) != 17 )
                  ExfReleasePushLockShared(v27);
                v22 = (ULONG_PTR)v27;
                goto LABEL_29;
              }
LABEL_52:
              v9 = -1073741811;
              goto LABEL_64;
            }
            v19 = v18 - 1;
            if ( v19 )
            {
              if ( v19 == 1 && !(_DWORD)v4 )
              {
                v20 = Object;
                v21 = (volatile signed __int64 *)((char *)Object + 352);
                ExAcquirePushLockExclusiveEx((ULONG_PTR)Object + 352, 0LL);
                if ( *((_QWORD *)v20 + 45) )
                {
                  v20[104] &= ~0x10000u;
                  v9 = 0;
                }
                else
                {
                  v9 = -1073741811;
                }
                if ( (_InterlockedExchangeAdd64(v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock(v21);
                v22 = (ULONG_PTR)v21;
LABEL_29:
                KeAbPostRelease(v22);
LABEL_64:
                HalPutDmaAdapter((PADAPTER_OBJECT)Object);
                goto LABEL_65;
              }
              goto LABEL_52;
            }
            if ( v34 )
              goto LABEL_52;
            ObfReferenceObject(*(PVOID *)v11);
            v23 = Object;
            v24 = (volatile signed __int64 *)((char *)Object + 352);
            ExAcquirePushLockExclusiveEx((ULONG_PTR)Object + 352, 0LL);
            v23[46] = *(_QWORD *)v11;
            v23[47] = *(_QWORD *)(v11 + 8);
            if ( (_InterlockedExchangeAdd64(v24, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v24);
            v25 = (ULONG_PTR)v24;
          }
          else
          {
            if ( (_DWORD)v4 )
              goto LABEL_52;
            v28 = Object;
            v29 = (volatile signed __int64 *)((char *)Object + 352);
            ExAcquirePushLockExclusiveEx((ULONG_PTR)Object + 352, 0LL);
            if ( v28[45] )
              AlpcpFreeCompletionList((__int64)v28);
            if ( (_InterlockedExchangeAdd64(v29, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v29);
            v25 = (ULONG_PTR)v29;
          }
          KeAbPostRelease(v25);
          v9 = 0;
          goto LABEL_64;
        }
        if ( (*((_DWORD *)Object + 104) & 6) != 2 )
          goto LABEL_52;
        if ( (_DWORD)v4 == 16 )
        {
          v31 = *(__m128i *)v12;
          v12 = (unsigned __int32 *)v39;
          v30 = (char *)v31.m128i_u32[0];
          v39[0] = v31.m128i_u32[0];
          LODWORD(v39[1]) = v31.m128i_i32[1];
          *(_QWORD *)((char *)&v39[1] + 4) = _mm_srli_si128(v31, 8).m128i_u64[0];
          v8 = 1;
        }
        else
        {
          if ( (_DWORD)v4 != 24 )
            goto LABEL_52;
          v30 = *(char **)v12;
        }
        v32 = AlpcpInitializeCompletionList((__int64)Object, v30, v12[2], v12[3], v12[4], v8);
LABEL_59:
        v9 = v32;
        goto LABEL_64;
      }
      if ( (_DWORD)v4 == 16 )
      {
        v32 = AlpcpAssociateIoCompletionPort(Object, *((_QWORD *)v12 + 1), *(_QWORD *)v12);
        goto LABEL_59;
      }
    }
    else if ( (_DWORD)v4 == 72 )
    {
      if ( (*v12 & 0xFC00FFFF) == 0 )
      {
        *((_DWORD *)Object + 64) ^= (*((_DWORD *)Object + 64) ^ *v12) & 0x20000;
        goto LABEL_64;
      }
      goto LABEL_52;
    }
    v9 = -1073741820;
    goto LABEL_64;
  }
  v9 = -1073741811;
LABEL_65:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v9;
}
