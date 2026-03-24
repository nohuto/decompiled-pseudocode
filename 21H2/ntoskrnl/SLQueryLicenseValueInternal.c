/*
 * XREFs of SLQueryLicenseValueInternal @ 0x1407AB014
 * Callers:
 *     ntoskrnl_27 @ 0x1407200D0 (ntoskrnl_27.c)
 *     NtQueryLicenseValue @ 0x140720160 (NtQueryLicenseValue.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     sub_1403B806C @ 0x1403B806C (sub_1403B806C.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403D20D0 (_wcsicmp.c)
 *     memcmp @ 0x1403D29E0 (memcmp.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     memset @ 0x140414200 (memset.c)
 *     RtlEqualUnicodeString @ 0x140601410 (RtlEqualUnicodeString.c)
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x1407AB5D4 (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     SLGetSubscriptionPfn @ 0x14094DF38 (SLGetSubscriptionPfn.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
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
  PVOID PoolWithTag; // rax
  unsigned int v35; // r15d
  const wchar_t **v36; // rax
  char v37; // al
  int v38; // eax
  struct _KTHREAD *v39; // rax
  int v40; // eax
  char v41; // [rsp+61h] [rbp-237h] BYREF
  char v42; // [rsp+62h] [rbp-236h]
  int v43; // [rsp+64h] [rbp-234h]
  unsigned int v44; // [rsp+68h] [rbp-230h] BYREF
  unsigned __int16 v45; // [rsp+6Eh] [rbp-22Ah]
  unsigned int *v46; // [rsp+70h] [rbp-228h]
  int v47; // [rsp+78h] [rbp-220h]
  int v48; // [rsp+7Ch] [rbp-21Ch]
  PVOID v49; // [rsp+80h] [rbp-218h]
  __int64 (**v50)[9]; // [rsp+88h] [rbp-210h]
  size_t v51; // [rsp+90h] [rbp-208h]
  __int64 v52; // [rsp+98h] [rbp-200h]
  __int64 *v53; // [rsp+A0h] [rbp-1F8h]
  size_t Size; // [rsp+A8h] [rbp-1F0h]
  int v55; // [rsp+B0h] [rbp-1E8h] BYREF
  PVOID P; // [rsp+B8h] [rbp-1E0h] BYREF
  __int128 v57; // [rsp+C0h] [rbp-1D8h] BYREF
  const UNICODE_STRING *v58; // [rsp+D0h] [rbp-1C8h]
  __int64 v59; // [rsp+E0h] [rbp-1B8h]
  const UNICODE_STRING *v60; // [rsp+E8h] [rbp-1B0h]
  __int64 v61; // [rsp+F0h] [rbp-1A8h]
  _QWORD v62[14]; // [rsp+100h] [rbp-198h] BYREF
  _BYTE Buf1[112]; // [rsp+170h] [rbp-128h] BYREF
  _BYTE v64[112]; // [rsp+1E0h] [rbp-B8h] BYREF

  v51 = a4;
  v52 = a3;
  v6 = a2;
  v58 = a2;
  v59 = a1;
  v60 = a2;
  v61 = a3;
  Size = a4;
  v46 = a6;
  v43 = 0;
  v57 = 0LL;
  v41 = 0;
  v8 = 0LL;
  v49 = 0LL;
  P = 0LL;
  v55 = 0;
  if ( !a2 || !a6 || (v9 = 0, v43 = 0, !a2->Buffer) || a2->Length < 2u )
  {
    v9 = -1073741811;
    goto LABEL_54;
  }
  LOBYTE(v57) = 1;
  *((_QWORD *)&v57 + 1) = a2;
  v48 = ExpLoadAndSortLicensingCacheDescriptors();
  v53 = 0LL;
  v42 = 0;
  v10 = 1;
  v47 = 1;
  v44 = 0;
  v11 = *((_QWORD *)&v57 + 1);
  v12 = **((_WORD **)&v57 + 1);
  v45 = **((_WORD **)&v57 + 1);
  v50 = &off_1409832D0;
  v13 = &off_1409832D0;
  while ( 1 )
  {
    v14 = *((unsigned __int16 *)v13 + 4);
    if ( v12 == (_WORD)v14 )
      break;
    v10 += v14;
    v47 = v10;
LABEL_8:
    ++v44;
    v13 += 5;
    if ( v44 >= 0xE )
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
    v47 = v10;
    v6 = v58;
  }
  if ( memcmp(Buf1, *v13, v14) )
  {
    v10 = v47;
    v12 = v45;
    v11 = *((_QWORD *)&v57 + 1);
    goto LABEL_8;
  }
  v15 = (__int64 *)v13[2];
  v53 = v15;
  LOBYTE(v8) = *((_BYTE *)v13 + 32);
  v42 = (char)v8;
LABEL_10:
  if ( v15 )
  {
    if ( (_BYTE)v8 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx(a1 + 46840, 0LL);
      v32 = ((__int64 (__fastcall *)(__int64, __int64, size_t, _QWORD, unsigned int *, char *))v53)(
              a1,
              v52,
              v51,
              a5,
              v46,
              &v41);
    }
    else
    {
      v32 = ((__int64 (__fastcall *)(__int64, __int64, size_t, _QWORD, unsigned int *, char *))v15)(
              a1,
              v52,
              v51,
              a5,
              v46,
              &v41);
    }
    v9 = v32;
    v43 = v32;
    if ( (_BYTE)v8 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 46840), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 46840));
      KeAbPostRelease(a1 + 46840);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v9 = v43;
    }
  }
  if ( v41 )
  {
    if ( v9 >= 0 )
    {
      if ( *v46 > a5 )
        v9 = -1073741789;
      v43 = v9;
    }
    v8 = v49;
    goto LABEL_26;
  }
  v9 = v48;
  if ( v48 < 0 )
  {
    v8 = v49;
LABEL_54:
    v43 = v9;
    goto LABEL_26;
  }
  v43 = 0;
  v44 = 0;
  v9 = sub_1403B806C(a1, (__int64)&qword_140983C10, 0LL, (__int64)&v44, 4, (__int64)&v55);
  v43 = v9;
  if ( !qword_140D2D3E8 || !v44 || RtlEqualUnicodeString(v6, &stru_140983C00, 0) )
  {
    v8 = v49;
LABEL_15:
    v16 = (__int64)v46;
LABEL_16:
    v17 = 1;
    goto LABEL_17;
  }
  v48 = v6->Length + 2;
  Size = (unsigned int)v48;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v48, 0x20534C53u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v9 = -1073741801;
    goto LABEL_54;
  }
  memset(PoolWithTag, 0, Size);
  memmove(v8, v6->Buffer, v6->Length);
  v62[0] = L"Security-SPP-GenuineLocalStatus";
  v62[1] = L"Security-SPP-Action-StateData";
  v62[2] = L"Security-SPP-LastWindowsActivationHResult";
  v62[3] = L"Security-SPP-LastWindowsActivationTime";
  v62[4] = L"Kernel-ExpirationDate";
  v62[5] = L"SMR-HostManaged-Enabled";
  v62[6] = L"TerminalServices-RemoteConnectionManager-AllowAppServerMode";
  v62[7] = L"Client-ESU-Year1";
  v62[8] = L"Client-ESU-Year2";
  v62[9] = L"Client-ESU-Year3";
  v62[10] = L"Client-ESU-Year4";
  v62[11] = L"Client-ESU-Year5";
  v62[12] = L"Client-ESU-Year6";
  v35 = 0;
  v36 = (const wchar_t **)v62;
  v53 = v62;
  while ( wcsicmp((const wchar_t *)v8, *v36) )
  {
    ++v35;
    v36 = (const wchar_t **)++v53;
    if ( v35 >= 0xD )
    {
      v37 = 0;
      goto LABEL_68;
    }
  }
  v37 = 1;
LABEL_68:
  if ( v37 )
    goto LABEL_15;
  SLGetSubscriptionPfn(a1, &P);
  v16 = (__int64)v46;
  v38 = qword_140D2D3E8(P, 0LL, 0LL, 0LL, v8, v48, v51, a5, v46, v52, 0LL);
  if ( (int)(v38 + 0x80000000) >= 0 && v38 != -1073741789 )
    goto LABEL_16;
  v9 = v38;
  if ( !a5 )
    v9 = -1073741789;
  v43 = v9;
  v17 = 0;
LABEL_17:
  if ( v17 )
  {
    v9 = sub_1403B806C(a1, (__int64)&v57, v52, v51, a5, v16);
    v43 = v9;
    if ( v9 == -1073741762 )
    {
      v39 = KeGetCurrentThread();
      --v39->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(a1 + 46840, 0LL);
      *(_BYTE *)(a1 + 46992) = 1;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 46840), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 46840);
      KeAbPostRelease(a1 + 46840);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v9 = v43;
    }
  }
  v18 = 0LL;
  v19 = 1;
  v44 = 0;
  v20 = *((_QWORD *)&v57 + 1);
  v21 = **((_WORD **)&v57 + 1);
  v45 = **((_WORD **)&v57 + 1);
  v22 = &off_1409832D0;
  while ( 2 )
  {
    v23 = *((unsigned __int16 *)v22 + 4);
    if ( v21 != (_WORD)v23 )
    {
      v19 += v23;
LABEL_22:
      ++v44;
      v22 += 5;
      v50 = v22;
      if ( v44 >= 0xE )
        goto LABEL_25;
      v21 = v45;
      continue;
    }
    break;
  }
  v28 = v21 >> 1;
  if ( v28 )
  {
    v29 = v64;
    v30 = *(_QWORD *)(v20 + 8) - (_QWORD)v64;
    v31 = v28;
    do
    {
      *v29 = *(_WORD *)((char *)v29 + v30) ^ ((v19 + 1) | ((_WORD)v19 << 8) | 0x5555);
      v19 += 2;
      ++v29;
      --v31;
    }
    while ( v31 );
    v22 = v50;
  }
  if ( memcmp(v64, *v22, v23) )
  {
    v20 = *((_QWORD *)&v57 + 1);
    v22 = v50;
    goto LABEL_22;
  }
  v18 = (__int64 *)v50[3];
LABEL_25:
  if ( v18 && (v9 >= 0 || v9 == -1073741772 || v9 == -1073741275) )
  {
    v40 = ((__int64 (__fastcall *)(__int64, __int64, size_t, _QWORD, unsigned int *, char *))v18)(
            a1,
            v52,
            v51,
            a5,
            v46,
            &v41);
    if ( v41 )
    {
      v9 = v40;
      v43 = v40;
    }
  }
LABEL_26:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)v9;
}
