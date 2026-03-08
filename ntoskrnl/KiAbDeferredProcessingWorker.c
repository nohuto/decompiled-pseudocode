/*
 * XREFs of KiAbDeferredProcessingWorker @ 0x1402391E0
 * Callers:
 *     <none>
 * Callees:
 *     KiAbPropagateBoosts @ 0x1402395C0 (KiAbPropagateBoosts.c)
 *     KiAbProcessThreadLocks @ 0x140239A40 (KiAbProcessThreadLocks.c)
 *     KiDeferredReadySingleThread @ 0x140259FB0 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402B7960 (KiFlushSoftwareInterruptBatch.c)
 */

void __fastcall KiAbDeferredProcessingWorker(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        _QWORD *SystemArgument1,
        PVOID SystemArgument2)
{
  char *v4; // rbp
  _QWORD **v6; // rbx
  _QWORD *v7; // rcx
  char v8; // si
  _QWORD *v9; // rbx
  volatile signed __int16 *v10; // rsi
  signed __int32 v11[8]; // [rsp+0h] [rbp-48h] BYREF
  _QWORD *v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = 0LL;
  v4 = (char *)(SystemArgument1 + 4463);
  v6 = (_QWORD **)(SystemArgument1 + 4462);
  do
  {
    while ( 1 )
    {
      v7 = *v6;
      if ( !*v6 )
        break;
      v10 = (volatile signed __int16 *)(v7 - 102);
      *v6 = (_QWORD *)*v7;
      *v7 = 1LL;
      _InterlockedOr(v11, 0);
      if ( *((_BYTE *)v7 + 55) )
        KiAbProcessThreadLocks((_DWORD)v7 - 816, 0, 0, 1, (__int64)&v12, (__int64)v4, 0LL);
      _InterlockedDecrement16(v10 + 434);
    }
    KiAbPropagateBoosts(v4, v6, &v12);
  }
  while ( *v6 );
  SystemArgument1[4468] = 0LL;
  v8 = 0;
  v9 = v12;
  if ( v12 )
  {
    v12 = (_QWORD *)*v12;
    do
    {
      KiDeferredReadySingleThread(SystemArgument1, v9 - 27, &v12);
      v9 = v12;
      ++v8;
      if ( v12 )
        v12 = (_QWORD *)*v12;
      if ( (v8 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch(SystemArgument1 + 1595);
    }
    while ( v9 );
  }
  KiFlushSoftwareInterruptBatch(SystemArgument1 + 1595);
}
