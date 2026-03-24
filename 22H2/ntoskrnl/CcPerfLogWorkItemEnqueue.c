/*
 * XREFs of CcPerfLogWorkItemEnqueue @ 0x1403BCF4C
 * Callers:
 *     CcWorkerThread @ 0x140273870 (CcWorkerThread.c)
 *     CcPostWorkQueueRegular @ 0x140277688 (CcPostWorkQueueRegular.c)
 *     CcPostWorkQueueCachemapUninit @ 0x140277840 (CcPostWorkQueueCachemapUninit.c)
 *     CcPostWorkQueueAsyncRead @ 0x140278CE4 (CcPostWorkQueueAsyncRead.c)
 *     CcWaitForCurrentLazyWriterActivityInternal @ 0x140380DCC (CcWaitForCurrentLazyWriterActivityInternal.c)
 * Callees:
 *     CcDereferenceSharedCacheMapFileObject @ 0x140275E04 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x140275E50 (CcReferenceSharedCacheMapFileObject.c)
 *     EtwTraceKernelEvent @ 0x14035C1F0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 */

void __fastcall CcPerfLogWorkItemEnqueue(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 v4; // r10
  char v7; // bl
  char v8; // cl
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int8 CurrentIrql; // al
  char v12; // al
  __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int128 v15; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+40h] [rbp-20h]
  __int128 *v17; // [rsp+48h] [rbp-18h] BYREF
  int v18; // [rsp+50h] [rbp-10h]
  int v19; // [rsp+54h] [rbp-Ch]

  v4 = *(_QWORD *)(a2 + 128);
  v16 = 0LL;
  v15 = 0LL;
  if ( a1 == v4 + 224 )
  {
    v7 = 1;
  }
  else if ( a1 == v4 + 288 )
  {
    v7 = 7;
  }
  else if ( a1 == v4 + 240 )
  {
    v7 = 2;
  }
  else if ( a1 == v4 + 256 )
  {
    v7 = 3;
  }
  else if ( a1 == v4 + 272 )
  {
    v7 = 4;
  }
  else
  {
    v13 = *(_QWORD *)(v4 + 864);
    if ( a1 == v13 || a1 == v13 + 16 || a1 == v13 + 32 )
      v7 = 5;
    else
      v7 = a1 == 0 ? 6 : 0;
  }
  v8 = *(_BYTE *)(a2 + 120);
  switch ( v8 )
  {
    case 2:
      v10 = *(_QWORD *)(a2 + 16);
      BYTE1(v16) = 2;
      if ( a4 )
      {
        *((_QWORD *)&v15 + 1) = *(_QWORD *)((*(_QWORD *)(v10 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18);
      }
      else
      {
        v14 = CcReferenceSharedCacheMapFileObject(v10);
        *((_QWORD *)&v15 + 1) = *(_QWORD *)(v14 + 24);
        CcDereferenceSharedCacheMapFileObject(v10, v14);
      }
      break;
    case 1:
      v9 = *(_QWORD *)(a2 + 16);
      BYTE1(v16) = 1;
      *((_QWORD *)&v15 + 1) = *(_QWORD *)(v9 + 24);
      break;
    case 3:
      BYTE1(v16) = 3;
      break;
    default:
      v12 = BYTE1(v16);
      if ( v8 == 4 )
        v12 = 4;
      BYTE1(v16) = v12;
      break;
  }
  LOBYTE(v16) = v7;
  *(_QWORD *)&v15 = a2;
  BYTE2(v16) = a3;
  CurrentIrql = KeGetCurrentIrql();
  v19 = 0;
  v18 = 24;
  v17 = &v15;
  if ( CurrentIrql >= 2u )
    EtwTraceKernelEvent((__int64)&v17, 1u, 0x80020000, 0x1600u, 0x400102u);
  else
    EtwTraceKernelEvent((__int64)&v17, 1u, 0x80020000, 0x1600u, 0x401902u);
}
