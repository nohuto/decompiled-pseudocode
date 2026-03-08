/*
 * XREFs of PpmInstallNewIdleStates @ 0x14039AA50
 * Callers:
 *     PpmIdleInstallDefaultStates @ 0x14039AA30 (PpmIdleInstallDefaultStates.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140234B50 (KeAddProcessorAffinityEx.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     PpmDeepestHardwareIdleState @ 0x14039AF88 (PpmDeepestHardwareIdleState.c)
 *     PpmResetIdlePolicy @ 0x14039AFC8 (PpmResetIdlePolicy.c)
 *     PpmUpdateProcessorIdleAccounting @ 0x14039B154 (PpmUpdateProcessorIdleAccounting.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmInstallNewIdleStates(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // r15
  __int64 v8; // rbp
  unsigned int v9; // esi
  _DWORD *v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // eax
  unsigned int v13; // r12d
  unsigned int v14; // r13d
  unsigned int v15; // ecx
  __int64 Pool2; // rax
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rsi
  unsigned int v20; // r13d
  unsigned int *v21; // r12
  __int64 v22; // r14
  __int64 v23; // rsi
  __int64 v24; // r15
  unsigned int *v25; // rcx
  __int64 v26; // rsi
  bool v27; // zf
  _DWORD *v28; // r14
  unsigned int v29; // eax
  __int64 v30; // rbp
  __int64 v31; // r13
  __int64 v32; // rcx
  __int64 v34; // rdx
  unsigned int v35; // r8d
  __int64 v36; // rax
  __int64 *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  char v40; // [rsp+20h] [rbp-188h]
  unsigned int v41; // [rsp+2Ch] [rbp-17Ch]
  __int64 v44; // [rsp+40h] [rbp-168h]
  __int64 v45; // [rsp+48h] [rbp-160h]
  _DWORD v46[68]; // [rsp+50h] [rbp-158h] BYREF

  memset(&v46[2], 0, 0x100uLL);
  v6 = 0;
  v7 = a1 + 33600;
  v45 = a1 + 33600;
  if ( a3 != 1 || !*(_QWORD *)v7 )
  {
    if ( *(_QWORD *)v7 )
    {
      v40 = *(_BYTE *)(*(_QWORD *)v7 + 1LL);
      PpmUpdateProcessorIdleAccounting(a1 + 33600);
    }
    else
    {
      v40 = 0;
    }
    v8 = *(unsigned int *)(a2 + 116);
    if ( (_DWORD)v8 )
    {
      v9 = 0;
      if ( *(_BYTE *)(a2 + 19) == 1 )
      {
        v10 = (_DWORD *)(a2 + 120);
        v11 = (unsigned int)v8;
        do
        {
          v12 = v9 + 1;
          if ( (*v10 & 0x100) != 0 )
            v12 = v9;
          v10 += 8;
          v9 = v12;
          --v11;
        }
        while ( v11 );
      }
      v13 = (344 * v8 + 1115) & 0xFFFFFFFC;
      v14 = v13 + 8 * *(_DWORD *)(a2 + 112);
      v41 = v14 + 24 * v9;
      v15 = (((v41 + 1008 * v8 + 47) & 0xFFFFFFF8) + 4 * v8 + 15) & 0xFFFFFFF8;
      if ( PpmIdleVetoList )
        v15 += (*((_DWORD *)PpmIdleVetoList + 1) * (_DWORD)v8) << 6;
      Pool2 = ExAllocatePool2(64LL, v15, 1766674512LL);
      v44 = Pool2;
      v17 = Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)(Pool2 + 44) = a3;
        *(_QWORD *)(Pool2 + 48) = *(_QWORD *)(a2 + 72);
        *(_BYTE *)Pool2 = *(_BYTE *)(a2 + 19);
        *(_BYTE *)(Pool2 + 2) = *(_BYTE *)(a2 + 16);
        *(_BYTE *)(Pool2 + 16) = *(_BYTE *)(a2 + 18);
        *(_DWORD *)(Pool2 + 72) = 0;
        *(_DWORD *)(Pool2 + 40) = v8;
        *(_QWORD *)(Pool2 + 608) = *(_QWORD *)(a2 + 24);
        *(_QWORD *)(Pool2 + 632) = *(_QWORD *)(a2 + 40);
        *(_QWORD *)(Pool2 + 640) = *(_QWORD *)(a2 + 48);
        *(_QWORD *)(Pool2 + 648) = *(_QWORD *)(a2 + 56);
        *(_QWORD *)(Pool2 + 624) = *(_QWORD *)(a2 + 80);
        *(_QWORD *)(Pool2 + 616) = *(_QWORD *)(a2 + 64);
        *(_QWORD *)(Pool2 + 656) = *(_QWORD *)(a2 + 88);
        *(_QWORD *)(Pool2 + 664) = *(_QWORD *)(a2 + 32);
        *(_QWORD *)(Pool2 + 672) = *(_QWORD *)(a2 + 96);
        *(_QWORD *)(Pool2 + 680) = *(_QWORD *)(a2 + 104);
        *(_QWORD *)(Pool2 + 688) = *(_QWORD *)(a2 + 8);
        *(_DWORD *)(Pool2 + 744) = *(_DWORD *)(a2 + 112);
        *(_DWORD *)(Pool2 + 1088) = 1;
        *(_QWORD *)(Pool2 + 752) = Pool2 + v13;
        *(_QWORD *)(Pool2 + 1104) = Pool2 + 1096;
        if ( v9 )
        {
          v18 = Pool2 + v14;
          *(_DWORD *)(Pool2 + 1056) = v9;
          *(_QWORD *)(Pool2 + 1064) = v18;
          v19 = v18 + 24LL * v9;
        }
        else
        {
          v19 = 0LL;
        }
        *(_QWORD *)(Pool2 + 80) = 2097184LL;
        memset((void *)(Pool2 + 88), 0, 0x100uLL);
        v20 = 0;
        v21 = (unsigned int *)(v19 + 4);
        v22 = a2 + 120;
        v23 = v17 + 1376;
        v24 = v17 + ((((v41 + 1008 * (_DWORD)v8 + 47) & 0xFFFFFFF8) + 4 * (_DWORD)v8 + 15) & 0xFFFFFFF8);
        do
        {
          *(_OWORD *)v23 = *(_OWORD *)(v22 + 16);
          *(_QWORD *)(v23 - 264) = 2097153LL;
          memset((void *)(v23 - 256), 0, 0x100uLL);
          *(_BYTE *)(v23 + 72) = (*(_DWORD *)v22 >> 3) & 0xF;
          *(_BYTE *)(v23 + 74) = *(_BYTE *)v22 & 1;
          *(_BYTE *)(v23 + 75) = (*(_DWORD *)v22 & 4) != 0;
          *(_BYTE *)(v23 + 76) = (*(_DWORD *)v22 & 2) != 0;
          if ( *(int *)v22 < 0 )
          {
            *(_DWORD *)(v23 + 28) = 1;
            *(_BYTE *)(v23 + 73) = 1;
          }
          *(_BYTE *)(v23 + 77) = (*(_DWORD *)v22 & 0x80) != 0;
          *(_BYTE *)(v23 + 78) = BYTE1(*(_DWORD *)v22) & 1;
          *(_BYTE *)(v23 + 79) = (*(_DWORD *)v22 & 0x40000000) != 0;
          *(_DWORD *)(v23 + 16) = *(_DWORD *)(v22 + 4);
          *(_DWORD *)(v23 + 24) = *(_DWORD *)(v22 + 12);
          *(_DWORD *)(v23 + 20) = *(_DWORD *)(v22 + 8);
          *(_QWORD *)(v23 + 48) = v23 + 40;
          *(_QWORD *)(v23 + 40) = v23 + 40;
          if ( v20 && PpmIdleDisableStatesAtBoot == 2 )
            *(_DWORD *)(v23 + 32) = 0x80000000;
          v25 = (unsigned int *)PpmIdleVetoList;
          if ( PpmIdleVetoList )
          {
            *(_DWORD *)(v23 + 60) = *((_DWORD *)PpmIdleVetoList + 1);
            *(_QWORD *)(v23 + 64) = v24;
            v24 += (unsigned __int64)v25[1] << 6;
          }
          if ( v21 != (unsigned int *)4 && (*(_DWORD *)v22 & 0x100) == 0 )
          {
            v21 -= 6;
            *((_BYTE *)v21 - 3) = 1;
            *v21 = v20;
          }
          ++v20;
          v23 += 344LL;
          v22 += 32LL;
        }
        while ( v20 < (unsigned int)v8 );
        v26 = v44 + v41;
        v27 = PpmIdleVetoList == 0LL;
        *(_QWORD *)(v44 + 1040) = v44 + ((v41 + 1008 * (_DWORD)v8 + 47) & 0xFFFFFFF8);
        *(_DWORD *)v26 = v8;
        if ( !v27 )
        {
          v37 = (__int64 *)(v26 + 208);
          v38 = v8;
          v39 = v44 + 1408;
          do
          {
            *v37 = v39;
            v39 += 344LL;
            v37 += 126;
            --v38;
          }
          while ( v38 );
        }
        KxAcquireSpinLock(&PpmIdleVetoLock);
        v28 = *(_DWORD **)v45;
        *(_QWORD *)v45 = v44;
        KxReleaseSpinLock((volatile signed __int64 *)&PpmIdleVetoLock);
        if ( v40 )
          *(_DWORD *)(v44 + 36) = v28[9];
        if ( !v28 || (v29 = v28[6], v29 >= (unsigned int)v8) )
          v29 = 0;
        *(_DWORD *)(v44 + 24) = v29;
        *(_BYTE *)(v44 + 1) = v40;
        v30 = *(_QWORD *)(v45 + 8);
        *(_QWORD *)(v45 + 8) = v26;
        if ( v30 )
        {
          v34 = *(_QWORD *)(v30 + 24);
          v35 = 0;
          for ( *(_QWORD *)(v26 + 24) = v34; v35 < *(_DWORD *)v30; *(_QWORD *)(v26 + 24) = v34 )
          {
            v36 = v35++;
            v34 += *(_QWORD *)(1008 * v36 + v30 + 40);
          }
          v31 = a1;
        }
        else
        {
          v31 = a1;
          *(_QWORD *)(v26 + 24) = (unsigned int)KeMaximumIncrement
                                * (unsigned __int64)*(unsigned int *)(*(_QWORD *)(a1 + 24) + 652LL);
        }
        PpmResetIdlePolicy(v45);
        if ( v30 )
          *(_DWORD *)(v26 + 8) = *(_DWORD *)(v30 + 8) + 1;
        v46[0] = 2097153;
        memset(&v46[1], 0, 0x104uLL);
        KeAddProcessorAffinityEx((unsigned __int16 *)v46, *(_DWORD *)(v31 + 36));
        LOBYTE(v32) = PpmDeepestHardwareIdleState(v44);
        ((void (__fastcall *)(__int64, _DWORD *))off_140C01AB8[0])(v32, v46);
        if ( *(_DWORD *)(v44 + 44) != 1 && *(_BYTE *)v44 == 1 )
          PpmIdleDurationExpirationTimeout = (unsigned int)(10000 * PpmIdleDurationExpirationTimeoutMs);
        if ( v28 )
          ExFreePoolWithTag(v28, 0x694D5050u);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return v6;
}
