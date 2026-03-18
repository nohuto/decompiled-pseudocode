/*
 * XREFs of HMAllocObjectEx @ 0x1C002D20C
 * Callers:
 *     HMAllocObject @ 0x1C002DC20 (HMAllocObject.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C004EC08 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C0050970 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 *     ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C0068314 (-CreateMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     UserCreateBaseWindowHandle @ 0x1C0166410 (UserCreateBaseWindowHandle.c)
 * Callees:
 *     UserIsUserCritSecInExclusive @ 0x1C002A1D0 (UserIsUserCritSecInExclusive.c)
 *     IS_USERCRIT_OWNED_SHARED @ 0x1C002C87C (IS_USERCRIT_OWNED_SHARED.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x1C002DB2C (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     ?HMAllocateUserOrIsolatedType@@YAPEAX_KGE@Z @ 0x1C00307E4 (-HMAllocateUserOrIsolatedType@@YAPEAX_KGE@Z.c)
 *     ?HMFreeUserOrIsolatedType@@YAXGEPEAX@Z @ 0x1C0030D58 (-HMFreeUserOrIsolatedType@@YAXGEPEAX@Z.c)
 *     ?HMAllocateIsolatedType@@YAPEAXE@Z @ 0x1C0030E00 (-HMAllocateIsolatedType@@YAPEAXE@Z.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     EtwTraceUserCreateHandle @ 0x1C004DFE0 (EtwTraceUserCreateHandle.c)
 *     ?HMGrowHandleTable@@YAHXZ @ 0x1C0057420 (-HMGrowHandleTable@@YAHXZ.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C006D270 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     LockObjectAssignment @ 0x1C00983D0 (LockObjectAssignment.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C0150614 (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall HMAllocObjectEx(__int64 a1, __int64 a2, unsigned __int8 a3, unsigned int a4, int a5)
{
  SIZE_T v5; // rbx
  _QWORD *v6; // rsi
  __int64 v7; // r13
  void (__fastcall __noreturn **v8)(ULONG_PTR); // r8
  unsigned __int16 v9; // r12
  SIZE_T v10; // rdx
  int v11; // r8d
  PVOID v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned __int8 v15; // di
  _QWORD *v16; // r14
  __int64 v17; // r15
  char *v18; // rdi
  bool v19; // cc
  __int64 v20; // rsi
  bool v21; // zf
  __int64 v22; // r12
  char *v23; // rax
  int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // eax
  unsigned int ProcessId; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  _QWORD *v32; // rcx
  __int64 v33; // rax
  void *v34; // rdi
  __int64 v35; // rcx
  unsigned int v36; // eax
  unsigned __int64 v37; // rdx
  int v38; // r8d
  PVOID v39; // rbx
  __int64 v40; // rdi
  _BYTE *v41; // rax
  PVOID v42; // rsi
  __int64 Pool2; // rdi
  __int64 v44; // rcx
  char *Heap; // rax
  __int64 v46; // rax
  char v47; // si
  __int64 v48; // rax
  char v49; // si
  __int64 v50; // rax
  char EtwUserHandleType; // al
  int v52; // ecx
  int v53; // r8d
  __int16 v54; // [rsp+4Ah] [rbp-BEh]
  int v55; // [rsp+4Ch] [rbp-BCh]
  __int64 *v56; // [rsp+50h] [rbp-B8h]
  __int64 v57; // [rsp+58h] [rbp-B0h]
  __int64 v58; // [rsp+60h] [rbp-A8h]
  PVOID BackTrace[20]; // [rsp+68h] [rbp-A0h] BYREF
  PVOID v60[26]; // [rsp+108h] [rbp+0h] BYREF
  __int64 v61; // [rsp+1E8h] [rbp+E0h]
  __int64 v62; // [rsp+1F0h] [rbp+E8h]

  v62 = a2;
  v61 = a1;
  v5 = a4;
  v6 = (_QWORD *)a2;
  v7 = a3;
  v58 = 0LL;
  v55 = 0;
  if ( !gbInDestroyHandleTableObjects )
  {
    if ( !UserIsUserCritSecInExclusive()
      && (!IS_USERCRIT_OWNED_SHARED() || !tagDomLock::IsLockedExclusive((tagDomLock *)&gDomainHandleManagerLock)) )
    {
      __int2c();
    }
    a1 = v61;
  }
  v8 = &gahti;
  v57 = 3 * v7;
  v9 = *((_WORD *)&gahti + 12 * v7 + 6);
  v54 = v9 & 3;
  if ( (v9 & 3) != 0 )
  {
    a2 = *(_QWORD *)(a1 + 424);
    v58 = a2;
    if ( *(_DWORD *)(a2 + 68) >= gUserProcessHandleQuota )
    {
LABEL_85:
      v44 = 1158LL;
LABEL_89:
      UserSetLastError(v44, a2, v8);
      return 0LL;
    }
  }
  while ( 1 )
  {
    if ( (_BYTE)v7 != 1 && qword_1C0294A90 )
    {
      v56 = &qword_1C0294A90;
      goto LABEL_9;
    }
    if ( qword_1C0294A88 )
      break;
    if ( !(unsigned int)HMGrowHandleTable() )
      goto LABEL_85;
  }
  v56 = &qword_1C0294A88;
LABEL_9:
  if ( (v9 & 0x10) == 0 || !v6 )
  {
    if ( (v9 & 0x40) == 0 )
    {
      if ( v6 || (v55 = 1, (v9 & 0x20) == 0) )
        v55 = 0;
      if ( (v9 & 0x200) != 0 )
      {
        v15 = a3;
        v14 = (__int64)HMAllocateIsolatedType(a3);
LABEL_19:
        a2 = 0LL;
        if ( v14 )
        {
          if ( v15 != 1 )
          {
LABEL_21:
            if ( (v9 & 0x100) != 0 )
            {
              LockObjectAssignment(v14 + 24, v62);
              *(_QWORD *)(v14 + 32) = v14;
            }
LABEL_23:
            LOBYTE(v7) = a3;
            goto LABEL_24;
          }
          v42 = gpLeakTrackingAllocator;
          if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x64777355) != 0x64777355
            || (v50 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
          {
LABEL_81:
            Pool2 = ExAllocatePool2(261LL, 328LL);
            goto LABEL_82;
          }
          while ( *((_DWORD *)gpLeakTrackingAllocator + v50) != 1685549909 )
          {
            if ( ++v50 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
              goto LABEL_81;
          }
          Pool2 = ExAllocatePool2(261LL, 344LL);
          if ( !Pool2 )
            goto LABEL_130;
          memset(BackTrace, 0, sizeof(BackTrace));
          RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
          if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v42,
                                    Pool2,
                                    BackTrace) )
            {
              Pool2 += 16LL;
              goto LABEL_82;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v42,
                                       Pool2,
                                       BackTrace) )
          {
LABEL_82:
            *(_QWORD *)(v14 + 40) = Pool2;
            if ( !Pool2 )
            {
              HMFreeUserOrIsolatedType(v9, 1u, (void *)v14);
              v14 = 0LL;
            }
            goto LABEL_21;
          }
          ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_130:
          Pool2 = 0LL;
          goto LABEL_82;
        }
LABEL_88:
        v44 = 8LL;
        goto LABEL_89;
      }
      v10 = v5;
      v11 = *((_DWORD *)&gahti + 6 * v7 + 2);
      v12 = gpLeakTrackingAllocator;
      if ( (v11 & *((_DWORD *)gpLeakTrackingAllocator + 10)) == v11
        && (v48 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
      {
        while ( *((_DWORD *)gpLeakTrackingAllocator + v48) != v11 )
        {
          if ( ++v48 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
            goto LABEL_16;
        }
        v49 = 0;
        if ( v5 < 0x1000 || (v5 & 0xFFF) != 0 )
        {
          v49 = 1;
          v10 = v5 + 16;
        }
        v14 = ExAllocatePool2(260LL, v10);
        v13 = 0LL;
        if ( v14 )
        {
          memset(v60, 0, 0xA0uLL);
          RtlCaptureStackBackTrace(0, 0x14u, v60, 0LL);
          if ( v49 && (unsigned __int64)(v14 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v12,
                                    v14,
                                    v60) )
            {
              v14 += 16LL;
              goto LABEL_18;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v12,
                                       v14,
                                       v60) )
          {
            goto LABEL_18;
          }
          ExFreePoolWithTag((PVOID)v14, 0);
          v14 = 0LL;
          goto LABEL_18;
        }
      }
      else
      {
LABEL_16:
        v13 = ExAllocatePool2(260LL, v5);
      }
      v14 = v13;
LABEL_18:
      v15 = a3;
      goto LABEL_19;
    }
    v37 = v5;
    if ( !*((_DWORD *)&gahti + 6 * v7 + 4) )
    {
      Heap = (char *)RtlAllocateHeap(gpvSharedAlloc, 0, v5);
      v14 = (__int64)Heap;
      if ( Heap )
      {
        *((_QWORD *)Heap + 3) = 0LL;
        *((_QWORD *)Heap + 4) = 0LL;
        *((_QWORD *)Heap + 6) = Heap - (_BYTE *)gpvSharedAlloc;
        *((_QWORD *)Heap + 5) = 0LL;
        goto LABEL_25;
      }
      goto LABEL_88;
    }
    v38 = *((_DWORD *)&gahti + 6 * v7 + 2);
    v39 = gpLeakTrackingAllocator;
    if ( (v38 & *((_DWORD *)gpLeakTrackingAllocator + 10)) == v38 )
    {
      v46 = 0LL;
      if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
      {
        while ( *((_DWORD *)gpLeakTrackingAllocator + v46) != v38 )
        {
          if ( ++v46 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
            goto LABEL_75;
        }
        v47 = 0;
        if ( v37 < 0x1000 || (v37 & 0xFFF) != 0 )
        {
          v47 = 1;
          v37 += 16LL;
        }
        v40 = ExAllocatePool2(260LL, v37);
        if ( !v40 )
          goto LABEL_88;
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v47 && (unsigned __int64)(v40 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v39,
                                  v40,
                                  BackTrace) )
          {
            v40 += 16LL;
LABEL_76:
            v14 = v40;
            if ( !v40 )
              goto LABEL_88;
            goto LABEL_77;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v39,
                                     v40,
                                     BackTrace) )
        {
          v14 = v40;
LABEL_77:
          v41 = RtlAllocateHeap(gpvSharedAlloc, 0, *((unsigned int *)&gahti + 6 * v7 + 4));
          *(_QWORD *)(v40 + 40) = v41;
          if ( !v41 )
          {
            NSInstrumentation::CLeakTrackingAllocator::Free(
              (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
              (void *)v40);
            goto LABEL_88;
          }
          *(_QWORD *)(v40 + 24) = 0LL;
          *(_QWORD *)(v40 + 32) = 0LL;
          *(_QWORD *)(v40 + 48) = v41 - (_BYTE *)gpvSharedAlloc;
          goto LABEL_23;
        }
        ExFreePoolWithTag((PVOID)v40, 0);
        goto LABEL_88;
      }
    }
LABEL_75:
    v40 = ExAllocatePool2(260LL, v37);
    goto LABEL_76;
  }
  if ( qword_1C029C538 && (int)qword_1C029C538() >= 0 )
  {
    v14 = (__int64)HMAllocateUserOrIsolatedType(v5, v9, v7);
    if ( v14 )
    {
      if ( qword_1C029C540 )
        v33 = qword_1C029C540(v6, *((unsigned int *)&gahti + 6 * v7 + 4), ((_DWORD)v7 << 16) | 5u);
      else
        v33 = 0LL;
      *(_QWORD *)(v14 + 40) = v33;
      if ( v33 )
      {
        v34 = *(void **)(v14 + 24);
        ObfReferenceObject(v6);
        *(_QWORD *)(v14 + 24) = v6;
        if ( v34 )
          ObfDereferenceObject(v34);
        v35 = *(_QWORD *)(v14 + 40);
        *(_QWORD *)(v14 + 32) = v14;
        *(_QWORD *)(v14 + 48) = v35 - v6[16];
        goto LABEL_25;
      }
      HMFreeUserOrIsolatedType(v9, v7, (void *)v14);
    }
    goto LABEL_88;
  }
  v14 = 0LL;
LABEL_24:
  if ( !v14 )
    goto LABEL_88;
LABEL_25:
  v16 = gpKernelHandleTable;
  v17 = *v56;
  v18 = (char *)qword_1C0294B68 + 32 * *v56;
  v19 = (unsigned int)*v56 <= giheLast;
  v20 = 3 * *v56;
  *v56 = *((_QWORD *)gpKernelHandleTable + 3 * *v56);
  if ( !v19 )
    giheLast = v17;
  v18[24] = v7;
  v16[v20] = v14;
  if ( (v9 & 0x40) != 0 )
  {
    *(_QWORD *)v18 = *(_QWORD *)(v14 + 48);
  }
  else if ( (v9 & 0x10) != 0 && v62 )
  {
    *(_QWORD *)v18 = *(_QWORD *)(v14 + 48);
    *((_QWORD *)v18 + 2) = ***(_QWORD ***)(v62 + 8);
  }
  else
  {
    *(_QWORD *)v18 = 0LL;
  }
  if ( v55 )
    v18[25] |= 0x40u;
  if ( a5 )
    v18[25] |= 0x80u;
  if ( (v9 & 2) != 0 )
  {
    *(_DWORD *)(v14 + 16) = 0;
    v16[v20 + 1] = *(_QWORD *)(v61 + 424);
    *((_QWORD *)v18 + 1) = PsGetProcessId(**(PEPROCESS **)(v61 + 424));
    v21 = (v9 & 4) == 0;
    v22 = v61;
    if ( !v21 )
      *(_QWORD *)(v14 + 24) = *(_QWORD *)(v61 + 424);
  }
  else
  {
    v21 = (v9 & 1) == 0;
    v22 = v61;
    if ( !v21 )
    {
      v16[v20 + 1] = v61;
      *((_QWORD *)v18 + 1) = PsGetThreadId(*(PETHREAD *)v61);
      *(_QWORD *)(v14 + 16) = v16[v20 + 1];
    }
  }
  v23 = (char *)qword_1C0294B68 + v17 * (unsigned int)dword_1C0294B70;
  v24 = v17 | (*((unsigned __int16 *)v23 + 13) << 16) | 0x80000000;
  if ( v23[25] >= 0 )
    v24 = v17 | (*((unsigned __int16 *)v23 + 13) << 16);
  v25 = v24;
  *(_QWORD *)v14 = v24;
  if ( *((_DWORD *)&gahti + 2 * v57 + 4) )
  {
    v32 = *(_QWORD **)(v14 + 40);
    *v32 = v25;
    v32[1] = *(_QWORD *)(v14 + 48);
  }
  v26 = v58;
  if ( v58 )
  {
    v27 = *(_DWORD *)(v58 + 68) + 1;
    *(_DWORD *)(v58 + 68) = v27;
    if ( v27 > *(_DWORD *)(v58 + 72) )
      *(_DWORD *)(v58 + 72) = v27;
  }
  if ( ++giheCount > (unsigned int)giheCountPeak )
    giheCountPeak = giheCount;
  if ( v54 )
  {
    ProcessId = (unsigned int)PsGetProcessId(**(PEPROCESS **)(v22 + 424));
    if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000000LL) != 0 )
    {
      LOBYTE(v30) = v7;
      EtwUserHandleType = GetEtwUserHandleType(v30, v29, ProcessId & 0xFFFFFFFC);
      McTemplateK0pqqq_EtwWriteTransfer(v52, (unsigned int)&UserCreateHandle, v53, *(_QWORD *)v14, EtwUserHandleType);
    }
  }
  else
  {
    LOBYTE(v26) = v7;
    v36 = GetEtwUserHandleType(v26, &gahti, 0LL);
    EtwTraceUserCreateHandle(*(_QWORD *)v14, v36, 0LL);
  }
  v16[v20 + 2] = 0LL;
  return v16[v20];
}
