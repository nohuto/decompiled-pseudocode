/*
 * XREFs of IopConnectInterrupt @ 0x1406F43D8
 * Callers:
 *     IoConnectInterruptEx @ 0x1406F4AE0 (IoConnectInterruptEx.c)
 *     IopConnectMessageBasedInterrupt @ 0x1408502F8 (IopConnectMessageBasedInterrupt.c)
 *     IopConnectLineBasedInterrupt @ 0x140853C50 (IopConnectLineBasedInterrupt.c)
 *     IopConnectInterruptFullySpecified @ 0x140857BF0 (IopConnectInterruptFullySpecified.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140236BF0 (KeGetProcessorIndexFromNumber.c)
 *     KeFreeInterrupt @ 0x14028E364 (KeFreeInterrupt.c)
 *     KeAllocateInterrupt @ 0x14028F83C (KeAllocateInterrupt.c)
 *     KeInitializeInterruptEx @ 0x14028F8EC (KeInitializeInterruptEx.c)
 *     KeConnectInterrupt @ 0x14028FA54 (KeConnectInterrupt.c)
 *     KeVerifyGroupAffinity @ 0x140290374 (KeVerifyGroupAffinity.c)
 *     KeInitializeDpc @ 0x140305660 (KeInitializeDpc.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     IoAddTriageDumpDataBlock @ 0x14038486C (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PnpTraceInterruptConnection @ 0x1406F484C (PnpTraceInterruptConnection.c)
 *     IopInitializeActiveConnectBlock @ 0x1406F490C (IopInitializeActiveConnectBlock.c)
 *     IopDestroyActiveConnectBlock @ 0x1406F49E0 (IopDestroyActiveConnectBlock.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x140847284 (IopAcquireReleaseConnectLockInternal.c)
 *     IopAllocatePassiveInterruptBlock @ 0x1408472F4 (IopAllocatePassiveInterruptBlock.c)
 *     IopDestroyPassiveInterruptBlock @ 0x1409552AC (IopDestroyPassiveInterruptBlock.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopConnectInterrupt(
        __int64 *a1,
        ULONG_PTR a2,
        __int64 (__fastcall *a3)(),
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        char a8,
        char a9,
        __int64 a10,
        __int64 a11)
{
  __m128i v14; // xmm0
  int v15; // esi
  unsigned __int64 v16; // r12
  unsigned __int64 v18; // r14
  __int64 Pool2; // rax
  __int64 v20; // rsi
  _DWORD *v21; // rdx
  int v22; // eax
  __int64 v23; // rcx
  __m128i v24; // xmm0
  unsigned __int16 v25; // ax
  char v26; // cl
  unsigned __int8 v27; // bl
  PSLIST_ENTRY Interrupt; // rax
  int v29; // ebx
  __int64 v30; // rcx
  _OWORD *v31; // rax
  _OWORD *v32; // rdx
  __int64 v33; // rbx
  __int64 v34; // rcx
  __int128 v35; // xmm1
  PSLIST_ENTRY *v37; // rdi
  __int64 v38; // rcx
  _WORD *v39; // rcx
  __int64 v40; // rcx
  unsigned __int16 *v41; // rsi
  _WORD *v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  int v45; // [rsp+70h] [rbp-98h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+88h] [rbp-80h] BYREF
  int v47; // [rsp+8Ch] [rbp-7Ch]
  unsigned int v48; // [rsp+90h] [rbp-78h]
  ULONG ProcessorIndexFromNumber; // [rsp+94h] [rbp-74h]
  __m128i v50; // [rsp+98h] [rbp-70h] BYREF
  __int64 v51; // [rsp+A8h] [rbp-60h]
  _DWORD *v52; // [rsp+B0h] [rbp-58h]
  __int64 v53; // [rsp+B8h] [rbp-50h]
  _QWORD v54[16]; // [rsp+C8h] [rbp-40h] BYREF
  bool v58; // [rsp+190h] [rbp+88h]
  char v59; // [rsp+190h] [rbp+88h]
  char v60; // [rsp+1A0h] [rbp+98h]
  char v61; // [rsp+1A8h] [rbp+A0h]

  memset(v54, 0, 0x50uLL);
  *a1 = 0LL;
  ProcNumber = 0;
  v60 = 0;
  v51 = 0LL;
  IopInitializeActiveConnectBlock(a11, v54);
  v14 = *(__m128i *)(a11 + 32);
  v15 = *(_DWORD *)(a11 + 24);
  v48 = *(_DWORD *)(a11 + 12);
  v50 = v14;
  v47 = v15;
  v16 = qword_140D1EFE8[(unsigned __int16)_mm_extract_epi16(v14, 4)] & v14.m128i_i64[0];
  v61 = *(_BYTE *)(a11 + 16);
  v50.m128i_i64[0] = v16;
  if ( !*(_DWORD *)(a11 + 8)
    && !((unsigned __int8 (__fastcall *)(_QWORD, _QWORD))off_140C01B90[0])(0LL, *(unsigned int *)(a11 + 64))
    && (unsigned int)(*(_DWORD *)(a11 + 20) - 3) <= 1 )
  {
    v60 = 1;
    v47 = 0;
  }
  v58 = a8 == 0;
  if ( !KeVerifyGroupAffinity((__int64)&v50, 0)
    || (v18 = (0x101010101010101LL
             * ((((v16 - ((v16 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v16 - ((v16 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
               + ((((v16 - ((v16 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                 + (((v16 - ((v16 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56,
        !(_BYTE)v18) )
  {
    v29 = -1073741811;
    goto LABEL_30;
  }
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(8 * (char)v18 + 504), 1852403529LL);
  v20 = Pool2;
  if ( !Pool2 )
  {
    v29 = -1073741670;
    goto LABEL_30;
  }
  KeInitializeDpc((PRKDPC)(Pool2 + 432), 0LL, 0LL);
  v22 = v47;
  v23 = v20;
  *(_OWORD *)(v20 + 16) = *(_OWORD *)a11;
  *(_OWORD *)(v20 + 32) = *(_OWORD *)(a11 + 16);
  *(_OWORD *)(v20 + 48) = *(_OWORD *)(a11 + 32);
  *(_OWORD *)(v20 + 64) = *(_OWORD *)(a11 + 48);
  *(_OWORD *)(v20 + 80) = *(_OWORD *)(a11 + 64);
  v24 = v50;
  *(_OWORD *)(v20 + 96) = *(_OWORD *)(a11 + 80);
  *(_DWORD *)(v20 + 40) = v22;
  *(__m128i *)(v20 + 48) = v24;
  if ( a7 )
    v23 = a7;
  *(_BYTE *)(v20 + 400) = v58;
  v53 = v23;
  if ( !a8 )
    v51 = v20 + 408;
  v25 = v50.m128i_u16[4];
  v26 = 0;
  v27 = 0;
  *(_QWORD *)(v20 + 8) = v16;
  ProcNumber.Group = v25;
  ProcNumber.Reserved = 0;
  v59 = 0;
  if ( (char)v18 <= 0 )
  {
LABEL_17:
    if ( a8 || (v29 = IopAllocatePassiveInterruptBlock(v20 + 16, &v50), v29 >= 0) )
    {
      if ( v54[3] )
      {
        LOBYTE(v21) = 1;
        IopAcquireReleaseConnectLockInternal(v54, v21, 0LL);
      }
      v29 = KeConnectInterrupt((__int64 *)(v20 + 504), v18, v20 + 16);
      if ( v54[3] )
        IopAcquireReleaseConnectLockInternal(v54, 0LL, 0LL);
      if ( v29 >= 0 )
      {
        if ( a2 )
        {
          v30 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
          if ( !v30 || (*(_DWORD *)(v30 + 396) & 0x20000) != 0 )
          {
            IoAddTriageDumpDataBlock(a2, (PVOID)*(unsigned __int16 *)(a2 + 2));
            v38 = *(_QWORD *)(a2 + 8);
            if ( v38 )
            {
              IoAddTriageDumpDataBlock(v38, (PVOID)(unsigned int)*(__int16 *)(v38 + 2));
              v39 = (_WORD *)(*(_QWORD *)(a2 + 8) + 56LL);
              if ( *v39 )
              {
                IoAddTriageDumpDataBlock((ULONG)v39, (PVOID)2);
                IoAddTriageDumpDataBlock(
                  *(_QWORD *)(*(_QWORD *)(a2 + 8) + 64LL),
                  (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 56LL));
              }
            }
            v40 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
            if ( v40 )
            {
              v41 = (unsigned __int16 *)(v40 + 40);
              IoAddTriageDumpDataBlock(v40, (PVOID)0x388);
              if ( *v41 )
              {
                IoAddTriageDumpDataBlock((ULONG)v41, (PVOID)2);
                IoAddTriageDumpDataBlock(*((_QWORD *)v41 + 1), (PVOID)*v41);
              }
              v42 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 56LL);
              if ( *v42 )
              {
                IoAddTriageDumpDataBlock((ULONG)v42, (PVOID)2);
                IoAddTriageDumpDataBlock(
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 64LL),
                  (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 56LL));
              }
              v43 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 16LL);
              if ( v43 && *(_WORD *)(v43 + 56) )
              {
                IoAddTriageDumpDataBlock(v43 + 56, (PVOID)2);
                v44 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 16LL);
                IoAddTriageDumpDataBlock(*(_QWORD *)(v44 + 64), (PVOID)*(unsigned __int16 *)(v44 + 56));
              }
            }
            KeBugCheckEx(0xCAu, 2uLL, a2, 0LL, 0LL);
          }
          ObfReferenceObjectWithTag((PVOID)a2, 0x54706E50u);
          *(_QWORD *)(v20 + 496) = a2;
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a2 + 312) + 96LL));
        }
        v31 = *(_OWORD **)(v20 + 504);
        v32 = (_OWORD *)(v20 + 112);
        v33 = 2LL;
        v34 = 128LL;
        do
        {
          *v32 = *v31;
          v32[1] = v31[1];
          v32[2] = v31[2];
          v32[3] = v31[3];
          v32[4] = v31[4];
          v32[5] = v31[5];
          v32[6] = v31[6];
          v32 += 8;
          v35 = v31[7];
          v31 += 8;
          *(v32 - 1) = v35;
          --v33;
        }
        while ( v33 );
        LOBYTE(v34) = 1;
        v29 = 0;
        *v32 = *v31;
        v32[1] = v31[1];
        *a1 = v20;
        PnpTraceInterruptConnection(v34);
        goto LABEL_30;
      }
      if ( !a8 )
        IopDestroyPassiveInterruptBlock(v48);
    }
    if ( (char)v18 > 0 )
      goto LABEL_39;
    goto LABEL_43;
  }
  while ( !_bittest64((const __int64 *)&v16, v27) )
  {
LABEL_16:
    ++v27;
    if ( v26 >= (char)v18 )
      goto LABEL_17;
  }
  ProcNumber.Number = v27;
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
  Interrupt = KeAllocateInterrupt((union _SLIST_HEADER *)KiProcessorBlock[ProcessorIndexFromNumber]);
  v52 = Interrupt;
  if ( Interrupt )
  {
    memset(Interrupt, 0, 0x120uLL);
    KeInitializeInterruptEx(
      v52,
      a3,
      a4,
      a5,
      a6,
      v53,
      v51,
      v48,
      v61,
      a8,
      v47,
      a9,
      ProcessorIndexFromNumber,
      v45,
      v60,
      v20 + 16);
    v21 = v52;
    *(_QWORD *)(v20 + 8LL * v59 + 504) = v52;
    v26 = ++v59;
    goto LABEL_16;
  }
  v29 = -1073741670;
LABEL_39:
  v37 = (PSLIST_ENTRY *)(v20 + 504);
  do
  {
    if ( *v37 )
      KeFreeInterrupt(*v37);
    ++v37;
    --v18;
  }
  while ( v18 );
LABEL_43:
  ExFreePoolWithTag((PVOID)v20, 0x6E696F49u);
LABEL_30:
  IopDestroyActiveConnectBlock(v54);
  return (unsigned int)v29;
}
