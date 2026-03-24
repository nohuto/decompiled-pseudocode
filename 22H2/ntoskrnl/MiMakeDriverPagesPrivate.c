/*
 * XREFs of MiMakeDriverPagesPrivate @ 0x140358454
 * Callers:
 *     MiLockCode @ 0x1402A3C40 (MiLockCode.c)
 *     MiSetSystemCodeProtection @ 0x140357D78 (MiSetSystemCodeProtection.c)
 *     MiLockDriverPageRange @ 0x14052D944 (MiLockDriverPageRange.c)
 *     MiBackSingleImageWithPagefile @ 0x140780B14 (MiBackSingleImageWithPagefile.c)
 *     MiSplitDriverPage @ 0x1408C4DF4 (MiSplitDriverPage.c)
 * Callees:
 *     MmAccessFault @ 0x14020D050 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x14020EAB0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiCopyOnWrite @ 0x14023EC70 (MiCopyOnWrite.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiGetAnyMultiplexedVm @ 0x14027D77C (MiGetAnyMultiplexedVm.c)
 *     MiIsPfnFromSlabAllocation @ 0x140283570 (MiIsPfnFromSlabAllocation.c)
 *     MiGetSessionVm @ 0x14029281C (MiGetSessionVm.c)
 *     MiAddLockedPageCharge @ 0x14029AA98 (MiAddLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402A9250 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     MiSessionLookupImage @ 0x140328A98 (MiSessionLookupImage.c)
 *     MiDriverPageMustStayResident @ 0x140336EFC (MiDriverPageMustStayResident.c)
 *     MiReleaseFreshPage @ 0x140357CD4 (MiReleaseFreshPage.c)
 *     MiUnlockLoaderEntry @ 0x140358A50 (MiUnlockLoaderEntry.c)
 *     MiLockLoaderEntry @ 0x140358C88 (MiLockLoaderEntry.c)
 *     MiUseSlabAllocatorForDriverPage @ 0x1403592B4 (MiUseSlabAllocatorForDriverPage.c)
 *     MiCheckSlabPage @ 0x14037CA40 (MiCheckSlabPage.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     MiMakeDriverPageStayResident @ 0x14052DD94 (MiMakeDriverPageStayResident.c)
 *     MiAllocateDriverPage @ 0x1406FF348 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiMakeDriverPagesPrivate(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v4; // r12
  unsigned int v5; // ebx
  char v6; // bp
  unsigned __int64 SessionVm; // rax
  int v10; // r8d
  __int64 v11; // r15
  __int64 v12; // r13
  int v13; // ecx
  int v14; // eax
  unsigned __int64 v15; // rdi
  __int64 DriverPage; // r14
  __int64 v17; // rdx
  __int64 v18; // r8
  _DWORD *v19; // r9
  unsigned __int8 v20; // al
  __int64 v21; // rax
  ULONG_PTR v22; // rbx
  __int64 v23; // rsi
  int v24; // eax
  int v25; // ebp
  __int64 v26; // rdx
  __int64 v27; // r8
  _DWORD *v28; // r9
  __int64 v29; // rsi
  __int64 v30; // rdx
  unsigned int v31; // ebx
  __int64 v32; // rbp
  __int64 v33; // rdx
  __int64 v34; // r8
  _DWORD *v35; // r9
  ULONG_PTR v36; // rbp
  __int64 v37; // r8
  __int64 v38; // r9
  char v39; // al
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // r8
  _DWORD *v48; // r9
  __int64 v49; // r8
  _DWORD *v50; // r9
  unsigned __int8 v52; // [rsp+30h] [rbp-98h]
  char v53; // [rsp+34h] [rbp-94h]
  unsigned int v54; // [rsp+38h] [rbp-90h] BYREF
  int v55; // [rsp+3Ch] [rbp-8Ch]
  int v56; // [rsp+40h] [rbp-88h]
  int v57; // [rsp+44h] [rbp-84h] BYREF
  int v58; // [rsp+48h] [rbp-80h] BYREF
  unsigned int v59; // [rsp+4Ch] [rbp-7Ch]
  unsigned __int64 v60; // [rsp+50h] [rbp-78h]
  unsigned __int64 v61; // [rsp+58h] [rbp-70h]
  __int64 v62; // [rsp+60h] [rbp-68h]
  _QWORD *v63; // [rsp+68h] [rbp-60h]
  __int64 v64; // [rsp+70h] [rbp-58h]
  __int64 v65[10]; // [rsp+78h] [rbp-50h] BYREF

  v4 = 0LL;
  v5 = 0;
  v54 = 0;
  v59 = 0;
  v6 = a4;
  v63 = 0LL;
  v53 = 0;
  v62 = 0LL;
  if ( (unsigned int)MiGetSystemRegionType((__int64)(a2 << 25) >> 16) == 1 )
  {
    v60 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5];
    SessionVm = MiGetSessionVm();
  }
  else
  {
    v60 = 0LL;
    SessionVm = (unsigned __int64)MiGetAnyMultiplexedVm(1);
  }
  v11 = SessionVm;
  v12 = a1 + 160;
  v13 = 0;
  v64 = *(_QWORD *)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(SessionVm + 174));
  if ( (v6 & 3) == 0 && ((unsigned __int8)v10 & BYTE2(MiFlags)) != 0 && (MiFlags & 0x8000) != 0 )
    v13 = 2;
  v14 = v10 | v13;
  v55 = v6 & 4;
  v15 = a2;
  if ( (v6 & 4) == 0 )
    v14 = v13;
  v56 = v14;
  DriverPage = -1LL;
  v61 = 0LL;
  MiLockLoaderEntry(v12, 0LL);
  v20 = MiLockWorkingSetShared(v11, v17, v18, v19);
  v52 = v20;
  if ( a2 > a3 )
    goto LABEL_75;
  while ( 1 )
  {
    if ( v4 )
    {
      if ( (v15 & 0xFFF) != 0 )
        goto LABEL_15;
      MiUnlockPageTableInternal(v11, v4);
    }
    v4 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    MiLockPageTableInternal(v11, v4, 0LL);
LABEL_15:
    v21 = MI_READ_PTE_LOCK_FREE(v15);
    v65[0] = v21;
    v22 = v21;
    if ( !v21 )
      goto LABEL_24;
    if ( (v21 & 1) == 0 )
    {
      if ( (v21 & 0x400) != 0 )
      {
        MiUnlockPageTableInternal(v11, v4);
        MiUnlockWorkingSetShared(v11, v52);
        MiUnlockLoaderEntry(v12, 0LL);
        v23 = (__int64)((v15 << 25) - v62) >> 16;
        v24 = MmAccessFault(0LL, v23, 0, 0LL);
        v25 = v24;
        if ( v24 < 0 && (v15 == a2 || (a4 & 8) == 0) )
          KeBugCheckEx(0x1Au, 0x3000uLL, v23, v22, v24);
        MiLockLoaderEntry(v12, 0LL);
        MiLockWorkingSetShared(v11, v26, v27, v28);
        if ( v25 >= 0 )
        {
          MiLockPageTableInternal(v11, v4, 0LL);
          goto LABEL_25;
        }
        v4 = 0LL;
      }
      goto LABEL_24;
    }
    v29 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v65) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    if ( !(unsigned int)MI_PFN_IS_PROTO(v29)
      || (*(_QWORD *)(v29 + 40) & 0x1000000000LL) == 0 && *(__int64 *)(v29 + 8) > 0
      || (v6 & 1) != 0 && ((v22 & 0x800) != 0 || (v22 & 0x200) == 0) )
    {
      goto LABEL_24;
    }
    v31 = (*(_DWORD *)(v29 + 16) >> 5) & 0x1F;
    if ( (MiFlags & 0x10000) != 0 && (v60 || (v6 & 2) != 0) && ((*(_DWORD *)(v29 + 16) >> 5) & 2) != 0 )
    {
      v5 = -1073741755;
      goto LABEL_72;
    }
    if ( v55 && (*(_DWORD *)(v12 + 36) & 1) == 0 && (*(_BYTE *)(v29 + 35) & 8) != 0 )
      goto LABEL_24;
    if ( DriverPage != -1 )
    {
      v32 = v30 + 48 * DriverPage;
      if ( (unsigned int)MiUseSlabAllocatorForDriverPage(v64, v31, &v54) )
      {
        if ( !MiIsPfnFromSlabAllocation(v32) || !(unsigned int)MiCheckSlabPage(v32, v54, v31) )
          goto LABEL_46;
      }
      else if ( MiIsPfnFromSlabAllocation(v32) )
      {
LABEL_46:
        if ( v61 != v15 )
        {
          MiReleaseFreshPage(v32, v33, v34, v35);
          DriverPage = -1LL;
          v61 = v15;
        }
      }
      if ( DriverPage != -1 )
      {
        v36 = (__int64)((v15 << 25) - v62) >> 16;
        MiCopyOnWrite(v36, (ULONG_PTR *)v15, DriverPage, v56);
        v37 = a1;
        if ( !v60 || v63 )
        {
          v39 = v53;
          LOBYTE(v38) = 1;
        }
        else
        {
          v63 = MiSessionLookupImage(*(_QWORD *)(a1 + 48));
          LOBYTE(v38) = 1;
          v39 = v53;
          if ( *((_BYTE *)v63 + 64) )
            v39 = 1;
          v53 = v39;
        }
        if ( v39 && MiDriverPageMustStayResident(v37, v15) )
        {
          v57 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v57, v40, v41, v38);
            while ( *(__int64 *)(v29 + 24) < 0 );
          }
          MiRemoveLockedPageChargeAndDecRef(v29);
          _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v45 = 48 * DriverPage - 0x58000000000LL;
          v58 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v45 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v58, v42, v43, v44);
            while ( *(__int64 *)(v45 + 24) < 0 );
          }
          MiAddLockedPageCharge(48 * DriverPage - 0x58000000000LL, 1);
          _InterlockedAnd64((volatile signed __int64 *)(v45 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          LOBYTE(v38) = 1;
        }
        else
        {
          v45 = 48 * DriverPage - 0x58000000000LL;
        }
        DriverPage = -1LL;
        if ( ((unsigned __int8)v38 & BYTE2(MiFlags)) != 0 && ((*(_QWORD *)(v45 + 40) >> 60) & 7) == 3 )
          MiMakeDriverPageStayResident(a1, v11, v36);
LABEL_24:
        v15 += 8LL;
        goto LABEL_25;
      }
    }
    MiUnlockPageTableInternal(v11, v4);
    MiUnlockWorkingSetShared(v11, v52);
    MiUnlockLoaderEntry(v12, 0LL);
    DriverPage = MiAllocateDriverPage(v64, v31, 0LL);
    MiLockLoaderEntry(v12, 0LL);
    MiLockWorkingSetShared(v11, v46, v47, v48);
    MiLockPageTableInternal(v11, v4, 0LL);
    if ( DriverPage == -1 )
    {
      v5 = -1073741801;
      goto LABEL_72;
    }
LABEL_25:
    if ( v15 > a3 )
      break;
    v6 = a4;
  }
  v5 = v59;
LABEL_72:
  if ( v4 )
    MiUnlockPageTableInternal(v11, v4);
  v20 = v52;
LABEL_75:
  MiUnlockWorkingSetShared(v11, v20);
  MiUnlockLoaderEntry(v12, 0LL);
  if ( DriverPage != -1 )
    MiReleaseFreshPage(48 * DriverPage - 0x58000000000LL, 0xFFFFFA8000000000uLL, v49, v50);
  return v5;
}
