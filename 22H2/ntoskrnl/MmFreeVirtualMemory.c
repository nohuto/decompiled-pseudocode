/*
 * XREFs of MmFreeVirtualMemory @ 0x14063AD20
 * Callers:
 *     PsDispatchIumService @ 0x140582C34 (PsDispatchIumService.c)
 *     NtFreeVirtualMemory @ 0x14063AC50 (NtFreeVirtualMemory.c)
 *     PspDeleteUserStack @ 0x1406A1938 (PspDeleteUserStack.c)
 *     PspFreeUserFiberShadowStack @ 0x14090A1C4 (PspFreeUserFiberShadowStack.c)
 *     PspReserveAndCommitUserShadowStack @ 0x14090A368 (PspReserveAndCommitUserShadowStack.c)
 *     PspSetupUserFiberShadowStack @ 0x14090A550 (PspSetupUserFiberShadowStack.c)
 *     PspSetupUserShadowStack @ 0x14090A62C (PspSetupUserShadowStack.c)
 *     PspFreeCurrentThreadUserShadowStack @ 0x14090B078 (PspFreeCurrentThreadUserShadowStack.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     MiUnlockAndDereferenceVad @ 0x14021AF40 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x14021B260 (MiObtainReferencedVadEx.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     MiLocateVadEvent @ 0x14027EA34 (MiLocateVadEvent.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140294EE0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiFreeVadRange @ 0x140298C44 (MiFreeVadRange.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     MiDeleteEmptyPageTables @ 0x1403F4610 (MiDeleteEmptyPageTables.c)
 *     MiGetVadPageSize @ 0x14055BCF0 (MiGetVadPageSize.c)
 *     MiDecommitRegion @ 0x14063BD10 (MiDecommitRegion.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14063E320 (ObpReferenceObjectByHandleWithTag.c)
 *     MiCheckSecuredVad @ 0x1406DB1E8 (MiCheckSecuredVad.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408C87F4 (MiCoalescePlaceholderAllocations.c)
 *     MiDecommitEnclavePages @ 0x1408D2ED4 (MiDecommitEnclavePages.c)
 *     MiFreeEnclaveModules @ 0x1408D2F70 (MiFreeEnclaveModules.c)
 *     PerfInfoLogVirtualFree @ 0x140937CE4 (PerfInfoLogVirtualFree.c)
 */

