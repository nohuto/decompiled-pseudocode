/*
 * XREFs of DbgkpSendApiMessageLpc @ 0x1409371D8
 * Callers:
 *     DbgkForwardException @ 0x1409365F4 (DbgkForwardException.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     PsThawMultiProcess @ 0x1402FFE80 (PsThawMultiProcess.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     LpcSendWaitReceivePort @ 0x140796F40 (LpcSendWaitReceivePort.c)
 *     DbgkpSuspendProcess @ 0x1409365B4 (DbgkpSuspendProcess.c)
 */

__int64 __fastcall DbgkpSendApiMessageLpc(__int64 a1, int a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char v4; // si
  __int64 Process; // rbp
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rcx
  _OWORD *v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v20; // [rsp+30h] [rbp-2E8h] BYREF
  _BYTE v21[688]; // [rsp+40h] [rbp-2D8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = a3;
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( a3 )
    v4 = DbgkpSuspendProcess((__int64)CurrentThread->ApcState.Process);
  *(_DWORD *)(a1 + 44) = 259;
  v20 = 688LL;
  v8 = LpcSendWaitReceivePort(a2, 0x20000, a1, (__int64)v21, (__int64)&v20, 0LL);
  v9 = v8;
  if ( v8 == 192 )
  {
    v9 = -1073741749;
  }
  else if ( v8 >= 0 )
  {
    v10 = 2LL;
    v11 = v21;
    do
    {
      v12 = v11[1];
      *(_OWORD *)a1 = *v11;
      v13 = v11[2];
      *(_OWORD *)(a1 + 16) = v12;
      v14 = v11[3];
      *(_OWORD *)(a1 + 32) = v13;
      v15 = v11[4];
      *(_OWORD *)(a1 + 48) = v14;
      v16 = v11[5];
      *(_OWORD *)(a1 + 64) = v15;
      v17 = v11[6];
      *(_OWORD *)(a1 + 80) = v16;
      v18 = v11[7];
      v11 += 8;
      *(_OWORD *)(a1 + 96) = v17;
      a1 += 128LL;
      *(_OWORD *)(a1 - 16) = v18;
      --v10;
    }
    while ( v10 );
    *(_OWORD *)a1 = *v11;
  }
  if ( v4 )
  {
    PsThawMultiProcess(Process, 0LL, 1u);
    KeLeaveCriticalRegion();
  }
  return v9;
}
