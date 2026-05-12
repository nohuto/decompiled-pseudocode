/*
 * XREFs of RaidUnitClaimIrp @ 0x1C0004470
 * Callers:
 *     RaUnitStartIo @ 0x1C0003A20 (RaUnitStartIo.c)
 *     RaUnitStartResetIo @ 0x1C0048E98 (RaUnitStartResetIo.c)
 * Callees:
 *     RaidUnitReenablePendingTimer @ 0x1C0005910 (RaidUnitReenablePendingTimer.c)
 *     __security_check_cookie @ 0x1C001D5B0 (__security_check_cookie.c)
 *     RaidSrbExGetBidirectionalData @ 0x1C0042C0C (RaidSrbExGetBidirectionalData.c)
 *     TranslateToExtendedSrb @ 0x1C00431E0 (TranslateToExtendedSrb.c)
 *     RaidGetSystemAddressForMdl @ 0x1C0045528 (RaidGetSystemAddressForMdl.c)
 *     McTemplateK0dud_EtwWriteTransfer @ 0x1C00463FC (McTemplateK0dud_EtwWriteTransfer.c)
 *     StorpDataInBufferAllocateMdlAndLockPages @ 0x1C004C3A0 (StorpDataInBufferAllocateMdlAndLockPages.c)
 */

