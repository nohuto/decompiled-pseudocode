/*
 * XREFs of ObpIncrementHandleCountEx @ 0x1407C1090
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x140696BDC (ObpInsertOrLocateNamedObject.c)
 *     ObDuplicateObject @ 0x1406ED5C0 (ObDuplicateObject.c)
 *     ObInheritObjectHandle @ 0x140706174 (ObInheritObjectHandle.c)
 *     ObCaptureObjectStateForDuplication @ 0x1407111A4 (ObCaptureObjectStateForDuplication.c)
 *     ObCompleteObjectDuplication @ 0x14071134C (ObCompleteObjectDuplication.c)
 *     ObpCreateHandle @ 0x1407C0130 (ObpCreateHandle.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     PsGetProcessServerSilo @ 0x1402637E0 (PsGetProcessServerSilo.c)
 *     PsAttachSiloToCurrentThread @ 0x1402993A0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402993C0 (PsDetachSiloFromCurrentThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     OBJECT_HEADER_TO_PROCESS_INFO @ 0x140300B7C (OBJECT_HEADER_TO_PROCESS_INFO.c)
 *     KeStackAttachProcess @ 0x14030DF10 (KeStackAttachProcess.c)
 *     PspChargeQuota @ 0x140312850 (PspChargeQuota.c)
 *     PspReturnQuota @ 0x1403148A0 (PspReturnQuota.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     SeComputeQuotaInformationSize @ 0x1406968A0 (SeComputeQuotaInformationSize.c)
 *     PsReturnSharedPoolQuota @ 0x140696A48 (PsReturnSharedPoolQuota.c)
 *     ObpDeleteNameCheck @ 0x1407D85E0 (ObpDeleteNameCheck.c)
 *     ObpLockHandleDataBaseEntry @ 0x1407D90B0 (ObpLockHandleDataBaseEntry.c)
 *     ObpUnlockHandleDatabaseEntry @ 0x1409786A0 (ObpUnlockHandleDatabaseEntry.c)
 */

__int64 __fastcall ObpIncrementHandleCountEx(
        unsigned int a1,
        __int64 a2,
        struct _KPROCESS *a3,
        __int64 a4,
        unsigned __int8 a5,
        __int16 a6,
        unsigned __int64 a7)
{
  char v7; // di
  __int64 v8; // rbp
  unsigned __int64 v9; // r14
  unsigned __int8 v10; // r13
  unsigned __int64 v11; // rbx
  __int64 v12; // rbx
  struct _KTHREAD *CurrentThread; // rax
  char v14; // dl
  _DWORD *v15; // r15
  char v16; // al
  __int64 v17; // r12
  unsigned int v18; // r10d
  unsigned int v19; // r11d
  __int64 v20; // r14
  unsigned __int64 v21; // rax
  ULONG_PTR v22; // r14
  __int64 v23; // rdi
  char v24; // r8
  int v25; // r14d
  char v26; // al
  struct _KPROCESS *v27; // rdi
  bool v28; // zf
  unsigned int v29; // r13d
  unsigned __int32 v30; // esi
  __int64 v32; // rdx
  __int64 v33; // rax
  struct _KTHREAD *v34; // rax
  unsigned int v35; // r8d
  __int64 v36; // r14
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  struct _LIST_ENTRY *v38; // rdi
  int *v39; // rax
  _DWORD *v40; // rdx
  int v41; // ecx
  _DWORD *i; // rax
  char v43; // r8
  struct _KPROCESS *v44; // rcx
  char v45; // r8
  __int64 *v46; // rbp
  char *v47; // rcx
  struct _KPROCESS *v48; // rax
  struct _KTHREAD *v49; // rax
  __int64 **v50; // rax
  struct _KTHREAD *v51; // rcx
  char v52; // [rsp+40h] [rbp-C8h]
  unsigned int v54; // [rsp+50h] [rbp-B8h] BYREF
  int v55; // [rsp+54h] [rbp-B4h] BYREF
  unsigned int v56; // [rsp+58h] [rbp-B0h]
  unsigned __int64 v57; // [rsp+60h] [rbp-A8h]
  unsigned int v58; // [rsp+68h] [rbp-A0h]
  __int64 v59; // [rsp+70h] [rbp-98h]
  __int64 v60; // [rsp+78h] [rbp-90h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-88h]
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-80h] BYREF

  v7 = a6;
  v8 = a4 - 48;
  v9 = a7;
  v56 = a1;
  v10 = 1;
  v57 = (unsigned __int8)((unsigned __int16)(a4 - 48) >> 8);
  v59 = a2;
  v11 = *(unsigned __int8 *)(a4 - 48 + 24) ^ (unsigned __int8)ObHeaderCookie ^ v57;
  v60 = a4;
  memset(&ApcState, 0, 32);
  v12 = ObTypeIndexTable[v11];
  if ( (a6 & 0x400) == 0 )
    v10 = a5;
  *(_OWORD *)&ApcState.Process = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  BugCheckParameter2 = v8 + 16;
  ExAcquirePushLockExclusiveEx(v8 + 16, 0LL);
  v14 = *(_BYTE *)(v8 + 27);
  v15 = 0LL;
  v16 = *(_BYTE *)(v8 + 26);
  v54 = 0;
  v52 = v14 & 1;
  if ( (v16 & 8) != 0 )
    v17 = v8 - ObpInfoMaskToOffset[v16 & 0xF];
  else
    v17 = 0LL;
  if ( (v14 & 1) == 0 )
    goto LABEL_17;
  *(_BYTE *)(v8 + 27) = v14 & 0xFE;
  if ( v17 )
  {
    v18 = *(_DWORD *)v17;
    v19 = *(_DWORD *)(v17 + 4);
    v58 = *(_DWORD *)v17;
    LODWORD(v57) = v19;
    if ( !a7 )
    {
      v20 = *(_QWORD *)(v8 + 40);
      if ( !v20 )
        goto LABEL_9;
      v9 = v20 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( !v9 )
        goto LABEL_9;
    }
    v25 = SeComputeQuotaInformationSize(v9, &v54);
    if ( v25 < 0 )
    {
LABEL_97:
      ExReleasePushLockEx((__int64 *)BugCheckParameter2, 0LL);
      KeLeaveCriticalRegion();
      return (unsigned int)v25;
    }
    v35 = v54;
    if ( !v54 )
      goto LABEL_54;
    if ( a3 == PsInitialSystemProcess )
    {
      *(_QWORD *)(v17 + 16) = 1LL;
      *(_DWORD *)(v17 + 8) = v35;
      goto LABEL_9;
    }
    v36 = a3[1].Affinity.StaticBitmap[27];
    if ( (int)PspChargeQuota(v36, 0LL, 1, v54) < 0 )
    {
      *(_QWORD *)(v17 + 16) = 0LL;
    }
    else
    {
      v18 = v58;
      v19 = v57;
      _InterlockedIncrement((volatile signed __int32 *)(v36 + 512));
      *(_QWORD *)(v17 + 16) = v36;
      if ( v36 )
      {
        v35 = v54;
LABEL_54:
        *(_DWORD *)(v17 + 8) = v35;
        goto LABEL_9;
      }
    }
LABEL_89:
    v25 = -1073741756;
    goto LABEL_97;
  }
  v33 = ObTypeIndexTable[*(unsigned __int8 *)(v8 + 24) ^ (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)(unsigned __int8)v57];
  v18 = *(_DWORD *)(v33 + 104);
  v19 = *(_DWORD *)(v33 + 108);
