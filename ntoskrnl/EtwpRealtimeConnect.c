/*
 * XREFs of EtwpRealtimeConnect @ 0x140748BFC
 * Callers:
 *     NtTraceControl @ 0x140694040 (NtTraceControl.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     EtwpCheckLoggerControlAccess @ 0x140692E00 (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x14069349C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140693AFC (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpOpenConsumer @ 0x14074902C (EtwpOpenConsumer.c)
 *     EtwpSynchronizeWithLogger @ 0x140749078 (EtwpSynchronizeWithLogger.c)
 *     ObInsertObjectEx @ 0x1407BB7C0 (ObInsertObjectEx.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 *     ObCreateObjectEx @ 0x1407D1090 (ObCreateObjectEx.c)
 */

__int64 __fastcall EtwpRealtimeConnect(__int64 a1)
{
  PVOID v2; // r15
  PVOID v3; // r12
  volatile void *v4; // rsi
  unsigned __int64 v5; // r13
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  _KPROCESS *Process; // rcx
  SIZE_T v10; // rdx
  __int16 v11; // ax
  char v12; // al
  unsigned int *v13; // rax
  unsigned int *v14; // rsi
  int v15; // ebx
  void *v16; // rcx
  void *v17; // rcx
  int v18; // r9d
  _KPROCESS *v19; // rcx
  char v20; // cl
  int inserted; // edi
  __int16 v23; // ax
  char v24; // al
  PVOID Object; // [rsp+50h] [rbp-C8h] BYREF
  PVOID v26; // [rsp+58h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-B8h] BYREF
  volatile void *Address; // [rsp+68h] [rbp-B0h]
  unsigned __int64 v29; // [rsp+70h] [rbp-A8h]
  unsigned __int64 v30; // [rsp+78h] [rbp-A0h]
  volatile void *v31; // [rsp+80h] [rbp-98h]
  unsigned __int64 v32; // [rsp+88h] [rbp-90h]
  struct _LIST_ENTRY *Flink; // [rsp+90h] [rbp-88h]
  volatile void *v34; // [rsp+98h] [rbp-80h]
  __int64 v35; // [rsp+A0h] [rbp-78h] BYREF
  _DWORD v36[2]; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v37; // [rsp+B0h] [rbp-68h]
  __int64 v38; // [rsp+B8h] [rbp-60h]
  int v39; // [rsp+C0h] [rbp-58h]
  int v40; // [rsp+C4h] [rbp-54h]
  __int128 v41; // [rsp+C8h] [rbp-50h]
  unsigned int v42; // [rsp+120h] [rbp+8h]
  unsigned int v43; // [rsp+128h] [rbp+10h]

  v35 = 0LL;
  v36[1] = 0;
  v40 = 0;
  v2 = 0LL;
  v3 = 0LL;
  v42 = *(_DWORD *)a1;
  Handle = 0LL;
  v34 = *(volatile void **)(a1 + 16);
  Address = *(volatile void **)(a1 + 8);
  v43 = *(_DWORD *)(a1 + 4);
  v30 = *(_QWORD *)(a1 + 48);
  v4 = *(volatile void **)(a1 + 40);
  v31 = v4;
  v5 = *(_QWORD *)(a1 + 56);
  v32 = v5;
  v29 = *(_QWORD *)(a1 + 64);
  ProbeForWrite(v34, (((v43 >> 12) + 31) >> 3) & 0x1FFFFFFC, 4u);
  ProbeForWrite(Address, v43, 4u);
  v6 = v30;
  if ( v30 >= 0x7FFFFFFF0000LL )
    v6 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v6 = *(_DWORD *)v6;
  v7 = v5;
  if ( v5 >= 0x7FFFFFFF0000LL )
    v7 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v7 = *(_DWORD *)v7;
  v8 = v29;
  if ( v29 >= 0x7FFFFFFF0000LL )
    v8 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v8 = *(_DWORD *)v8;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !Process[1].Affinity.StaticBitmap[30]
    || ((v11 = WORD2(Process[2].Affinity.StaticBitmap[20]), v11 == 332) || v11 == 452 ? (v12 = 1) : (v12 = 0),
        v10 = 4LL,
        !v12) )
  {
    v10 = 8LL;
  }
  ProbeForWrite(v4, v10, 4u);
  Flink = PsGetCurrentServerSiloGlobals()[54].Flink;
  v13 = EtwpAcquireLoggerContextByLoggerId((__int64)Flink, v42, 1);
  v14 = v13;
  if ( !v13 )
    return 3221225485LL;
  if ( (v13[3] & 0x100) != 0 )
  {
    v15 = EtwpCheckLoggerControlAccess(0x400u, (__int64)v13);
    if ( v15 >= 0 )
    {
      v15 = EtwpOpenConsumer(&Handle);
      if ( v15 >= 0 )
      {
        v16 = *(void **)(a1 + 24);
        Object = 0LL;
        v15 = ObReferenceObjectByHandle(v16, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
        v3 = Object;
        if ( v15 >= 0 )
        {
          v17 = *(void **)(a1 + 32);
          v26 = 0LL;
          v15 = ObReferenceObjectByHandle(v17, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &v26, 0LL);
          v2 = v26;
          if ( v15 >= 0 )
          {
            v36[0] = 48;
            v37 = 0LL;
            v39 = 64;
            v38 = 0LL;
            v41 = 0LL;
            LOBYTE(v18) = 1;
            v15 = ObCreateObjectEx(0, (_DWORD)EtwpRealTimeConnectionObjectType, (unsigned int)v36, v18);
            if ( v15 >= 0 )
            {
              memset(0LL, 0, 0xA0uLL);
              MEMORY[0x58] = v42;
              MEMORY[0x10] = Handle;
              MEMORY[0x18] = KeGetCurrentThread()->ApcState.Process;
              MEMORY[0x30] = Object;
              MEMORY[0x38] = v26;
              MEMORY[0x40] = v30;
              MEMORY[0x48] = v31;
              MEMORY[0x70] = Address;
              MEMORY[0x78] = v43;
              MEMORY[0x88] = v32;
              MEMORY[0x90] = v29;
              MEMORY[0x98] = Flink;
              MEMORY[0x60] = v43 >> 12;
              MEMORY[0x68] = v34;
              v19 = KeGetCurrentThread()->ApcState.Process;
              if ( v19[1].Affinity.StaticBitmap[30]
                && ((v23 = WORD2(v19[2].Affinity.StaticBitmap[20]), v23 == 332) || v23 == 452 ? (v24 = 1) : (v24 = 0),
                    v24) )
              {
                v20 = 16;
              }
              else
              {
                v20 = 0;
              }
              MEMORY[0x5A] = v20 | MEMORY[0x5A] & 0xEF;
              MEMORY[0x28] = a1;
              inserted = ObInsertObjectEx(0LL, 0LL, 0, (__int64)&v35, a1 + 72);
              if ( inserted >= 0 )
              {
                ExAcquirePushLockExclusiveEx((ULONG_PTR)(v14 + 172), 0LL);
                *((_QWORD *)v14 + 44) = 0LL;
                ExReleasePushLockEx((__int64 *)v14 + 86, 0LL);
                EtwpSynchronizeWithLogger(v14, 32LL);
              }
              EtwpReleaseLoggerContext(v14, 1);
              return (unsigned int)inserted;
            }
          }
        }
      }
    }
  }
  else
  {
    v15 = -1073741811;
  }
  EtwpReleaseLoggerContext(v14, 1);
  if ( Handle )
    ZwClose(Handle);
  if ( v3 )
    ObfDereferenceObject(v3);
  if ( v2 )
    ObfDereferenceObject(v2);
  return (unsigned int)v15;
}
