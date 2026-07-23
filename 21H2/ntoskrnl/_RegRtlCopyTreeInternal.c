/*
 * XREFs of _RegRtlCopyTreeInternal @ 0x14097C640
 * Callers:
 *     PiDevCfgConfigureDeviceFilters @ 0x140767A00 (PiDevCfgConfigureDeviceFilters.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x140767AB8 (PiDevCfgConfigureSoftwareDevices.c)
 *     _PnpCtxRegCopyTree @ 0x140974A4C (_PnpCtxRegCopyTree.c)
 *     _RegRtlCopyTreeInternal @ 0x14097C640 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     IoGetStackLimits @ 0x14035B170 (IoGetStackLimits.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwQueryKey @ 0x1403FA840 (ZwQueryKey.c)
 *     ZwQuerySecurityObject @ 0x1403FD100 (ZwQuerySecurityObject.c)
 *     ZwSetSecurityObject @ 0x1403FDAA0 (ZwSetSecurityObject.c)
 *     _RegRtlEnumValue @ 0x1406108EC (_RegRtlEnumValue.c)
 *     _RegRtlQueryInfoKey @ 0x140615E68 (_RegRtlQueryInfoKey.c)
 *     _RegRtlCreateKeyTransacted @ 0x14063336C (_RegRtlCreateKeyTransacted.c)
 *     _RegRtlOpenKeyTransacted @ 0x14063750C (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlEnumKey @ 0x140766D3C (_RegRtlEnumKey.c)
 *     _RegRtlSetValue @ 0x140768CB4 (_RegRtlSetValue.c)
 *     _RegRtlCopyTreeInternal @ 0x14097C640 (_RegRtlCopyTreeInternal.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall RegRtlCopyTreeInternal(
        char *a1,
        const WCHAR *a2,
        char *a3,
        const WCHAR *a4,
        char a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 PoolWithTag; // r12
  ULONG v9; // edi
  unsigned int *v10; // rsi
  PVOID v11; // r13
  int v14; // ebx
  unsigned int v15; // eax
  unsigned __int64 v16; // rdi
  SIZE_T v17; // r15
  ULONG v18; // eax
  unsigned int v19; // r14d
  int v20; // eax
  ULONG v21; // edx
  ULONG v22; // r8d
  int v23; // eax
  ULONG i; // [rsp+50h] [rbp-61h] BYREF
  SIZE_T NumberOfBytes; // [rsp+54h] [rbp-5Dh] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-51h] BYREF
  ULONG LengthNeeded; // [rsp+68h] [rbp-49h] BYREF
  __int64 v29; // [rsp+6Ch] [rbp-45h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-39h] BYREF
  ULONG ResultLength; // [rsp+80h] [rbp-31h] BYREF
  __int64 v32; // [rsp+88h] [rbp-29h]
  unsigned __int64 HighLimit; // [rsp+90h] [rbp-21h] BYREF
  unsigned __int64 LowLimit; // [rsp+98h] [rbp-19h] BYREF
  char *v35; // [rsp+A0h] [rbp-11h]
  __int64 KeyInformation; // [rsp+A8h] [rbp-9h] BYREF
  int v37; // [rsp+B0h] [rbp-1h]

  v32 = a6;
  KeyHandle = 0LL;
  Handle = 0LL;
  PoolWithTag = 0LL;
  ResultLength = 0;
  v9 = 0;
  LengthNeeded = 0;
  v10 = 0LL;
  v11 = 0LL;
  i = 0;
  NumberOfBytes = 0LL;
  v29 = 0LL;
  HighLimit = 0LL;
  LowLimit = 0LL;
  KeyInformation = 0LL;
  v37 = 0;
  v35 = a3;
  IoGetStackLimits(&LowLimit, &HighLimit);
  if ( (unsigned __int64)&HighLimit - LowLimit < 0x400 )
  {
    v14 = -1073741670;
    goto LABEL_78;
  }
  v14 = RegRtlOpenKeyTransacted(a1, a2, 8u, 0x20019u, &KeyHandle, v32);
  if ( v14 >= 0 )
  {
    if ( !ZwQueryKey(KeyHandle, KeyFlagsInformation, &KeyInformation, 0xCu, &ResultLength) )
    {
      if ( (KeyInformation & 0x200000000LL) != 0 )
      {
        v14 = -2147483603;
        goto LABEL_78;
      }
      v9 = (KeyInformation & 0x100000000LL) != 0;
    }
    if ( !a5 )
      goto LABEL_87;
    while ( ZwQuerySecurityObject(KeyHandle, 4u, (PSECURITY_DESCRIPTOR)PoolWithTag, LengthNeeded, &LengthNeeded) == -1073741789 )
    {
      if ( PoolWithTag )
        ExFreePoolWithTag((PVOID)PoolWithTag, 0);
      PoolWithTag = (unsigned __int64)ExAllocatePoolWithTag(PagedPool, LengthNeeded, 0x4C474552u);
      if ( !PoolWithTag )
      {
        v14 = -1073741801;
        break;
      }
    }
    if ( v14 >= 0 )
    {
LABEL_87:
      v14 = RegRtlCreateKeyTransacted(
              v35,
              a4,
              v9,
              0x6001Fu,
              (void *)(PoolWithTag & -(__int64)(a5 != 0)),
              0,
              &Handle,
              (PULONG)&v29 + 1,
              v32);
      if ( v14 >= 0 )
      {
        if ( a5 && PoolWithTag && HIDWORD(v29) == 2 )
          ZwSetSecurityObject(Handle, 4u, (PSECURITY_DESCRIPTOR)PoolWithTag);
        if ( (unsigned int)RegRtlQueryInfoKey(
                             KeyHandle,
                             0LL,
                             (unsigned int *)&NumberOfBytes + 1,
                             0LL,
                             &i,
                             &NumberOfBytes) )
        {
          LODWORD(v16) = 0;
          LODWORD(v17) = 0;
        }
        else
        {
          v15 = HIDWORD(NumberOfBytes);
          if ( HIDWORD(NumberOfBytes) <= i )
            v15 = i;
          if ( v15 )
          {
            if ( v15 + 1 < v15 )
            {
              v14 = -1073741675;
              v15 = -1;
            }
            else
            {
              v14 = 0;
              ++v15;
            }
            if ( v14 < 0 )
              goto LABEL_78;
          }
          v16 = 2LL * v15;
          if ( v16 > 0xFFFFFFFF )
          {
            v14 = -1073741675;
            goto LABEL_78;
          }
          LODWORD(v17) = NumberOfBytes;
          v14 = 0;
        }
        if ( !(_DWORD)v16
          || (v10 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v16, 0x4C474552u)) != 0LL )
        {
          if ( !(_DWORD)v17 || (v11 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v17, 0x4C474552u)) != 0LL )
          {
            v18 = 0;
LABEL_39:
            for ( i = v18; ; v18 = i )
            {
              v19 = (unsigned int)v16 >> 1;
              HIDWORD(NumberOfBytes) = (unsigned int)v16 >> 1;
              v20 = RegRtlEnumKey(KeyHandle, v18, v10, (unsigned int *)&NumberOfBytes + 1);
              if ( v20 == -2147483622 )
                break;
              if ( v20 != -1073741789 )
              {
                if ( !v20 )
                {
                  *((_WORD *)v10 + ((unsigned __int64)(unsigned int)v16 >> 1) - 1) = 0;
                  v20 = RegRtlCopyTreeInternal((_DWORD)KeyHandle, (_DWORD)v10, (_DWORD)Handle, (_DWORD)v10, a5, v32, a7);
                  if ( !v20 || v20 == -2147483603 )
                  {
                    v18 = i + 1;
                    goto LABEL_39;
                  }
                }
                v14 = v20;
                break;
              }
              v16 = 2LL * HIDWORD(NumberOfBytes);
              if ( v16 > 0xFFFFFFFF )
              {
LABEL_51:
                v14 = -1073741675;
                goto LABEL_74;
              }
              v14 = 0;
              if ( v10 )
                ExFreePoolWithTag(v10, 0);
              v10 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v16, 0x4C474552u);
              if ( !v10 )
              {
LABEL_72:
                v14 = -1073741801;
                goto LABEL_74;
              }
            }
            if ( v14 >= 0 )
            {
              HIDWORD(NumberOfBytes) = 0;
              v21 = 0;
              while ( 1 )
              {
                i = v19;
                LODWORD(NumberOfBytes) = v17;
                v23 = RegRtlEnumValue(KeyHandle, v21, v10, &i, &v29, v11, (unsigned int *)&NumberOfBytes);
                if ( v23 == -2147483622 )
                  break;
                if ( v23 == -1073741789 )
                {
                  if ( i > v19 )
                  {
                    v16 = 2LL * i;
                    if ( v16 > 0xFFFFFFFF )
                      goto LABEL_51;
                    v14 = 0;
                    if ( v10 )
                      ExFreePoolWithTag(v10, 0);
                    v10 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v16, 0x4C474552u);
                    if ( !v10 )
                      goto LABEL_72;
                  }
                  if ( (unsigned int)NumberOfBytes > (unsigned int)v17 )
                  {
                    v17 = (unsigned int)NumberOfBytes;
                    if ( v11 )
                      ExFreePoolWithTag(v11, 0);
                    v11 = ExAllocatePoolWithTag(PagedPool, v17, 0x4C474552u);
                    if ( !v11 )
                      goto LABEL_37;
                  }
                }
                else
                {
                  if ( v23
                    || (v22 = v29,
                        *((_WORD *)v10 + ((unsigned __int64)(unsigned int)v16 >> 1) - 1) = 0,
                        (v23 = RegRtlSetValue(Handle, (const WCHAR *)v10, v22, v11, NumberOfBytes)) != 0) )
                  {
                    v14 = v23;
                    break;
                  }
                  ++HIDWORD(NumberOfBytes);
                }
                v21 = HIDWORD(NumberOfBytes);
                v19 = (unsigned int)v16 >> 1;
              }
            }
LABEL_74:
            if ( v11 )
              ExFreePoolWithTag(v11, 0);
          }
          else
          {
LABEL_37:
            v14 = -1073741801;
          }
          if ( v10 )
            ExFreePoolWithTag(v10, 0);
        }
        else
        {
          v14 = -1073741801;
        }
      }
    }
  }
LABEL_78:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( PoolWithTag )
    ExFreePoolWithTag((PVOID)PoolWithTag, 0);
  return (unsigned int)v14;
}
