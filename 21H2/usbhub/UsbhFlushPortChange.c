/*
 * XREFs of UsbhFlushPortChange @ 0x1C002A85C
 * Callers:
 *     UsbhQueryPortState @ 0x1C0018E60 (UsbhQueryPortState.c)
 *     UsbhFdoColdStartPdo @ 0x1C001B954 (UsbhFdoColdStartPdo.c)
 *     UsbhFdoSetD0Warm @ 0x1C003B8A0 (UsbhFdoSetD0Warm.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhSyncSendCommand @ 0x1C0019810 (UsbhSyncSendCommand.c)
 */

__int64 __fastcall UsbhFlushPortChange(__int64 a1, unsigned __int16 a2, _DWORD *a3)
{
  __int64 v3; // rdi
  int v6; // eax
  unsigned int v7; // r10d
  int v9; // [rsp+20h] [rbp-28h]
  __int16 v10; // [rsp+58h] [rbp+10h] BYREF
  int v11; // [rsp+68h] [rbp+20h] BYREF
  __int16 v12; // [rsp+6Ch] [rbp+24h]
  __int16 v13; // [rsp+6Eh] [rbp+26h]

  v3 = a2;
  v10 = 0;
  FdoExt(a1);
  v11 = 1048867;
  v12 = v3;
  v13 = 0;
  v6 = UsbhSyncSendCommand(a1, (__int64)&v11, 0LL, &v10, v9, a3);
  Log(a1, 8, 1718382659, v6, v3);
  return v7;
}
