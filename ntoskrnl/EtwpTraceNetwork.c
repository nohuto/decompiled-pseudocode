/*
 * XREFs of EtwpTraceNetwork @ 0x14045FCF0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     EtwpNetProvTraceNetwork @ 0x14045F732 (EtwpNetProvTraceNetwork.c)
 */

void __fastcall EtwpTraceNetwork(unsigned __int16 a1, ULONGLONG a2, ULONG a3)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  UserData.Reserved = 0;
  UserData.Ptr = a2;
  UserData.Size = a3;
  if ( EtwpHostSiloState != -4540 && (*(_DWORD *)(EtwpHostSiloState + 4540) & 0x10000) != 0 )
    EtwpNetProvTraceNetwork(&UserData, a1);
  EtwTraceKernelEvent((__int64)&UserData, 1u, 0x10000u, a1, 0x401802u);
}
