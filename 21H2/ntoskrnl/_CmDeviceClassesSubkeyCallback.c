/*
 * XREFs of _CmDeviceClassesSubkeyCallback @ 0x1407B11A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyExW @ 0x140253448 (RtlStringCchCopyExW.c)
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyW @ 0x1403711F0 (RtlStringCchCopyW.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     _CmIsDeviceInterfaceEnabled @ 0x1406361B0 (_CmIsDeviceInterfaceEnabled.c)
 *     _CmValidateDeviceInterfaceName @ 0x1406367DC (_CmValidateDeviceInterfaceName.c)
 *     _RegRtlQueryValue @ 0x140637128 (_RegRtlQueryValue.c)
 *     _SysCtxRegOpenKey @ 0x1406374BC (_SysCtxRegOpenKey.c)
 *     RtlEqualUnicodeString @ 0x1406F0B70 (RtlEqualUnicodeString.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x1407B1628 (_PnpCtxRegEnumKeyWithCallback.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmDeviceClassesSubkeyCallback(__int64 a1, __int64 a2, const wchar_t *a3, unsigned int *a4)
{
  __int64 v5; // rcx
  unsigned __int64 v6; // r14
  wchar_t *v9; // r12
  _WORD *PoolWithTag; // r15
  wchar_t *v11; // rdi
  __int64 v12; // rax
  unsigned int v13; // eax
  size_t v14; // rdx
  wchar_t *v15; // r14
  __int64 v16; // r8
  unsigned int v17; // esi
  unsigned __int8 (__fastcall *v18)(__int64, wchar_t *, __int64, _QWORD); // rax
  unsigned int v19; // eax
  __int64 v21; // rcx
  wchar_t *v22; // rax
  __int64 v23; // rax
  char v24[4]; // [rsp+38h] [rbp-29h] BYREF
  int v25; // [rsp+3Ch] [rbp-25h] BYREF
  __int64 v26; // [rsp+40h] [rbp-21h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-19h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+50h] [rbp-11h] BYREF
  size_t pcchRemaining; // [rsp+58h] [rbp-9h] BYREF
  UNICODE_STRING String2; // [rsp+60h] [rbp-1h] BYREF
  UNICODE_STRING String1; // [rsp+70h] [rbp+Fh] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp+1Fh] BYREF
  char v33; // [rsp+E0h] [rbp+7Fh]

  Handle = 0LL;
  v5 = *a4;
  v6 = -1LL;
  v25 = 0;
  ppszDestEnd = 0LL;
  pcchRemaining = 0LL;
  v33 = 0;
  v9 = 0LL;
  v24[0] = 0;
  PoolWithTag = 0LL;
  v11 = 0LL;
  DestinationString = 0LL;
  String1 = 0LL;
  String2 = 0LL;
  if ( (_DWORD)v5 == 1 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( a3[v23] );
    if ( v23 != 38 || *a3 != 123 )
      return 0LL;
  }
  else if ( (unsigned int)(v5 - 2) <= 1 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a3[v12] );
    if ( !v12 || *a3 != 35 )
      return 0LL;
  }
  if ( (unsigned int)v5 >= 3 && ((_DWORD)v5 != 3 || !*((_BYTE *)a4 + 1428)) )
    goto LABEL_10;
  v21 = 0LL;
  if ( a1 )
    v21 = *(_QWORD *)(a1 + 224);
  if ( (int)SysCtxRegOpenKey(v21, a2, (__int64)a3, 8u, 0x20019u, (__int64)&Handle) >= 0 )
  {
LABEL_10:
    v13 = *a4;
    if ( *a4 < 3 )
    {
      if ( v13 == 2 && *((_WORD *)a4 + 506) )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x52504E50u);
        if ( !PoolWithTag )
          goto LABEL_38;
        LODWORD(v26) = 400;
        if ( (int)RegRtlQueryValue(Handle, L"DeviceInstance", &v25, PoolWithTag, (unsigned int *)&v26) < 0 )
          goto LABEL_36;
        if ( v25 != 1 )
          goto LABEL_36;
        if ( (unsigned int)v26 < 2 )
          goto LABEL_36;
        PoolWithTag[199] = 0;
        if ( RtlInitUnicodeStringEx(&String1, PoolWithTag) < 0
          || RtlInitUnicodeStringEx(&String2, (PCWSTR)a4 + 506) < 0
          || !RtlEqualUnicodeString(&String1, &String2, 1u) )
        {
          goto LABEL_36;
        }
      }
      v13 = *a4;
    }
    else if ( v13 == 3 )
    {
      do
        ++v6;
      while ( a3[v6] );
      if ( v6 <= 1 || *a3 != 35 )
        goto LABEL_17;
      v33 = 1;
      v13 = 3;
    }
    if ( v13 < 2 )
      goto LABEL_25;
LABEL_17:
    v11 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x3F0uLL, 0x52504E50u);
    if ( v11 )
    {
      v14 = 504LL;
      if ( *((_WORD *)a4 + 2) )
      {
        if ( RtlStringCchCopyExW(v11, 0x1F8uLL, (NTSTRSAFE_PCWSTR)a4 + 2, &ppszDestEnd, &pcchRemaining, 0x900u) < 0 )
          goto LABEL_34;
        v15 = ppszDestEnd;
        v14 = pcchRemaining - 1;
        *ppszDestEnd = 0;
      }
      else
      {
        v15 = v11;
      }
      if ( v33 == 1 || *a4 == 2 )
      {
        if ( RtlStringCchCopyW(v15, v14, a3) < 0 )
          goto LABEL_34;
        if ( v33 == 1 )
          *v15 = 92;
      }
LABEL_25:
      if ( *a4 < 3 )
      {
        v22 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x5B8uLL, 0x52504E50u);
        v9 = v22;
        if ( v22 )
        {
          memset(v22, 0, 0x5B8uLL);
          *(_DWORD *)v9 = *a4 + 1;
          RtlStringCchCopyExW(v9 + 2, 0x1F8uLL, v11, 0LL, 0LL, 0x900u);
          RtlStringCchCopyExW(v9 + 506, 0xC8uLL, (NTSTRSAFE_PCWSTR)a4 + 506, 0LL, 0LL, 0x900u);
          *((_QWORD *)v9 + 177) = *((_QWORD *)a4 + 177);
          *((_DWORD *)v9 + 356) = a4[356];
          *((_BYTE *)v9 + 1428) = *((_BYTE *)a4 + 1428);
          *((_QWORD *)v9 + 179) = *((_QWORD *)a4 + 179);
          *((_QWORD *)v9 + 180) = *((_QWORD *)a4 + 180);
          *((_QWORD *)v9 + 181) = *((_QWORD *)a4 + 181);
          *((_DWORD *)v9 + 364) = a4[364];
          *((_DWORD *)v9 + 365) = a4[365];
          PnpCtxRegEnumKeyWithCallback(a1, Handle, &CmDeviceClassesSubkeyCallback, v9);
          *((_QWORD *)a4 + 177) = *((_QWORD *)v9 + 177);
          a4[356] = *((_DWORD *)v9 + 356);
          a4[365] = *((_DWORD *)v9 + 365);
          *((_QWORD *)a4 + 181) = *((_QWORD *)v9 + 181);
          a4[364] = *((_DWORD *)v9 + 364);
LABEL_32:
          if ( v9 )
            ExFreePoolWithTag(v9, 0);
        }
      }
      else
      {
        *(_QWORD *)v11 = *(_QWORD *)L"\\\\?\\";
        if ( (int)CmValidateDeviceInterfaceName(v5, v11) >= 0 && RtlInitUnicodeStringEx(&DestinationString, v11) >= 0 )
        {
          v17 = DestinationString.MaximumLength >> 1;
          if ( !*((_BYTE *)a4 + 1428) || CmIsDeviceInterfaceEnabled(a1, v11, v16, (__int64)v24) >= 0 && v24[0] )
          {
            v18 = (unsigned __int8 (__fastcall *)(__int64, wchar_t *, __int64, _QWORD))*((_QWORD *)a4 + 179);
            if ( !v18 || v18(a1, v11, 3LL, *((_QWORD *)a4 + 180)) )
            {
              a4[365] += v17;
              v19 = a4[364];
              if ( v19 > v17 )
              {
                RtlStringCchCopyExW(*((NTSTRSAFE_PWSTR *)a4 + 181), v19, v11, 0LL, 0LL, 0x900u);
                *((_QWORD *)a4 + 181) += 2LL * v17;
                a4[364] -= v17;
                goto LABEL_32;
              }
            }
          }
        }
      }
LABEL_34:
      if ( v11 )
        ExFreePoolWithTag(v11, 0);
    }
LABEL_36:
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
LABEL_38:
  if ( Handle )
    ZwClose(Handle);
  return 0LL;
}
