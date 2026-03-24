/*
 * XREFs of HMAllocObject @ 0x1C0032C10
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0008658 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C0069760 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 *     ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C00B3B10 (-CreateMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     UserAddBaseWindowHandle @ 0x1C0138E20 (UserAddBaseWindowHandle.c)
 * Callees:
 *     ?HMAllocateUserOrIsolatedType@@YAPEAX_KGE@Z @ 0x1C0027D98 (-HMAllocateUserOrIsolatedType@@YAPEAX_KGE@Z.c)
 *     ?HMAllocateIsolatedType@@YAPEAXE@Z @ 0x1C0028380 (-HMAllocateIsolatedType@@YAPEAXE@Z.c)
 *     Win32AllocPoolZInit @ 0x1C0028440 (Win32AllocPoolZInit.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0029550 (Win32AllocPoolWithQuotaZInit.c)
 *     ?HMFreeUserOrIsolatedType@@YAXGEPEAX@Z @ 0x1C002AD84 (-HMFreeUserOrIsolatedType@@YAXGEPEAX@Z.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C00300B0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x1C00334BC (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 *     ?HMGrowHandleTable@@YAHXZ @ 0x1C0069844 (-HMGrowHandleTable@@YAHXZ.c)
 *     EtwTraceUserCreateHandle @ 0x1C006A76C (EtwTraceUserCreateHandle.c)
 *     LockObjectAssignment @ 0x1C0085950 (LockObjectAssignment.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C0125FD8 (McTemplateK0pqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall HMAllocObject(__int64 a1, __int64 a2, unsigned __int8 a3, unsigned int a4)
{
  __int64 v4; // rsi
  size_t v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // r14
  unsigned __int16 v9; // bx
  __int64 *v10; // r15
  size_t v11; // rbp
  unsigned int v12; // edi
  _QWORD *v13; // rdi
  __int64 v14; // r12
  char *v15; // r15
  bool v16; // cc
  __int64 *v17; // r14
  __int64 v18; // r8
  HANDLE ProcessId; // rax
  unsigned __int64 v20; // rdx
  unsigned int v21; // eax
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 result; // rax
  HANDLE ThreadId; // rax
  unsigned __int64 *v26; // rcx
  __int64 (__fastcall *v27)(_QWORD, _QWORD, _QWORD); // rax
  void *v28; // r14
  __int64 v29; // rcx
  unsigned int v30; // eax
  _BYTE *Heap; // rax
  void *v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rax
  char EtwUserHandleType; // al
  int v36; // ecx
  int v37; // r8d
  BOOL v38; // [rsp+44h] [rbp-54h]
  __int64 v39; // [rsp+48h] [rbp-50h]
  __int64 *v40; // [rsp+50h] [rbp-48h]

  v4 = 0LL;
  v5 = a4;
  v6 = a1;
  v7 = a3;
  v38 = 0;
  GetDomainLockRef(14);
  v39 = 24 * v7;
  v9 = *((_WORD *)&gahti + 12 * v7 + 6);
  if ( (v9 & 3) != 0 )
  {
    v4 = *(_QWORD *)(v6 + 424);
    if ( *(_DWORD *)(v4 + 68) >= gUserProcessHandleQuota )
    {
LABEL_73:
      v33 = 1158LL;
LABEL_76:
      UserSetLastError(v33);
      return 0LL;
    }
  }
  while ( 1 )
  {
    if ( (_BYTE)v7 != 1 && qword_1C024FCE0 )
    {
      v10 = &qword_1C024FCE0;
      goto LABEL_6;
    }
    if ( qword_1C024FCD8 )
      break;
    if ( !(unsigned int)HMGrowHandleTable() )
      goto LABEL_73;
  }
  v10 = &qword_1C024FCD8;
LABEL_6:
  v40 = v10;
  if ( (v9 & 0x10) != 0 && a2 )
  {
    if ( !qword_1C02577E8 )
      goto LABEL_75;
    if ( (int)qword_1C02577E8() < 0 )
      goto LABEL_75;
    v13 = HMAllocateUserOrIsolatedType(v5, v9, v7);
    if ( !v13 )
      goto LABEL_75;
    v27 = qword_1C02577F0;
    if ( qword_1C02577F0 )
      v27 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C02577F0(
                                                              a2,
                                                              *(unsigned int *)((char *)&gahti + v39 + 16),
                                                              ((_DWORD)v7 << 16) | 5u);
    v13[5] = v27;
    if ( !v27 )
    {
      HMFreeUserOrIsolatedType(v9, v7, v13);
      goto LABEL_75;
    }
    v28 = (void *)v13[3];
    ObfReferenceObject((PVOID)a2);
    v13[3] = a2;
    if ( v28 )
      ObfDereferenceObject(v28);
    v29 = v13[5];
    v13[4] = v13;
    v13[6] = v29 - *(_QWORD *)(a2 + 128);
  }
  else if ( (v9 & 0x40) != 0 )
  {
    if ( *(_DWORD *)((char *)&gahti + v39 + 16) )
    {
      v13 = Win32AllocPoolZInit(v5, *(unsigned int *)((char *)&gahti + v39 + 8));
      if ( !v13 )
        goto LABEL_75;
      Heap = RtlAllocateHeap(gpvSharedAlloc, 0, *(unsigned int *)((char *)&gahti + v39 + 16));
      v13[5] = Heap;
      if ( !Heap )
      {
        Win32FreePool((__int64)v13);
        goto LABEL_75;
      }
      v13[3] = 0LL;
      v13[4] = 0LL;
      v13[6] = Heap - (_BYTE *)gpvSharedAlloc;
    }
    else
    {
      v34 = RtlAllocateHeap(gpvSharedAlloc, 0, v5);
      v13 = v34;
      if ( !v34 )
        goto LABEL_75;
      v34[3] = 0LL;
      v34[4] = 0LL;
      v34[6] = (char *)v34 - (_BYTE *)gpvSharedAlloc;
      v34[5] = 0LL;
    }
  }
  else
  {
    v38 = !a2 && (v9 & 0x20) != 0;
    v11 = v5;
    if ( (v9 & 0x200) != 0 )
    {
      v13 = HMAllocateIsolatedType();
    }
    else
    {
      v12 = *(_DWORD *)((char *)&gahti + v39 + 8);
      if ( qword_1C0257D10 && (int)qword_1C0257D10() >= 0 )
      {
        if ( qword_1C0257D18 )
          v13 = (_QWORD *)qword_1C0257D18(33LL, v11, v12);
        else
          v13 = 0LL;
        if ( !v13 )
          goto LABEL_75;
        memset(v13, 0, v11);
      }
      else
      {
        v13 = 0LL;
      }
    }
    if ( !v13 )
    {
LABEL_75:
      v33 = 8LL;
      goto LABEL_76;
    }
    if ( (_BYTE)v7 == 1 )
    {
      v32 = Win32AllocPoolWithQuotaZInit(0x140uLL, 0x64777355u);
      v13[5] = v32;
      if ( !v32 )
      {
        HMFreeUserOrIsolatedType(v9, 1, v13);
        v13 = 0LL;
      }
    }
    if ( (v9 & 0x100) != 0 )
    {
      LockObjectAssignment(v13 + 3, a2);
      v13[4] = v13;
    }
    v6 = a1;
  }
  if ( !v13 )
    goto LABEL_75;
  v14 = *v10;
  v15 = (char *)qword_1C024FD58 + 32 * *v10;
  v16 = (unsigned int)v14 <= giheLast;
  v17 = (__int64 *)((char *)gpKernelHandleTable + 24 * v14);
  *v40 = *v17;
  if ( !v16 )
    giheLast = v14;
  v18 = a3;
  v15[24] = a3;
  *v17 = (__int64)v13;
  if ( (v9 & 0x40) != 0 )
  {
    *(_QWORD *)v15 = v13[6];
  }
  else if ( (v9 & 0x10) != 0 && a2 )
  {
    *(_QWORD *)v15 = v13[6];
    *((_QWORD *)v15 + 2) = ***(_QWORD ***)(a2 + 8);
  }
  else
  {
    *(_QWORD *)v15 = 0LL;
  }
  if ( v38 )
    v15[25] |= 0x40u;
  if ( (v9 & 2) != 0 )
  {
    *((_DWORD *)v13 + 4) = 0;
    v17[1] = *(_QWORD *)(v6 + 424);
    ProcessId = PsGetProcessId(**(PEPROCESS **)(v6 + 424));
    v18 = a3;
    *((_QWORD *)v15 + 1) = ProcessId;
    if ( (v9 & 4) != 0 )
      v13[3] = *(_QWORD *)(v6 + 424);
  }
  else if ( (v9 & 1) != 0 )
  {
    v17[1] = v6;
    ThreadId = PsGetThreadId(*(PETHREAD *)v6);
    v18 = a3;
    *((_QWORD *)v15 + 1) = ThreadId;
    v13[2] = v17[1];
  }
  v20 = (int)v14 | (unsigned __int64)(*(unsigned __int16 *)((char *)qword_1C024FD58
                                                          + v14 * (unsigned int)dword_1C024FD60
                                                          + 26) << 16);
  *v13 = v20;
  if ( *(_DWORD *)((char *)&gahti + v39 + 16) )
  {
    v26 = (unsigned __int64 *)v13[5];
    *v26 = v20;
    v26[1] = v13[6];
  }
  if ( v4 )
  {
    v21 = ++*(_DWORD *)(v4 + 68);
    if ( v21 > *(_DWORD *)(v4 + 72) )
      *(_DWORD *)(v4 + 72) = v21;
  }
  if ( ++giheCount > (unsigned int)giheCountPeak )
    giheCountPeak = giheCount;
  if ( (v9 & 3) != 0 )
  {
    v22 = (unsigned int)PsGetProcessId(**(PEPROCESS **)(v6 + 424));
    if ( (Microsoft_Windows_Win32kEnableBits & 0x20000000000LL) != 0 )
    {
      EtwUserHandleType = GetEtwUserHandleType(a3, v23, v22 & 0xFFFFFFFC);
      McTemplateK0pqqq_EtwWriteTransfer(v36, (unsigned int)&UserCreateHandle, v37, *v13, EtwUserHandleType);
    }
  }
  else
  {
    v30 = GetEtwUserHandleType((unsigned __int8)v18, v20, v18);
    EtwTraceUserCreateHandle(*v13, v30, 0LL);
  }
  result = *v17;
  v17[2] = 0LL;
  return result;
}
