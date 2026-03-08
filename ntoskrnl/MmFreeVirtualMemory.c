/*
 * XREFs of MmFreeVirtualMemory @ 0x1406EC820
 * Callers:
 *     PsDispatchIumService @ 0x1405A2A44 (PsDispatchIumService.c)
 *     NtFreeVirtualMemory @ 0x1406EC750 (NtFreeVirtualMemory.c)
 *     PspDeleteUserStack @ 0x140799590 (PspDeleteUserStack.c)
 *     PspFreeUserFiberShadowStack @ 0x1409AE1B8 (PspFreeUserFiberShadowStack.c)
 *     PspReserveAndCommitUserShadowStack @ 0x1409AE7B0 (PspReserveAndCommitUserShadowStack.c)
 *     PspSetupUserFiberShadowStack @ 0x1409AEA90 (PspSetupUserFiberShadowStack.c)
 *     PspSetupUserShadowStack @ 0x1409AEB6C (PspSetupUserShadowStack.c)
 *     PspFreeCurrentThreadUserShadowStack @ 0x1409B0BD0 (PspFreeCurrentThreadUserShadowStack.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     MiLocateVadEvent @ 0x14020DC50 (MiLocateVadEvent.c)
 *     MiFreeVadRange @ 0x1402D5634 (MiFreeVadRange.c)
 *     MiDeleteEmptyPageTables @ 0x1402EB5E0 (MiDeleteEmptyPageTables.c)
 *     KeStackAttachProcess @ 0x14030DF10 (KeStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     MiUnlockAndDereferenceVad @ 0x14031EDC0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x14031EFE0 (MiObtainReferencedVadEx.c)
 *     MiGetVadPageSize @ 0x14031F9B4 (MiGetVadPageSize.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x14034C380 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     MiCheckSecuredVad @ 0x1406A0F38 (MiCheckSecuredVad.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1406D8E50 (ObReferenceObjectByHandleWithTag.c)
 *     MiDecommitRegion @ 0x1406EBCC0 (MiDecommitRegion.c)
 *     PerfInfoLogVirtualFree @ 0x1409E42D4 (PerfInfoLogVirtualFree.c)
 *     MiCoalescePlaceholderAllocations @ 0x140A2F378 (MiCoalescePlaceholderAllocations.c)
 *     MiDecommitEnclavePages @ 0x140A3B114 (MiDecommitEnclavePages.c)
 *     MiFreeEnclaveModules @ 0x140A3B1B0 (MiFreeEnclaveModules.c)
 */