__int64 __fastcall RaidUnitClaimIrp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // r15
  unsigned int v14; // r11d
  unsigned int v15; // r9d
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // r10
  __int64 v19; // r8
  int v20; // ecx
  int v21; // ecx
  unsigned int v22; // r11d
  unsigned int v23; // edx
  __int64 v24; // rcx
  unsigned __int64 v25; // r8
  __int64 v26; // r10
  bool v27; // zf
  __int64 v28; // rax
  __int64 v29; // rsi
  int v30; // eax
  __int64 v31; // r8
  unsigned __int8 v32; // dl
  __int64 v33; // rcx
  __int64 v34; // r9
  char v35; // dl
  int v36; // ecx
  __int64 result; // rax
  __int64 v38; // rax
  __int64 v39; // r9
  char v40; // al
  __int64 v41; // r15
  char v42; // dl
  __int64 v43; // r8
  char *v44; // rdx
  char v45; // r14
  __int64 v46; // rsi
  char v47; // al
  unsigned int v48; // ebp
  __int64 v49; // rcx
  __int64 v50; // r12
  int v51; // r15d
  unsigned int v52; // r11d
  unsigned int v53; // r10d
  __int64 v54; // rcx
  unsigned __int64 v55; // rdx
  __int64 v56; // r9
  __int64 v57; // r8
  int v58; // ecx
  int v59; // ecx
  char *v60; // rcx
  unsigned __int64 v61; // rcx
  int v62; // eax
  char v63; // al
  __int64 v64; // rdi
  unsigned int v65; // r11d
  unsigned int v66; // edx
  __int64 v67; // rcx
  unsigned __int64 v68; // r9
  __int64 v69; // r14
  unsigned int v70; // r15d
  __int64 v71; // rbp
  char *v72; // rax
  char *v73; // rax
  __int64 v74; // rcx
  int SystemAddressForMdl; // ebp
  __int64 BidirectionalData; // rax
  struct _MDL *v77; // rcx
  unsigned __int8 v78; // r11
  __int64 v79; // rdx
  __int64 v80; // rdi
  unsigned int i; // r10d
  __int64 v82; // rcx
  unsigned __int64 v83; // r8
  __int64 v84; // r9
  int v85; // ecx
  int v86; // ecx
  unsigned __int64 v87; // rcx
  __int64 v88; // rcx
  __int64 v89; // rbx
  __int64 v90; // rax
  unsigned int v91; // edi
  __int64 v92; // rax
  ULONGLONG UnbiasedInterruptTime; // rbp
  __int64 v94; // r14
  __int64 v95; // rbx
  ULONG v96; // edx
  __int64 v97; // rsi
  int v98; // edi
  _QWORD *v99; // rax
  __int64 *v100; // r8
  __int64 v101; // rdx
  __int64 v102; // rcx
  _QWORD *v103; // rax
  __int64 v104; // rdx
  int v105; // ecx
  int v106; // r9d
  int v107; // eax
  unsigned __int8 v108; // [rsp+30h] [rbp-B8h]
  char v109; // [rsp+32h] [rbp-B6h]
  struct _PROCESSOR_NUMBER ProcNumber[2]; // [rsp+40h] [rbp-A8h] BYREF
  char *v112; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v113; // [rsp+50h] [rbp-98h]
  __int64 v114; // [rsp+58h] [rbp-90h] BYREF
  __int64 v115; // [rsp+60h] [rbp-88h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-80h] BYREF
  __int128 v117; // [rsp+80h] [rbp-68h] BYREF

  v4 = *(_QWORD *)(a4 + 16);
  *(_QWORD *)&ProcNumber[0].Group = a4;
  v115 = 0LL;
  v6 = 0LL;
  v109 = 0;
  v7 = *(_QWORD *)(a2 + 184);
  v8 = 0LL;
  *(_QWORD *)&v117 = 0LL;
  v9 = 0LL;
  v108 = 0;
  v10 = *(_QWORD *)(v7 + 8);
  v114 = 0LL;
  if ( *(_BYTE *)(v10 + 2) != 40 )
  {
    v12 = *(_QWORD *)(v10 + 48);
    v13 = *(_QWORD *)(v10 + 24);
    *(_BYTE *)(v10 + 6) = *(_BYTE *)(a1 + 97);
    *(_BYTE *)(v10 + 5) = *(_BYTE *)(a1 + 96);
    *(_BYTE *)(v10 + 7) = *(_BYTE *)(a1 + 98);
    v108 = *(_BYTE *)(v10 + 11);
    v38 = *(_QWORD *)(a1 + 24);
    if ( *(_BYTE *)(v38 + 426) == 1 )
    {
      v39 = *(_QWORD *)(v4 + 760);
      if ( !v39 )
      {
        *(_BYTE *)(v10 + 3) = 48;
        *(_DWORD *)(v10 + 64) = -1073741670;
        return 3221225626LL;
      }
      result = TranslateToExtendedSrb(
                 v39,
                 v10,
                 *(_DWORD *)(v4 + 744),
                 v39,
                 a3,
                 (*(_DWORD *)(*(_QWORD *)(v38 + 552) + 184LL) & 0x80) != 0);
      if ( (int)result < 0 )
      {
        *(_BYTE *)(v10 + 3) = 48;
        *(_DWORD *)(v10 + 64) = result;
        return result;
      }
      v6 = *(_QWORD *)(v4 + 760);
      *(_BYTE *)(v4 + 16) |= 0x40u;
      *(_QWORD *)(v4 + 752) = v10;
      *(_QWORD *)&v117 = v10;
      v10 = v6;
      v115 = v6;
      v109 = 1;
      *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL) = v6;
    }