LABEL_9:
  v21 = v19;
  v57 = v19;
  v22 = v18;
  if ( a3 != PsInitialSystemProcess )
  {
    v23 = a3[1].Affinity.StaticBitmap[27];
    if ( v18 )
    {
      if ( (int)PspChargeQuota(a3[1].Affinity.StaticBitmap[27], 0LL, 1, v18) < 0 )
      {
        *(_QWORD *)(v8 + 32) = 0LL;
LABEL_86:
        if ( v17 )
        {
          v47 = *(char **)(v17 + 16);
          if ( v47 )
            PsReturnSharedPoolQuota(v47, v54, 0LL);
        }
        goto LABEL_89;
      }
      v21 = v57;
    }
    if ( v21 && (int)PspChargeQuota(v23, 0LL, 0, v21) < 0 )
    {
      if ( v22 )
        PspReturnQuota((char *)v23, 0LL, 1, v22);
      *(_QWORD *)(v8 + 32) = 0LL;
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(v23 + 512));
      *(_QWORD *)(v8 + 32) = v23;
      if ( v23 )
      {
        v7 = a6;
        goto LABEL_17;
      }
    }
    goto LABEL_86;
  }
  *(_QWORD *)(v8 + 32) = 1LL;
LABEL_17:
  v24 = *(_BYTE *)(v8 + 27);
  v25 = 0;
  v26 = v24 & 8;
  if ( (v7 & 0x20) != 0 )
  {
    if ( v26 == 0 || (v7 & 2) != 0 )
    {
      v25 = -1073741811;
      goto LABEL_97;
    }
    v43 = v24 & 8;
    if ( v43 && *(_QWORD *)OBJECT_HEADER_TO_PROCESS_INFO(v8) )
      goto LABEL_74;
    if ( *(_QWORD *)(v8 + 8) )
    {
LABEL_77:
      v25 = -1073741790;
      goto LABEL_97;
    }
    if ( v43 )
    {
LABEL_74:
      v27 = a3;
      v44 = *(struct _KPROCESS **)OBJECT_HEADER_TO_PROCESS_INFO(v8);
      if ( v44 )
      {
        v48 = 0LL;
        if ( v45 )
          v48 = v44;
        if ( v48 != a3 )
          goto LABEL_77;
      }
    }
    else
    {
      v27 = a3;
    }
    *(_QWORD *)(v8 - ObpInfoMaskToOffset[*(_BYTE *)(v8 + 26) & 0x1F]) = v27;
  }
  else
  {
    if ( v26 && *(_QWORD *)OBJECT_HEADER_TO_PROCESS_INFO(v8) )
      goto LABEL_77;
    v27 = a3;
  }
  if ( v10 && (*(_BYTE *)(v8 + 27) & 4) != 0 )
    goto LABEL_77;
  if ( !v52
    && !*(_QWORD *)(v8 + 8)
    && (*(_BYTE *)(v12 + 66) & 0x10) != 0
    && !*(_QWORD *)(v12 + 120)
    && *(_QWORD *)(v12 + 128) )
  {
    v25 = -1073741823;
    goto LABEL_97;
  }
  v28 = (*(_BYTE *)(v12 + 66) & 0x10) == 0;
  v55 = 0;
  if ( !v28 )
  {
    v25 = ObpLockHandleDataBaseEntry(v8, v27, &v55);
    if ( v25 < 0 )
      goto LABEL_97;
  }
  _InterlockedIncrement64((volatile signed __int64 *)(v8 + 8));
  if ( !*(_QWORD *)(v12 + 120) )
  {
    v29 = v56;
LABEL_26:
    if ( (*(_BYTE *)(v12 + 66) & 0x10) != 0 )
    {
      v32 = v8 - ObpInfoMaskToOffset[*(_BYTE *)(v8 + 26) & 7];
      if ( (*(_BYTE *)(v8 + 27) & 0x40) != 0 )
      {
        --*(_BYTE *)(v32 + 11);
        *(_DWORD *)(v32 + 8) ^= (*(_DWORD *)(v32 + 8) ^ (*(_DWORD *)(v32 + 8) + 1)) & 0xFFFFFF;
      }
      else
      {
        v39 = *(int **)v32;
        v40 = 0LL;
        v41 = *v39;
        for ( i = v39 + 2; v41; --v41 )
        {
          if ( *(struct _KPROCESS **)i == v27 )
          {
            if ( !v40 )
              v40 = i;
            v15 = i;
            if ( *((_BYTE *)i + 11) != 0xFF )
              break;
          }
          i += 4;
        }
        v40[2] ^= (v40[2] ^ (v40[2] + 1)) & 0xFFFFFF;
        --*((_BYTE *)v15 + 11);
      }
    }
    ExReleasePushLockEx((__int64 *)(v8 + 16), 0LL);
    KeLeaveCriticalRegion();
    if ( !v29 && (*(_BYTE *)(v8 + 26) & 1) != 0 )
    {
      v46 = (__int64 *)(v8 - 32);
      if ( v46 )
      {
        v49 = KeGetCurrentThread();
        --v49->SpecialApcDisable;
        ExAcquirePushLockExclusiveEx(v12 + 184, 0LL);
        v50 = *(__int64 ***)(v12 + 8);
        if ( *v50 != (__int64 *)v12 )
          __fastfail(3u);
        *v46 = v12;
        v46[1] = (__int64)v50;
        *v50 = v46;
        *(_QWORD *)(v12 + 8) = v46;
        ExReleasePushLockEx((__int64 *)(v12 + 184), 0LL);
        v51 = KeGetCurrentThread();
        v28 = v51->SpecialApcDisable++ == -1;
        if ( v28 && ($C71981A45BEB2B45F82C232A7085991E *)v51->ApcState.ApcListHead[0].Flink != &v51->152 )
          KiCheckForKernelApcDelivery();
      }
    }
    v30 = _InterlockedIncrement((volatile signed __int32 *)(v12 + 48));
    if ( v30 > *(_DWORD *)(v12 + 56) )
      *(_DWORD *)(v12 + 56) = v30;
    return (unsigned int)v25;
  }
  ExReleasePushLockEx((__int64 *)(v8 + 16), 0LL);
  KeLeaveCriticalRegion();
  v29 = v56;
  if ( a3 == KeGetCurrentThread()->ApcState.Process || v56 == 3 )
  {
    v25 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct _KPROCESS *, __int64, __int64, int))(v12 + 120))(
            v56,
            a5,
            a3,
            v60,
            v59,
            v55);
  }
  else
  {
    ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo((__int64)a3);
    v38 = PsAttachSiloToCurrentThread(ProcessServerSilo);
    KeStackAttachProcess(a3, &ApcState);
    v25 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct _KPROCESS *, __int64, __int64, int))(v12 + 120))(
            v29,
            a5,
            a3,
            v60,
            v59,
            v55);
    KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
    PsDetachSiloFromCurrentThread(v38);
  }
  v34 = KeGetCurrentThread();
  --v34->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v8 + 16, 0LL);
  if ( v25 >= 0 )
  {
    v27 = a3;
    goto LABEL_26;
  }
  if ( (*(_BYTE *)(v12 + 66) & 0x10) != 0 )
    ObpUnlockHandleDatabaseEntry(v8, a3);
  _InterlockedDecrement64((volatile signed __int64 *)(v8 + 8));
  ExReleasePushLockEx((__int64 *)(v8 + 16), 0LL);
  KeLeaveCriticalRegion();
  ObpDeleteNameCheck(v8);
  return (unsigned int)v25;
}
