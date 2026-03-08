/*
 * XREFs of _CmEnumSubkeyCallback @ 0x1408247A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyExW @ 0x140244A08 (RtlStringCchCopyExW.c)
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyW @ 0x1402470F0 (RtlStringCchCopyW.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     _CmIsDevicePresent @ 0x1406C8810 (_CmIsDevicePresent.c)
 *     _CmValidateDeviceName @ 0x1406D3DF0 (_CmValidateDeviceName.c)
 *     _SysCtxRegOpenKey @ 0x1406D4350 (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x140824EA0 (_PnpCtxRegEnumKeyWithCallback.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmEnumSubkeyCallback(__int64 a1, __int64 a2, const wchar_t *a3, __int64 a4)
{
  wchar_t *Pool2; // rax
  wchar_t *v9; // rdi
  size_t v10; // rdx
  wchar_t *v11; // rcx
  size_t v12; // rax
  NTSTRSAFE_PWSTR v13; // rcx
  __int64 v14; // rcx
  unsigned int v15; // esi
  unsigned __int8 (__fastcall *v16)(__int64, wchar_t *, __int64, _QWORD); // rax
  unsigned int v17; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rsi
  HANDLE Handle; // [rsp+30h] [rbp-30h] BYREF
  size_t pcchRemaining; // [rsp+38h] [rbp-28h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF
  char v26; // [rsp+A8h] [rbp+48h] BYREF

  Handle = 0LL;
  ppszDestEnd = 0LL;
  pcchRemaining = 0LL;
  v26 = 0;
  DestinationString = 0LL;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, 400LL, 1380994640LL);
  v9 = Pool2;
  if ( Pool2 )
  {
    v10 = 200LL;
    v11 = Pool2;
    if ( *(_WORD *)(a4 + 4) )
    {
      if ( RtlStringCchCopyExW(Pool2, 0xC8uLL, (NTSTRSAFE_PCWSTR)(a4 + 4), &ppszDestEnd, &pcchRemaining, 0x900u) < 0
        || (v12 = pcchRemaining, pcchRemaining < 2) )
      {
LABEL_14:
        ExFreePoolWithTag(v9, 0);
        goto LABEL_15;
      }
      v13 = ppszDestEnd;
      *ppszDestEnd = 92;
      v11 = v13 + 1;
      v10 = v12 - 2;
      *v11 = 0;
    }
    if ( RtlStringCchCopyW(v11, v10, a3) >= 0 )
    {
      if ( *(_DWORD *)a4 < 3u )
      {
        v19 = 0LL;
        if ( a1 )
          v19 = *(_QWORD *)(a1 + 224);
        if ( (int)SysCtxRegOpenKey(v19, a2, (__int64)a3, 8u, 0x20019u, (__int64)&Handle) >= 0 )
        {
          v20 = ExAllocatePool2(256LL, 440LL, 1380994640LL);
          v21 = v20;
          if ( v20 )
          {
            *(_DWORD *)v20 = *(_DWORD *)a4 + 1;
            RtlStringCchCopyExW((NTSTRSAFE_PWSTR)(v20 + 4), 0xC8uLL, v9, 0LL, 0LL, 0x900u);
            *(_BYTE *)(v21 + 404) = *(_BYTE *)(a4 + 404);
            *(_QWORD *)(v21 + 408) = *(_QWORD *)(a4 + 408);
            *(_QWORD *)(v21 + 416) = *(_QWORD *)(a4 + 416);
            *(_QWORD *)(v21 + 424) = *(_QWORD *)(a4 + 424);
            *(_DWORD *)(v21 + 432) = *(_DWORD *)(a4 + 432);
            *(_DWORD *)(v21 + 436) = *(_DWORD *)(a4 + 436);
            PnpCtxRegEnumKeyWithCallback(a1, Handle, &CmEnumSubkeyCallback, v21);
            *(_DWORD *)(a4 + 436) = *(_DWORD *)(v21 + 436);
            *(_QWORD *)(a4 + 424) = *(_QWORD *)(v21 + 424);
            *(_DWORD *)(a4 + 432) = *(_DWORD *)(v21 + 432);
            ExFreePoolWithTag((PVOID)v21, 0);
          }
        }
      }
      else if ( (int)CmValidateDeviceName(v14, v9) >= 0 && RtlInitUnicodeStringEx(&DestinationString, v9) >= 0 )
      {
        v15 = DestinationString.MaximumLength >> 1;
        if ( !*(_BYTE *)(a4 + 404) || CmIsDevicePresent(a1, v9, &v26) >= 0 && v26 )
        {
          v16 = *(unsigned __int8 (__fastcall **)(__int64, wchar_t *, __int64, _QWORD))(a4 + 408);
          if ( !v16 || v16(a1, v9, 1LL, *(_QWORD *)(a4 + 416)) )
          {
            *(_DWORD *)(a4 + 436) += v15;
            v17 = *(_DWORD *)(a4 + 432);
            if ( v17 > v15 )
            {
              RtlStringCchCopyExW(*(NTSTRSAFE_PWSTR *)(a4 + 424), v17, v9, 0LL, 0LL, 0x900u);
              *(_QWORD *)(a4 + 424) += 2LL * v15;
              *(_DWORD *)(a4 + 432) -= v15;
            }
          }
        }
      }
    }
    goto LABEL_14;
  }
LABEL_15:
  if ( Handle )
    ZwClose(Handle);
  return 0LL;
}
