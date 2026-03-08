/*
 * XREFs of ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x1405BF8A0
 * Callers:
 *     ?SmTrimWsStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@_K@Z @ 0x1405C089C (-SmTrimWsStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@_K@Z.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1405BEBE8 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x1405BFCAC (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStTrimWsStore(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // edi
  _QWORD *v5; // r15
  bool v6; // zf
  _QWORD *v7; // rbx
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v9; // r13
  unsigned int v10; // r12d
  __int64 v11; // r9
  unsigned int v12; // esi
  unsigned int v13; // r10d
  __int64 v14; // r15
  unsigned int v15; // r8d
  unsigned __int64 v16; // r11
  _DWORD *v17; // rdx
  int v18; // r9d
  _DWORD *i; // rax
  __int64 v20; // rcx
  unsigned __int64 j; // rax
  unsigned int *v22; // rax
  unsigned int v23; // r8d
  __int64 v24; // r13
  __int64 v25; // rcx
  __int64 v26; // rbx
  unsigned int v27; // esi
  _QWORD *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rbx
  struct _KTHREAD *v31; // rax
  int v33; // [rsp+20h] [rbp-A9h]
  unsigned int v34; // [rsp+30h] [rbp-99h]
  _QWORD *v36; // [rsp+40h] [rbp-89h]
  _QWORD *k; // [rsp+48h] [rbp-81h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v38; // [rsp+50h] [rbp-79h] BYREF
  _DWORD v39[8]; // [rsp+80h] [rbp-49h] BYREF
  _QWORD v40[8]; // [rsp+A0h] [rbp-29h] BYREF

  memset(&v38, 0, sizeof(v38));
  memset(v40, 0, sizeof(v40));
  KiStackAttachProcess(*(_KPROCESS **)(a1 + 6584), 0, (__int64)&v38);
  if ( (*(_BYTE *)(a1 + 6021) & 8) != 0 )
  {
    v4 = 0;
  }
  else
  {
    v5 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(a1 + 6568), -1LL);
    k = v5;
    if ( v5 == (_QWORD *)-1LL )
    {
      v4 = -1073740682;
    }
    else
    {
      v4 = 0;
      if ( !v5 || !*v5 || (v6 = a2 == 0LL, v7 = v5 + 1, !v6) )
        v7 = 0LL;
      CurrentThread = KeGetCurrentThread();
      v9 = (signed __int64 *)(a1 + 6024);
      v36 = v7;
      v10 = 0;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockSharedEx(a1 + 6024, 0LL);
      if ( v7 )
      {
        v12 = 0;
        while ( 1 )
        {
          v13 = *(_DWORD *)v7;
          if ( *(_DWORD *)v7 <= v12 )
            break;
          v14 = v7[1];
          v15 = 0;
          v16 = v14 + 4 * ((unsigned __int64)(v13 - 1) >> 5);
          v17 = (_DWORD *)(v14 + 4 * ((unsigned __int64)v12 >> 5));
          v18 = ((1 << (v12 & 0x1F)) - 1) | *v17;
          for ( i = v17 + 1; ; ++i )
          {
            v11 = (unsigned int)~v18;
            if ( (_DWORD)v11 )
              break;
            if ( (unsigned __int64)i > v16 )
              goto LABEL_17;
            v18 = *++v17;
          }
          _BitScanForward64((unsigned __int64 *)&v20, (unsigned int)v11);
          v12 = v20 + 32 * (((__int64)v17 - v14) >> 2);
          if ( v12 > v13 )
          {
LABEL_17:
            v12 = *(_DWORD *)v7;
            goto LABEL_27;
          }
          for ( j = ~((unsigned int)v11 | ((1 << v20) - 1)); !(_DWORD)j; j = *v22 )
          {
            v22 = v17 + 1;
            if ( (unsigned __int64)(v17 + 1) > v16 )
            {
              LODWORD(j) = 32;
              goto LABEL_24;
            }
            ++v17;
          }
          _BitScanForward64(&j, j);
LABEL_24:
          v23 = j + 32 * (((__int64)v17 - v14) >> 2);
          if ( v23 > v13 )
            v23 = *(_DWORD *)v7;
          v15 = v23 - v12;
LABEL_27:
          if ( !v15 )
            break;
          v34 = v12 + v15;
          if ( v12 < v12 + v15 )
          {
            v24 = 8LL * v12;
            do
            {
              v25 = *(_QWORD *)(*(_QWORD *)(a1 + 6216) + v24);
              if ( (v25 & 0x7FFFFFFFFFFF0000LL) != 0 && v25 >= 0 )
              {
                v26 = v10;
                v39[v10++] = v12;
                v40[v26] = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v12, 0, v11, 4u);
                if ( v10 == 8 )
                {
                  SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(a1, (unsigned int)v39, (unsigned int)v40, 8, v33, 0LL);
                  v10 = 0;
                }
              }
              ++v12;
              v24 += 8LL;
            }
            while ( v12 < v34 );
            v7 = v36;
          }
        }
        v5 = k;
        v9 = (signed __int64 *)(a1 + 6024);
      }
      v27 = 0;
      v28 = a2;
      for ( k = a2; v27 < *(_DWORD *)(a1 + 6212); ++v27 )
      {
        v29 = *(_QWORD *)(*(_QWORD *)(a1 + 6216) + 8LL * v27);
        if ( (v29 & 0x7FFFFFFFFFFF0000LL) != 0 && v29 >= 0 && (!v7 || _bittest64((const signed __int64 *)v7[1], v27)) )
        {
          v30 = v10;
          v39[v10++] = v27;
          v40[v30] = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v27, 0, v11, 4u);
          v28 = a2;
          if ( v10 == 8 )
          {
            SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(
              a1,
              (unsigned int)v39,
              (unsigned int)v40,
              8,
              v33,
              (unsigned __int64)&k & -(__int64)(a2 != 0LL));
            v28 = a2;
            v10 = 0;
            if ( a2 )
            {
              if ( !k )
                goto LABEL_50;
            }
          }
          v7 = v36;
        }
        else
        {
          v28 = a2;
        }
      }
      if ( v10 )
        SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(
          a1,
          (unsigned int)v39,
          (unsigned int)v40,
          v10,
          v33,
          (unsigned __int64)&k & -(__int64)(v28 != 0LL));
LABEL_50:
      if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v9);
      KeAbPostRelease((ULONG_PTR)v9);
      v31 = KeGetCurrentThread();
      v6 = v31->SpecialApcDisable++ == -1;
      if ( v6 && ($C71981A45BEB2B45F82C232A7085991E *)v31->ApcState.ApcListHead[0].Flink != &v31->152 )
        KiCheckForKernelApcDelivery();
      _InterlockedExchange64((volatile __int64 *)(a1 + 6568), (__int64)v5);
    }
  }
  KiUnstackDetachProcess(&v38);
  return v4;
}
