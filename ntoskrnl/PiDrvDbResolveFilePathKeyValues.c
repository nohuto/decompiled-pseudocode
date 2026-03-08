/*
 * XREFs of PiDrvDbResolveFilePathKeyValues @ 0x14081DBF0
 * Callers:
 *     PiDrvDbResolveNodeFilePaths @ 0x14081C828 (PiDrvDbResolveNodeFilePaths.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x14096DFEC (PiDrvDbResolveKeyFilePaths.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1403D3ED0 (_wcsicmp.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     IopGetRegistryValue @ 0x1406C18D4 (IopGetRegistryValue.c)
 *     _SysCtxRegOpenKey @ 0x1406D4350 (_SysCtxRegOpenKey.c)
 *     RtlEqualUnicodeString @ 0x1406EA560 (RtlEqualUnicodeString.c)
 *     _RegRtlSetValue @ 0x140784FE4 (_RegRtlSetValue.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x14081DD70 (PiDrvDbQuerySystemPathWin32.c)
 *     _PnpCtxRegEnumValue @ 0x140866444 (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1408665AC (_PnpCtxRegQueryInfoKey.c)
 *     PiDevCfgAppendMultiSz @ 0x1409596C4 (PiDevCfgAppendMultiSz.c)
 *     PiDrvDbResolveSystemFilePath @ 0x14096E128 (PiDrvDbResolveSystemFilePath.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDrvDbResolveFilePathKeyValues(
        __int64 a1,
        unsigned int a2,
        const UNICODE_STRING *a3,
        const UNICODE_STRING *a4)
{
  char v4; // si
  unsigned int v6; // r13d
  void *v7; // r15
  __int64 v8; // r12
  _WORD *v9; // r14
  const UNICODE_STRING *v10; // rdi
  int v11; // eax
  int appended; // ebx
  int v13; // ecx
  BOOLEAN v15; // al
  __int64 v16; // rcx
  unsigned int i; // esi
  int v18; // eax
  unsigned int v19; // r13d
  unsigned __int64 v20; // rax
  const wchar_t *v21; // r13
  const WCHAR *v22; // rdi
  ULONG *v23; // rsi
  unsigned int v24; // ecx
  const WCHAR *v25; // rdi
  unsigned __int64 v26; // rax
  ULONG v27; // eax
  int v28; // r12d
  int v29; // eax
  wchar_t *Buffer; // r9
  const WCHAR *v31; // rdx
  unsigned int v32; // ecx
  const WCHAR *v33; // rdx
  int v34; // eax
  __int64 v35; // rax
  unsigned int v36; // [rsp+48h] [rbp-79h] BYREF
  unsigned int v37; // [rsp+4Ch] [rbp-75h]
  unsigned int v38; // [rsp+50h] [rbp-71h]
  const WCHAR *v39; // [rsp+58h] [rbp-69h] BYREF
  unsigned int v40; // [rsp+60h] [rbp-61h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-59h] BYREF
  int v42; // [rsp+78h] [rbp-49h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp-41h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-29h] BYREF
  __int64 v46; // [rsp+A0h] [rbp-21h]
  __int64 Pool2; // [rsp+A8h] [rbp-19h]
  UNICODE_STRING v48; // [rsp+B0h] [rbp-11h] BYREF
  UNICODE_STRING v49; // [rsp+C0h] [rbp-1h] BYREF
  PVOID P[9]; // [rsp+D0h] [rbp+Fh] BYREF

  v4 = a2;
  Handle = 0LL;
  v36 = 0;
  LODWORD(v39) = 0;
  v38 = 0;
  Pool2 = 0LL;
  DestinationString = 0LL;
  v6 = 0;
  v37 = 0;
  v7 = 0LL;
  v46 = 0LL;
  LODWORD(v8) = 0;
  KeyHandle = 0LL;
  v9 = 0LL;
  P[0] = 0LL;
  v48 = 0LL;
  v42 = 0;
  v10 = a3;
  UnicodeString = 0LL;
  v49 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  RtlInitUnicodeString(&v49, 0LL);
  v11 = SysCtxRegOpenKey(0LL, a1, (__int64)L"Setup\\ResolveFilePaths", 0, 0x20019u, (__int64)&Handle);
  appended = v11;
  if ( v11 == -1073741772 )
  {
    LODWORD(v10) = 0;
LABEL_11:
    appended = (int)v10;
    goto LABEL_12;
  }
  if ( v11 < 0 )
    goto LABEL_12;
  appended = PiDrvDbQuerySystemPathWin32(v10, &DestinationString);
  if ( appended < 0 )
  {
    appended = 0;
    RtlInitUnicodeString(&DestinationString, 0LL);
  }
  if ( (v4 & 2) == 0 )
  {
    v10 = 0LL;
    goto LABEL_7;
  }
  if ( !v10 || (v15 = RtlEqualUnicodeString(v10, &PiDrvDbSystemRootNt, 1u), v10 = 0LL, v15) )
  {
    if ( (const UNICODE_STRING *)DestinationString.Buffer == v10
      || RtlEqualUnicodeString(&DestinationString, &PiDrvDbSystemRootWin32, 1u) )
    {
LABEL_7:
      if ( (v4 & 1) == 0
        || !a4
        || (const UNICODE_STRING *)DestinationString.Buffer == v10
        || RtlEqualUnicodeString(a4, &DestinationString, 1u) )
      {
        goto LABEL_11;
      }
    }
  }
  if ( (int)PnpCtxRegQueryInfoKey(v13, (_DWORD)Handle, 0, 0, (__int64)v10, (__int64)&v36, (__int64)&v39) < 0 )
    goto LABEL_31;
  v8 = (unsigned int)v39;
  v37 = (unsigned int)v39;
  v6 = 2 * v36 + 2;
  v38 = v6;
  if ( 2 * v36 != -2 )
  {
    Pool2 = ExAllocatePool2(256LL, v6, 1650749520LL);
    v7 = (void *)Pool2;
    if ( !Pool2 )
    {
      appended = -1073741670;
      goto LABEL_12;
    }
  }
  if ( !(_DWORD)v8 || (v46 = ExAllocatePool2(256LL, v8, 1650749520LL), (v9 = (_WORD *)v46) != 0LL) )
  {
LABEL_31:
    for ( i = (unsigned int)v10; ; ++i )
    {
      v40 = i;
      LODWORD(v39) = v6 >> 1;
      v36 = v8;
      v18 = PnpCtxRegEnumValue(v16, Handle, i, v7, &v39, &v42, v9, &v36);
      if ( v18 == -2147483622 )
        goto LABEL_15;
      if ( v18 == -1073741789 )
      {
        if ( (unsigned int)v39 > v6 >> 1 )
        {
          v19 = 2 * (_DWORD)v39;
          v38 = 2 * (_DWORD)v39;
          if ( v7 )
            ExFreePoolWithTag(v7, 0);
          Pool2 = ExAllocatePool2(256LL, v19, 1650749520LL);
          v7 = (void *)Pool2;
          if ( !Pool2 )
          {
            appended = -1073741670;
            goto LABEL_17;
          }
        }
        if ( v36 <= (unsigned int)v8 )
          goto LABEL_43;
        v8 = v36;
        v37 = v36;
        if ( v9 )
          ExFreePoolWithTag(v9, 0);
        v46 = ExAllocatePool2(256LL, v8, 1650749520LL);
        v9 = (_WORD *)v46;
        if ( v46 )
        {
LABEL_43:
          --i;
          goto LABEL_86;
        }
        break;
      }
      if ( v18 < 0 )
        goto LABEL_87;
      if ( v42 != 7 )
        goto LABEL_86;
      if ( v36 < 4 )
        goto LABEL_86;
      v20 = (unsigned __int64)v36 >> 1;
      if ( v9[v20 - 1] )
        goto LABEL_86;
      if ( v9[v20 - 2] )
        goto LABEL_86;
      v18 = SysCtxRegOpenKey(0LL, a1, (__int64)v7, 0, 0x2001Fu, (__int64)&KeyHandle);
      if ( v18 == -1073741772 )
        goto LABEL_86;
      if ( v18 < 0 )
      {
LABEL_87:
        appended = v18;
        goto LABEL_15;
      }
      v21 = v9;
      if ( !*v9 )
        goto LABEL_85;
      do
      {
        v22 = &word_1408834C0;
        if ( wcsicmp(v21, L" ") )
          v22 = v21;
        v39 = v22;
        if ( IopGetRegistryValue(KeyHandle, v22, 0, P) < 0 )
          goto LABEL_81;
        v23 = (ULONG *)P[0];
        if ( *((_DWORD *)P[0] + 1) == 1 || *((_DWORD *)P[0] + 1) == 2 )
        {
          v32 = *((_DWORD *)P[0] + 3);
          v33 = (const WCHAR *)((char *)P[0] + *((unsigned int *)P[0] + 2));
          if ( v32 - 3 <= 0xFFFB && !v33[((unsigned __int64)v32 >> 1) - 1] )
          {
            RtlInitUnicodeString(&v48, v33);
            UnicodeString.Length = 0;
            v34 = PiDrvDbResolveSystemFilePath(
                    &v48,
                    a2,
                    a3,
                    (unsigned __int64)&DestinationString & -(__int64)(DestinationString.Buffer != 0LL),
                    a4,
                    &UnicodeString);
            appended = v34;
            if ( v34 == -1073741275 || v34 == -1073741637 )
            {
              appended = 0;
            }
            else if ( v34 >= 0 )
            {
              v31 = v22;
              Buffer = UnicodeString.Buffer;
              v27 = UnicodeString.Length + 2;
LABEL_72:
              appended = RegRtlSetValue(KeyHandle, v31, v23[1], Buffer, v27);
            }
          }
        }
        else if ( *((_DWORD *)P[0] + 1) == 7 )
        {
          v24 = *((_DWORD *)P[0] + 3);
          v25 = (const WCHAR *)((char *)P[0] + *((unsigned int *)P[0] + 2));
          if ( v24 - 4 <= 0xFFFA )
          {
            v26 = (unsigned __int64)v24 >> 1;
            if ( !v25[v26 - 1] && !v25[v26 - 2] )
            {
              LOWORD(v27) = 0;
              v28 = 0;
              v49.Length = 0;
              if ( !*v25 )
              {
LABEL_70:
                if ( !v28 )
                  goto LABEL_80;
                Buffer = v49.Buffer;
                v31 = v39;
                v27 = (unsigned __int16)v27;
                goto LABEL_72;
              }
              while ( 1 )
              {
                RtlInitUnicodeString(&v48, v25);
                UnicodeString.Length = 0;
                v29 = PiDrvDbResolveSystemFilePath(
                        &v48,
                        a2,
                        a3,
                        (unsigned __int64)&DestinationString & -(__int64)(DestinationString.Buffer != 0LL),
                        a4,
                        &UnicodeString);
                appended = v29;
                if ( v29 == -1073741275 || v29 == -1073741637 )
                {
                  UnicodeString.Length = 0;
                }
                else
                {
                  if ( v29 < 0 )
                    break;
                  ++v28;
                }
                appended = PiDevCfgAppendMultiSz(&v49);
                if ( appended < 0 )
                  break;
                v25 += ((unsigned __int64)v48.Length >> 1) + 1;
                if ( !*v25 )
                {
                  LOWORD(v27) = v49.Length;
                  goto LABEL_70;
                }
              }
            }
          }
        }
LABEL_80:
        ExFreePoolWithTag(v23, 0);
        if ( appended < 0 )
          break;
LABEL_81:
        v35 = -1LL;
        do
          ++v35;
        while ( v21[v35] );
        v21 += v35 + 1;
      }
      while ( *v21 );
      v9 = (_WORD *)v46;
      v7 = (void *)Pool2;
      i = v40;
      LODWORD(v8) = v37;
LABEL_85:
      ZwClose(KeyHandle);
      if ( appended < 0 )
        goto LABEL_15;
LABEL_86:
      v6 = v38;
    }
  }
  appended = -1073741670;
LABEL_15:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
LABEL_17:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
LABEL_12:
  RtlFreeUnicodeString(&DestinationString);
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&v49);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)appended;
}
