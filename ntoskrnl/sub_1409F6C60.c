/*
 * XREFs of sub_1409F6C60 @ 0x1409F6C60
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14034A074 (KiQueryUnbiasedInterruptTime.c)
 *     KeQueryTimeIncrement @ 0x140351FF0 (KeQueryTimeIncrement.c)
 *     ExpGetLicenseTamperState @ 0x140606C7C (ExpGetLicenseTamperState.c)
 *     ExpLicUpdateChecksum @ 0x140606DE8 (ExpLicUpdateChecksum.c)
 *     ExpSetLicenseTamperState @ 0x140607004 (ExpSetLicenseTamperState.c)
 *     ExpSetKernelDataProtection @ 0x14075B0D0 (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x14075B2C0 (ExpGetKernelDataProtection.c)
 *     sub_1409F6ABC @ 0x1409F6ABC (sub_1409F6ABC.c)
 */

__int64 __fastcall sub_1409F6C60(__int64 a1, _DWORD *a2, _DWORD *a3, unsigned int a4, _DWORD *a5, _BYTE *a6)
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
  __int64 v20; // rdx
  int updated; // ecx
  __int64 v22; // r9
  int v23; // edx
  int v24; // eax
  __int64 v25; // rbx
  unsigned int v26; // ecx
  _DWORD *v27; // r9
  __int128 v29; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v30; // [rsp+40h] [rbp-C0h]
  __int128 v31; // [rsp+50h] [rbp-B0h]
  __int128 v32; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v33; // [rsp+70h] [rbp-90h]
  __int128 v34; // [rsp+80h] [rbp-80h]
  __int128 v35; // [rsp+98h] [rbp-68h] BYREF
  __int128 v36; // [rsp+A8h] [rbp-58h]
  __int128 v37; // [rsp+B8h] [rbp-48h]
  _OWORD v38[3]; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v39[6]; // [rsp+F8h] [rbp-8h] BYREF
  int v40; // [rsp+170h] [rbp+70h] BYREF
  _DWORD *v41; // [rsp+178h] [rbp+78h]

  v41 = a2;
  v8 = a2;
  v40 = 0;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  if ( !*(_QWORD *)a1 && *(_QWORD *)(a1 + 46832) )
  {
    v10 = (signed __int64 *)(a1 + 47024);
    ExAcquirePushLockSharedEx(a1 + 47024, 0LL);
    v11 = *(_QWORD *)(a1 + 47016);
    v12 = v11 == 0;
    if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v10);
    KeAbPostRelease((ULONG_PTR)v10);
    if ( !v11 )
      goto LABEL_12;
    if ( (int)ExpGetKernelDataProtection(a1, &v35) >= 0 && (_QWORD)v36 )
    {
      v13 = 900000;
      if ( *(_DWORD *)(a1 + 47032) < 0xDBBA0u )
        v13 = *(_DWORD *)(a1 + 47032);
      v14 = v36 + v13;
      if ( !__OFSUB__(v14, (_QWORD)v36) )
      {
        v15 = MEMORY[0xFFFFF78000000320];
        if ( v14 > v15 * KeQueryTimeIncrement() / 10000 )
        {
LABEL_12:
          if ( !v12 )
            goto LABEL_36;
        }
      }
    }
    memset(v38, 0, sizeof(v38));
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
LABEL_36:
      v8 = v41;
      goto LABEL_37;
    }
    v17 = *(_QWORD *)(a1 + 46832);
    v18 = *(unsigned int *)(a1 + 46824);
    HIDWORD(v29) = 0;
    *(_DWORD *)((char *)&v31 + 9) = 0;
    *(_WORD *)((char *)&v31 + 13) = 0;
    HIBYTE(v31) = 0;
    if ( !v17 || (_DWORD)v18 && a1 == -24 )
      goto LABEL_36;
    v19 = 4;
    *(_QWORD *)&v29 = 0LL;
    DWORD2(v29) = 4;
    v30 = 0uLL;
    *(_QWORD *)&v31 = 0LL;
    BYTE8(v31) = 1;
    updated = ExpLicUpdateChecksum(v17 + 20, v18, &v29);
    if ( !updated && (_DWORD)v20 )
    {
      if ( (unsigned __int64)(16 * v20) > 0xFFFFFFFF )
      {
        updated = -1073741675;
        v23 = -1073741675;
        goto LABEL_28;
      }
      updated = ExpLicUpdateChecksum(v22, v20, &v29);
    }
    v23 = updated;
    if ( !updated )
    {
LABEL_29:
      v24 = 0;
      if ( !updated )
        v24 = v23;
      v32 = v29;
      v33 = v30;
      v34 = v31;
      if ( !v24 && (int)ExpGetKernelDataProtection(a1, v38) >= 0 )
      {
        if ( *(_QWORD *)&v38[0] != (_QWORD)v32 )
        {
          DWORD2(v32) = 4;
          v19 = 6;
        }
        v25 = MEMORY[0xFFFFF78000000320];
        *(_QWORD *)&v33 = v25 * KeQueryTimeIncrement() / 10000;
        ExpSetKernelDataProtection(a1, (__int64)&v32, v19, 0);
      }
      goto LABEL_36;
    }
LABEL_28:
    *(_QWORD *)&v29 = 0LL;
    DWORD2(v29) = 4;
    goto LABEL_29;
  }
LABEL_37:
  if ( *(_QWORD *)a1 && KiQueryUnbiasedInterruptTime() / 0x989680uLL > 0x2A30 )
  {
    ExpSetLicenseTamperState(a1, 2);
    memset(v39, 0, 48);
    ExpSetKernelDataProtection(a1, (__int64)v39, 32, 0);
  }
  ExpGetLicenseTamperState(a1, &v40);
  if ( v40 )
  {
    v27 = a5;
    *a6 = 1;
    return (unsigned int)sub_1409F6ABC(v8, a3, a4, v27, 0);
  }
  else
  {
    v26 = -1073741772;
    *a6 = 0;
  }
  return v26;
}
