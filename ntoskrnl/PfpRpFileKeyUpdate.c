/*
 * XREFs of PfpRpFileKeyUpdate @ 0x140702E20
 * Callers:
 *     PfFileInfoNotify @ 0x14028C770 (PfFileInfoNotify.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     RtlUpcaseUnicodeChar @ 0x1406EA4F0 (RtlUpcaseUnicodeChar.c)
 *     PfpRpRehashIfNeeded @ 0x140702C74 (PfpRpRehashIfNeeded.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpRpFileKeyUpdate(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebp
  PVOID v4; // r12
  int v5; // ebx
  _QWORD *v7; // rdi
  _QWORD *v8; // r14
  int v9; // eax
  __int64 v10; // r15
  struct _EX_RUNDOWN_REF *v11; // r13
  unsigned int v12; // eax
  WCHAR *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rsi
  WCHAR *i; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v18; // rax
  int v19; // r11d
  __int64 v20; // r10
  __int64 v21; // r9
  __int64 v22; // rdx
  unsigned int v23; // r10d
  _QWORD *v24; // rcx
  __int64 v26; // rsi
  unsigned __int64 v27; // r10
  _QWORD *j; // rdx
  _QWORD *v29; // rcx
  void *v30; // rcx
  PVOID Pool2; // [rsp+20h] [rbp-78h] BYREF
  __int64 v32; // [rsp+28h] [rbp-70h]
  PVOID P; // [rsp+30h] [rbp-68h]
  __int64 v34; // [rsp+40h] [rbp-58h]
  WCHAR v36; // [rsp+A8h] [rbp+10h]
  unsigned int v38; // [rsp+B8h] [rbp+20h]

  v3 = 0;
  v4 = 0LL;
  v5 = a3;
  v7 = 0LL;
  v32 = *(_QWORD *)(a2 + 16);
  v8 = 0LL;
  v9 = *(_DWORD *)(a1 + 152);
  v10 = a1;
  P = 0LL;
  Pool2 = 0LL;
  v38 = 0;
  if ( (v9 & 1) == 0 )
  {
    v3 = -1073741696;
    goto LABEL_26;
  }
  v11 = (struct _EX_RUNDOWN_REF *)(a1 + 136);
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 136)) )
  {
    v3 = -1073741696;
    goto LABEL_26;
  }
  if ( !v5 )
  {
    v15 = 0LL;
    goto LABEL_10;
  }
  P = (PVOID)ExAllocatePool2(256LL, 24LL, 1262904912LL);
  v8 = P;
  if ( P )
  {
    v12 = 2 * (*(_DWORD *)(v10 + 4) >> 5);
    if ( *(_DWORD *)v10 >= v12 )
    {
      if ( !v12 )
        v12 = 64;
      v38 = v12;
      Pool2 = (PVOID)ExAllocatePool2(256LL, 8LL * v12, 1212573264LL);
      v4 = Pool2;
      if ( !Pool2 )
        v38 = 0;
    }
    v13 = *(WCHAR **)(a2 + 24);
    v14 = *(unsigned __int16 *)(a2 + 34);
    v15 = 314159LL;
    for ( i = &v13[v14]; v13 < i; v15 = HIBYTE(v36) + 37 * ((unsigned __int8)v36 + 37 * v15) )
      v36 = RtlUpcaseUnicodeChar(*v13++);
    if ( v15 )
    {
      v5 = a3;
      v3 = 0;
LABEL_10:
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v10 + 48, 0LL);
      if ( v5 )
      {
        v18 = v32;
        v19 = *(_DWORD *)(v10 + 4) >> 5;
        v20 = -1LL << (*(_BYTE *)(v10 + 4) & 0x1F);
        v21 = v32 & v20;
        if ( v19 )
        {
          v34 = v32 & v20;
          v10 = a1;
          v22 = *(_QWORD *)(a1 + 8)
              + 8
              * ((((v32 & (unsigned __int64)v20) >> 56)
                + 37
                * ((unsigned __int8)((v32 & (unsigned __int64)v20) >> 48)
                 + 37
                 * ((unsigned __int8)((unsigned __int16)((v32 & (unsigned __int64)v20) >> 32) >> 8)
                  + 37
                  * ((unsigned __int8)((v32 & (unsigned __int64)v20) >> 32)
                   + 37
                   * ((((unsigned int)v32 & (unsigned int)v20) >> 24)
                    + 37
                    * ((unsigned __int8)(((unsigned int)v32 & (unsigned int)v20) >> 16)
                     + 37
                     * ((unsigned __int8)((unsigned __int16)(v32 & v20) >> 8) + 37 * ((unsigned __int8)v21 + 11623883)))))))) & (unsigned int)(v19 - 1));
          while ( 1 )
          {
            v22 = *(_QWORD *)v22;
            if ( (v22 & 1) != 0 )
              break;
            if ( v21 == (v20 & *(_QWORD *)(v22 + 8)) )
            {
              v8 = P;
              v3 = 0;
              *(_QWORD *)(v22 + 16) = v15;
              goto LABEL_19;
            }
          }
          v18 = v32;
        }
        else
        {
          v10 = a1;
        }
        v8 = P;
        v3 = 0;
        *(_QWORD *)P = 0LL;
        v8[1] = v18;
        v8[2] = v15;
        if ( (unsigned int)PfpRpRehashIfNeeded(v10, &Pool2, v38) )
        {
          v23 = *(_DWORD *)(v10 + 4);
          P = (PVOID)(v8[1] & (-1LL << (v23 & 0x1F)));
          v24 = (_QWORD *)(*(_QWORD *)(v10 + 8)
                         + 8
                         * ((((unsigned __int64)P >> 56)
                           + 37
                           * (BYTE6(P)
                            + 37
                            * (BYTE5(P)
                             + 37
                             * (BYTE4(P)
                              + 37
                              * (BYTE3(P)
                               + 37 * (BYTE2(P) + 37 * (BYTE1(P) + 37 * ((unsigned int)(unsigned __int8)P + 11623883)))))))) & ((v23 >> 5) - 1)));
          *v8 = *v24;
          *v24 = v8;
          v8 = 0LL;
          ++*(_DWORD *)v10;
        }
        else
        {
          v3 = -1073741670;
        }
LABEL_19:
        v11 = (struct _EX_RUNDOWN_REF *)(v10 + 136);
      }
      else
      {
        v26 = v32;
LABEL_30:
        if ( *(_DWORD *)v10 )
        {
          v27 = v26 & (-1LL << (*(_DWORD *)(v10 + 4) & 0x1F));
          for ( j = (_QWORD *)(*(_QWORD *)(v10 + 8)
                             + 8
                             * ((37
                               * (BYTE6(v27)
                                + 37
                                * (BYTE5(v27)
                                 + 37
                                 * (BYTE4(v27)
                                  + 37
                                  * ((((unsigned int)v26 & (-1 << (*(_DWORD *)(v10 + 4) & 0x1F))) >> 24)
                                   + 37
                                   * ((unsigned __int8)(((unsigned int)v26 & (-1 << (*(_DWORD *)(v10 + 4) & 0x1F))) >> 16)
                                    + 37
                                    * ((unsigned __int8)((unsigned __int16)(v26 & (-1 << (*(_DWORD *)(v10 + 4) & 0x1F))) >> 8)
                                     + 37 * ((unsigned __int8)v27 + 11623883)))))))
                               + HIBYTE(v27)) & ((*(_DWORD *)(v10 + 4) >> 5) - 1))); ; j = (_QWORD *)*j )
          {
            v29 = (_QWORD *)*j;
            if ( (*j & 1) != 0 )
              break;
            if ( ((-1LL << (*(_DWORD *)(v10 + 4) & 0x1F)) & v29[1]) == v27 )
            {
              *j = *v29;
              --*(_DWORD *)v10;
              *v29 |= 0x8000000000000002uLL;
              if ( *(_QWORD **)(v10 + 16) == v29 )
                *(_QWORD *)(v10 + 16) = v10 + 24;
              *v29 = v7;
              v7 = v29;
              goto LABEL_30;
            }
          }
        }
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 48), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v10 + 48));
      KeAbPostRelease(v10 + 48);
      KeLeaveCriticalRegion();
      v4 = Pool2;
      goto LABEL_23;
    }
    v3 = -1073741747;
  }
  else
  {
    v3 = -1073741670;
  }
LABEL_23:
  ExReleaseRundownProtection_0(v11);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  while ( v7 )
  {
    v30 = v7;
    v7 = (_QWORD *)*v7;
    ExFreePoolWithTag(v30, 0);
  }
LABEL_26:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return v3;
}
