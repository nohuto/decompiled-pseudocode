/*
 * XREFs of _CmClassSubkeyCallback @ 0x1408412C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyExW @ 0x140244A08 (RtlStringCchCopyExW.c)
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     _CmValidateInstallerClassName @ 0x1406C4F20 (_CmValidateInstallerClassName.c)
 *     _SysCtxRegOpenKey @ 0x1406D4350 (_SysCtxRegOpenKey.c)
 */

__int64 __fastcall CmClassSubkeyCallback(__int64 a1, __int64 a2, const wchar_t *a3, unsigned int *a4)
{
  __int64 v4; // rdx
  unsigned __int8 (__fastcall *v8)(__int64, const wchar_t *, _QWORD, _QWORD); // rax
  unsigned int v9; // edi
  unsigned int v10; // eax
  __int64 v12; // rcx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+20h] BYREF

  Handle = 0LL;
  v4 = *((_QWORD *)a4 + 1);
  DestinationString = 0LL;
  if ( v4
    && (a1 ? (v12 = *(_QWORD *)(a1 + 224)) : (v12 = 0LL),
        (int)SysCtxRegOpenKey(v12, v4, (__int64)a3, 0, 0x20019u, (__int64)&Handle) >= 0) )
  {
    ZwClose(Handle);
  }
  else if ( ((unsigned __int8)*a4 == 2 || *a4 == 4)
         && (int)CmValidateInstallerClassName(a1, a3) >= 0
         && RtlInitUnicodeStringEx(&DestinationString, a3) >= 0 )
  {
    v8 = (unsigned __int8 (__fastcall *)(__int64, const wchar_t *, _QWORD, _QWORD))*((_QWORD *)a4 + 2);
    v9 = DestinationString.MaximumLength >> 1;
    if ( !v8 || v8(a1, a3, *a4, *((_QWORD *)a4 + 3)) )
    {
      a4[11] += v9;
      v10 = a4[10];
      if ( v10 > v9 )
      {
        RtlStringCchCopyExW(*((NTSTRSAFE_PWSTR *)a4 + 4), v10, a3, 0LL, 0LL, 0x900u);
        *((_QWORD *)a4 + 4) += 2LL * v9;
        a4[10] -= v9;
      }
    }
  }
  return 0LL;
}
