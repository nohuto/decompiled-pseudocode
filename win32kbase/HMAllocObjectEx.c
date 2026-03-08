/*
 * XREFs of HMAllocObjectEx @ 0x1C00122BC
 * Callers:
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C0011CCC (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 *     ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C0012210 (-CreateMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     HMAllocObject @ 0x1C00122A0 (HMAllocObject.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0085310 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     UserCreateBaseWindowHandle @ 0x1C017BF10 (UserCreateBaseWindowHandle.c)
 * Callees:
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0068600 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32FreePool @ 0x1C0070430 (Win32FreePool.c)
 *     ?HMAllocateUserOrIsolatedType@@YAPEAX_KGE@Z @ 0x1C0077BD8 (-HMAllocateUserOrIsolatedType@@YAPEAX_KGE@Z.c)
 *     Win32AllocPoolZInit @ 0x1C0077C80 (Win32AllocPoolZInit.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x1C00785AC (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1C0086944 (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     EtwTraceUserCreateHandle @ 0x1C0088F2C (EtwTraceUserCreateHandle.c)
 *     LockObjectAssignment @ 0x1C00A7CA0 (LockObjectAssignment.c)
 *     ?HMGrowHandleTable@@YAHXZ @ 0x1C00ADCB4 (-HMGrowHandleTable@@YAHXZ.c)
 *     SharedAlloc @ 0x1C00CA5F0 (SharedAlloc.c)
 *     ?HMFreeUserOrIsolatedType@@YAXGEPEAX@Z @ 0x1C00D3268 (-HMFreeUserOrIsolatedType@@YAXGEPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HMAllocObjectEx(__int64 a1, __int64 a2, unsigned __int8 a3, unsigned int a4, int a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // r12
  __int64 v7; // rdi
  unsigned __int16 v10; // bp
  __int64 v12; // rcx
  __int64 *v13; // r14
  _QWORD *v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int16 v18; // si
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // r15
  char *v23; // rdi
  __int64 v24; // r14
  bool v25; // cc
  unsigned __int8 v26; // r8
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rax
  HANDLE ProcessId; // rax
  HANDLE ThreadId; // rax
  char *v32; // rax
  int v33; // ecx
  __int64 v34; // rax
  _QWORD *v35; // rcx
  unsigned int v36; // eax
  unsigned int EtwUserHandleType; // edi
  __int16 v38; // r9
  unsigned __int64 v39; // r8
  _BYTE v40[6]; // [rsp+22h] [rbp-56h]
  __int64 *v41; // [rsp+28h] [rbp-50h]
  __int64 v42; // [rsp+30h] [rbp-48h]
  __int64 v43; // [rsp+38h] [rbp-40h]

  v5 = a4;
  v6 = 0LL;
  *(_WORD *)&v40[4] = 0;
  v7 = a3;
  LockRefactorStagingAssertOwned((const struct tagDomLock *)a1);
  v43 = 3 * v7;
  v10 = *((_WORD *)&gahti + 12 * v7 + 6);
  *(_DWORD *)v40 = v10 & 3;
  if ( (v10 & 3) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 488) & 1) != 0 )
      return 0LL;
    v6 = *(_QWORD *)(a1 + 424);
    if ( *(_DWORD *)(v6 + 68) < gUserProcessHandleQuota )
      goto LABEL_5;
LABEL_9:
    v12 = 1158LL;
LABEL_10:
    UserSetLastError(v12);
    return 0LL;
  }
  while ( 1 )
  {
LABEL_5:
    if ( (_BYTE)v7 != 1 && qword_1C02D0D50 )
    {
      v13 = &qword_1C02D0D50;
      goto LABEL_13;
    }
    if ( qword_1C02D0D48 )
      break;
    if ( !(unsigned int)HMGrowHandleTable() )
      goto LABEL_9;
  }
  v13 = &qword_1C02D0D48;
LABEL_13:
  v41 = v13;
  if ( (v10 & 0x10) != 0 && a2 )
  {
    if ( qword_1C02D6D80 && (int)qword_1C02D6D80() >= 0 )
    {
      v14 = HMAllocateUserOrIsolatedType(v5, v10, v7);
      if ( !v14 )
      {
LABEL_24:
        v18 = v10 & 0x40;
        goto LABEL_47;
      }
      if ( qword_1C02D6D88 )
        v17 = qword_1C02D6D88(a2, *((unsigned int *)&gahti + 6 * v7 + 4), ((_DWORD)v7 << 16) | 5u);
      else
        v17 = 0LL;
      v14[5] = v17;
      if ( v17 )
      {
        LockObjectAssignment(v14 + 3, a2, v15, v16);
        v19 = v14[5];
        v14[4] = v14;
        v14[6] = v19 - *(_QWORD *)(a2 + 128);
        goto LABEL_24;
      }
      HMFreeUserOrIsolatedType(v10, v7, v14);
    }
    v14 = 0LL;
    goto LABEL_24;
  }
  v18 = v10 & 0x40;
  if ( (v10 & 0x40) == 0 )
  {
    if ( a2 || (*(_DWORD *)&v40[2] = 1, (v10 & 0x20) == 0) )
      *(_DWORD *)&v40[2] = 0;
    v14 = HMAllocateUserOrIsolatedType(v5, v10, v7);
    if ( v14 )
    {
      if ( (_BYTE)v7 == 1 )
      {
        v29 = Win32AllocPoolWithQuotaZInit(
                *((unsigned int *)&gahti + 6 * v7 + 4),
                *((unsigned int *)&gahti + 6 * v7 + 2),
                v28,
                0LL);
        v14[5] = v29;
        if ( !v29 )
        {
          HMFreeUserOrIsolatedType(v10, 1u, v14);
          v14 = 0LL;
        }
      }
      if ( (v10 & 0x100) != 0 )
      {
        LockObjectAssignment(v14 + 3, a2, v28, 0LL);
        v14[4] = v14;
      }
    }
    goto LABEL_47;
  }
  if ( !*((_DWORD *)&gahti + 6 * v7 + 4) )
  {
    v20 = (_QWORD *)SharedAlloc((unsigned int)v5);
    v14 = v20;
    if ( v20 )
    {
      v20[3] = 0LL;
      v20[4] = 0LL;
      v20[6] = (char *)v20 - (_BYTE *)gpvSharedAlloc;
      v20[5] = 0LL;
      goto LABEL_30;
    }
    goto LABEL_47;
  }
  v14 = (_QWORD *)Win32AllocPoolZInit(v5, *((unsigned int *)&gahti + 6 * v7 + 2));
  if ( !v14 )
  {
LABEL_47:
    if ( !v14 )
      goto LABEL_48;
    goto LABEL_30;
  }
  v27 = SharedAlloc(*((unsigned int *)&gahti + 6 * v7 + 4));
  v14[5] = v27;
  if ( !v27 )
  {
    Win32FreePool(v14);
LABEL_48:
    v12 = 8LL;
    goto LABEL_10;
  }
  v14[3] = 0LL;
  v14[4] = 0LL;
  v14[6] = v27 - (_QWORD)gpvSharedAlloc;
LABEL_30:
  v21 = *v13;
  v22 = gpKernelHandleTable;
  v23 = (char *)qword_1C02D0E08 + 32 * *v13;
  v24 = 3 * *v13;
  v25 = (unsigned int)v21 <= giheLast;
  *v41 = *((_QWORD *)gpKernelHandleTable + v24);
  v42 = v21;
  if ( !v25 )
    giheLast = v21;
  v26 = a3;
  v23[24] = a3;
  v22[v24] = v14;
  if ( v18 )
  {
    *(_QWORD *)v23 = v14[6];
  }
  else if ( (v10 & 0x10) != 0 && a2 )
  {
    *(_QWORD *)v23 = v14[6];
    *((_QWORD *)v23 + 2) = ***(_QWORD ***)(a2 + 8);
  }
  else
  {
    *(_QWORD *)v23 = 0LL;
  }
  if ( *(_DWORD *)&v40[2] )
    v23[25] |= 0x40u;
  if ( a5 )
    v23[25] |= 0x80u;
  if ( (v10 & 2) != 0 )
  {
    v14[2] = 0LL;
    v22[v24 + 1] = *(_QWORD *)(a1 + 424);
    ProcessId = PsGetProcessId(**(PEPROCESS **)(a1 + 424));
    v26 = a3;
    *((_QWORD *)v23 + 1) = ProcessId;
    if ( (v10 & 4) != 0 )
      v14[3] = *(_QWORD *)(a1 + 424);
  }
  else if ( (v10 & 1) != 0 )
  {
    v22[v24 + 1] = a1;
    ThreadId = PsGetThreadId(*(PETHREAD *)a1);
    v26 = a3;
    *((_QWORD *)v23 + 1) = ThreadId;
    v14[2] = v22[v24 + 1];
  }
  v32 = (char *)qword_1C02D0E08 + v42 * (unsigned int)dword_1C02D0E10;
  v33 = v42 | (*((unsigned __int16 *)v32 + 13) << 16) | 0x80000000;
  if ( v32[25] >= 0 )
    v33 = v42 | (*((unsigned __int16 *)v32 + 13) << 16);
  v34 = v33;
  v35 = (_QWORD *)v43;
  *v14 = v34;
  if ( *((_DWORD *)&gahti + 2 * v43 + 4) )
  {
    v35 = (_QWORD *)v14[5];
    *v35 = v34;
    v35[1] = v14[6];
  }
  if ( v6 )
  {
    v36 = *(_DWORD *)(v6 + 68) + 1;
    *(_DWORD *)(v6 + 68) = v36;
    if ( v36 > *(_DWORD *)(v6 + 72) )
      *(_DWORD *)(v6 + 72) = v36;
  }
  if ( ++giheCount > (unsigned int)giheCountPeak )
    giheCountPeak = giheCount;
  LOBYTE(v35) = v26;
  EtwUserHandleType = GetEtwUserHandleType(v35);
  if ( *(_WORD *)v40 == v38 )
    v39 = 0LL;
  else
    v39 = (unsigned __int64)PsGetProcessId(**(PEPROCESS **)(a1 + 424)) & 0xFFFFFFFC;
  EtwTraceUserCreateHandle(*v14, EtwUserHandleType, v39);
  v22[v24 + 2] = 0LL;
  return v22[v24];
}