LABEL_19:
    v27 = StorEtwLoggingEnabled == 0;
    *(_QWORD *)(v4 + 160) = a2;
    *(_QWORD *)(v4 + 168) = v10;
    *(_QWORD *)(v4 + 224) = a1;
    v28 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(v4 + 136) = v9;
    v29 = a2;
    *(_QWORD *)(v4 + 104) = v28;
    if ( !v27 )
      IoGetActivityIdIrp(a2, v4 + 728);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 4804LL) & 1) != 0 )
    {
      if ( *(_BYTE *)(v10 + 2) == 40 )
        v30 = *(_DWORD *)(v6 + 96);
      else
        v30 = *(_DWORD *)(v10 + 56);
      *(_DWORD *)(v4 + 18) = v30;
    }
    else
    {
      *(_BYTE *)(v4 + 20) = -1;
      *(_WORD *)(v4 + 18) = -1;
    }
    v40 = *(_BYTE *)(v4 + 16);
    *(_QWORD *)(v4 + 184) = v13;
    v41 = *(_QWORD *)&ProcNumber[0].Group;
    *(_BYTE *)(v4 + 16) = v40 & 0xE3 | 4;
    *(_DWORD *)(v4 + 24) = 0;
    *(_QWORD *)(v4 + 176) = v12;
    *(_QWORD *)(v4 + 192) = v8;
    v42 = *(_BYTE *)(v10 + 2);
    if ( v42 == 40 )
    {
      *(_QWORD *)(v6 + 96) = v4;
      *(_DWORD *)(v6 + 32) = *(_DWORD *)v41;
      v42 = *(_BYTE *)(v10 + 2);
    }
    else
    {
      *(_QWORD *)(v10 + 48) = v4;
      *(_BYTE *)(v10 + 8) = *(_BYTE *)v41;
    }
    v43 = *(_QWORD *)(v41 + 8);
    if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 24) + 468LL) + 7) & 0xFFFFFFF8) != 0 )
    {
      if ( v42 == 40 )
        *(_QWORD *)(v10 + 104) = v43;
      else
        *(_QWORD *)(v10 + 56) = v43;
    }
    v44 = *(char **)(a1 + 24);
    v45 = 0;
    v112 = v44;
    if ( !*(_QWORD *)(a2 + 8) )
      goto LABEL_140;
    v46 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
    v47 = *(_BYTE *)(v46 + 2);
    if ( v47 != 40 )
    {
      v50 = *(_QWORD *)(v46 + 48);
      v48 = *(unsigned __int8 *)(v46 + 2);
      v51 = *(_DWORD *)(v46 + 12);
      v49 = *(_QWORD *)(v46 + 24);
      if ( !v47 )
        v45 = *(_BYTE *)(v46 + 72);
      goto LABEL_85;
    }
    v48 = *(_DWORD *)(v46 + 20);
    v49 = *(_QWORD *)(v46 + 64);
    v50 = *(_QWORD *)(v46 + 96);
    v51 = *(_DWORD *)(v46 + 24);
    v113 = v49;
    if ( v48 )
      goto LABEL_85;
    v52 = *(_DWORD *)(v46 + 56);
    v53 = 0;
    if ( !v52 )
      goto LABEL_85;
    while ( 1 )
    {
      v54 = *(unsigned int *)(v46 + 4LL * v53 + 120);
      if ( (unsigned int)v54 < 0x80 )
        goto LABEL_82;
      v55 = *(unsigned int *)(v46 + 16);
      if ( (unsigned int)v54 > (unsigned int)v55 )
        goto LABEL_82;
      v56 = v54 + v46;
      v57 = (unsigned int)v54;
      v58 = *(_DWORD *)(v54 + v46) - 64;
      if ( !v58 )
        break;
      v59 = v58 - 1;
      if ( !v59 )
      {
        v61 = v57 + 56;
        goto LABEL_81;
      }
      if ( v59 == 1 && v57 + 40 <= v55 )
      {
        v60 = (char *)(v56 + 32);
        if ( !*(_DWORD *)(v56 + 12) )
          v60 = 0LL;
        goto LABEL_106;
      }
LABEL_82:
      if ( ++v53 >= v52 )
        goto LABEL_83;
    }
    v61 = v57 + 40;
LABEL_81:
    if ( v61 > v55 )
      goto LABEL_82;
    if ( !*(_BYTE *)(v56 + 10) )
    {
LABEL_83:
      v44 = v112;
      goto LABEL_84;
    }
    v60 = (char *)(v56 + 24);
LABEL_106:
    v44 = v112;
    if ( v60 )
      v45 = *v60;
LABEL_84:
    v49 = v113;
