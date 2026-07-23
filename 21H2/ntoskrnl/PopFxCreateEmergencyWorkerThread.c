/*
 * XREFs of PopFxCreateEmergencyWorkerThread @ 0x1407CB690
 * Callers:
 *     PopFxInitializeWorkPool @ 0x1407CB5E4 (PopFxInitializeWorkPool.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     PsCreateSystemThreadEx @ 0x1406A7470 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall PopFxCreateEmergencyWorkerThread(__int64 a1)
{
  int v1; // ebx
  __int128 v3; // [rsp+50h] [rbp-38h] BYREF
  __int64 v4; // [rsp+60h] [rbp-28h]
  int v5; // [rsp+68h] [rbp-20h]
  int v6; // [rsp+6Ch] [rbp-1Ch]
  __int128 v7; // [rsp+70h] [rbp-18h]
  HANDLE Handle; // [rsp+98h] [rbp+10h] BYREF

  v6 = 0;
  Handle = 0LL;
  v3 = 0x30uLL;
  v5 = 512;
  v4 = 0LL;
  v7 = 0LL;
  v1 = PsCreateSystemThreadEx((__int64)&Handle, 0x1FFFFF, &v3, 0LL, 0LL, (__int64)PopFxEmergencyWorker, a1, 0LL, 0LL);
  if ( v1 >= 0 )
    ZwClose(Handle);
  return (unsigned int)v1;
}
