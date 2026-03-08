/*
 * XREFs of CmpReorganizeHive @ 0x14072C970
 * Callers:
 *     CmpCreateHive @ 0x14072C06C (CmpCreateHive.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     CmpAllocatePool @ 0x140243878 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     CmSiQuerySystemTime @ 0x1403026D0 (CmSiQuerySystemTime.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     ExIsSoftBoot @ 0x140380700 (ExIsSoftBoot.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     CmCheckRegistry @ 0x14072DEB4 (CmCheckRegistry.c)
 *     CmpCopyKeyPartial @ 0x14078ECB4 (CmpCopyKeyPartial.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x14085A0F4 (CmpUpdateReorganizeRegistryValues.c)
 *     HvMarkBaseBlockDirty @ 0x140871E3C (HvMarkBaseBlockDirty.c)
 *     CmpClearKeyAccessBits @ 0x1408810DC (CmpClearKeyAccessBits.c)
 *     CmpLogReorganizeEvent @ 0x140A0D02C (CmpLogReorganizeEvent.c)
 *     CmpCreateEmptyHiveClone @ 0x140A19E20 (CmpCreateEmptyHiveClone.c)
 *     CmpDestroyHive @ 0x140A19FFC (CmpDestroyHive.c)
 *     CmpSwapHiveStorage @ 0x140A1A31C (CmpSwapHiveStorage.c)
 *     CmpCopySyncTree @ 0x140A1E748 (CmpCopySyncTree.c)
 *     CmpLockRegistry @ 0x140AF2270 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 *     CmpAcquireShutdownRundown @ 0x140AF23A0 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF23F0 (CmpReleaseShutdownRundown.c)
 */