__int64 __fastcall MmFreeVirtualMemory(
        ULONG_PTR BugCheckParameter1,
        unsigned __int64 *a2,
        __int64 *a3,
        int a4,
        unsigned __int8 a5,
        int a6)
{
  int v6; // r15d
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rdx
  _KPROCESS *Process; // rsi
  int v10; // r8d
  unsigned __int64 v12; // rdi
  int v13; // ebx
  unsigned __int64 v14; // r14
  ULONG_PTR v15; // r13
  _DWORD *v16; // r9
  int v17; // edi
  volatile signed __int32 *v18; // rsi
  int v19; // r11d
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // r10
  __int64 v23; // rdi
  int v24; // r8d
  int v25; // r9d
  bool v26; // zf
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // ecx
  int v30; // r8d
  int v31; // edx
  int v32; // eax
  unsigned __int64 v33; // r15
  __int64 v34; // r12
  int v35; // eax
  int v36; // eax
  int v37; // ecx
  __int64 v38; // rax
  char v39; // [rsp+40h] [rbp-C0h] BYREF
  int v40; // [rsp+44h] [rbp-BCh]
  int v41; // [rsp+48h] [rbp-B8h]
  int v42; // [rsp+4Ch] [rbp-B4h] BYREF
  ULONG_PTR BugCheckParameter1a; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v44; // [rsp+58h] [rbp-A8h]
  int v45; // [rsp+60h] [rbp-A0h]
  ULONG_PTR v46; // [rsp+68h] [rbp-98h]
  unsigned __int64 v47; // [rsp+70h] [rbp-90h]
  unsigned __int64 v48; // [rsp+78h] [rbp-88h]
  unsigned __int64 v49; // [rsp+80h] [rbp-80h]
  unsigned __int64 v50; // [rsp+88h] [rbp-78h]
  __int64 v51; // [rsp+90h] [rbp-70h]
  __int64 *v52; // [rsp+98h] [rbp-68h]
  unsigned __int64 *v53; // [rsp+A0h] [rbp-60h]
  __int64 v54[2]; // [rsp+A8h] [rbp-58h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp-48h]
  __int64 v56; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v57; // [rsp+C8h] [rbp-38h]
  __int64 v58; // [rsp+D8h] [rbp-28h]
  __int64 v59; // [rsp+E0h] [rbp-20h]
  __int64 v60; // [rsp+E8h] [rbp-18h]

  v46 = BugCheckParameter1;
  v41 = a4;
  v52 = a3;
  v53 = a2;
  v51 = 0LL;
  v6 = a4;
  v56 = 0LL;
  v58 = 0LL;
  v60 = 0LL;
  BugCheckParameter1a = 0LL;
  v42 = 0;
  v54[1] = 0LL;
  v54[0] = 0LL;
  v57 = 0LL;
  if ( (a4 & 0xC000) == 0 || (a4 & 0xC000) == 0xC000 )
    return 3221225714LL;
  v7 = *a2;
  v8 = *a3;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v50 = v7;
  v49 = v8;
  if ( v7 > 0x7FFFFFFEFFFFLL )
    return 3221225712LL;
  if ( 0x7FFFFFFF0000LL - v7 < v8 )
    return 3221225713LL;
  if ( (v6 & 2) != 0 )
  {
    if ( (v6 & 1) != 0 )
      return 3221225485LL;
    v10 = a6 | 0x4000000;
    v6 &= ~2u;
    v41 = v6;
  }
  else
  {
    v10 = a6;
  }
  v40 = v10;
  if ( (v6 & 1) != 0 )
  {
    if ( (v6 & 2) != 0 )
      return 3221225485LL;
    v10 |= 0xC000000u;
    v6 &= ~1u;
    v40 = v10;
    v41 = v6;
  }
  v45 = v10 & 0x4000000;
  if ( (v10 & 0x4000000) == 0 )
    goto LABEL_18;
  if ( v6 != 0x8000 )
    return 3221225714LL;
  if ( !v8 || v8 != (v8 & 0xFFFFFFFFFFFFF000uLL) )
    return 3221225713LL;
  if ( v7 != (v7 & 0xFFFFFFFFFFFFF000uLL) )
    return 3221225712LL;
LABEL_18:
  v12 = v7 & 0x7FFFFFFFF000LL;
  v13 = 0;
  v47 = (v7 & 0xFFFFFFFFFFFFF000uLL) >> 12;
  v44 = v7 & 0xFFFFFFFFFFFFF000uLL;
  v14 = (v7 + v8 - 1) | 0xFFF;
  v59 = 0LL;
  v48 = v14 >> 12;
  if ( BugCheckParameter1 == -1LL )
  {
    v15 = (ULONG_PTR)Process;
  }
  else
  {
    v42 = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x6D566D4Du, (__int64)&BugCheckParameter1a, 0LL, 0LL);
    v17 = v42;
    if ( v42 < 0 )
      return (unsigned int)v17;
    v15 = BugCheckParameter1a;
    if ( Process != (_KPROCESS *)BugCheckParameter1a )
    {
      v13 = 1;
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1a, 0LL, (__int64)&v56, v16);
    }
    v10 = v40;
    v12 = v44;
  }
  v39 = 0;
  if ( (v6 & 0xFFFF3FFF) != 0 && (!*(_QWORD *)(v15 + 2240) || (v6 & 0x10000) == 0 || (v6 & 0x4000) != 0) )
  {
    v17 = -1073741582;
    goto LABEL_123;
  }
  if ( (v10 & 0xC000000) == 0xC000000 )
  {
    v17 = MiCoalescePlaceholderAllocations(v15, v12, v14, a5);
    goto LABEL_123;
  }
  LODWORD(BugCheckParameter1a) = v6 & 0x8000;
  v18 = MiObtainReferencedVadEx(v12, (_DWORD)BugCheckParameter1a != 0, &v42);
  if ( !v18 )
  {
    v17 = v42;
    goto LABEL_123;
  }
  while ( 1 )
  {
    v19 = BugCheckParameter1a;
    v20 = *((unsigned int *)v18 + 6) | ((unsigned __int64)*((unsigned __int8 *)v18 + 32) << 32);
    v21 = *((unsigned int *)v18 + 7) | ((unsigned __int64)*((unsigned __int8 *)v18 + 33) << 32);
    if ( v49 )
    {
      v22 = v48;
    }
    else
    {
      v48 = *((unsigned int *)v18 + 7) | ((unsigned __int64)*((unsigned __int8 *)v18 + 33) << 32);
      v22 = v21;
      v14 = (v21 << 12) | 0xFFF;
      if ( (_DWORD)BugCheckParameter1a )
      {
        if ( v47 != v20 )
          goto LABEL_105;
        v44 = v20 << 12;
      }
    }
    v23 = v47;
    if ( v47 < v20 || v47 > v21 || v22 < v20 || v22 > v21 )
    {
      v17 = -1073741798;
      goto LABEL_120;
    }
    v24 = *((_DWORD *)v18 + 12);
    v25 = v24 & 0x100000;
    if ( (v41 & 0x10000) == 0 )
    {
      if ( !v25 )
        goto LABEL_118;
      v26 = (v24 & 0x70) == 16;
LABEL_48:
      if ( v26 )
        goto LABEL_118;
      goto LABEL_49;
    }
    if ( v25 || (v24 & 0x70) != 0 )
    {
LABEL_118:
      v17 = -1073741797;
      goto LABEL_120;
    }
    if ( v47 == v20 )
    {
      v26 = v22 == v21;
      goto LABEL_48;
    }
LABEL_49:
    if ( v45 )
    {
      if ( !MiLocateVadEvent((__int64)v18, 128LL) )
      {
        v27 = *((unsigned int *)v18 + 13);
        LODWORD(v27) = v27 & 0x7FFFFFFF;
        if ( (v27 | ((unsigned __int64)*((unsigned __int8 *)v18 + 34) << 31)) != 0x7FFFFFFFDLL )
          break;
      }
      v28 = *((unsigned int *)v18 + 13);
      LODWORD(v28) = v28 & 0x7FFFFFFF;
      if ( (v28 | ((unsigned __int64)*((unsigned __int8 *)v18 + 34) << 31)) == 0x7FFFFFFFDLL && v23 == v20 && v22 == v21 )
        break;
    }
    v29 = v40;
    if ( (v40 & 0x40000000) != 0 && (!v25 || (v24 & 0x1000000) != 0 || (v24 & 0x4000000) == 0) )
      break;
    if ( (v24 & 8) == 0 || (v40 & 0x40000000) != 0 )
      goto LABEL_69;
    if ( !v19 )
    {
      v31 = v50;
      v30 = v22 - v23;
      goto LABEL_66;
    }
    if ( (*(_DWORD *)(v15 + 1124) & 0x20) == 0 )
    {
      v30 = v21 - v20;
      v31 = (_DWORD)v20 << 12;
LABEL_66:
      v17 = MiCheckSecuredVad((_DWORD)v18, v31, (v30 + 1) << 12, 85, a5);
      goto LABEL_67;
    }
    v17 = 0;
LABEL_67:
    if ( v17 < 0 )
      goto LABEL_120;
    v23 = v47;
    v22 = v48;
    v29 = v40;
LABEL_69:
    if ( !(_DWORD)BugCheckParameter1a )
    {
      v34 = v49;
      v33 = v44;
      if ( v49 )
        v34 = v14 - v44 + 1;
      v35 = *((_DWORD *)v18 + 12);
      if ( (v35 & 0x100000) == 0
        || (v35 & 0x1000000) != 0
        || (v35 & 0x2000000) == 0
        || (v36 = MiDecommitEnclavePages(v15, (_DWORD)v18, v44, v34, v29), v17 = v36, v36 == -1073741802) )
      {
        v37 = *((_DWORD *)v18 + 12);
        if ( (v18[12] & 0x70) == 0x30
          || (v37 & 0x100000) != 0
          && ((v37 & 0x400000) != 0 || (v37 & 0xC0000u) >= 0x80000)
          && ((v37 & 0x500000) != 0x500000
           || v34 && (((MiGetVadPageSize((__int64)v18) << 12) - 1) & (v33 | (v14 + 1))) != 0)
          || (v38 = *((unsigned int *)v18 + 13),
              LODWORD(v38) = v38 & 0x7FFFFFFF,
              (v38 | ((unsigned __int64)*((unsigned __int8 *)v18 + 34) << 31)) == 0x7FFFFFFFDLL) )
        {
          v17 = -1073741664;
          goto LABEL_120;
        }
        if ( !v34 )
        {
          if ( v50 >> 12 != (*((unsigned int *)v18 + 6) | ((unsigned __int64)*((unsigned __int8 *)v18 + 32) << 32)) )
          {
LABEL_105:
            v17 = -1073741665;
            goto LABEL_120;
          }
          v14 = ((*((unsigned int *)v18 + 7) | ((unsigned __int64)*((unsigned __int8 *)v18 + 33) << 32)) << 12) | 0xFFF;
        }
        LODWORD(v51) = MiDecommitRegion(v18, v33, v14);
      }
      else if ( v36 < 0 )
      {
        goto LABEL_120;
      }
      MiUnlockAndDereferenceVad((char *)v18);
      if ( (_DWORD)v51 )
        MiDeleteEmptyPageTables(v33, v14, 0);
      if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 )
        PerfInfoLogVirtualFree(v33, v34, v15);
      if ( v13 )
        KiUnstackDetachProcess((__int64)&v56, 0);
      if ( v46 != -1LL )
        ObfDereferenceObjectWithTag((PVOID)v15, 0x6D566D4Du);
      *v52 = v34;
LABEL_85:
      *v53 = v33;
      return 0LL;
    }
    if ( (*(_DWORD *)(v15 + 2172) & 0x100) != 0 && (v23 != v20 || v22 != v21) )
    {
      v17 = -1073741558;
      goto LABEL_120;
    }
    v32 = MiFreeVadRange((ULONG_PTR)v18, (int)&v39, v23, v22, v15, v45 != 0);
    v17 = v32;
    if ( v32 >= 0 )
    {
      if ( v13 )
        KiUnstackDetachProcess((__int64)&v56, 0);
      if ( v54[0] )
        MiFreeEnclaveModules(v54);
      if ( v46 != -1LL )
        ObfDereferenceObjectWithTag((PVOID)v15, 0x6D566D4Du);
      v33 = v44;
      *v52 = v14 - v44 + 1;
      goto LABEL_85;
    }
    if ( v32 != -1073741267 )
      goto LABEL_120;
  }
  v17 = -1073741800;
LABEL_120:
  MiUnlockAndDereferenceVad((char *)v18);
  if ( v39 == 1 )
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, v15);
LABEL_123:
  if ( v13 )
    KiUnstackDetachProcess((__int64)&v56, 0);
  if ( v46 != -1LL )
    ObfDereferenceObjectWithTag((PVOID)v15, 0x6D566D4Du);
  return (unsigned int)v17;
}
