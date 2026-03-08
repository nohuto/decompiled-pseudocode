/*
 * XREFs of PnpPrepareDriverLoading @ 0x14079DAE0
 * Callers:
 *     IopLoadDriver @ 0x14072A9DC (IopLoadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140B58C28 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     RtlImageNtHeader @ 0x14035E820 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     IopGetRegistryValue @ 0x1406C18D4 (IopGetRegistryValue.c)
 *     PpCheckInDriverDatabase @ 0x14079DC60 (PpCheckInDriverDatabase.c)
 *     NtClose @ 0x1407C00E0 (NtClose.c)
 *     PnpSetBlockedDriverEvent @ 0x1409616C0 (PnpSetBlockedDriverEvent.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpPrepareDriverLoading(int a1, void *a2, __int64 a3, int a4, _DWORD *a5, bool *a6)
{
  int v8; // edi
  __int64 v10; // rax
  unsigned int v11; // edi
  PVOID v13; // rcx
  PVOID v14; // rcx
  PVOID P; // [rsp+30h] [rbp-59h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-51h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-39h] BYREF
  __int128 v19; // [rsp+80h] [rbp-9h] BYREF

  P = 0LL;
  v8 = a3;
  *a5 = 0;
  *a6 = 0;
  DestinationString = 0LL;
  v10 = RtlImageNtHeader(a3);
  if ( !v10 )
    return 3221225473LL;
  v19 = 0LL;
  v11 = PpCheckInDriverDatabase(a1, (_DWORD)a2, v8, *(_DWORD *)(v10 + 80), a4, (__int64)&v19);
  if ( v11 + 1073740949 <= 1 )
    PnpSetBlockedDriverEvent(&v19);
  if ( IopGetRegistryValue(a2, L"PnpFlags", 0, &P) >= 0 )
  {
    v14 = P;
    if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
      *a5 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
    ExFreePoolWithTag(v14, 0);
  }
  if ( RtlInitUnicodeStringEx(&DestinationString, L"Parameters") >= 0 )
  {
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    KeyHandle = 0LL;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.Attributes = 576;
    if ( ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
    {
      if ( IopGetRegistryValue(KeyHandle, L"PnpAsyncNewDevices", 0, &P) >= 0 )
      {
        v13 = P;
        if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
          *a6 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) != 0;
        ExFreePoolWithTag(v13, 0);
      }
      NtClose(KeyHandle);
    }
  }
  return v11;
}
