/*
 * XREFs of UsbhWaitForResetTimeout @ 0x1C000179C
 * Callers:
 *     UsbhCancelResetTimeout @ 0x1C00015A0 (UsbhCancelResetTimeout.c)
 * Callees:
 *     UsbhWaitEventWithTimeoutEx @ 0x1C00068E0 (UsbhWaitEventWithTimeoutEx.c)
 *     Log @ 0x1C000F210 (Log.c)
 */

__int64 __fastcall UsbhWaitForResetTimeout(__int64 a1, __int64 a2)
{
  __int64 v4; // r9
  int v5; // eax
  __int64 result; // rax
  int v7; // r10d
  int v8; // [rsp+20h] [rbp-18h]
  __int64 v9; // [rsp+28h] [rbp-10h]

  Log(*(_QWORD *)(a2 + 16), 4, 1666667569, 0, *(unsigned __int16 *)(a2 + 4));
  v5 = UsbhWaitEventWithTimeoutEx(a1, a2 + 768, 5000LL, 1667323697LL, (unsigned int)v4 & v8, v4 & v9);
  result = Log(*(_QWORD *)(a2 + 16), 4, 1666667570, v5, *(unsigned __int16 *)(a2 + 4));
  if ( v7 == 258 )
    return Log(a1, 4, 1953448769, *(unsigned __int16 *)(a2 + 4), a2);
  return result;
}
