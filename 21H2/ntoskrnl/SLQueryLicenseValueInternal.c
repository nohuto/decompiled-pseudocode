/*
 * XREFs of SLQueryLicenseValueInternal @ 0x14082D870
 * Callers:
 *     NtQueryLicenseValue @ 0x1406A0140 (NtQueryLicenseValue.c)
 *     ntoskrnl_27 @ 0x1406A0430 (ntoskrnl_27.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1403C5398 @ 0x1403C5398 (sub_1403C5398.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x14082DE40 (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     SLGetSubscriptionPfn @ 0x1409FA388 (SLGetSubscriptionPfn.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SLQueryLicenseValueInternal(
        __int64 a1,
        const UNICODE_STRING *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6)
{
  __int64 v7; // r13
  wchar_t *v8; // r12
  int v9; // edi
  int v10; // r9d
  __int64 v11; // rcx
  unsigned __int16 v12; // ax
  __int64 (**v13)[9]; // rbx
  size_t v14; // rdx
  __int64 *v15; // rax
  __int64 v16; // r12
  __int64 v17; // r14
  char v18; // al
  __int64 *v19; // r14
  int v20; // ebx
  unsigned int v21; // r12d
  __int64 v22; // rcx
  unsigned __int16 v23; // ax
  __int64 (**v24)[9]; // r11
  size_t v25; // rdx
  unsigned int v27; // eax
  _WORD *v28; // r10
  __int64 v29; // r8
  __int64 v30; // r11
  unsigned int v31; // eax
  _WORD *v32; // r8
  __int64 v33; // r9
  __int64 v34; // r10
  int v35; // eax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v37; // r13d
  wchar_t *PoolWithTag; // rax
  unsigned int v39; // r14d
  const wchar_t **v40; // r12
  char v41; // al
  int v42; // eax
  struct _KTHREAD *v43; // rax
  int v44; // eax
  char v45; // [rsp+61h] [rbp-197h] BYREF
  char v46; // [rsp+62h] [rbp-196h]
  int v47; // [rsp+64h] [rbp-194h]
  unsigned __int16 v48; // [rsp+6Ah] [rbp-18Eh]
  unsigned int v49; // [rsp+6Ch] [rbp-18Ch] BYREF
  wchar_t *Str1; // [rsp+70h] [rbp-188h]
  unsigned int *v51; // [rsp+78h] [rbp-180h]
  __int64 v52; // [rsp+80h] [rbp-178h]
  int v53; // [rsp+88h] [rbp-170h]
  __int64 v54; // [rsp+90h] [rbp-168h]
  __int64 v55; // [rsp+98h] [rbp-160h]
  __int64 (**v56)[9]; // [rsp+A0h] [rbp-158h]
  int v57; // [rsp+A8h] [rbp-150h]
  int v58; // [rsp+ACh] [rbp-14Ch] BYREF
  PVOID P; // [rsp+B0h] [rbp-148h] BYREF
  __int128 v60; // [rsp+B8h] [rbp-140h] BYREF
  __int64 *v61; // [rsp+C8h] [rbp-130h]
  __int64 v62; // [rsp+D8h] [rbp-120h]
  __int64 v63; // [rsp+E8h] [rbp-110h]
  const UNICODE_STRING *v64; // [rsp+F0h] [rbp-108h]
  __int64 v65; // [rsp+F8h] [rbp-100h]
  _QWORD v66[7]; // [rsp+108h] [rbp-F0h] BYREF
  _BYTE Buf1[112]; // [rsp+140h] [rbp-B8h] BYREF

  v55 = a4;
  v52 = a3;
  v7 = a1;
  v54 = a1;
  v63 = a1;
  v64 = a2;
  v65 = a3;
  v62 = a4;
  v51 = a6;
  v47 = 0;
  v60 = 0LL;
  v45 = 0;
  v8 = 0LL;
  Str1 = 0LL;
  P = 0LL;
  v58 = 0;
  if ( !a2 || !a6 || (v9 = 0, v47 = 0, !a2->Buffer) || a2->Length < 2u )
  {
    v9 = -1073741811;
    goto LABEL_85;
  }
  LOBYTE(v60) = 1;
  *((_QWORD *)&v60 + 1) = a2;
  v57 = ExpLoadAndSortLicensingCacheDescriptors();
  v61 = 0LL;
  v46 = 0;
  v10 = 1;
  v53 = 1;
  v49 = 0;
  v11 = *((_QWORD *)&v60 + 1);
  v12 = **((_WORD **)&v60 + 1);
  v48 = **((_WORD **)&v60 + 1);
  v56 = &off_140A379D0;
  v13 = &off_140A379D0;
  while ( 1 )
  {
    v14 = *((unsigned __int16 *)v13 + 4);
    if ( v12 != (_WORD)v14 )
    {
      v10 += v14;
      v53 = v10;
      goto LABEL_8;
    }
    v27 = v12 >> 1;
    if ( v27 )
    {
      v28 = Buf1;
      v29 = *(_QWORD *)(v11 + 8) - (_QWORD)Buf1;
      v30 = v27;
      do
      {
        *v28 = *(_WORD *)((char *)v28 + v29) ^ ((v10 + 1) | ((_WORD)v10 << 8) | 0x5555);
        v10 += 2;
        ++v28;
        --v30;
      }
      while ( v30 );
      v53 = v10;
      v7 = v54;
    }
    if ( !memcmp(Buf1, *v13, v14) )
      break;
    v10 = v53;
    v11 = *((_QWORD *)&v60 + 1);
LABEL_8:
    ++v49;
    v13 += 5;
    if ( v49 >= 0xE )
    {
      v15 = 0LL;
      goto LABEL_11;
    }
    v12 = v48;
  }
  v15 = (__int64 *)v13[2];
  v61 = v15;
  LOBYTE(v8) = *((_BYTE *)v13 + 32);
  v46 = (char)v8;
LABEL_11:
  if ( v15 )
  {
    if ( (_BYTE)v8 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx(v7 + 46840, 0LL);
      v35 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, unsigned int *, char *))v61)(
              v7,
              v52,
              v55,
              a5,
              v51,
              &v45);
    }
    else
    {
      v35 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, unsigned int *, char *))v15)(
              v7,
              v52,
              v55,
              a5,
              v51,
              &v45);
    }
    v9 = v35;
    v47 = v35;
    if ( (_BYTE)v8 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 46840), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v7 + 46840));
      KeAbPostRelease(v7 + 46840);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v9 = v47;
    }
  }
  if ( v45 )
  {
    if ( v9 >= 0 )
    {
      if ( *v51 > a5 )
        v9 = -1073741789;
      v47 = v9;
    }
    v8 = Str1;
    goto LABEL_27;
  }
  v9 = v57;
  if ( v57 < 0 )
  {
    v47 = v57;
    goto LABEL_26;
  }
  v47 = 0;
  v49 = 0;
  v9 = sub_1403C5398(v7, (__int64)&qword_140A38328, 0LL, (__int64)&v49, 4, (__int64)&v58);
  v47 = v9;
  if ( !qword_140D3B3B8 || !v49 || RtlEqualUnicodeString(a2, &stru_140A38338, 0) )
  {
LABEL_15:
    v16 = v52;
    v17 = (__int64)v51;
    goto LABEL_16;
  }
  v37 = a2->Length + 2;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v37, 0x20534C53u);
  v8 = PoolWithTag;
  Str1 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v9 = -1073741801;
LABEL_85:
    v47 = v9;
    goto LABEL_27;
  }
  memset(PoolWithTag, 0, v37);
  memmove(v8, a2->Buffer, a2->Length);
  v66[0] = L"Security-SPP-GenuineLocalStatus";
  v66[1] = L"Security-SPP-Action-StateData";
  v66[2] = L"Security-SPP-LastWindowsActivationHResult";
  v66[3] = L"Security-SPP-LastWindowsActivationTime";
  v66[4] = L"Kernel-ExpirationDate";
  v66[5] = L"SMR-HostManaged-Enabled";
  v66[6] = L"TerminalServices-RemoteConnectionManager-AllowAppServerMode";
  v39 = 0;
  v40 = (const wchar_t **)v66;
  while ( wcsicmp(Str1, *v40) )
  {
    ++v39;
    ++v40;
    if ( v39 >= 7 )
    {
      v41 = 0;
      goto LABEL_68;
    }
  }
  v41 = 1;
LABEL_68:
  if ( v41 )
  {
    v7 = v54;
    goto LABEL_15;
  }
  SLGetSubscriptionPfn(v54, &P);
  v16 = v52;
  v17 = (__int64)v51;
  v42 = qword_140D3B3B8(P, 0LL, 0LL, 0LL, Str1, v37, v55, a5, v51, v52, 0LL);
  if ( (int)(v42 + 0x80000000) < 0 || v42 == -1073741789 )
  {
    v9 = v42;
    if ( !a5 )
      v9 = -1073741789;
    v47 = v9;
    v18 = 0;
    v7 = v54;
  }
  else
  {
    v7 = v54;
LABEL_16:
    v18 = 1;
  }
  if ( v18 )
  {
    v9 = sub_1403C5398(v7, (__int64)&v60, v16, v55, a5, v17);
    v47 = v9;
    if ( v9 == -1073741762 )
    {
      v43 = KeGetCurrentThread();
      --v43->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v7 + 46840, 0LL);
      *(_BYTE *)(v7 + 46992) = 1;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 46840), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v7 + 46840);
      KeAbPostRelease(v7 + 46840);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v9 = v47;
    }
  }
  v19 = 0LL;
  v20 = 1;
  v21 = 0;
  v22 = *((_QWORD *)&v60 + 1);
  v23 = **((_WORD **)&v60 + 1);
  v48 = **((_WORD **)&v60 + 1);
  v24 = &off_140A379D0;
  while ( 2 )
  {
    v25 = *((unsigned __int16 *)v24 + 4);
    if ( v23 != (_WORD)v25 )
    {
      v20 += v25;
LABEL_22:
      ++v21;
      v24 += 5;
      v56 = v24;
      if ( v21 >= 0xE )
        goto LABEL_25;
      v23 = v48;
      continue;
    }
    break;
  }
  v31 = v23 >> 1;
  if ( v31 )
  {
    v32 = Buf1;
    v33 = *(_QWORD *)(v22 + 8) - (_QWORD)Buf1;
    v34 = v31;
    do
    {
      *v32 = *(_WORD *)((char *)v32 + v33) ^ ((v20 + 1) | ((_WORD)v20 << 8) | 0x5555);
      v20 += 2;
      ++v32;
      --v34;
    }
    while ( v34 );
    v7 = v54;
  }
  if ( memcmp(Buf1, *v24, v25) )
  {
    v22 = *((_QWORD *)&v60 + 1);
    v24 = v56;
    goto LABEL_22;
  }
  v19 = (__int64 *)v56[3];
LABEL_25:
  if ( v19 && (v9 >= 0 || v9 == -1073741772 || v9 == -1073741275) )
  {
    v44 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, unsigned int *, char *))v19)(
            v7,
            v52,
            v55,
            a5,
            v51,
            &v45);
    if ( v45 )
    {
      v9 = v44;
      v47 = v44;
    }
  }
LABEL_26:
  v8 = Str1;
LABEL_27:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)v9;
}
