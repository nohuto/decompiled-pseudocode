/*
 * XREFs of EtwpClearSessionAndUnreferenceEntry @ 0x140695580
 * Callers:
 *     EtwpDisableTraceProviders @ 0x140693E28 (EtwpDisableTraceProviders.c)
 * Callees:
 *     EtwpGetEnableInfoIndex @ 0x1402068FC (EtwpGetEnableInfoIndex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140420DD0 (RtlCompareMemory.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     EtwpAllocDataBlock @ 0x14068ED78 (EtwpAllocDataBlock.c)
 *     EtwpUpdateGuidFilterData @ 0x14068FCB8 (EtwpUpdateGuidFilterData.c)
 *     EtwpSendDataBlock @ 0x1406901A8 (EtwpSendDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x1406909A0 (EtwpUnreferenceDataBlock.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x1406934E8 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpGetSchematizedFilterSize @ 0x140694C98 (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x140695094 (EtwpUnreferenceGuidEntry.c)
 *     EtwpCopySchematizedFilters @ 0x1409F23CC (EtwpCopySchematizedFilters.c)
 */

__int64 __fastcall EtwpClearSessionAndUnreferenceEntry(int a1, __int64 a2, char a3)
{
  char v3; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // r15d
  unsigned int v9; // esi
  __int64 v10; // r8
  char v11; // cl
  int v12; // r11d
  __int64 v13; // r9
  unsigned __int8 v14; // dl
  __int64 v15; // r10
  int v16; // r13d
  __int64 v17; // rbx
  unsigned __int8 v18; // cl
  unsigned __int8 v19; // al
  __int128 v20; // xmm1
  _QWORD *v21; // r12
  __int64 v22; // rbx
  __int64 v23; // rsi
  char *v24; // r15
  char v25; // cl
  char v26; // al
  int SchematizedFilterSize; // eax
  int v28; // r13d
  unsigned int v29; // r15d
  int v30; // eax
  __int64 v31; // rcx
  struct _KTHREAD *v32; // rax
  char v33; // [rsp+28h] [rbp-E0h]
  int v35; // [rsp+2Ch] [rbp-DCh]
  __int64 v36; // [rsp+30h] [rbp-D8h] BYREF
  _DWORD *v37; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v38; // [rsp+40h] [rbp-C8h]
  int v39; // [rsp+48h] [rbp-C0h]
  int v40; // [rsp+4Ch] [rbp-BCh]
  __int128 v41; // [rsp+50h] [rbp-B8h]
  __int128 v42; // [rsp+60h] [rbp-A8h]
  _BYTE v43[112]; // [rsp+78h] [rbp-90h] BYREF
  __int128 Source2; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v45; // [rsp+F8h] [rbp-10h]

  v3 = 0;
  v40 = a1;
  Source2 = 0LL;
  v45 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v33 = 0;
  v37 = 0LL;
  v7 = 0;
  v35 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a2 + 408, 0LL);
  *(_QWORD *)(a2 + 416) = KeGetCurrentThread();
  v39 = *(unsigned __int16 *)(a2 + 88);
  LODWORD(v36) = 0;
  if ( v39 == a1 )
    *(_OWORD *)(a2 + 80) = 0LL;
  if ( EtwpGetEnableInfoIndex(a2, a1, &v36) )
  {
    v9 = v36;
    v10 = a2 + 132;
    v11 = v36;
    v41 = 0LL;
    v12 = 0;
    v13 = -1LL;
    v14 = 0;
    *(_QWORD *)&v42 = 0LL;
    v15 = 0LL;
    *((_QWORD *)&v42 + 1) = -1LL;
    *(_DWORD *)(32 * ((unsigned int)v36 + 4LL) + a2) = 0;
    v3 = 1;
    v16 = 1 << v11;
    v17 = 8LL;
    do
    {
      if ( *(_DWORD *)(v10 - 4) )
      {
        v18 = *(_BYTE *)v10;
        v19 = v14;
        LODWORD(v41) = 1;
        if ( v14 <= v18 )
          v19 = v18;
        v15 |= *(_QWORD *)(v10 + 12);
        v13 &= *(_QWORD *)(v10 + 20);
        v14 = v19;
        v12 |= *(_DWORD *)(v10 + 4);
      }
      v10 += 32LL;
      --v17;
    }
    while ( v17 );
    BYTE4(v41) = v14;
    DWORD2(v41) = v12;
    *((_QWORD *)&v42 + 1) = v13;
    *(_QWORD *)&v42 = v15;
    v20 = v42;
    *(_OWORD *)(a2 + 96) = v41;
    *(_OWORD *)(a2 + 112) = v20;
    memset(v43, 0, 0x68uLL);
    EtwpUpdateGuidFilterData(a2, v9, 1, (__int64)v43);
    v21 = *(_QWORD **)(a2 + 56);
    if ( v21 != (_QWORD *)(a2 + 56) )
    {
      v22 = (__int64)v37;
      LOBYTE(v16) = ~(_BYTE)v16;
      LODWORD(v36) = v16;
      do
      {
        if ( a3 )
        {
          v32 = KeGetCurrentThread();
          v23 = (__int64)(v21 - 2);
          v24 = (char *)v21 + 85;
          --v32->KernelApcDisable;
          ExAcquirePushLockExclusiveEx(v21[2] + 408LL, 0LL);
          v22 = (__int64)v37;
          v33 = 1;
          *(_QWORD *)(v21[2] + 416LL) = KeGetCurrentThread();
        }
        else
        {
          v23 = (__int64)v21;
          v24 = (char *)v21 + 100;
        }
        v25 = *v24;
        v21 = (_QWORD *)*v21;
        v26 = *v24 & v16;
        *v24 = v26;
        if ( (*(_BYTE *)(v23 + 98) & 8) != 0 && v39 != v40 || v26 == v25 )
        {
          v7 = v35;
        }
        else
        {
          EtwpComputeRegEntryEnableInfo(v23, (__int64)&Source2);
          SchematizedFilterSize = EtwpGetSchematizedFilterSize(a2, *(_BYTE *)(v23 + 100));
          v28 = SchematizedFilterSize;
          v29 = 120;
          if ( SchematizedFilterSize )
            v29 = SchematizedFilterSize + 136;
          if ( v22 )
          {
            if ( *(_DWORD *)(v22 + 4) != v29 || RtlCompareMemory((const void *)(v22 + 72), &Source2, 0x20uLL) != 32 )
            {
              EtwpUnreferenceDataBlock((volatile signed __int32 *)v22);
              v22 = 0LL;
              v37 = 0LL;
            }
            if ( v22 )
              goto LABEL_26;
          }
          v30 = EtwpAllocDataBlock(v29, 0LL, &v37);
          v22 = (__int64)v37;
          v35 = v30;
          if ( v30 >= 0 )
          {
            *v37 = 3;
            *(_DWORD *)(v22 + 4) = v29;
            v31 = *(_QWORD *)(v23 + 32);
            BYTE3(v38) = 0;
            *(_OWORD *)(v22 + 40) = *(_OWORD *)(v31 + 40);
            *(_OWORD *)(v22 + 72) = Source2;
            *(_OWORD *)(v22 + 88) = v45;
            *(_DWORD *)(v22 + 112) = *(_BYTE *)(a2 + 91) & 1;
            LOWORD(v38) = *(_WORD *)(a2 + 88);
            BYTE2(v38) = *(_BYTE *)(a2 + 90);
            HIDWORD(v38) = *(_DWORD *)(a2 + 80);
            *(_QWORD *)(v22 + 104) = v38;
            if ( v28 )
            {
              *(_DWORD *)(v22 + 132) = 0x80000000;
              *(_DWORD *)(v22 + 128) = v28;
              *(_QWORD *)(v22 + 120) = 136LL;
              EtwpCopySchematizedFilters((void *)(v22 + 136));
              *(_DWORD *)(v22 + 116) = 1;
            }
            else
            {
              *(_DWORD *)(v22 + 116) = 0;
            }
          }
          if ( v22 )
          {
LABEL_26:
            v7 = EtwpSendDataBlock(v23, v22);
            v35 = v7;
          }
          else
          {
            v7 = v35;
          }
          LOBYTE(v16) = v36;
        }
        if ( v33 )
        {
          *(_QWORD *)(*(_QWORD *)(v23 + 32) + 416LL) = 0LL;
          ExReleasePushLockEx((__int64 *)(*(_QWORD *)(v23 + 32) + 408LL), 0LL);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          v22 = (__int64)v37;
          v33 = 0;
        }
      }
      while ( v21 != (_QWORD *)(a2 + 56) );
      if ( v22 )
        EtwpUnreferenceDataBlock((volatile signed __int32 *)v22);
    }
  }
  *(_QWORD *)(a2 + 416) = 0LL;
  ExReleasePushLockEx((__int64 *)(a2 + 408), 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v3 )
    EtwpUnreferenceGuidEntry((__int64 *)a2);
  return v7;
}
