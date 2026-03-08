/*
 * XREFs of ExRaiseHardError @ 0x1409FDD30
 * Callers:
 *     CmpMountPreloadedHives @ 0x140812EF4 (CmpMountPreloadedHives.c)
 *     CmpLoadHiveThread @ 0x140820360 (CmpLoadHiveThread.c)
 *     IopHardErrorThread @ 0x140941E20 (IopHardErrorThread.c)
 *     IopRaiseHardError @ 0x1409423B0 (IopRaiseHardError.c)
 *     IopRaiseInformationalHardError @ 0x140942650 (IopRaiseInformationalHardError.c)
 *     ExpExpirationThread @ 0x1409F4E30 (ExpExpirationThread.c)
 *     NtRaiseHardError @ 0x1409FE610 (NtRaiseHardError.c)
 *     CmpQuotaWarningWorker @ 0x140A0D0E0 (CmpQuotaWarningWorker.c)
 *     CmpDiskFullWarningWorker @ 0x140A0EE60 (CmpDiskFullWarningWorker.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14030E970 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     Feature_3974530366__private_IsEnabledDeviceUsage @ 0x14040D3C0 (Feature_3974530366__private_IsEnabledDeviceUsage.c)
 *     ZwAllocateVirtualMemory @ 0x140412610 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1404126D0 (ZwFreeVirtualMemory.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExpRaiseHardError @ 0x1409FE27C (ExpRaiseHardError.c)
 */