__int64 __fastcall CmpReorganizeHive(ULONG_PTR BugCheckParameter3, __int64 a2, int a3)
{
  __int64 v3; // rax
  int v6; // ecx
  __int64 v8; // r13
  int v9; // eax
  int v10; // ebx
  LARGE_INTEGER *v12; // r9
  ULONG v13; // edx
  LARGE_INTEGER v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int16 v26; // cx
  ULONG_PTR v27; // rsi
  int v28; // ebx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // edx
  int v34; // r9d
  int v35; // r10d
  __int64 v36; // r14
  __int64 v37; // rax
  __int64 v38; // r13
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rcx
  __int64 v44; // r9
  unsigned int v45; // r10d
  __int64 v46; // rsi
  __int64 v47; // rax
  __int64 v48; // r14
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  unsigned int v53; // r12d
  unsigned int v54; // r14d
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rcx
  signed __int64 *v60; // rbx
  __int64 v61; // rsi
  __int64 v62; // rax
  __int64 v63; // r13
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  ULONG_PTR v68; // [rsp+28h] [rbp-D8h]
  int v69; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v70; // [rsp+44h] [rbp-BCh] BYREF
  LARGE_INTEGER v71; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v72; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v73; // [rsp+54h] [rbp-ACh] BYREF
  ULONG_PTR BugCheckParameter3a; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v75; // [rsp+68h] [rbp-98h] BYREF
  __int64 v76; // [rsp+70h] [rbp-90h] BYREF
  __int64 Pool; // [rsp+78h] [rbp-88h] BYREF
  __int64 v78; // [rsp+80h] [rbp-80h] BYREF
  __int64 v79; // [rsp+88h] [rbp-78h] BYREF
  __int128 v80; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v81[2]; // [rsp+A0h] [rbp-60h] BYREF
  int *v82; // [rsp+C0h] [rbp-40h]
  __int64 v83; // [rsp+C8h] [rbp-38h]
  __int64 *v84; // [rsp+D0h] [rbp-30h]
  __int64 v85; // [rsp+D8h] [rbp-28h]
  __int64 *p_Pool; // [rsp+E0h] [rbp-20h]
  __int64 v87; // [rsp+E8h] [rbp-18h]
  __int64 *v88; // [rsp+F0h] [rbp-10h]
  __int64 v89; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v90; // [rsp+100h] [rbp+0h] BYREF
  int *v91; // [rsp+120h] [rbp+20h]
  __int64 v92; // [rsp+128h] [rbp+28h]
  __int16 *v93; // [rsp+130h] [rbp+30h]
  __int64 v94; // [rsp+138h] [rbp+38h]
  __int16 *v95; // [rsp+140h] [rbp+40h]
  __int64 v96; // [rsp+148h] [rbp+48h]
  int *v97; // [rsp+150h] [rbp+50h]
  __int64 v98; // [rsp+158h] [rbp+58h]
  __int64 v99; // [rsp+160h] [rbp+60h]
  __int64 v100; // [rsp+168h] [rbp+68h]
  __int64 v101; // [rsp+170h] [rbp+70h]
  int v102; // [rsp+178h] [rbp+78h]
  int v103; // [rsp+17Ch] [rbp+7Ch]
  __int64 v104; // [rsp+180h] [rbp+80h]
  __int64 v105; // [rsp+188h] [rbp+88h]
  __int64 v106; // [rsp+190h] [rbp+90h]
  int v107; // [rsp+198h] [rbp+98h]
  int v108; // [rsp+19Ch] [rbp+9Ch]
  __int64 v109; // [rsp+1A0h] [rbp+A0h]
  __int64 v110; // [rsp+1A8h] [rbp+A8h]
  __int64 v111; // [rsp+1B0h] [rbp+B0h]
  int v112; // [rsp+1B8h] [rbp+B8h]
  int v113; // [rsp+1BCh] [rbp+BCh]
  __int64 *v114; // [rsp+1C0h] [rbp+C0h]
  __int64 v115; // [rsp+1C8h] [rbp+C8h]

  v3 = *(_QWORD *)(BugCheckParameter3 + 64);
  v76 = a2;
  LODWORD(v75) = 0;
  v71.QuadPart = 0LL;
  v6 = *(_DWORD *)(v3 + 144);
  BugCheckParameter3a = 0LL;
  v8 = 0LL;
  v80 = 0LL;
  if ( (v6 & 1) != 0 )
    return 0;
  v9 = *(_DWORD *)(BugCheckParameter3 + 160);
  if ( (v9 & 0x10) == 0 && !*(_QWORD *)(BugCheckParameter3 + 1544) )
    return 0;
  if ( (v9 & 0x8001) != 0 || !*(_DWORD *)(BugCheckParameter3 + 168) )
    return 0;
  if ( !(unsigned __int8)CmpAcquireShutdownRundown() )
  {
    v10 = -1073741431;
LABEL_37:
    if ( (unsigned int)dword_140C04328 > 5 && tlgKeywordOn((__int64)&dword_140C04328, 0x400000000000LL) )
    {
      v69 = v10;
      v82 = &v69;
      v83 = 4LL;
      v84 = &v78;
      v78 = 0x1000000LL;
      v85 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C04328, (unsigned __int8 *)byte_1400373A0, 0LL, 0LL, 4u, v81);
    }
    return (unsigned int)v10;
  }
  if ( (a3 & 0x400000) != 0
    && ExIsSoftBoot()
    && (unsigned __int64)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 168LL) - 1LL) > 1 )
  {
    goto LABEL_12;
  }
  CmSiQuerySystemTime(&v71);
  v12 = *(LARGE_INTEGER **)(BugCheckParameter3 + 64);
  v13 = v71.LowPart & 0xFFFFFFFC;
  v71.LowPart &= 0xFFFFFFFC;
  v14 = v12[21];
  if ( v14.QuadPart <= (unsigned __int64)v71.QuadPart
    && v71.QuadPart - v14.QuadPart < 864000000000LL * (unsigned __int64)(unsigned int)CmpReorganizeDelayDays )
  {
    goto LABEL_12;
  }
  if ( !a2 )
  {
    v26 = 0;
    *((_QWORD *)&v80 + 1) = v12 + 6;
    do
    {
      if ( !*((_WORD *)&v12[6].LowPart + v26) )
        break;
      ++v26;
    }
    while ( v26 < 0x1Fu );
    LOWORD(v80) = 2 * v26;
    v76 = (__int64)&v80;
  }
  if ( v14.QuadPart == 2 || v14.QuadPart != 1 && (*(_DWORD *)(BugCheckParameter3 + 4112) & 0x400) == 0 )
  {
    v71.LowPart = v13 | 2;
    CmpClearKeyAccessBits(BugCheckParameter3);
    CmpLockRegistry(v16, v15, v17, v18);
    v19 = KeAbPreAcquire(BugCheckParameter3 + 72, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter3 + 72), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)(BugCheckParameter3 + 72), 0, v19, BugCheckParameter3 + 72);
    if ( v19 )
      *(_BYTE *)(v19 + 18) = 1;
    v20 = KeAbPreAcquire(BugCheckParameter3 + 80, 0LL);
    v21 = v20;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter3 + 80), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter3 + 80), v20, BugCheckParameter3 + 80);
    if ( v21 )
      *(_BYTE *)(v21 + 18) = 1;
    HvMarkBaseBlockDirty(BugCheckParameter3);
    *(LARGE_INTEGER *)(*(_QWORD *)(BugCheckParameter3 + 64) + 168LL) = v71;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter3 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter3 + 80));
    KeAbPostRelease(BugCheckParameter3 + 80);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter3 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(BugCheckParameter3 + 72));
    KeAbPostRelease(BugCheckParameter3 + 72);
    CmpUnlockRegistry(v23, v22, v24, v25);
    goto LABEL_12;
  }
  if ( v12[4].HighPart == -1 )
  {
LABEL_12:
    v10 = 0;
    goto LABEL_13;
  }
  v71.LowPart = v13 | 1;
  v10 = CmpCreateEmptyHiveClone(&BugCheckParameter3a, BugCheckParameter3);
  if ( v10 < 0 )
    goto LABEL_110;
  v27 = BugCheckParameter3a;
  v10 = CmpCopyKeyPartial(BugCheckParameter3, 6, v68, 0, (__int64)&v75);
  if ( v10 >= 0 )
  {
    v28 = v75;
    *(_DWORD *)(*(_QWORD *)(v27 + 64) + 36LL) = v75;
    HvMarkBaseBlockDirty(v27);
    v10 = CmpCopySyncTree(BugCheckParameter3, *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL), v27, v28, 66, 0);
    if ( v10 >= 0 )
    {
      Pool = CmpAllocatePool(256LL, 432LL, 859393347LL);
      v8 = Pool;
      if ( !Pool )
      {
        v10 = -1073741670;
        goto LABEL_111;
      }
      v10 = CmCheckRegistry(v27);
      if ( v10 >= 0 )
      {
        v43 = *(unsigned int *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL);
        if ( (v43 & 4) == 0 )
        {
          v44 = *(unsigned int *)(BugCheckParameter3 + 4764);
          if ( (_DWORD)v44 != *(_DWORD *)(v27 + 4764) )
          {
            if ( (unsigned int)dword_140C04328 > 5 && tlgKeywordOn((__int64)&dword_140C04328, 0x400000000000LL) )
            {
              v69 = v44;
              v82 = &v69;
              v83 = 4LL;
              v84 = (__int64 *)&v70;
              v70 = v45;
              p_Pool = &Pool;
              v85 = 4LL;
              Pool = 0x1000000LL;
              v87 = 8LL;
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_140C04328,
                (unsigned __int8 *)word_1400372E2,
                0LL,
                0LL,
                5u,
                v81);
            }
            CmpLockRegistry(v43, v29, v31, v44);
            v46 = KeAbPreAcquire(BugCheckParameter3 + 72, 0LL);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter3 + 72), 17LL, 0LL) )
              ExfAcquirePushLockSharedEx((signed __int64 *)(BugCheckParameter3 + 72), 0, v46, BugCheckParameter3 + 72);
            if ( v46 )
              *(_BYTE *)(v46 + 18) = 1;
            v47 = KeAbPreAcquire(BugCheckParameter3 + 80, 0LL);
            v48 = v47;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter3 + 80), 0LL) )
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter3 + 80), v47, BugCheckParameter3 + 80);
            if ( v48 )
              *(_BYTE *)(v48 + 18) = 1;
            HvMarkBaseBlockDirty(BugCheckParameter3);
            *(LARGE_INTEGER *)(*(_QWORD *)(BugCheckParameter3 + 64) + 168LL) = v71;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter3 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter3 + 80));
            KeAbPostRelease(BugCheckParameter3 + 80);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter3 + 72), 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(BugCheckParameter3 + 72));
            KeAbPostRelease(BugCheckParameter3 + 72);
            CmpUnlockRegistry(v50, v49, v51, v52);
            v10 = -1073741492;
            goto LABEL_110;
          }
        }
        *(_QWORD *)(v27 + 56) = 0LL;
        v53 = *(_DWORD *)(v27 + 280);
        v54 = *(_DWORD *)(BugCheckParameter3 + 280);
        CmpSwapHiveStorage(BugCheckParameter3, v27);
        if ( (unsigned int)dword_140C04328 > 5 && tlgKeywordOn((__int64)&dword_140C04328, 0x400000000000LL) )
        {
          v59 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 168LL);
          v82 = (int *)&v79;
          v84 = (__int64 *)&v69;
          p_Pool = (__int64 *)&v70;
          v88 = &v78;
          v79 = v59;
          v83 = 8LL;
          v69 = v54;
          v85 = 4LL;
          v70 = v53;
          v87 = 4LL;
          v78 = 0x1000000LL;
          v89 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140C04328,
            (unsigned __int8 *)word_14003734A,
            0LL,
            0LL,
            6u,
            v81);
        }
        CmpLockRegistry(v56, v55, v57, v58);
        v60 = (signed __int64 *)(BugCheckParameter3 + 72);
        v61 = KeAbPreAcquire(BugCheckParameter3 + 72, 0LL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter3 + 72), 17LL, 0LL) )
          ExfAcquirePushLockSharedEx((signed __int64 *)(BugCheckParameter3 + 72), 0, v61, BugCheckParameter3 + 72);
        if ( v61 )
          *(_BYTE *)(v61 + 18) = 1;
        v62 = KeAbPreAcquire(BugCheckParameter3 + 80, 0LL);
        v63 = v62;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter3 + 80), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter3 + 80), v62, BugCheckParameter3 + 80);
        if ( v63 )
          *(_BYTE *)(v63 + 18) = 1;
        HvMarkBaseBlockDirty(BugCheckParameter3);
        *(LARGE_INTEGER *)(*(_QWORD *)(BugCheckParameter3 + 64) + 168LL) = v71;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter3 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter3 + 80));
        KeAbPostRelease(BugCheckParameter3 + 80);
        if ( _InterlockedCompareExchange64(v60, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v60);
        KeAbPostRelease((ULONG_PTR)v60);
        CmpUnlockRegistry(v65, v64, v66, v67);
        CmpLogReorganizeEvent(v76, v54, v53);
        if ( v53 < v54 )
        {
          if ( CmpFirstReorganize )
          {
            CmpReorganizeLastRun = v71;
            CmpReorganizeTotalBytesSaved = 0LL;
            CmpFirstReorganize = 0;
          }
          CmpReorganizeTotalBytesSaved += v54 - v53;
          CmpUpdateReorganizeRegistryValues();
        }
        v10 = 0;
      }
      else
      {
        if ( (unsigned int)dword_140C04328 > 5 && tlgKeywordOn((__int64)&dword_140C04328, 0x400000000000LL) )
        {
          v69 = v10;
          v91 = &v69;
          v93 = &v72;
          v33 = *(unsigned __int16 *)(v8 + 8);
          v34 = *(unsigned __int16 *)(v8 + 10);
          v99 = v8 + 8;
          v95 = &v73;
          v101 = v8 + 12;
          v35 = *(unsigned __int8 *)(v8 + 394);
          v102 = 12 * v33;
          v106 = v8 + 108;
          v107 = 12 * v34;
          v111 = v8 + 396;
          v114 = &v76;
          LOWORD(v70) = v35;
          v72 = v33;
          v73 = v34;
          v104 = v8 + 10;
          v109 = v8 + 394;
          v92 = 4LL;
          v94 = 2LL;
          v96 = 2LL;
          v97 = (int *)&v70;
          v98 = 2LL;
          v100 = 2LL;
          v103 = 0;
          v105 = 2LL;
          v108 = 0;
          v110 = 2LL;
          v112 = 8 * v35;
          v113 = 0;
          v76 = 0x1000000LL;
          v115 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140C04328,
            (unsigned __int8 *)&dword_140037173 + 2,
            0LL,
            0LL,
            0xDu,
            &v90);
        }
        if ( v10 != -1073741492 && v10 != -2147483606 )
          goto LABEL_111;
        CmpLockRegistry(v30, v29, v31, v32);
        v36 = KeAbPreAcquire(BugCheckParameter3 + 72, 0LL);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter3 + 72), 17LL, 0LL) )
          ExfAcquirePushLockSharedEx((signed __int64 *)(BugCheckParameter3 + 72), 0, v36, BugCheckParameter3 + 72);
        if ( v36 )
          *(_BYTE *)(v36 + 18) = 1;
        v37 = KeAbPreAcquire(BugCheckParameter3 + 80, 0LL);
        v38 = v37;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter3 + 80), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(BugCheckParameter3 + 80), v37, BugCheckParameter3 + 80);
        if ( v38 )
          *(_BYTE *)(v38 + 18) = 1;
        HvMarkBaseBlockDirty(BugCheckParameter3);
        *(LARGE_INTEGER *)(*(_QWORD *)(BugCheckParameter3 + 64) + 168LL) = v71;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter3 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter3 + 80));
        KeAbPostRelease(BugCheckParameter3 + 80);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter3 + 72), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(BugCheckParameter3 + 72));
        KeAbPostRelease(BugCheckParameter3 + 72);
        CmpUnlockRegistry(v40, v39, v41, v42);
      }
      v8 = Pool;
LABEL_110:
      v27 = BugCheckParameter3a;
    }
  }
LABEL_111:
  if ( v27 )
    CmpDestroyHive((PVOID)v27);
LABEL_13:
  CmpReleaseShutdownRundown();
  if ( v8 )
    CmSiFreeMemory((PPRIVILEGE_SET)v8);
  if ( v10 < 0 )
    goto LABEL_37;
  return (unsigned int)v10;
}
