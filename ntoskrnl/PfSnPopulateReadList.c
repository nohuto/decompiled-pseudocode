/*
 * XREFs of PfSnPopulateReadList @ 0x1406A42B0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PsSetCurrentThreadPrefetching @ 0x1406A47E0 (PsSetCurrentThreadPrefetching.c)
 *     PfSnFindPrefetchVolumeInfoInList @ 0x1406A4844 (PfSnFindPrefetchVolumeInfoInList.c)
 *     PfSnGetSectionObject @ 0x1406A48D0 (PfSnGetSectionObject.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x1406A4DB4 (PfSnCleanupPrefetchSectionInfo.c)
 *     NtClose @ 0x1407C00E0 (NtClose.c)
 *     NtCreateEvent @ 0x1407D0E20 (NtCreateEvent.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnPopulateReadList(__int64 a1)
{
  __int64 v1; // r15
  _QWORD *Pool2; // r12
  __int64 v3; // r13
  __int64 v4; // rsi
  __int64 v5; // r14
  _KPROCESS *v6; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v8; // eax
  __int64 v9; // r8
  unsigned int *v10; // rax
  int v11; // ebx
  char *v12; // rcx
  char *v13; // rdi
  char *v14; // r9
  unsigned int v15; // ebx
  __int64 v16; // rax
  char *v17; // rsi
  unsigned int v18; // edx
  int v19; // r13d
  int v20; // r13d
  bool v21; // zf
  wchar_t *v22; // r14
  __int64 PrefetchVolumeInfoInList; // r15
  int v24; // r14d
  bool v25; // r11
  unsigned int v26; // r9d
  BOOL v27; // r15d
  int v28; // r10d
  __int64 v29; // rax
  int v30; // ecx
  int v31; // r10d
  unsigned int v32; // edx
  __int64 v33; // rcx
  int v34; // ecx
  int v35; // eax
  char v36; // [rsp+58h] [rbp-B0h] BYREF
  bool v37; // [rsp+59h] [rbp-AFh]
  int v38; // [rsp+5Ch] [rbp-ACh]
  __int64 v39; // [rsp+60h] [rbp-A8h]
  __int64 v40; // [rsp+68h] [rbp-A0h]
  __int64 v41; // [rsp+70h] [rbp-98h]
  __int64 v42; // [rsp+78h] [rbp-90h]
  int v43; // [rsp+80h] [rbp-88h]
  __int64 v44; // [rsp+88h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-78h] BYREF
  __int64 v46; // [rsp+98h] [rbp-70h]
  __int64 v47; // [rsp+A0h] [rbp-68h]
  char *v48; // [rsp+A8h] [rbp-60h]
  __int64 v49; // [rsp+B0h] [rbp-58h]
  char *v50; // [rsp+B8h] [rbp-50h]
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-48h] BYREF
  _DWORD v52[2]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v53; // [rsp+D8h] [rbp-30h]
  __int64 v54; // [rsp+E0h] [rbp-28h]
  int v55; // [rsp+E8h] [rbp-20h]
  int v56; // [rsp+ECh] [rbp-1Ch]
  __int128 v57; // [rsp+F0h] [rbp-18h]
  $115DCDF994C6370D29323EAB0E0C9502 v58; // [rsp+100h] [rbp-8h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  Pool2 = 0LL;
  memset(&v58, 0, sizeof(v58));
  v3 = a1;
  v49 = a1;
  LODWORD(v4) = 0;
  v52[1] = 0;
  DestinationString = 0LL;
  v5 = *(_QWORD *)(v1 + 8);
  v6 = *(_KPROCESS **)(v1 + 16);
  v39 = v5;
  v56 = 0;
  v42 = v1;
  v36 = 0;
  Handle = 0LL;
  KiStackAttachProcess(v6, 0, (__int64)&v58);
  PsSetCurrentThreadPrefetching(1u);
  CurrentThread = KeGetCurrentThread();
  v52[0] = 48;
  v53 = 0LL;
  v55 = 512;
  --CurrentThread->KernelApcDisable;
  v54 = 0LL;
  v57 = 0LL;
  v8 = NtCreateEvent(&Handle, 2031619LL, v52, 0LL, 0);
  if ( v8 < 0 )
    goto LABEL_54;
  v10 = *(unsigned int **)v5;
  v9 = *(unsigned int *)(v3 + 40);
  v44 = 0LL;
  v11 = *(_DWORD *)(v5 + 100) & 7;
  v12 = (char *)v10 + v10[21];
  v13 = (char *)v10 + v10[23];
  v14 = (char *)v10 + v10[25];
  v48 = v12;
  v47 = *(_QWORD *)(v5 + 64);
  v46 = *(_QWORD *)(v5 + 72);
  v15 = *(_DWORD *)(v5 + 96) & 7 | (8 * (v11 | 8));
  v50 = v14;
  LODWORD(v40) = v9;
  v4 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 28), 1u);
  v38 = v4;
  if ( (unsigned int)v4 >= *(_DWORD *)(v1 + 32) )
    goto LABEL_3;
  while ( 1 )
  {
    v16 = (unsigned int)v4;
    v17 = &v12[32 * v4];
    v41 = v16;
    v18 = *((_DWORD *)v17 + 5);
    if ( (v18 & 1) == 0 )
      break;
LABEL_40:
    if ( v36 )
    {
      LOBYTE(v9) = 1;
      PfSnCleanupPrefetchSectionInfo(*(_QWORD *)(v5 + 56) + 56 * v16, v5, v9);
      v36 = 0;
    }
    if ( Pool2 )
    {
      ExFreePoolWithTag(Pool2, 0);
      Pool2 = 0LL;
    }
LABEL_31:
    LODWORD(v4) = _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 28), 1u);
    v5 = v39;
    v4 = (unsigned int)v4;
    v38 = v4;
    if ( (unsigned int)v4 >= *(_DWORD *)(v1 + 32) )
      goto LABEL_3;
    v9 = (unsigned int)v40;
    v12 = v48;
    v3 = v49;
    v14 = v50;
  }
  v19 = *(_DWORD *)(v3 + 44);
  v37 = 0;
  v20 = v19 & 1;
  if ( v20 )
  {
    v21 = ((unsigned __int8)v9 & BYTE1(v18) & 0x7F) == 0;
  }
  else
  {
    v43 = 0;
    v21 = !_BitScanForward((unsigned int *)&v34, (v18 >> 8) & 0x7F);
    if ( v21 )
      v34 = 7;
    v35 = v9 & (1 << v34);
    v43 = v34;
    v37 = v35 != 0;
    if ( ((unsigned __int8)v9 & (unsigned __int8)(v18 >> 1) & 0x7F) != 0 )
      goto LABEL_12;
    v37 = v35 != 0;
    v21 = v35 == 0;
  }
  if ( v21 )
  {
LABEL_39:
    v16 = v41;
    goto LABEL_40;
  }
LABEL_12:
  v22 = (wchar_t *)&v14[*((unsigned int *)v17 + 3)];
  PrefetchVolumeInfoInList = PfSnFindPrefetchVolumeInfoInList(v22);
  if ( !PrefetchVolumeInfoInList )
  {
LABEL_38:
    v5 = v39;
    v1 = v42;
    goto LABEL_39;
  }
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, (unsigned int)(8 * *((_DWORD *)v17 + 2) + 24), 1280336707LL);
  if ( Pool2 )
  {
    *((_DWORD *)Pool2 + 3) = v20;
    *Pool2 = 0LL;
    *((_DWORD *)Pool2 + 2) = 0;
    RtlInitUnicodeString(&DestinationString, &v22[*(unsigned int *)(PrefetchVolumeInfoInList + 24) + 1]);
    v24 = v38;
    if ( (int)PfSnGetSectionObject(
                v39,
                PrefetchVolumeInfoInList,
                (unsigned int)&DestinationString,
                (_DWORD)v17,
                v40,
                v38,
                v20,
                (__int64)Handle,
                (__int64)&v44,
                (__int64)&v36) >= 0 )
    {
      v25 = v37;
      v26 = 0;
      v27 = 1;
      if ( v37 )
      {
        Pool2[*((unsigned int *)Pool2 + 2) + 2] = 0LL;
        v26 = 1;
        ++*((_DWORD *)Pool2 + 2);
        v27 = *(_QWORD *)(*(_QWORD *)(v44 + 40) + 16LL) != 0LL;
      }
      v28 = 0;
      v29 = *(int *)v17;
      v30 = v29 + *((_DWORD *)v17 + 1);
      v38 = 0;
      v9 = v30;
      if ( v29 < v30 )
      {
        v31 = v40;
        while ( 1 )
        {
          v32 = *(_DWORD *)&v13[8 * v29 + 4];
          if ( (v32 & 1) == 0 )
          {
            if ( (v32 & 8) != 0 && !v27 )
            {
LABEL_24:
              if ( *(_DWORD *)&v13[8 * v29] || !v25 )
              {
                Pool2[(unsigned int)(*((_DWORD *)Pool2 + 2))++ + 2] = (unsigned __int64)*(unsigned int *)&v13[8 * v29] << 9;
                ++v26;
              }
              else
              {
                v38 = 1;
              }
              goto LABEL_26;
            }
            if ( _bittest(&v31, (v32 >> 4) & 7) )
            {
              if ( v20 )
              {
                if ( (v32 & 2) != 0 )
                  goto LABEL_24;
              }
              else if ( (v32 & 4) != 0 )
              {
                goto LABEL_24;
              }
            }
          }
LABEL_26:
          if ( ++v29 >= v30 )
          {
            v28 = v38;
            break;
          }
        }
      }
      if ( *((_DWORD *)Pool2 + 2) != 1 || !v25 || !v27 || v28 )
      {
        v1 = v42;
        Pool2[2] |= v15;
        *Pool2 = v44;
        v33 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 24), 1u);
        *(_QWORD *)(v47 + 8 * v33) = Pool2;
        Pool2 = 0LL;
        _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 36), v26);
        if ( v36 )
        {
          *(_DWORD *)(v46 + 4 * v33) = v24;
          v36 = 0;
        }
        else
        {
          *(_DWORD *)(v46 + 4 * v33) = -1;
        }
        goto LABEL_31;
      }
    }
    goto LABEL_38;
  }
  LODWORD(v4) = v38;
  v8 = -1073741670;
  v1 = v42;
  v5 = v39;
LABEL_54:
  *(_DWORD *)(v1 + 40) = v8;
LABEL_3:
  if ( v36 )
  {
    LOBYTE(v9) = 1;
    PfSnCleanupPrefetchSectionInfo(*(_QWORD *)(v5 + 56) + 56LL * (unsigned int)v4, v5, v9);
  }
  if ( Handle )
    NtClose(Handle);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  PsSetCurrentThreadPrefetching(0);
  KiUnstackDetachProcess(&v58);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v1);
}
