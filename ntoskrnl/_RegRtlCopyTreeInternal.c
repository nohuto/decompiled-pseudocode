/*
 * XREFs of _RegRtlCopyTreeInternal @ 0x140A67A08
 * Callers:
 *     PiDevCfgConfigureDeviceFilters @ 0x140876BD0 (PiDevCfgConfigureDeviceFilters.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x140876C88 (PiDevCfgConfigureSoftwareDevices.c)
 *     _PnpCtxRegCopyTree @ 0x140A5DE1C (_PnpCtxRegCopyTree.c)
 *     _RegRtlCopyTreeInternal @ 0x140A67A08 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     IoGetStackLimits @ 0x1403129C0 (IoGetStackLimits.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwQueryKey @ 0x1404125D0 (ZwQueryKey.c)
 *     ZwQuerySecurityObject @ 0x140414FD0 (ZwQuerySecurityObject.c)
 *     ZwSetSecurityObject @ 0x1404159D0 (ZwSetSecurityObject.c)
 *     _RegRtlCreateKeyTransacted @ 0x14068804C (_RegRtlCreateKeyTransacted.c)
 *     _RegRtlOpenKeyTransacted @ 0x1406D43A0 (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlSetValue @ 0x140784FE4 (_RegRtlSetValue.c)
 *     _RegRtlQueryInfoKey @ 0x140868C7C (_RegRtlQueryInfoKey.c)
 *     _RegRtlEnumKey @ 0x140868D44 (_RegRtlEnumKey.c)
 *     _RegRtlEnumValue @ 0x14086C580 (_RegRtlEnumValue.c)
 *     _RegRtlCopyTreeInternal @ 0x140A67A08 (_RegRtlCopyTreeInternal.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RegRtlCopyTreeInternal(
        void *a1,
        const WCHAR *a2,
        void *a3,
        const WCHAR *a4,
        char a5,
        __int64 a6,
        char a7)
{
  __int64 Pool2; // r15
  ULONG v9; // edi
  char *v10; // rsi
  void *v11; // r12
  int v14; // ebx
  int v15; // eax
  ULONG v16; // r13d
  ULONG v17; // eax
  unsigned __int64 v18; // rdi
  __int64 v19; // r14
  int v20; // eax
  ULONG v21; // r13d
  unsigned int v22; // eax
  ULONG v23; // edx
  ULONG v24; // r8d
  int v25; // eax
  ULONG v27; // [rsp+50h] [rbp-61h] BYREF
  ULONG v28; // [rsp+54h] [rbp-5Dh] BYREF
  unsigned int v29; // [rsp+58h] [rbp-59h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-51h] BYREF
  ULONG LengthNeeded; // [rsp+68h] [rbp-49h] BYREF
  __int64 v32; // [rsp+6Ch] [rbp-45h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-39h] BYREF
  ULONG ResultLength; // [rsp+80h] [rbp-31h] BYREF
  __int64 v35; // [rsp+88h] [rbp-29h]
  unsigned __int64 HighLimit; // [rsp+90h] [rbp-21h] BYREF
  unsigned __int64 LowLimit; // [rsp+98h] [rbp-19h] BYREF
  void *v38; // [rsp+A0h] [rbp-11h]
  __int64 KeyInformation; // [rsp+A8h] [rbp-9h] BYREF
  int v40; // [rsp+B0h] [rbp-1h]

  v35 = a6;
  KeyHandle = 0LL;
  Handle = 0LL;
  Pool2 = 0LL;
  ResultLength = 0;
  v9 = 0;
  LengthNeeded = 0;
  v10 = 0LL;
  v11 = 0LL;
  v28 = 0;
  v27 = 0;
  v29 = 0;
  v32 = 0LL;
  HighLimit = 0LL;
  LowLimit = 0LL;
  KeyInformation = 0LL;
  v40 = 0;
  v38 = a3;
  IoGetStackLimits(&LowLimit, &HighLimit);
  if ( (unsigned __int64)&HighLimit - LowLimit < 0x400 )
  {
    v14 = -1073741670;
    goto LABEL_71;
  }
  v14 = RegRtlOpenKeyTransacted(a1, a2, 8u, 0x20019u, &KeyHandle, v35);
  if ( v14 >= 0 )
  {
    if ( !ZwQueryKey(KeyHandle, KeyFlagsInformation, &KeyInformation, 0xCu, &ResultLength) )
    {
      if ( (KeyInformation & 0x200000000LL) != 0 )
      {
        v14 = -2147483603;
        goto LABEL_71;
      }
      v9 = (KeyInformation & 0x100000000LL) != 0;
    }
    if ( a5 )
    {
      while ( ZwQuerySecurityObject(KeyHandle, 4u, (PSECURITY_DESCRIPTOR)Pool2, LengthNeeded, &LengthNeeded) == -1073741789 )
      {
        if ( Pool2 )
          ExFreePoolWithTag((PVOID)Pool2, 0);
        Pool2 = ExAllocatePool2(256LL, LengthNeeded, 1279739218LL);
        if ( !Pool2 )
          goto LABEL_28;
      }
    }
    v15 = RegRtlCreateKeyTransacted(
            v38,
            a4,
            v9,
            0x6001Fu,
            (void *)(Pool2 & -(__int64)(a5 != 0)),
            0,
            &Handle,
            (ULONG *)&v32 + 1,
            v35);
    v16 = 0;
    v14 = v15;
    if ( v15 >= 0 )
    {
      if ( a5 && Pool2 && HIDWORD(v32) == 2 )
        ZwSetSecurityObject(Handle, 4u, (PSECURITY_DESCRIPTOR)Pool2);
      if ( (unsigned int)RegRtlQueryInfoKey(KeyHandle, 0LL, &v28, 0LL, &v27, &v29) )
      {
        LODWORD(v18) = 0;
        LODWORD(v19) = 0;
        goto LABEL_34;
      }
      v17 = v28;
      if ( v28 <= v27 )
        v17 = v27;
      if ( v17 )
      {
        if ( v17 + 1 < v17 )
          goto LABEL_32;
        ++v17;
      }
      v18 = 2LL * v17;
      if ( v18 <= 0xFFFFFFFF )
      {
        v19 = v29;
        v14 = 0;
        if ( !(_DWORD)v18 || (v10 = (char *)ExAllocatePool2(256LL, (unsigned int)v18, 1279739218LL)) != 0LL )
        {
          if ( !(_DWORD)v19 || (v11 = (void *)ExAllocatePool2(256LL, v19, 1279739218LL)) != 0LL )
          {
LABEL_34:
            while ( 1 )
            {
              v27 = (unsigned int)v18 >> 1;
              v29 = (unsigned int)v18 >> 1;
              v20 = RegRtlEnumKey(KeyHandle, v16, v10, &v29);
              if ( v20 == -2147483622 )
                break;
              if ( v20 == -1073741789 )
              {
                v18 = 2LL * v29;
                if ( v18 > 0xFFFFFFFF )
                {
LABEL_65:
                  v14 = -1073741675;
                  goto LABEL_67;
                }
                v14 = 0;
                if ( v10 )
                  ExFreePoolWithTag(v10, 0);
                v10 = (char *)ExAllocatePool2(256LL, (unsigned int)v18, 1279739218LL);
                if ( !v10 )
                {
LABEL_40:
                  v14 = -1073741801;
                  goto LABEL_67;
                }
              }
              else
              {
                if ( v20
                  || (*(_WORD *)&v10[2 * ((unsigned __int64)(unsigned int)v18 >> 1) - 2] = 0,
                      (v20 = RegRtlCopyTreeInternal(
                               (_DWORD)KeyHandle,
                               (_DWORD)v10,
                               (_DWORD)Handle,
                               (_DWORD)v10,
                               a5,
                               v35,
                               a7)) != 0)
                  && v20 != -2147483603 )
                {
                  v14 = v20;
                  break;
                }
                ++v16;
              }
            }
            v21 = 0;
            if ( v14 >= 0 )
            {
              v22 = v27;
              v23 = 0;
              while ( 1 )
              {
                v27 = v22;
                v28 = v19;
                v25 = RegRtlEnumValue(KeyHandle, v23, v10, &v27, &v32, v11, &v28);
                if ( v25 == -2147483622 )
                  break;
                if ( v25 == -1073741789 )
                {
                  if ( v27 > (unsigned int)v18 >> 1 )
                  {
                    v18 = 2LL * v27;
                    if ( v18 > 0xFFFFFFFF )
                      goto LABEL_65;
                    v14 = 0;
                    if ( v10 )
                      ExFreePoolWithTag(v10, 0);
                    v10 = (char *)ExAllocatePool2(256LL, (unsigned int)v18, 1279739218LL);
                    if ( !v10 )
                      goto LABEL_40;
                  }
                  if ( v28 > (unsigned int)v19 )
                  {
                    v19 = v28;
                    if ( v11 )
                      ExFreePoolWithTag(v11, 0);
                    v11 = (void *)ExAllocatePool2(256LL, v19, 1279739218LL);
                    if ( !v11 )
                      goto LABEL_31;
                  }
                }
                else
                {
                  if ( v25
                    || (v24 = v32,
                        *(_WORD *)&v10[2 * ((unsigned __int64)(unsigned int)v18 >> 1) - 2] = 0,
                        (v25 = RegRtlSetValue(Handle, (const WCHAR *)v10, v24, v11, v28)) != 0) )
                  {
                    v14 = v25;
                    break;
                  }
                  ++v21;
                }
                v23 = v21;
                v22 = (unsigned int)v18 >> 1;
              }
            }
LABEL_67:
            if ( v11 )
              ExFreePoolWithTag(v11, 0);
          }
          else
          {
LABEL_31:
            v14 = -1073741801;
          }
          if ( v10 )
            ExFreePoolWithTag(v10, 0);
        }
        else
        {
LABEL_28:
          v14 = -1073741801;
        }
        goto LABEL_71;
      }
LABEL_32:
      v14 = -1073741675;
    }
  }
LABEL_71:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( Pool2 )
    ExFreePoolWithTag((PVOID)Pool2, 0);
  return (unsigned int)v14;
}