LABEL_85:
    if ( (v51 & 0xC0) == 0 || !v49 && !*(_QWORD *)(v50 + 104) )
      goto LABEL_139;
    if ( v48 > 0x17 || (v62 = 8389124, !_bittest(&v62, v48)) )
    {
      v63 = v44[417];
      if ( v63 != 3 && ((unsigned __int8)(v63 - 1) > 1u || !v48 && ((v45 - 8) & 0x5D) == 0) )
      {
        if ( v44[4514] )
        {
          if ( *(_BYTE *)(v46 + 2) == 40 )
          {
            v64 = 0LL;
            if ( (*(_BYTE *)(v46 + 24) & 0xC0) == 0xC0 )
            {
              v65 = *(_DWORD *)(v46 + 56);
              v66 = 0;
              if ( v65 )
              {
                while ( 1 )
                {
                  v67 = *(unsigned int *)(v46 + 4LL * v66 + 120);
                  if ( (unsigned int)v67 >= 0x80 )
                  {
                    v68 = *(unsigned int *)(v46 + 16);
                    if ( (unsigned int)v67 <= (unsigned int)v68 && *(_DWORD *)(v46 + v67) == 1 && v67 + 24 <= v68 )
                      break;
                  }
                  if ( ++v66 >= v65 )
                    goto LABEL_111;
                }
                v64 = v46 + v67;
              }
            }
LABEL_111:
            v41 = *(_QWORD *)&ProcNumber[0].Group;
            *(_QWORD *)(v46 + 64) = 0LL;
            v29 = a2;
            if ( v64 )
              *(_QWORD *)(v64 + 16) = 0LL;
LABEL_140:
            v78 = v108;
            if ( v108 <= *(_BYTE *)(a1 + 1732) )
              v78 = *(_BYTE *)(a1 + 1732);
            v79 = *(_QWORD *)(v4 + 168);
            v80 = *(_QWORD *)(v41 + 24);
            if ( *(_BYTE *)(v79 + 2) == 40 )
            {
              if ( !*(_DWORD *)(v79 + 20) )
              {
                for ( i = 0; i < *(_DWORD *)(v79 + 56); ++i )
                {
                  v82 = *(unsigned int *)(v79 + 4LL * i + 120);
                  if ( (unsigned int)v82 < 0x80 )
                    continue;
                  v83 = *(unsigned int *)(v79 + 16);
                  if ( (unsigned int)v82 > (unsigned int)v83 )
                    continue;
                  v84 = (unsigned int)v82;
                  v85 = *(_DWORD *)(v82 + v79) - 64;
                  if ( v85 )
                  {
                    v86 = v85 - 1;
                    if ( v86 )
                    {
                      if ( v86 != 1 || v84 + 40 > v83 )
                        continue;
                      *(_QWORD *)(v4 + 200) = *(_QWORD *)(v84 + v79 + 24);
                      *(_BYTE *)(v4 + 208) = *(_BYTE *)(v84 + v79 + 9);
                      *(_QWORD *)(v84 + v79 + 24) = v80;
                      goto LABEL_156;
                    }
                    v87 = v84 + 56;
                  }
                  else
                  {
                    v87 = v84 + 40;
                  }
                  if ( v87 <= v83 )
                  {
                    *(_QWORD *)(v4 + 200) = *(_QWORD *)(v84 + v79 + 16);
                    *(_BYTE *)(v4 + 208) = *(_BYTE *)(v84 + v79 + 9);
                    *(_QWORD *)(v84 + v79 + 16) = v80;
LABEL_156:
                    *(_BYTE *)(v84 + v79 + 9) = v78;
                    *(_BYTE *)(v4 + 16) |= 0x20u;
                  }
                }
              }
            }
            else
            {
              *(_QWORD *)(v4 + 200) = *(_QWORD *)(v79 + 32);
              *(_BYTE *)(v4 + 208) = *(_BYTE *)(v79 + 11);
              *(_QWORD *)(v79 + 32) = v80;
              *(_BYTE *)(v79 + 11) = v78;
              *(_BYTE *)(v4 + 16) |= 0x20u;
            }
            v88 = *(_QWORD *)(*(_QWORD *)(v29 + 184) + 8LL);
            if ( *(_BYTE *)(v88 + 2) == 40 )
              v89 = *(_QWORD *)(v88 + 96);
            else
              v89 = *(_QWORD *)(v88 + 48);
            v90 = *(_QWORD *)(v89 + 168);
            if ( *(_BYTE *)(v90 + 2) == 40 )
              v91 = *(_DWORD *)(v90 + 40);
            else
              v91 = *(_DWORD *)(v90 + 20);
            if ( !*(_BYTE *)(a1 + 3216) && v91 <= 2 )
              v91 = 3;
            v92 = *(_QWORD *)(a1 + 24);
            if ( v92 && *(_QWORD *)(v92 + 5048) || (**(_BYTE **)(a1 + 504) & 1) != 0 )
              UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
            else
              UnbiasedInterruptTime = 0LL;
            *(_BYTE *)(v89 + 16) |= 2u;
            v94 = *(_QWORD *)(a1 + 504);
            ProcNumber[0] = 0;
            memset(&LockHandle, 0, sizeof(LockHandle));
            v95 = v89 + 48;
            KeGetCurrentProcessorNumberEx(ProcNumber);
            v96 = KeGetProcessorIndexFromNumber(ProcNumber) % *(_DWORD *)(v94 + 8);
            *(_QWORD *)(v95 + 40) = UnbiasedInterruptTime;
            *(_DWORD *)(v95 + 36) = v96;
            v97 = v94 + ((v96 + 1LL) << 6);
            if ( v91 - 1 > 0xFFFFFFFC )
              v91 = 10;
            v98 = 2 * v91;
            *(_DWORD *)(v95 + 32) = v98;
            KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v97 + 40), &LockHandle);
            v99 = *(_QWORD **)(v97 + 8);
            if ( *v99 == v97 )
            {
              *(_QWORD *)v95 = v97;
              *(_QWORD *)(v95 + 8) = v99;
              *v99 = v95;
              *(_QWORD *)(v97 + 8) = v95;
              if ( *(_DWORD *)(v97 + 48) >= 0xFFFFFFFE )
                *(_DWORD *)(v97 + 48) = v98;
              if ( (*(_BYTE *)v94 & 1) == 0 )
              {
                *(_DWORD *)(v95 + 48) &= ~1u;
                goto LABEL_187;
              }
              v100 = (__int64 *)(v97 + 16);
              v101 = *(_QWORD *)(v97 + 24);
              if ( v101 != v97 + 16 )
              {
                while ( *(_QWORD *)(v95 + 40) + (unsigned __int64)(unsigned int)(5000000 * *(_DWORD *)(v95 + 32)) < *(_QWORD *)(v101 + 24) + (unsigned __int64)(unsigned int)(5000000 * *(_DWORD *)(v101 + 16)) )
                {
                  v101 = *(_QWORD *)(v101 + 8);
                  if ( (__int64 *)v101 == v100 )
                    goto LABEL_183;
                }
                *(_QWORD *)(v95 + 16) = *(_QWORD *)v101;
                *(_QWORD *)(*(_QWORD *)v101 + 8LL) = v95 + 16;
                *(_QWORD *)v101 = v95 + 16;
                *(_DWORD *)(v95 + 48) |= 1u;
                *(_QWORD *)(v95 + 24) = v101;
LABEL_187:
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                if ( StorEtwLoggingEnabled )
                {
                  v117 = 0LL;
                  IoGetActivityIdIrp(a2, &v117);
                  if ( byte_1C0069842 < 0 )
                    McTemplateK0dud_EtwWriteTransfer(v105, v104, (unsigned int)&v117, v106, 3);
                }
                if ( *(char *)(a1 + 449) < 0 || *(_QWORD *)(*(_QWORD *)(a1 + 24) + 5088LL) )
                {
                  if ( (*(_DWORD *)(a1 + 456) & 4) != 0 )
                    v107 = 1;
                  else
                    v107 = (unsigned __int8)_interlockedbittestandset((volatile signed __int32 *)(a1 + 456), 2u);
                  if ( *(_BYTE *)(a1 + 3244) )
                    goto LABEL_193;
                  if ( !v107 )
                    RaidUnitReenablePendingTimer(a1, 0LL);
                }
                else if ( *(_BYTE *)(a1 + 3244) )
                {
LABEL_193:
                  LOBYTE(v104) = 1;
                  RaidUnitReenablePendingTimer(a1, v104);
                  result = 0LL;
                  *(_BYTE *)(a1 + 3244) = 0;
                  return result;
                }
                return 0LL;
              }
LABEL_183:
              v102 = *v100;
              v103 = (_QWORD *)(v95 + 16);
              if ( *(__int64 **)(*v100 + 8) == v100 )
              {
                *v103 = v102;
                *(_QWORD *)(v95 + 24) = v100;
                *(_QWORD *)(v102 + 8) = v103;
                *v100 = (__int64)v103;
                *(_DWORD *)(v95 + 48) |= 1u;
                goto LABEL_187;
              }
            }
            __fastfail(3u);
          }
          *(_QWORD *)(v46 + 24) = 0LL;
        }
        v29 = a2;
        v41 = *(_QWORD *)&ProcNumber[0].Group;
        goto LABEL_140;
      }
    }
    v69 = *(_QWORD *)(v50 + 104);
    v70 = 32;
    v71 = *(_QWORD *)(v50 + 184);
    if ( *(_BYTE *)(a2 + 64) )
      v70 = 16;
    v72 = (*(_BYTE *)(v69 + 10) & 5) != 0
        ? *(char **)(v69 + 24)
        : (char *)MmMapLockedPagesSpecifyCache(*(PMDL *)(v50 + 104), 0, MmCached, 0LL, 0, v70 | 0x40000000);
    if ( v72 )
    {
      if ( v71 )
        v71 = v71 - *(unsigned int *)(v69 + 44) - *(_QWORD *)(v69 + 32);
      v73 = &v72[v71];
      v27 = *(_BYTE *)(v46 + 2) == 40;
      v112 = v73;
      if ( v27 )
        *(_QWORD *)(v46 + 64) = v73;
      else
        *(_QWORD *)(v46 + 24) = v73;
      v74 = *(_QWORD *)(v50 + 136);
      if ( !v74 )
        goto LABEL_139;
      SystemAddressForMdl = RaidGetSystemAddressForMdl(v74, *(_QWORD *)(v50 + 192), v70, &v112);
      if ( SystemAddressForMdl >= 0 )
      {
        BidirectionalData = RaidSrbExGetBidirectionalData(v46);
        *(_QWORD *)(BidirectionalData + 16) = v112;
      }
      if ( SystemAddressForMdl != -1073741670 )
      {
LABEL_139:
        v41 = *(_QWORD *)&ProcNumber[0].Group;
        v29 = a2;
        goto LABEL_140;
      }
    }
    if ( *(_BYTE *)(v10 + 2) == 40 )
    {
      if ( !v109 )
      {
        *(_DWORD *)(v115 + 44) = -1073741670;
        goto LABEL_137;
      }
    }
    else if ( !v109 )
    {
      *(_QWORD *)(v10 + 48) = *(_QWORD *)(v4 + 176);
      goto LABEL_136;
    }
    v10 = v117;
    *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL) = v117;