NTSTATUS __fastcall ExRaiseHardError(int a1, unsigned int a2, int a3, char *a4, int a5, int *a6)
{
  __int64 v8; // rsi
  int v9; // ebx
  int *v10; // r15
  int v11; // r13d
  ULONG_PTR v12; // r15
  NTSTATUS v13; // ebx
  unsigned int v14; // edx
  char *v15; // r8
  char *v16; // rcx
  char *v17; // r13
  __int64 i; // rbx
  __int64 v19; // r15
  __int64 v20; // rdx
  NTSTATUS result; // eax
  ULONG_PTR v22; // rdx
  unsigned int v23; // ecx
  unsigned __int16 *v24; // r8
  _OWORD **v25; // r9
  char *v26; // rcx
  char *v27; // r13
  char *v28; // r8
  __int64 j; // r15
  char *v30; // rdx
  __int64 v31; // rax
  char *v32; // rcx
  __int64 v33; // rbx
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-198h] BYREF
  int v35; // [rsp+48h] [rbp-190h]
  int v36; // [rsp+4Ch] [rbp-18Ch] BYREF
  int v37; // [rsp+50h] [rbp-188h]
  PVOID v38; // [rsp+58h] [rbp-180h] BYREF
  int v39; // [rsp+60h] [rbp-178h]
  unsigned int v40; // [rsp+68h] [rbp-170h]
  int v41; // [rsp+70h] [rbp-168h]
  char *v42; // [rsp+78h] [rbp-160h]
  PVOID BaseAddress; // [rsp+80h] [rbp-158h] BYREF
  int *v44; // [rsp+88h] [rbp-150h]
  void **v45; // [rsp+90h] [rbp-148h]
  char *v46; // [rsp+98h] [rbp-140h]
  PVOID v47; // [rsp+A0h] [rbp-138h]
  __int64 v48; // [rsp+A8h] [rbp-130h]
  __int64 v49; // [rsp+B0h] [rbp-128h]
  __int64 v50; // [rsp+B8h] [rbp-120h]
  char *v51; // [rsp+C0h] [rbp-118h]
  _OWORD v52[2]; // [rsp+C8h] [rbp-110h] BYREF
  __int64 v53; // [rsp+E8h] [rbp-F0h]
  _OWORD v54[2]; // [rsp+F0h] [rbp-E8h] BYREF
  __int64 v55; // [rsp+110h] [rbp-C8h]
  void *v56[10]; // [rsp+140h] [rbp-98h] BYREF

  v8 = a2;
  v9 = a1;
  v37 = a1;
  v39 = a1;
  v40 = a2;
  v41 = a3;
  v47 = a4;
  v10 = a6;
  v44 = a6;
  v11 = 0;
  v36 = 0;
  RegionSize = 0LL;
  BaseAddress = 0LL;
  v38 = 0LL;
  if ( (unsigned int)Feature_3974530366__private_IsEnabledDeviceUsage() )
  {
    memset(v54, 0, sizeof(v54));
    v55 = 0LL;
    memset(v52, 0, sizeof(v52));
    v53 = 0LL;
    v12 = 80LL;
    memset(v56, 0, sizeof(v56));
    if ( ExpTooLateForErrors )
    {
      v13 = 0;
      v11 = 1;
    }
    else if ( (unsigned int)v8 <= 5 )
    {
      if ( a4 )
      {
        memmove(v54, a4, 8 * v8);
        memmove(v52, a4, 8 * v8);
        if ( a3 )
        {
          RegionSize = 80LL;
          v14 = 0;
          if ( (_DWORD)v8 )
          {
            v15 = a4;
            do
            {
              if ( _bittest(&a3, v14) )
              {
                v12 += *(unsigned __int16 *)(*(_QWORD *)v15 + 2LL);
                RegionSize = v12;
              }
              ++v14;
              v15 += 8;
            }
            while ( v14 < (unsigned int)v8 );
          }
          v13 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
          if ( v13 < 0 )
            goto LABEL_20;
          v16 = (char *)BaseAddress;
          v46 = (char *)BaseAddress;
          v17 = (char *)BaseAddress + 80;
          v42 = (char *)BaseAddress + 80;
          for ( i = 0LL; ; i = (unsigned int)(i + 1) )
          {
            v35 = i;
            if ( (unsigned int)i >= (unsigned int)v8 )
              break;
            if ( _bittest(&a3, i) )
            {
              v50 = 8 * i;
              v19 = 2LL * (unsigned int)i;
              v48 = v19 * 8;
              v49 = v19 * 8;
              v45 = &v56[v19];
              *(_OWORD *)v45 = *(_OWORD *)*(_QWORD *)&a4[8 * i];
              *(_QWORD *)&v16[v19 * 8 + 8] = v17;
              *(_WORD *)&v16[v19 * 8 + 2] = WORD1(v56[v19]);
              *(_WORD *)&v16[v19 * 8] = v56[v19];
              memmove(v17, v56[v19 + 1], WORD1(v56[v19]));
              v16 = v46;
              v56[v19 + 1] = v17;
              v17 += WORD1(v56[v19]);
              v42 = v17;
              v20 = v50;
              *(_QWORD *)((char *)v54 + v50) = &v16[v49];
              *(_QWORD *)((char *)v52 + v20) = v45;
            }
          }
        }
      }
      v13 = ExpRaiseHardError(v37, v8, a3, (unsigned int)v54, (__int64)v52, a5, (__int64)&v36);
      v11 = v36;
    }
    else
    {
      v13 = -1073741584;
    }
LABEL_20:
    *v44 = v11;
    if ( BaseAddress )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    }
    return v13;
  }
  if ( ExpTooLateForErrors )
  {
    *a6 = 1;
    return 0;
  }
  *a6 = 0;
  if ( (unsigned int)v8 > 5 )
    return -1073741584;
  if ( !a4 )
  {
LABEL_42:
    v13 = ExpRaiseHardError(v9, v8, a3, (_DWORD)v38, (__int64)v38, a5, (__int64)&v36);
    if ( v38 && v38 != a4 )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v38, &RegionSize, 0x8000u);
    }
    *v10 = v36;
    return v13;
  }
  if ( !a3 )
  {
    v38 = a4;
    goto LABEL_42;
  }
  v22 = 136LL;
  RegionSize = 136LL;
  v23 = 0;
  if ( (_DWORD)v8 )
  {
    v24 = (unsigned __int16 *)v54 + 1;
    v25 = (_OWORD **)a4;
    do
    {
      if ( _bittest(&a3, v23) )
      {
        *(_OWORD *)(v24 - 1) = **v25;
        v22 += *v24;
        RegionSize = v22;
      }
      ++v23;
      ++v25;
      v24 += 8;
    }
    while ( v23 < (unsigned int)v8 );
  }
  result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v38, 0LL, &RegionSize, 0x1000u, 4u);
  if ( result >= 0 )
  {
    v26 = (char *)v38;
    v45 = (void **)v38;
    v27 = (char *)v38 + 40;
    v28 = (char *)v38 + 120;
    v42 = (char *)v38 + 120;
    for ( j = 0LL; ; j = (unsigned int)(j + 1) )
    {
      v35 = j;
      if ( (unsigned int)j >= (unsigned int)v8 )
        break;
      v30 = &v26[8 * j];
      if ( _bittest(&a3, j) )
      {
        *(_QWORD *)v30 = &v27[16 * (unsigned int)j];
        v31 = (unsigned int)j;
        v32 = &v27[v31 * 16];
        *((_QWORD *)v32 + 1) = v28;
        v33 = WORD1(v54[v31]);
        *((_WORD *)v32 + 1) = v33;
        RtlCopyUnicodeString((PUNICODE_STRING)&v27[v31 * 16], (PCUNICODE_STRING)&v54[v31]);
        v28 = &v42[v33];
        v42 = v28;
        v51 = v28;
        v26 = (char *)v45;
      }
      else
      {
        *(_QWORD *)v30 = *(_QWORD *)&a4[8 * j];
      }
    }
    v10 = v44;
    v9 = v37;
    goto LABEL_42;
  }
  return result;
}
