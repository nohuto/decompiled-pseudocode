/*
 * XREFs of PnpInitializeNotifyEntry @ 0x1406F543C
 * Callers:
 *     IoRegisterPlugPlayNotification @ 0x1406F4F30 (IoRegisterPlugPlayNotification.c)
 *     PiRegisterKernelSoftRestartNotification @ 0x14085FB0C (PiRegisterKernelSoftRestartNotification.c)
 * Callees:
 *     MmIsSessionAddress @ 0x140239ED0 (MmIsSessionAddress.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ExInitializeResourceLite @ 0x14030FAB0 (ExInitializeResourceLite.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     swprintf_s @ 0x1403D8840 (swprintf_s.c)
 *     ZwOpenSession @ 0x1404149B0 (ZwOpenSession.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpInitializeNotifyEntry(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  unsigned int v11; // r14d
  int v12; // ebx
  struct _ERESOURCE *Pool2; // rax
  unsigned int SessionId; // eax
  __int64 v16; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v17; // [rsp+30h] [rbp-D8h]
  __int128 v18; // [rsp+40h] [rbp-C8h]
  __int128 v19; // [rsp+50h] [rbp-B8h]
  UNICODE_STRING DestinationString_8; // [rsp+60h] [rbp-A8h] BYREF
  wchar_t Dst[256]; // [rsp+78h] [rbp-90h] BYREF

  *(_QWORD *)&v19 = 0LL;
  v7 = 0LL;
  DWORD2(v19) = 0;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v11 = 0;
  DestinationString_8 = 0LL;
  v12 = 0;
  if ( !MmIsSessionAddress(a3) )
    goto LABEL_2;
  SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  v11 = SessionId;
  if ( SessionId == -1 )
    return (unsigned int)-1073741811;
  swprintf_s(Dst, 0x100uLL, L"\\KernelObjects\\Session%d", SessionId);
  RtlInitUnicodeString(&DestinationString_8, Dst);
  *((_QWORD *)&v17 + 1) = 0LL;
  *(_QWORD *)&v18 = &DestinationString_8;
  LODWORD(v17) = 48;
  DWORD2(v18) = 512;
  v19 = 0LL;
  v12 = ZwOpenSession((__int64)&v16, 0LL);
  if ( v12 < 0 || (v7 = v16) == 0 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
LABEL_2:
    *(_QWORD *)(a1 + 48) = a5;
    *(_QWORD *)(a1 + 8) = a1;
    *(_WORD *)(a1 + 56) = 1;
    *(_QWORD *)(a1 + 64) = a6;
    *(_QWORD *)a1 = a1;
    *(_DWORD *)(a1 + 16) = a2;
    *(_DWORD *)(a1 + 20) = v11;
    *(_QWORD *)(a1 + 24) = v7;
    *(_QWORD *)(a1 + 32) = a3;
    *(_QWORD *)(a1 + 40) = a4;
    *(_BYTE *)(a1 + 58) = 0;
    Pool2 = (struct _ERESOURCE *)ExAllocatePool2(64LL, 104LL, 1450208848LL);
    *(_QWORD *)(a1 + 72) = Pool2;
    if ( Pool2 )
      ExInitializeResourceLite(Pool2);
    else
      return (unsigned int)-1073741670;
  }
  return (unsigned int)v12;
}