LABEL_136:
    *(_DWORD *)(v10 + 64) = -1073741670;
LABEL_137:
    v77 = *(struct _MDL **)(v4 + 136);
    if ( v77 )
    {
      MmUnlockPages(v77);
      IoFreeMdl(*(PMDL *)(v4 + 136));
      *(_QWORD *)(v4 + 136) = 0LL;
    }
    return 3221225626LL;
  }
  v6 = v10;
  v11 = v10 + *(unsigned int *)(v10 + 52);
  v115 = v10;
  *(_WORD *)v11 = 1;
  *(_DWORD *)(v11 + 4) = 4;
  *(_BYTE *)(v11 + 8) = *(_BYTE *)(a1 + 96);
  *(_BYTE *)(v11 + 9) = *(_BYTE *)(a1 + 97);
  *(_BYTE *)(v11 + 10) = *(_BYTE *)(a1 + 98);
  v12 = *(_QWORD *)(v10 + 80);
  v13 = *(_QWORD *)(v10 + 64);
  if ( *(_BYTE *)(v10 + 2) != 40 )
    goto LABEL_19;
  if ( *(_DWORD *)(v10 + 20) )
    goto LABEL_12;
  v14 = *(_DWORD *)(v10 + 56);
  v15 = 0;
  if ( !v14 )
    goto LABEL_12;
  while ( 1 )
  {
    v16 = *(unsigned int *)(v10 + 4LL * v15 + 120);
    if ( (unsigned int)v16 < 0x80 )
      goto LABEL_28;
    v17 = *(unsigned int *)(v10 + 16);
    if ( (unsigned int)v16 > (unsigned int)v17 )
      goto LABEL_28;
    v18 = v16 + v10;
    v19 = (unsigned int)v16;
    v20 = *(_DWORD *)(v16 + v10) - 64;
    if ( !v20 )
      break;
    v21 = v20 - 1;
    if ( v21 )
    {
      if ( v21 == 1 && v19 + 40 <= v17 )
      {
LABEL_11:
        v108 = *(_BYTE *)(v18 + 9);
        goto LABEL_12;
      }
    }
    else if ( v19 + 56 <= v17 )
    {
      goto LABEL_11;
    }
LABEL_28:
    if ( ++v15 >= v14 )
      goto LABEL_12;
  }
  if ( v19 + 40 > v17 )
    goto LABEL_28;
  v108 = *(_BYTE *)(v18 + 9);
