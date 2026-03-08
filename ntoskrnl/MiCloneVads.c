/*
 * XREFs of MiCloneVads @ 0x140660C98
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x140A45CF4 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x14020DC68 (MiLocateLockedVadEvent.c)
 *     MiLocateAddress @ 0x140228680 (MiLocateAddress.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiReturnFullProcessCharges @ 0x140289980 (MiReturnFullProcessCharges.c)
 *     MiUnlockWorkingSetExclusive @ 0x140289BA0 (MiUnlockWorkingSetExclusive.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1402955D0 (PsReturnProcessNonPagedPoolQuota.c)
 *     KeShouldYieldProcessor @ 0x1402C9870 (KeShouldYieldProcessor.c)
 *     MiDeleteCloneZombies @ 0x1402FBC3C (MiDeleteCloneZombies.c)
 *     MiFlushTbList @ 0x140323BC0 (MiFlushTbList.c)
 *     MiGetSharedVm @ 0x140330CD4 (MiGetSharedVm.c)
 *     MiIsVadLargePrivate @ 0x1403316C0 (MiIsVadLargePrivate.c)
 *     RtlAvlRemoveNode @ 0x140333B40 (RtlAvlRemoveNode.c)
 *     MiWorkingSetIsContended @ 0x1403478E0 (MiWorkingSetIsContended.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14034CCC0 (PsChargeProcessNonPagedPoolQuota.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiLockAweVadsExclusive @ 0x140648A8C (MiLockAweVadsExclusive.c)
 *     MiUnlockAweVadsExclusive @ 0x1406498DC (MiUnlockAweVadsExclusive.c)
 *     MiBuildForkPte @ 0x14065FC20 (MiBuildForkPte.c)
 *     MiFreeForkMaps @ 0x1406621B0 (MiFreeForkMaps.c)
 *     MiInitializeForkMaps @ 0x140662AC4 (MiInitializeForkMaps.c)
 *     MiInsertClone @ 0x140662B2C (MiInsertClone.c)
 *     MiUpdateForkMaps @ 0x140662E50 (MiUpdateForkMaps.c)
 *     MiReturnFullProcessCommitment @ 0x1406B6FB4 (MiReturnFullProcessCommitment.c)
 *     MiBuildNewCloneDescriptor @ 0x140A45B98 (MiBuildNewCloneDescriptor.c)
 *     MiFreeCloneDescriptor @ 0x140A46394 (MiFreeCloneDescriptor.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCloneVads(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5, _DWORD *a6)
{
  _QWORD *v7; // r14
  __int64 v8; // r12
  __int64 v9; // rdi
  unsigned __int64 *v10; // r13
  __int64 v11; // rdi
  int v12; // eax
  _QWORD *Pool; // rax
  _QWORD *v14; // rsi
  struct _KTHREAD *v15; // rcx
  volatile LONG *SharedVm; // rbx
  KIRQL v17; // al
  __int64 v18; // r8
  __int64 v19; // r9
  struct _KTHREAD *v20; // rdi
  volatile LONG *v21; // rbx
  unsigned __int64 j; // rdi
  unsigned __int64 v23; // rbx
  int v24; // edi
  unsigned __int64 v25; // r12
  _QWORD *v26; // rax
  _QWORD *v27; // rbx
  _QWORD **v28; // rax
  __int64 v29; // r13
  _QWORD *v30; // rcx
  _QWORD *v31; // rcx
  _QWORD *v32; // rax
  unsigned __int64 v33; // rdi
  __int64 **Address; // rax
  __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  __int64 v37; // r10
  unsigned __int64 v38; // rdi
  unsigned __int64 v39; // rbx
  volatile LONG *v40; // rax
  volatile LONG *v41; // r12
  int v42; // esi
  unsigned __int64 updated; // rax
  int v44; // ecx
  unsigned __int64 v45; // rcx
  bool v46; // cc
  __int64 v47; // rbx
  unsigned __int64 v48; // r13
  unsigned __int64 v49; // rsi
  int v50; // edx
  unsigned __int64 LockedVadEvent; // rax
  __int64 v52; // r9
  size_t v53; // r8
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // r12
  __int64 *v57; // rcx
  _QWORD *i; // rax
  unsigned __int64 v59; // r13
  unsigned __int64 v60; // r14
  _QWORD *v61; // rbx
  _QWORD **v62; // rax
  unsigned __int64 v63; // rcx
  _QWORD *v64; // rcx
  volatile LONG *v65; // rbx
  unsigned __int64 v66; // r13
  _QWORD *v67; // rbx
  KIRQL v69; // [rsp+80h] [rbp-80h]
  int v70; // [rsp+84h] [rbp-7Ch]
  int v71; // [rsp+88h] [rbp-78h] BYREF
  int v72; // [rsp+8Ch] [rbp-74h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-70h]
  unsigned __int64 v74; // [rsp+98h] [rbp-68h]
  unsigned __int64 v75; // [rsp+A0h] [rbp-60h]
  _QWORD *v76; // [rsp+A8h] [rbp-58h]
  __int64 v77; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v78; // [rsp+B8h] [rbp-48h]
  __int64 v79; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v80; // [rsp+C8h] [rbp-38h]
  _QWORD *v81; // [rsp+D0h] [rbp-30h]
  __int64 v82; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v83; // [rsp+E0h] [rbp-20h]
  _QWORD *v84; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v85; // [rsp+F0h] [rbp-10h]
  _QWORD *v86; // [rsp+F8h] [rbp-8h]
  _DWORD *v87; // [rsp+100h] [rbp+0h]
  _QWORD v88[10]; // [rsp+110h] [rbp+10h] BYREF
  __int128 v89; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v90[24]; // [rsp+170h] [rbp+70h] BYREF

  v78 = a3;
  v7 = a1;
  v86 = a1;
  v82 = a4;
  v87 = a6;
  memset(v88, 0, 0x48uLL);
  memset(v90, 0, 0xB8uLL);
  v72 = 0;
  v77 = 0LL;
  v80 = 0LL;
  v74 = 0LL;
  v89 = 0LL;
  v8 = 0LL;
  CurrentThread = KeGetCurrentThread();
  while ( 1 )
  {
    v9 = v7[159];
    if ( !v9 )
      v9 = 1LL;
    v79 = MiBuildNewCloneDescriptor(v7, v9, *(_QWORD *)(v7[210] + 344LL));
    v10 = (unsigned __int64 *)v79;
    if ( !v79 )
      return 3221225626LL;
    v11 = 32 * (v9 + 1);
    v12 = PsChargeProcessNonPagedPoolQuota((struct _KPROCESS *)a2, v11);
    if ( v12 < 0 )
    {
      v24 = v12;
      goto LABEL_87;
    }
    Pool = MiAllocatePool(64, 0x70uLL, 0x64436D4Du);
    v84 = Pool;
    v14 = Pool;
    if ( !Pool )
    {
      PsReturnProcessNonPagedPoolQuota((struct _KPROCESS *)a2, v11);
      v24 = -1073741670;
LABEL_87:
      MiFreeCloneDescriptor(v7, v79);
      return (unsigned int)v24;
    }
    v15 = CurrentThread;
    Pool[8] = v11;
    MiLockAweVadsExclusive((__int64)v15);
    SharedVm = (volatile LONG *)MiGetSharedVm((__int64)(v7 + 208));
    v17 = ExAcquireSpinLockExclusive(SharedVm);
    *((_DWORD *)SharedVm + 1) = 0;
    v69 = v17;
    if ( v7[159] <= v10[5] )
    {
      *v14 = v78;
      MiDeleteCloneZombies((__int64)v7, 1LL, v18, v19);
      v20 = CurrentThread;
      v7[156] = CurrentThread;
      MiUnlockWorkingSetExclusive((__int64)(v7 + 208), v69);
      MiUnlockAweVadsExclusive((__int64)v20);
      v21 = (volatile LONG *)MiGetSharedVm((__int64)(v7 + 208));
      ExAcquireSpinLockExclusive(v21);
      j = 0LL;
      *((_DWORD *)v21 + 1) = 0;
      v23 = v10[3];
      v85 = v23;
      if ( (unsigned int)MiInitializeForkMaps(a2, v88) )
      {
        v25 = v23;
        v75 = v23;
        v10[6] = 1LL;
        MiInsertClone(v7, v10, 1LL);
        v26 = *(_QWORD **)(a2 + 2008);
        LODWORD(v90[0]) = 1;
        v27 = 0LL;
        WORD2(v90[0]) = 0;
        v90[2] = 0LL;
        LODWORD(v90[1]) = 20;
        v90[3] = 0LL;
        while ( v26 )
        {
          v27 = v26;
          v26 = (_QWORD *)*v26;
        }
        if ( v27 )
        {
          do
          {
            v28 = (_QWORD **)v27[1];
            v29 = (__int64)v27;
            v81 = v27;
            v30 = v27;
            if ( v28 )
            {
              v31 = *v28;
              v27 = v28;
              v76 = v28;
              if ( v31 )
              {
                do
                {
                  v32 = (_QWORD *)*v31;
                  v27 = v31;
                  v76 = v31;
                  v31 = v32;
                }
                while ( v32 );
              }
            }
            else
            {
              v27 = (_QWORD *)(v27[2] & 0xFFFFFFFFFFFFFFFCuLL);
              v76 = v27;
              if ( v27 )
              {
                do
                {
                  if ( (_QWORD *)*v27 == v30 )
                    break;
                  v30 = v27;
                  v27 = (_QWORD *)(v27[2] & 0xFFFFFFFFFFFFFFFCuLL);
                }
                while ( v27 );
                v76 = v27;
              }
            }
            v33 = (*(unsigned int *)(v29 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v29 + 32) << 32)) << 12;
            Address = MiLocateAddress(v33);
            v35 = *(unsigned int *)(v29 + 52);
            LODWORD(v35) = v35 & 0x7FFFFFFF;
            v36 = (unsigned __int64)*(unsigned __int8 *)(v29 + 34) << 31;
            v78 = (__int64)Address;
            if ( (v35 | v36) < 0x7FFFFFFFDLL && !MiIsVadLargePrivate(v29) )
            {
              v38 = v37 + ((v33 >> 9) & 0x7FFFFFFFF8LL);
              v39 = v37
                  + 8
                  * ((*(unsigned int *)(v29 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v29 + 33) << 32)) & 0xFFFFFFFFFLL);
              v83 = v39;
              do
              {
                MiFlushTbList((int *)v90);
                if ( MiWorkingSetIsContended((__int64)(v7 + 208)) || KeShouldYieldProcessor() )
                {
                  v71 = 0;
                  v40 = (volatile LONG *)MiGetSharedVm((__int64)(v7 + 208));
                  v41 = v40;
                  if ( (*v40 & 0x40000000) != 0 )
                  {
                    v70 = 1;
                    *((_DWORD *)v40 + 1) = 1;
                  }
                  else
                  {
                    v70 = 0;
                  }
                  MiUnlockWorkingSetExclusive((__int64)(v7 + 208), v69);
                  v42 = 0;
                  if ( v70 )
                  {
                    while ( *((_DWORD *)v41 + 1) )
                    {
                      KeYieldProcessorEx(&v71);
                      if ( (v71 & 0x3F) == 0 )
                      {
                        v42 = 1;
                        break;
                      }
                    }
                  }
                  ExAcquireSpinLockExclusive(v41);
                  if ( !v42 )
                    *((_DWORD *)v41 + 1) = 0;
                  v25 = v75;
                }
                updated = MiUpdateForkMaps((unsigned int)v88, v38, v39, (unsigned int)&v77, (__int64)v7, v69);
                v44 = *(_DWORD *)(v29 + 48);
                v38 = updated;
                if ( (*(_BYTE *)(v29 + 48) & 0x70) != 0x50 )
                {
                  if ( updated > v39 )
                    break;
                  v45 = v39;
                  v46 = (updated & 0xFFFFFFFFFFFFF000uLL) + 4088 <= v39;
                  v47 = v88[8];
                  if ( v46 )
                    v45 = (updated & 0xFFFFFFFFFFFFF000uLL) + 4088;
                  v48 = v88[5] - updated;
                  v49 = v45;
                  do
                  {
                    if ( (unsigned int)MiBuildForkPte(
                                         (__int64)v7,
                                         a2,
                                         v38,
                                         (_QWORD *)(v38 + v48),
                                         v82,
                                         v25,
                                         &v77,
                                         v47,
                                         (int *)v90,
                                         v78,
                                         (__int64)v81,
                                         a5,
                                         v69,
                                         &v89,
                                         &v72) )
                      v25 += 32LL;
                    v38 += 8LL;
                  }
                  while ( v38 <= v49 );
                  v29 = (__int64)v81;
                  v39 = v83;
                  v75 = v25;
                  v44 = *((_DWORD *)v81 + 12);
                }
              }
              while ( v38 <= v39 );
              v27 = v76;
              if ( (v44 & 0x600000) == 0x600000 )
              {
                MiLocateLockedVadEvent(v29, 4);
                LockedVadEvent = MiLocateLockedVadEvent(v78, v50);
                memmove(*(void **)(v52 + 16), *(const void **)(LockedVadEvent + 16), v53);
              }
            }
            j = 0LL;
          }
          while ( v27 );
          v14 = v84;
          v10 = (unsigned __int64 *)v79;
        }
        MiFlushTbList((int *)v90);
        MiFreeForkMaps(v88);
        v56 = v25 - v85;
        v57 = (__int64 *)v10[7];
        *(_QWORD *)(a2 + 1272) += v77;
        v8 = v56 >> 5;
        v77 = *(_QWORD *)(a2 + 1272);
        if ( v8 )
        {
          *v57 = v8;
          v10[6] = v8;
          v10[5] = v8;
        }
        else
        {
          RtlAvlRemoveNode(v7 + 158, v10);
        }
        MiDeleteCloneZombies((__int64)v7, 1LL, v54, v55);
        for ( i = (_QWORD *)v7[158]; i; i = (_QWORD *)*i )
          j = (unsigned __int64)i;
        if ( j )
        {
          v59 = v74;
          v60 = v80;
          do
          {
            _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(j + 56) + 8LL));
            v61 = (_QWORD *)*v14;
            v59 += v14[8];
            v60 += *(_QWORD *)(j + 64);
            *(_OWORD *)v14 = *(_OWORD *)j;
            *((_OWORD *)v14 + 1) = *(_OWORD *)(j + 16);
            *((_OWORD *)v14 + 2) = *(_OWORD *)(j + 32);
            *((_OWORD *)v14 + 3) = *(_OWORD *)(j + 48);
            *((_OWORD *)v14 + 4) = *(_OWORD *)(j + 64);
            *((_OWORD *)v14 + 5) = *(_OWORD *)(j + 80);
            *((_OWORD *)v14 + 6) = *(_OWORD *)(j + 96);
            MiInsertClone(a2, v14, 0LL);
            v62 = *(_QWORD ***)(j + 8);
            v14 = v61;
            v63 = j;
            if ( v62 )
            {
              v64 = *v62;
              for ( j = *(_QWORD *)(j + 8); v64; v64 = (_QWORD *)*v64 )
                j = (unsigned __int64)v64;
            }
            else
            {
              while ( 1 )
              {
                j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                if ( !j || *(_QWORD *)j == v63 )
                  break;
                v63 = j;
              }
            }
          }
          while ( j );
          v80 = v60;
          v7 = v86;
          v74 = v59;
          v10 = (unsigned __int64 *)v79;
        }
        v24 = 0;
      }
      else
      {
        MiFreeForkMaps(v88);
        v24 = -1073741670;
      }
      MiUnlockWorkingSetExclusive((__int64)(v7 + 208), v69);
      MiLockAweVadsExclusive((__int64)CurrentThread);
      v65 = (volatile LONG *)MiGetSharedVm((__int64)(v7 + 208));
      ExAcquireSpinLockExclusive(v65);
      *((_DWORD *)v65 + 1) = 0;
      v7[156] = 0LL;
      MiUnlockWorkingSetExclusive((__int64)(v7 + 208), v69);
      MiUnlockAweVadsExclusive((__int64)CurrentThread);
      if ( v14 )
      {
        v66 = v74;
        do
        {
          v66 += v14[8];
          v67 = (_QWORD *)*v14;
          ExFreePoolWithTag(v14, 0);
          v14 = v67;
        }
        while ( v67 );
        v74 = v66;
        v10 = (unsigned __int64 *)v79;
      }
      if ( v74 > v80 )
        PsReturnProcessNonPagedPoolQuota((struct _KPROCESS *)a2, v74 - v80);
      if ( (_QWORD)v89 )
        MiReturnFullProcessCommitment(a2, v89);
      if ( *((_QWORD *)&v89 + 1) )
        MiReturnFullProcessCharges(a2, *((__int64 *)&v89 + 1));
      if ( !v8 || v24 < 0 )
        MiFreeCloneDescriptor(v7, v10);
      if ( v72 )
        *v87 = 1;
      return (unsigned int)v24;
    }
    MiUnlockWorkingSetExclusive((__int64)(v7 + 208), v17);
    MiUnlockAweVadsExclusive((__int64)CurrentThread);
    MiFreeCloneDescriptor(v7, v10);
    PsReturnProcessNonPagedPoolQuota((struct _KPROCESS *)a2, v11);
    ExFreePoolWithTag(v14, 0);
  }
}
