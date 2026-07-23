/*
 * XREFs of SLQueryLicenseValueInternal @ 0x1407AB214
 * Callers:
 *     ntoskrnl_27 @ 0x1406F6580 (ntoskrnl_27.c)
 *     NtQueryLicenseValue @ 0x1406F6610 (NtQueryLicenseValue.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     sub_1403B81DC @ 0x1403B81DC (sub_1403B81DC.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403D2240 (_wcsicmp.c)
 *     memcmp @ 0x1403D2B50 (memcmp.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlEqualUnicodeString @ 0x1406F0B70 (RtlEqualUnicodeString.c)
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x1407AB7D4 (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     SLGetSubscriptionPfn @ 0x14094E108 (SLGetSubscriptionPfn.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SLQueryLicenseValueInternal(
        __int64 a1,
        const UNICODE_STRING *a2,
        __int64 a3,
        size_t a4,
        unsigned int a5,
        unsigned int *a6)
{
  const UNICODE_STRING *v6; // r15
  PVOID v8; // r12
  int v9; // edi
  int v10; // edx
  __int64 v11; // r10
  unsigned __int16 v12; // cx
  __int64 (**v13)[9]; // rbx
  size_t v14; // r8
  __int64 *v15; // r10
  __int64 v16; // r15
  char v17; // al
  __int64 *v18; // r15
  int v19; // ebx
  __int64 v20; // rcx
  unsigned __int16 v21; // ax
  __int64 (**v22)[9]; // r11
  size_t v23; // rdx
  _WORD *v25; // r9
  __int64 v26; // r10
  __int64 v27; // r11
  unsigned int v28; // eax
  _WORD *v29; // r8
  __int64 v30; // r9
  __int64 v31; // r10
  int v32; // eax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  PVOID PoolWithTag; // rax
  unsigned int v38; // r15d
  const wchar_t **v39; // rax
  char v40; // al
  int v41; // eax
  struct _KTHREAD *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  int v46; // eax
  char v47; // [rsp+61h] [rbp-237h] BYREF
  char v48; // [rsp+62h] [rbp-236h]
  int v49; // [rsp+64h] [rbp-234h]
  unsigned int v50; // [rsp+68h] [rbp-230h] BYREF
  unsigned __int16 v51; // [rsp+6Eh] [rbp-22Ah]
  unsigned int *v52; // [rsp+70h] [rbp-228h]
  int v53; // [rsp+78h] [rbp-220h]
  int v54; // [rsp+7Ch] [rbp-21Ch]
  PVOID v55; // [rsp+80h] [rbp-218h]
  __int64 (**v56)[9]; // [rsp+88h] [rbp-210h]
  size_t v57; // [rsp+90h] [rbp-208h]
  __int64 v58; // [rsp+98h] [rbp-200h]
  __int64 *v59; // [rsp+A0h] [rbp-1F8h]
  size_t Size; // [rsp+A8h] [rbp-1F0h]
  int v61; // [rsp+B0h] [rbp-1E8h] BYREF
  PVOID P; // [rsp+B8h] [rbp-1E0h] BYREF
  __int128 v63; // [rsp+C0h] [rbp-1D8h] BYREF
  const UNICODE_STRING *v64; // [rsp+D0h] [rbp-1C8h]
  __int64 v65; // [rsp+E0h] [rbp-1B8h]
  const UNICODE_STRING *v66; // [rsp+E8h] [rbp-1B0h]
  __int64 v67; // [rsp+F0h] [rbp-1A8h]
  _QWORD v68[14]; // [rsp+100h] [rbp-198h] BYREF
  _BYTE Buf1[112]; // [rsp+170h] [rbp-128h] BYREF
  _BYTE v70[112]; // [rsp+1E0h] [rbp-B8h] BYREF

  v57 = a4;
  v58 = a3;
  v6 = a2;
  v64 = a2;
  v65 = a1;
  v66 = a2;
  v67 = a3;
  Size = a4;
  v52 = a6;
  v49 = 0;
  v63 = 0LL;
  v47 = 0;
  v8 = 0LL;
  v55 = 0LL;
  P = 0LL;
  v61 = 0;
  if ( !a2 || !a6 || (v9 = 0, v49 = 0, !a2->Buffer) || a2->Length < 2u )
  {
    v9 = -1073741811;
    goto LABEL_54;
  }
  LOBYTE(v63) = 1;
  *((_QWORD *)&v63 + 1) = a2;
  v54 = ExpLoadAndSortLicensingCacheDescriptors();
  v59 = 0LL;
  v48 = 0;
  v10 = 1;
  v53 = 1;
  v50 = 0;
  v11 = *((_QWORD *)&v63 + 1);
  v12 = **((_WORD **)&v63 + 1);
  v51 = **((_WORD **)&v63 + 1);
  v56 = &off_1409834B0;
  v13 = &off_1409834B0;
  while ( 1 )
  {
    v14 = *((unsigned __int16 *)v13 + 4);
    if ( v12 == (_WORD)v14 )
      break;
    v10 += v14;
    v53 = v10;
LABEL_8:
    ++v50;
    v13 += 5;
    if ( v50 >= 0xE )
    {
      v15 = 0LL;
      goto LABEL_10;
    }
  }
  if ( v12 >> 1 )
  {
    v25 = Buf1;
    v26 = *(_QWORD *)(v11 + 8) - (_QWORD)Buf1;
    v27 = v12 >> 1;
    do
    {
      *v25 = *(_WORD *)((char *)v25 + v26) ^ ((v10 + 1) | ((_WORD)v10 << 8) | 0x5555);
      v10 += 2;
      ++v25;
      --v27;
    }
    while ( v27 );
    v53 = v10;
    v6 = v64;
  }
  if ( memcmp(Buf1, *v13, v14) )
  {
    v10 = v53;
    v12 = v51;
    v11 = *((_QWORD *)&v63 + 1);
    goto LABEL_8;
  }
  v15 = (__int64 *)v13[2];
  v59 = v15;
  LOBYTE(v8) = *((_BYTE *)v13 + 32);
  v48 = (char)v8;
LABEL_10:
  if ( v15 )
  {
    if ( (_BYTE)v8 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx(a1 + 46840, 0LL);
      v32 = ((__int64 (__fastcall *)(__int64, __int64, size_t, _QWORD, unsigned int *, char *))v59)(
              a1,
              v58,
              v57,
              a5,
              v52,
              &v47);
    }
    else
    {
      v32 = ((__int64 (__fastcall *)(__int64, __int64, size_t, _QWORD, unsigned int *, char *))v15)(
              a1,
              v58,
              v57,
              a5,
              v52,
              &v47);
    }
    v9 = v32;
    v49 = v32;
    if ( (_BYTE)v8 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 46840), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 46840));
      KeAbPostRelease(a1 + 46840);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v34, v35, v36);
      v9 = v49;
    }
  }
  if ( v47 )
  {
    if ( v9 >= 0 )
    {
      if ( *v52 > a5 )
        v9 = -1073741789;
      v49 = v9;
    }
    v8 = v55;
    goto LABEL_26;
  }
  v9 = v54;
  if ( v54 < 0 )
  {
    v8 = v55;
LABEL_54:
    v49 = v9;
    goto LABEL_26;
  }
  v49 = 0;
  v50 = 0;
  v9 = sub_1403B81DC(a1, (__int64)&qword_140983DD0, 0LL, (__int64)&v50, 4, (__int64)&v61);
  v49 = v9;
  if ( !qword_140D2D3E8 || !v50 || RtlEqualUnicodeString(v6, &stru_140983DE0, 0) )
  {
    v8 = v55;
LABEL_15:
    v16 = (__int64)v52;
LABEL_16:
    v17 = 1;
    goto LABEL_17;
  }
  v54 = v6->Length + 2;
  Size = (unsigned int)v54;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v54, 0x20534C53u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v9 = -1073741801;
    goto LABEL_54;
  }
  memset(PoolWithTag, 0, Size);
  memmove(v8, v6->Buffer, v6->Length);
  v68[0] = L"Security-SPP-GenuineLocalStatus";
  v68[1] = L"Security-SPP-Action-StateData";
  v68[2] = L"Security-SPP-LastWindowsActivationHResult";
  v68[3] = L"Security-SPP-LastWindowsActivationTime";
  v68[4] = L"Kernel-ExpirationDate";
  v68[5] = L"SMR-HostManaged-Enabled";
  v68[6] = L"TerminalServices-RemoteConnectionManager-AllowAppServerMode";
  v68[7] = L"Client-ESU-Year1";
  v68[8] = L"Client-ESU-Year2";
  v68[9] = L"Client-ESU-Year3";
  v68[10] = L"Client-ESU-Year4";
  v68[11] = L"Client-ESU-Year5";
  v68[12] = L"Client-ESU-Year6";
  v38 = 0;
  v39 = (const wchar_t **)v68;
  v59 = v68;
  while ( wcsicmp((const wchar_t *)v8, *v39) )
  {
    ++v38;
    v39 = (const wchar_t **)++v59;
    if ( v38 >= 0xD )
    {
      v40 = 0;
      goto LABEL_68;
    }
  }
  v40 = 1;
LABEL_68:
  if ( v40 )
    goto LABEL_15;
  SLGetSubscriptionPfn(a1, &P);
  v16 = (__int64)v52;
  v41 = qword_140D2D3E8(P, 0LL, 0LL, 0LL, v8, v54, v57, a5, v52, v58, 0LL);
  if ( (int)(v41 + 0x80000000) >= 0 && v41 != -1073741789 )
    goto LABEL_16;
  v9 = v41;
  if ( !a5 )
    v9 = -1073741789;
  v49 = v9;
  v17 = 0;
LABEL_17:
  if ( v17 )
  {
    v9 = sub_1403B81DC(a1, (__int64)&v63, v58, v57, a5, v16);
    v49 = v9;
    if ( v9 == -1073741762 )
    {
      v42 = KeGetCurrentThread();
      --v42->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 46840, 0LL);
      *(_BYTE *)(a1 + 46992) = 1;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 46840), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 46840);
      KeAbPostRelease(a1 + 46840);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v43, v44, v45);
      v9 = v49;
    }
  }
  v18 = 0LL;
  v19 = 1;
  v50 = 0;
  v20 = *((_QWORD *)&v63 + 1);
  v21 = **((_WORD **)&v63 + 1);
  v51 = **((_WORD **)&v63 + 1);
  v22 = &off_1409834B0;
  while ( 2 )
  {
    v23 = *((unsigned __int16 *)v22 + 4);
    if ( v21 != (_WORD)v23 )
    {
      v19 += v23;
LABEL_22:
      ++v50;
      v22 += 5;
      v56 = v22;
      if ( v50 >= 0xE )
        goto LABEL_25;
      v21 = v51;
      continue;
    }
    break;
  }
  v28 = v21 >> 1;
  if ( v28 )
  {
    v29 = v70;
    v30 = *(_QWORD *)(v20 + 8) - (_QWORD)v70;
    v31 = v28;
    do
    {
      *v29 = *(_WORD *)((char *)v29 + v30) ^ ((v19 + 1) | ((_WORD)v19 << 8) | 0x5555);
      v19 += 2;
      ++v29;
      --v31;
    }
    while ( v31 );
    v22 = v56;
  }
  if ( memcmp(v70, *v22, v23) )
  {
    v20 = *((_QWORD *)&v63 + 1);
    v22 = v56;
    goto LABEL_22;
  }
  v18 = (__int64 *)v56[3];
LABEL_25:
  if ( v18 && (v9 >= 0 || v9 == -1073741772 || v9 == -1073741275) )
  {
    v46 = ((__int64 (__fastcall *)(__int64, __int64, size_t, _QWORD, unsigned int *, char *))v18)(
            a1,
            v58,
            v57,
            a5,
            v52,
            &v47);
    if ( v47 )
    {
      v9 = v46;
      v49 = v46;
    }
  }
LABEL_26:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)v9;
}