LABEL_12:
  if ( (*(_BYTE *)(v10 + 24) & 0xC0) != 0xC0 )
    goto LABEL_19;
  v22 = *(_DWORD *)(v10 + 56);
  v23 = 0;
  if ( !v22 )
    goto LABEL_19;
  while ( 1 )
  {
    v24 = *(unsigned int *)(v10 + 4LL * v23 + 120);
    if ( (unsigned int)v24 >= 0x80 )
    {
      v25 = *(unsigned int *)(v10 + 16);
      if ( (unsigned int)v24 <= (unsigned int)v25 )
      {
        v26 = v24 + v10;
        if ( *(_DWORD *)(v24 + v10) == 1 && v24 + 24 <= v25 )
          break;
      }
    }
    if ( ++v23 >= v22 )
      goto LABEL_19;
  }
  if ( !v26 )
    goto LABEL_19;
  v31 = *(_QWORD *)(v26 + 16);
  if ( !v31 )
    goto LABEL_19;
  v32 = 0;
  while ( 1 )
  {
    v33 = *(unsigned int *)(v10 + 4LL * v32 + 120);
    if ( (unsigned int)v33 >= 0x80 && (unsigned int)v33 < *(_DWORD *)(v10 + 16) && *(_DWORD *)(v33 + v10) == 160 )
      break;
    if ( ++v32 >= v22 )
      goto LABEL_39;
  }
  v9 = *(_QWORD *)(v33 + v10 + 8);
  if ( v9 )
  {
    v8 = *(_QWORD *)(v26 + 16);
    v114 = *(_QWORD *)(v33 + v10 + 8);
    goto LABEL_19;
  }
LABEL_39:
  v34 = a2;
  v35 = 0;
  v36 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL);
  if ( v36 == 315412 || v36 == 315464 )
    v35 = 1;
  v8 = *(_QWORD *)(v26 + 16);
  if ( v35 )
    v34 = *(unsigned __int8 *)(a2 + 64);
  else
    LOBYTE(v34) = 0;
  result = StorpDataInBufferAllocateMdlAndLockPages(&v114, *(unsigned int *)(v26 + 8), v31, v34);
  if ( (int)result >= 0 )
  {
    v9 = v114;
    goto LABEL_19;
  }
  return result;
}