NTSTATUS __fastcall MmFreeVirtualMemory(
        HANDLE Handle,
        unsigned __int64 *a2,
        __int64 *a3,
        int a4,
        unsigned __int8 a5,
        int a6)
{
  HANDLE v6; // r14
  int v7; // edi
  unsigned __int64 *v8; // rsi
  unsigned __int64 v9; // r9
  __int64 v10; // r15
  bool v11; // zf
  _KPROCESS *Process; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  int v15; // ecx
  unsigned __int64 v16; // r12
  int v17; // ebx
  unsigned __int64 v18; // r13
  __int64 v19; // r14
  int v20; // r9d
  unsigned __int64 v21; // r11
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // r10
  int v25; // edx
  int v26; // eax
  int v27; // edx
  int v28; // r11d
  int v29; // ecx
  __int64 v30; // rax
  int v31; // esi
  NTSTATUS result; // eax
  int v33; // eax
  int v34; // edi
  __int64 v35; // r11
  __int64 v36; // rax
  __int64 v37; // rcx
  int v38; // eax
  unsigned __int64 v39; // r8
  unsigned __int64 v40; // rdx
  int v41; // eax
  NTSTATUS v42; // [rsp+40h] [rbp-C0h] BYREF
  char v43; // [rsp+44h] [rbp-BCh] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  int v45; // [rsp+50h] [rbp-B0h]
  int v46; // [rsp+54h] [rbp-ACh]
  int v47; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v48; // [rsp+60h] [rbp-A0h]
  HANDLE v49; // [rsp+68h] [rbp-98h]
  unsigned __int64 v50; // [rsp+70h] [rbp-90h]
  unsigned __int64 v51; // [rsp+78h] [rbp-88h]
  unsigned __int64 v52; // [rsp+80h] [rbp-80h]
  unsigned __int64 v53; // [rsp+88h] [rbp-78h]
  __int64 *v54; // [rsp+90h] [rbp-70h]
  _QWORD v55[2]; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 *v56; // [rsp+A8h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-50h]
  struct _KAPC_STATE ApcState; // [rsp+B8h] [rbp-48h] BYREF

  v49 = Handle;
  v54 = a3;
  v56 = a2;
  v6 = Handle;
  memset(&ApcState, 0, 32);
  *(_QWORD *)&ApcState.InProgressFlags = 0LL;
  Object = 0LL;
  v42 = 0;
  v55[1] = 0LL;
  v7 = a4;
  v55[0] = 0LL;
  v8 = a2;
  if ( (a4 & 0xC000) == 0 || (a4 & 0xC000) == 49152 )
    return -1073741582;
  v9 = *a2;
  v10 = *a3;
  v11 = *a3 == 0;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v51 = (unsigned __int64)Process;
  v13 = v10 - 1;
  v53 = v9;
  if ( v11 )
    v13 = 0LL;
  v14 = v9 + v13;
  if ( v14 < v9 || v14 > 0x7FFFFFFEFFFFLL )
    return -1073741811;
  if ( (v7 & 2) != 0 )
  {
    if ( (v7 & 1) != 0 )
      return -1073741811;
    v15 = a6 | 0x4000000;
    v7 &= ~2u;
  }
  else
  {
    v15 = a6;
  }
  v45 = v15;
  if ( (v7 & 1) == 0 )
    goto LABEL_9;
  if ( (v7 & 2) != 0 )
    return -1073741811;
  v15 |= 0xC000000u;
  v45 = v15;
  v7 &= ~1u;
LABEL_9:
  v47 = v15 & 0x4000000;
  if ( (v15 & 0x4000000) != 0 )
  {
    if ( v7 == 0x8000 )
    {
      if ( !v10 || v10 != (v10 & 0xFFFFFFFFFFFFF000uLL) )
        return -1073741583;
      v16 = v9 & 0xFFFFFFFFFFFFF000uLL;
      if ( v9 != (v9 & 0xFFFFFFFFFFFFF000uLL) )
        return -1073741584;
      goto LABEL_11;
    }
    return -1073741582;
  }
  v16 = v9 & 0xFFFFFFFFFFFFF000uLL;
LABEL_11:
  v17 = 0;
  v50 = v16 >> 12;
  v18 = (v9 + v10 - 1) | 0xFFF;
  ApcState.Process = 0LL;
  v48 = v18 >> 12;
  if ( v6 == (HANDLE)-1LL )
  {
    Object = Process;
  }
  else
  {
    result = ObReferenceObjectByHandleWithTag(v6, 8u, (POBJECT_TYPE)PsProcessType, a5, 0x6D566D4Du, &Object, 0LL);
    v42 = result;
    if ( result < 0 )
      return result;
    if ( (PVOID)v51 != Object )
    {
      v17 = 1;
      KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
    }
    v15 = v45;
  }
  v43 = 0;
  if ( (v7 & 0xFFFF3FFF) != 0 && (!*((_QWORD *)Object + 280) || (v7 & 0x10000) == 0 || (v7 & 0x4000) != 0) )
  {
    v34 = -1073741582;
    goto LABEL_128;
  }
  if ( (v15 & 0xC000000) == 0xC000000 )
  {
    result = MiCoalescePlaceholderAllocations(Object, v16, v18, a5);
    v46 = result;
    if ( v17 )
    {
      KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
      result = v46;
    }
    if ( v6 != (HANDLE)-1LL )
    {
      ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
      return v46;
    }
    return result;
  }
  v46 = v7 & 0x8000;
  v19 = MiObtainReferencedVadEx(v16, v46 != 0, &v42);
  if ( !v19 )
  {
    v34 = v42;
    goto LABEL_127;
  }
  while ( 1 )
  {
    v20 = v46;
    v21 = *(unsigned int *)(v19 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32);
    v22 = *(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32);
    v51 = v21;
    v52 = v22;
    if ( v10 )
    {
      v23 = v48;
LABEL_18:
      v24 = v50;
      if ( v50 < v21 )
        goto LABEL_123;
      goto LABEL_19;
    }
    v48 = v22;
    v23 = v22;
    v18 = (v22 << 12) | 0xFFF;
    if ( !v46 )
      goto LABEL_18;
    v24 = v50;
    if ( v50 != v21 )
      goto LABEL_122;
    v16 = v21 << 12;
LABEL_19:
    if ( v24 > v22 || v23 < v21 || v23 > v22 )
    {
LABEL_123:
      v34 = -1073741798;
      goto LABEL_124;
    }
    v25 = *(_DWORD *)(v19 + 48);
    v26 = v25 & 0x200000;
    v42 = v25;
    if ( (v7 & 0x10000) != 0 )
    {
      if ( v26 || (v25 & 0x70) != 0 || v24 == v21 && v23 == v22 )
      {
LABEL_92:
        v34 = -1073741797;
        goto LABEL_124;
      }
    }
    else if ( !v26 || (v25 & 0x70) == 0x10 )
    {
      goto LABEL_92;
    }
    v27 = v47;
    if ( v47 )
    {
      if ( MiLocateVadEvent() )
      {
        v37 = *(unsigned int *)(v19 + 52);
        LODWORD(v37) = v37 & 0x7FFFFFFF;
        if ( (((unsigned __int64)*(unsigned __int8 *)(v19 + 34) << 31) | v37) != 0x7FFFFFFFDLL )
        {
LABEL_99:
          v27 = v47;
          goto LABEL_26;
        }
      }
      else
      {
        v36 = *(unsigned int *)(v19 + 52);
        LODWORD(v36) = v36 & 0x7FFFFFFF;
        if ( (v36 | ((unsigned __int64)*(unsigned __int8 *)(v19 + 34) << 31)) != 0x7FFFFFFFDLL )
          goto LABEL_101;
        v48 = v23;
      }
      if ( v24 == v35 && v23 == v52 )
      {
LABEL_101:
        v34 = -1073741800;
        goto LABEL_124;
      }
      goto LABEL_99;
    }
LABEL_26:
    v28 = v45;
    if ( (v45 & 0x40000000) != 0 && (v42 & 0xA200000) != 0x8200000 )
      goto LABEL_101;
    if ( (v42 & 8) != 0 && (v45 & 0x40000000) == 0 )
    {
      if ( v20 )
      {
        if ( (*((_DWORD *)Object + 281) & 0x20) != 0 )
        {
          v38 = 0;
          goto LABEL_109;
        }
        v39 = v52 - v51;
        v40 = v51 << 12;
      }
      else
      {
        v40 = v53;
        v39 = v23 - v24;
      }
      v38 = MiCheckSecuredVad(v19, v40, (v39 + 1) << 12, 0x55u, a5);
      v28 = v45;
      v20 = v46;
      v23 = v48;
      v27 = v47;
      v24 = v50;
LABEL_109:
      v42 = v38;
      if ( v38 < 0 )
        goto LABEL_67;
    }
    if ( !v20 )
      break;
    if ( (*((_DWORD *)Object + 543) & 0x100) != 0 && (v24 != v51 || v23 != v52) )
    {
      v34 = -1073741558;
      goto LABEL_124;
    }
    v33 = MiFreeVadRange((_DWORD *)v19, (int)&v43, v24, v23, (__int64)Object, v27 != 0, (__int64)v55);
    v42 = v33;
    if ( v33 >= 0 )
    {
      if ( v17 )
        KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
      if ( v55[0] )
        MiFreeEnclaveModules(v55);
      if ( v49 != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
      *v54 = v18 - v16 + 1;
      goto LABEL_48;
    }
    if ( v33 != -1073741267 )
      goto LABEL_67;
  }
  if ( v10 )
    v10 = v18 - v16 + 1;
  if ( (*(_DWORD *)(v19 + 48) & 0x6200000) != 0x4200000
    || (v41 = MiDecommitEnclavePages((_DWORD)Object, v19, v16, v10, v28), v42 = v41, v41 == -1073741802) )
  {
    v29 = *(_DWORD *)(v19 + 48);
    if ( (*(_BYTE *)(v19 + 48) & 0x70) == 0x30
      || (v29 & 0x200000) != 0
      && ((v29 & 0x800000) != 0 || (v29 & 0x180000u) >= 0x100000)
      && ((v29 & 0xA00000) != 0xA00000 || v10 && (((MiGetVadPageSize(v19) << 12) - 1) & (v16 | (v18 + 1))) != 0)
      || (v30 = *(unsigned int *)(v19 + 52),
          LODWORD(v30) = v30 & 0x7FFFFFFF,
          (v30 | ((unsigned __int64)*(unsigned __int8 *)(v19 + 34) << 31)) == 0x7FFFFFFFDLL) )
    {
      v34 = -1073741664;
      goto LABEL_124;
    }
    if ( !v10 )
    {
      if ( v53 >> 12 != (*(unsigned int *)(v19 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32)) )
      {
LABEL_122:
        v34 = -1073741665;
        goto LABEL_124;
      }
      v18 = ((*(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32)) << 12) | 0xFFF;
    }
    v31 = MiDecommitRegion(v19, v16, v18);
    MiUnlockAndDereferenceVad((PVOID)v19);
    if ( v31 )
      MiDeleteEmptyPageTables(v16, v18, 0);
    v8 = v56;
    goto LABEL_41;
  }
  if ( v41 >= 0 )
  {
    MiUnlockAndDereferenceVad((PVOID)v19);
LABEL_41:
    if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 )
      PerfInfoLogVirtualFree(v16, v10, Object);
    if ( v17 )
      KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
    if ( v49 != (HANDLE)-1LL )
      ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    *v54 = v10;
LABEL_48:
    *v8 = v16;
    return 0;
  }
LABEL_67:
  v34 = v42;
LABEL_124:
  MiUnlockAndDereferenceVad((PVOID)v19);
  if ( v43 )
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, (__int64)Object);
LABEL_127:
  v6 = v49;
LABEL_128:
  if ( v17 )
    KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
  if ( v6 != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  return v34;
}
