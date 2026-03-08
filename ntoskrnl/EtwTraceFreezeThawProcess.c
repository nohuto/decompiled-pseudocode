/*
 * XREFs of EtwTraceFreezeThawProcess @ 0x1409E243C
 * Callers:
 *     PsThawMultiProcess @ 0x1402FFE80 (PsThawMultiProcess.c)
 *     PsFreezeProcess @ 0x1407DD068 (PsFreezeProcess.c)
 * Callees:
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall EtwTraceFreezeThawProcess(__int64 a1, char a2)
{
  const EVENT_DESCRIPTOR *v3; // rdx
  int v4; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-30h] BYREF
  __int64 v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+50h] [rbp-18h]
  int v8; // [rsp+54h] [rbp-14h]

  v4 = *(_DWORD *)(a1 + 1088);
  v5.Ptr = (ULONGLONG)&v4;
  v5.Reserved = 0;
  v5.Size = 4;
  v6 = a1 + 1128;
  v8 = 0;
  v7 = 8;
  if ( EtwpHostSiloState != -4540 && (*(_DWORD *)(EtwpHostSiloState + 4548) & 2) != 0 )
  {
    v3 = (const EVENT_DESCRIPTOR *)ProcessFreezeEvent;
    if ( !a2 )
      v3 = &ProcessThawEvent;
    EtwWrite(EtwpPsProvRegHandle, v3, 0LL, 2u, &v5);
  }
  EtwTraceKernelEvent((__int64)&v5, 1u, 0x40000002u, 805 - (a2 != 0), 0x501902u);
}
