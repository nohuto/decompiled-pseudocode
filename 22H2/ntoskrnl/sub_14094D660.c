/*
 * XREFs of sub_14094D660 @ 0x14094D660
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryTimeIncrement @ 0x14024BE00 (KeQueryTimeIncrement.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140253F54 (KiQueryUnbiasedInterruptTime.c)
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     ExpGetLicenseTamperState @ 0x1405B2C08 (ExpGetLicenseTamperState.c)
 *     ExpLicUpdateChecksum @ 0x1405B2D68 (ExpLicUpdateChecksum.c)
 *     ExpSetLicenseTamperState @ 0x1405B2FA4 (ExpSetLicenseTamperState.c)
 *     ExpSetKernelDataProtection @ 0x140665A90 (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x140665C80 (ExpGetKernelDataProtection.c)
 *     sub_14094D4BC @ 0x14094D4BC (sub_14094D4BC.c)
 */

__int64 __fastcall sub_14094D660(__int64 a1, _DWORD *a2, _DWORD *a3, unsigned int a4, _DWORD *a5, _BYTE *a6)
{
  _DWORD *v8; // rbx
  signed __int64 *v10; // rsi
  __int64 v11; // rbx
  bool v12; // r15
  unsigned int v13; // ecx
  __int64 v14; // r14
  __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rdx
  char v19; // si
  int updated; // eax
  __int64 v21; // rdx
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rbx
  unsigned int v25; // ecx
  _DWORD *v26; // r9
  __int128 v28; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v29; // [rsp+40h] [rbp-C0h]
  __int128 v30; // [rsp+50h] [rbp-B0h]
  __int128 v31; // [rsp+68h] [rbp-98h] BYREF
  __int128 v32; // [rsp+78h] [rbp-88h]
  __int128 v33; // [rsp+88h] [rbp-78h]
  __int128 v34; // [rsp+98h] [rbp-68h] BYREF
  __int128 v35; // [rsp+A8h] [rbp-58h]
  __int128 v36; // [rsp+B8h] [rbp-48h]
  _OWORD v37[3]; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v38[6]; // [rsp+F8h] [rbp-8h] BYREF
  int v39; // [rsp+170h] [rbp+70h] BYREF
  _DWORD *v40; // [rsp+178h] [rbp+78h]

  v40 = a2;
  v8 = a2;
  v39 = 0;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  if ( !*(_QWORD *)a1 && *(_QWORD *)(a1 + 46832) )
  {
    v10 = (signed __int64 *)(a1 + 47024);
    ExAcquirePushLockSharedEx(a1 + 47024, 0LL);
    v11 = *(_QWORD *)(a1 + 47016);
    v12 = v11 == 0;
    if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v10);
    KeAbPostRelease((ULONG_PTR)v10);
    if ( v11 )
    {
      if ( (int)ExpGetKernelDataProtection(a1, &v34) < 0 || !(_QWORD)v35 )
        goto LABEL_14;
      v13 = 900000;
      if ( *(_DWORD *)(a1 + 47032) < 0xDBBA0u )
        v13 = *(_DWORD *)(a1 + 47032);
      v14 = v35 + v13;
      if ( __OFSUB__(v14, (_QWORD)v35) )
        goto LABEL_14;
      v15 = MEMORY[0xFFFFF78000000320];
      if ( v14 <= v15 * KeQueryTimeIncrement() / 10000 )
        v12 = 1;
    }
    if ( !v12 )
    {
LABEL_36:
      v8 = v40;
      goto LABEL_37;
    }
LABEL_14:
    memset(v37, 0, sizeof(v37));
    v31 = 0LL;
    v32 = 0LL;
    v33 = 0LL;
    if ( *(_QWORD *)a1 || !*(_QWORD *)(a1 + 46832) )
      goto LABEL_36;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v10, 0LL);
    v16 = *(_QWORD *)(a1 + 47016);
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10);
    KeAbPostRelease((ULONG_PTR)v10);
    if ( !v16 )
    {
      ExpSetLicenseTamperState(a1, 5);
      goto LABEL_36;
    }
    v17 = *(_QWORD *)(a1 + 46832);
    v18 = *(unsigned int *)(a1 + 46824);
    v19 = 4;
    HIDWORD(v28) = 0;
    *(_DWORD *)((char *)&v30 + 9) = 0;
    *(_WORD *)((char *)&v30 + 13) = 0;
    HIBYTE(v30) = 0;
    if ( !v17 )
    {
      v23 = -1073741811;
      goto LABEL_31;
    }
    if ( (_DWORD)v18 && a1 == -24 )
      goto LABEL_36;
    *(_QWORD *)&v28 = 0LL;
    BYTE8(v30) = 1;
    v29 = 0uLL;
    DWORD2(v28) = 4;
    *(_QWORD *)&v30 = 0LL;
    updated = ExpLicUpdateChecksum(v17 + 20, v18, &v28);
    if ( updated )
      goto LABEL_28;
    if ( (_DWORD)v21 )
    {
      if ( (unsigned __int64)(16 * v21) > 0xFFFFFFFF )
        goto LABEL_28;
      updated = ExpLicUpdateChecksum(v22, v21, &v28);
    }
    if ( !updated )
    {
LABEL_29:
      v23 = 0;
      v31 = v28;
      v32 = v29;
      v33 = v30;
LABEL_31:
      if ( !v23 && (int)ExpGetKernelDataProtection(a1, v37) >= 0 )
      {
        if ( *(_QWORD *)&v37[0] != (_QWORD)v31 )
        {
          DWORD2(v31) = 4;
          v19 = 6;
        }
        v24 = MEMORY[0xFFFFF78000000320];
        *(_QWORD *)&v32 = v24 * KeQueryTimeIncrement() / 10000;
        ExpSetKernelDataProtection(a1, (__int64)&v31, v19, 0);
      }
      goto LABEL_36;
    }
LABEL_28:
    *(_QWORD *)&v28 = 0LL;
    DWORD2(v28) = 4;
    goto LABEL_29;
  }
LABEL_37:
  if ( *(_QWORD *)a1 && KiQueryUnbiasedInterruptTime() / 0x989680uLL > 0x2A30 )
  {
    ExpSetLicenseTamperState(a1, 2);
    memset(v38, 0, 48);
    ExpSetKernelDataProtection(a1, (__int64)v38, 32, 0);
  }
  ExpGetLicenseTamperState(a1, &v39);
  if ( v39 )
  {
    v26 = a5;
    *a6 = 1;
    return (unsigned int)sub_14094D4BC(v8, a3, a4, v26, 0);
  }
  else
  {
    v25 = -1073741772;
    *a6 = 0;
  }
  return v25;
}
