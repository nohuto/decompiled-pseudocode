/*
 * XREFs of _CmEnumSubkeyCallback @ 0x1407B0EB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyExW @ 0x140253448 (RtlStringCchCopyExW.c)
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyW @ 0x1403711F0 (RtlStringCchCopyW.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     _CmIsDevicePresent @ 0x1405FF5F8 (_CmIsDevicePresent.c)
 *     _CmValidateDeviceName @ 0x140637080 (_CmValidateDeviceName.c)
 *     _SysCtxRegOpenKey @ 0x1406374BC (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x1407B1628 (_PnpCtxRegEnumKeyWithCallback.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmEnumSubkeyCallback(__int64 a1, __int64 a2, const wchar_t *a3, __int64 a4)
{
  wchar_t *v8; // r14
  wchar_t *PoolWithTag; // rax
  wchar_t *v10; // rdi
  wchar_t *v11; // rcx
  size_t v12; // rdx
  size_t v13; // rax
  NTSTRSAFE_PWSTR v14; // rcx
  NTSTATUS v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // esi
  unsigned __int8 (__fastcall *v18)(__int64, wchar_t *, __int64, _QWORD); // rax
  unsigned int v19; // eax
  wchar_t *v21; // rax
  HANDLE Handle; // [rsp+30h] [rbp-30h] BYREF
  size_t pcchRemaining; // [rsp+38h] [rbp-28h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF
  char v26; // [rsp+A8h] [rbp+48h] BYREF

  Handle = 0LL;
  ppszDestEnd = 0LL;
  pcchRemaining = 0LL;
  v26 = 0;
  v8 = 0LL;
  DestinationString = 0LL;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x52504E50u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    v11 = PoolWithTag;
    v12 = 200LL;
    if ( *(_WORD *)(a4 + 4) )
    {
      if ( RtlStringCchCopyExW(PoolWithTag, 0xC8uLL, (NTSTRSAFE_PCWSTR)(a4 + 4), &ppszDestEnd, &pcchRemaining, 0x900u) < 0 )
        goto LABEL_16;
      v13 = pcchRemaining;
      if ( pcchRemaining < 2 )
        goto LABEL_16;
      v14 = ppszDestEnd;
      *ppszDestEnd = 92;
      v11 = v14 + 1;
      v12 = v13 - 2;
      *v11 = 0;
    }
    v15 = RtlStringCchCopyW(v11, v12, a3);
    v16 = 0LL;
    if ( v15 >= 0 )
    {
      if ( *(_DWORD *)a4 < 3u )
      {
        if ( a1 )
          v16 = *(_QWORD *)(a1 + 224);
        if ( (int)SysCtxRegOpenKey(v16, a2, (__int64)a3, 8u, 0x20019u, (__int64)&Handle) < 0 )
          goto LABEL_16;
        v21 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x1B8uLL, 0x52504E50u);
        v8 = v21;
        if ( !v21 )
          goto LABEL_16;
        memset(v21, 0, 0x1B8uLL);
        *(_DWORD *)v8 = *(_DWORD *)a4 + 1;
        RtlStringCchCopyExW(v8 + 2, 0xC8uLL, v10, 0LL, 0LL, 0x900u);
        *((_BYTE *)v8 + 404) = *(_BYTE *)(a4 + 404);
        *((_QWORD *)v8 + 51) = *(_QWORD *)(a4 + 408);
        *((_QWORD *)v8 + 52) = *(_QWORD *)(a4 + 416);
        *((_QWORD *)v8 + 53) = *(_QWORD *)(a4 + 424);
        *((_DWORD *)v8 + 108) = *(_DWORD *)(a4 + 432);
        *((_DWORD *)v8 + 109) = *(_DWORD *)(a4 + 436);
        PnpCtxRegEnumKeyWithCallback(a1, Handle, &CmEnumSubkeyCallback, v8);
        *(_DWORD *)(a4 + 436) = *((_DWORD *)v8 + 109);
        *(_QWORD *)(a4 + 424) = *((_QWORD *)v8 + 53);
        *(_DWORD *)(a4 + 432) = *((_DWORD *)v8 + 108);
        goto LABEL_14;
      }
      if ( (int)CmValidateDeviceName(0LL, v10) >= 0 && RtlInitUnicodeStringEx(&DestinationString, v10) >= 0 )
      {
        v17 = DestinationString.MaximumLength >> 1;
        if ( !*(_BYTE *)(a4 + 404) || CmIsDevicePresent(a1, v10, &v26) >= 0 && v26 )
        {
          v18 = *(unsigned __int8 (__fastcall **)(__int64, wchar_t *, __int64, _QWORD))(a4 + 408);
          if ( !v18 || v18(a1, v10, 1LL, *(_QWORD *)(a4 + 416)) )
          {
            *(_DWORD *)(a4 + 436) += v17;
            v19 = *(_DWORD *)(a4 + 432);
            if ( v19 > v17 )
            {
              RtlStringCchCopyExW(*(NTSTRSAFE_PWSTR *)(a4 + 424), v19, v10, 0LL, 0LL, 0x900u);
              *(_QWORD *)(a4 + 424) += 2LL * v17;
              *(_DWORD *)(a4 + 432) -= v17;
LABEL_14:
              if ( v8 )
                ExFreePoolWithTag(v8, 0);
            }
          }
        }
      }
    }
LABEL_16:
    ExFreePoolWithTag(v10, 0);
  }
  if ( Handle )
    ZwClose(Handle);
  return 0LL;
}
