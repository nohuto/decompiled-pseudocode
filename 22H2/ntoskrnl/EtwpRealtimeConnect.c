/*
 * XREFs of EtwpRealtimeConnect @ 0x14069B8B8
 * Callers:
 *     NtTraceControl @ 0x1405EAF60 (NtTraceControl.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402CB580 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140361820 (PsGetCurrentServerSiloGlobals.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     memset @ 0x140413800 (memset.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     ObCreateObjectEx @ 0x140651EA0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1406520B0 (ObInsertObjectEx.c)
 *     EtwpSynchronizeWithLogger @ 0x14069BD8C (EtwpSynchronizeWithLogger.c)
 *     EtwpOpenConsumer @ 0x14069BE14 (EtwpOpenConsumer.c)
 *     EtwpCheckLoggerControlAccess @ 0x1406BBBBC (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x1406BC818 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1406BC864 (EtwpAcquireLoggerContextByLoggerId.c)
 *     ProbeForWrite @ 0x1406CD560 (ProbeForWrite.c)
 */

__int64 __fastcall EtwpRealtimeConnect(int *a1)
{
  _DMA_OPERATIONS *v2; // rsi
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // r12
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  SIZE_T v9; // rdx
  __int16 v10; // ax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _DMA_OPERATIONS *v13; // r12
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rsi
  int v18; // ebx
  void *v19; // rcx
  void *v20; // rcx
  PADAPTER_OBJECT v21; // rbx
  PADAPTER_OBJECT v22; // rdx
  unsigned __int64 v23; // rax
  char v24; // cl
  PADAPTER_OBJECT v25; // r14
  __int64 v26; // rdx
  int inserted; // edi
  __int16 v29; // ax
  char *Object; // [rsp+20h] [rbp-F8h]
  PVOID v31; // [rsp+50h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-C0h] BYREF
  volatile void *Address; // [rsp+60h] [rbp-B8h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+68h] [rbp-B0h]
  PADAPTER_OBJECT v35; // [rsp+70h] [rbp-A8h]
  struct _DMA_ADAPTER v36; // [rsp+78h] [rbp-A0h]
  _DMA_OPERATIONS *v37; // [rsp+88h] [rbp-90h]
  unsigned __int64 v38; // [rsp+90h] [rbp-88h]
  _DMA_OPERATIONS *v39; // [rsp+98h] [rbp-80h]
  __int64 v40; // [rsp+A0h] [rbp-78h] BYREF
  _DWORD v41[2]; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v42; // [rsp+B0h] [rbp-68h]
  __int64 v43; // [rsp+B8h] [rbp-60h]
  int v44; // [rsp+C0h] [rbp-58h]
  int v45; // [rsp+C4h] [rbp-54h]
  __int128 v46; // [rsp+C8h] [rbp-50h]
  unsigned int v47; // [rsp+120h] [rbp+8h]
  unsigned int v48; // [rsp+128h] [rbp+10h]
  PADAPTER_OBJECT v49; // [rsp+130h] [rbp+18h] BYREF
  PVOID v50; // [rsp+138h] [rbp+20h] BYREF

  v40 = 0LL;
  v41[1] = 0;
  v45 = 0;
  v49 = 0LL;
  v35 = 0LL;
  DmaAdapter = 0LL;
  v47 = *a1;
  Handle = 0LL;
  v39 = (_DMA_OPERATIONS *)*((_QWORD *)a1 + 2);
  Address = (volatile void *)*((_QWORD *)a1 + 1);
  v48 = a1[1];
  *(_QWORD *)&v36.Version = *((_QWORD *)a1 + 6);
  v2 = (_DMA_OPERATIONS *)*((_QWORD *)a1 + 5);
  v36.DmaOperations = v2;
  v3 = *((_QWORD *)a1 + 7);
  v37 = (_DMA_OPERATIONS *)v3;
  v4 = *((_QWORD *)a1 + 8);
  v38 = v4;
  ProbeForWrite(v39, (((v48 >> 12) + 31) >> 3) & 0x1FFFFFFC, 4u);
  ProbeForWrite(Address, v48, 4u);
  v5 = *(_QWORD *)&v36.Version;
  if ( *(_QWORD *)&v36.Version >= 0x7FFFFFFF0000uLL )
    v5 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v5 = *(_DWORD *)v5;
  v6 = v3;
  if ( v3 >= 0x7FFFFFFF0000LL )
    v6 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v6 = *(_DWORD *)v6;
  v7 = v4;
  if ( v4 >= 0x7FFFFFFF0000LL )
    v7 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v7 = *(_DWORD *)v7;
  v8 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10];
  if ( v8 && ((v10 = *(_WORD *)(v8 + 8), v10 == 332) || v10 == 452) )
    v9 = 4LL;
  else
    v9 = 8LL;
  ProbeForWrite(v2, v9, 4u);
  v13 = (_DMA_OPERATIONS *)*((_QWORD *)PsGetCurrentServerSiloGlobals(v12, v11) + 108);
  LOBYTE(v14) = 1;
  v15 = EtwpAcquireLoggerContextByLoggerId(v13, v47, v14);
  v17 = v15;
  if ( !v15 )
    return 3221225485LL;
  if ( (*(_DWORD *)(v15 + 12) & 0x100) != 0 )
  {
    v18 = EtwpCheckLoggerControlAccess(0x400u);
    if ( v18 >= 0 )
    {
      v18 = EtwpOpenConsumer(&Handle);
      if ( v18 >= 0 )
      {
        v19 = (void *)*((_QWORD *)a1 + 3);
        v50 = 0LL;
        v18 = ObReferenceObjectByHandle(v19, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v50, 0LL);
        DmaAdapter = (PADAPTER_OBJECT)v50;
        if ( v18 >= 0 )
        {
          v20 = (void *)*((_QWORD *)a1 + 4);
          v31 = 0LL;
          v18 = ObReferenceObjectByHandle(v20, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v31, 0LL);
          v35 = (PADAPTER_OBJECT)v31;
          if ( v18 >= 0 )
          {
            v41[0] = 48;
            v42 = 0LL;
            v44 = 64;
            v43 = 0LL;
            v46 = 0LL;
            v18 = ObCreateObjectEx(0, EtwpRealTimeConnectionObjectType, (int)v41, 1u, Object, 160, 0, 0, &v49, 0LL);
            if ( v18 >= 0 )
            {
              v21 = v49;
              memset(v49, 0, 0xA0uLL);
              LOWORD(v21[5].DmaOperations) = v47;
              *(_QWORD *)&v21[1].Version = Handle;
              v22 = v49;
              v49[1].DmaOperations = (_DMA_OPERATIONS *)KeGetCurrentThread()->ApcState.Process;
              *(_QWORD *)&v22[3].Version = v50;
              v22[3].DmaOperations = (_DMA_OPERATIONS *)v31;
              v22[4] = v36;
              *(_QWORD *)&v22[7].Version = Address;
              LODWORD(v22[7].DmaOperations) = v48;
              v22[8].DmaOperations = v37;
              *(_QWORD *)&v22[9].Version = v38;
              v22[9].DmaOperations = v13;
              *(_DWORD *)&v22[6].Version = v48 >> 12;
              v22[6].DmaOperations = v39;
              v23 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10];
              if ( v23 && ((v29 = *(_WORD *)(v23 + 8), v29 == 332) || v29 == 452) )
                v24 = 16;
              else
                v24 = 0;
              v25 = v49;
              BYTE2(v49[5].DmaOperations) = v24 | BYTE2(v49[5].DmaOperations) & 0xEF;
              v25[2].DmaOperations = (_DMA_OPERATIONS *)a1;
              inserted = ObInsertObjectEx(v25, 0LL, 0x400u, 1, 0, (__int64)&v40, (unsigned __int64 *)a1 + 9);
              if ( inserted >= 0 )
              {
                ExAcquirePushLockExclusiveEx(v17 + 704, 0LL);
                *(_QWORD *)(v17 + 368) = v25;
                ExReleasePushLockEx(v17 + 704, 0LL);
                EtwpSynchronizeWithLogger(v17, 32LL);
              }
              LOBYTE(v26) = 1;
              EtwpReleaseLoggerContext(v17, v26);
              return (unsigned int)inserted;
            }
          }
        }
      }
    }
  }
  else
  {
    v18 = -1073741811;
  }
  LOBYTE(v16) = 1;
  EtwpReleaseLoggerContext(v17, v16);
  if ( Handle )
    ZwClose(Handle);
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  if ( v35 )
    HalPutDmaAdapter(v35);
  return (unsigned int)v18;
}
