/*
 * XREFs of UsbhGetPortStatusBits @ 0x1C00386E0
 * Callers:
 *     UsbhHubSyncSuspendPortEvent @ 0x1C0033EBC (UsbhHubSyncSuspendPortEvent.c)
 *     UsbhPortResumeTimeout @ 0x1C0038ED0 (UsbhPortResumeTimeout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UsbhGetPortStatusBits(__int64 a1, __int64 a2, __int16 *a3, __int64 a4)
{
  __int16 v4; // r10
  bool v5; // r9
  unsigned __int8 v6; // cl
  unsigned __int8 v7; // r8
  unsigned __int8 v8; // cl
  unsigned __int8 v9; // r8
  unsigned __int8 v10; // cl
  __int64 result; // rax

  v4 = *a3;
  v5 = a4 != 0;
  v6 = v5 | 0x10;
  if ( (*a3 & 1) == 0 )
    v6 = v5;
  v7 = v6;
  v8 = v6 | 2;
  if ( (v4 & 4) == 0 )
    v8 = v7;
  v9 = v8;
  v10 = v8 | 4;
  if ( (v4 & 8) == 0 )
    v10 = v9;
  result = v10 | 8u;
  if ( (v4 & 2) == 0 )
    return v10;
  return result;
}
