/*
 * XREFs of MiFinishCreateSection @ 0x1407D0800
 * Callers:
 *     MiCreateSection @ 0x1407D05D0 (MiCreateSection.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     RtlAvlInsertNodeEx @ 0x140331710 (RtlAvlInsertNodeEx.c)
 *     MiDereferencePerSessionProtos @ 0x14075B72C (MiDereferencePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x14075B874 (MiCreatePerSessionProtos.c)
 *     MiFindEmptyAddressRangeDownTree @ 0x140760F18 (MiFindEmptyAddressRangeDownTree.c)
 *     ObCheckActiveHandles @ 0x140790BB4 (ObCheckActiveHandles.c)
 *     ObCreateObjectEx @ 0x1407D1090 (ObCreateObjectEx.c)
 *     MiDereferenceFailedControlArea @ 0x14085F4AC (MiDereferenceFailedControlArea.c)
 */

__int64 __fastcall MiFinishCreateSection(int *a1)
{
  __int64 v1; // rsi
  unsigned int v3; // edx
  int v4; // ecx
  bool v5; // zf
  int v6; // r8d
  _QWORD *v7; // rdx
  char v8; // r14
  int v9; // r9d
  int Object; // ebp
  int v11; // ecx
  __int64 v13; // rax
  int v14; // r8d
  int v15; // eax
  int PerSessionProtos; // edi
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r15
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v21; // rax
  __int64 v22; // r14
  int EmptyAddressRangeDownTree; // r14d
  bool v24; // r8
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r9
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // [rsp+88h] [rbp+10h] BYREF

  v1 = *((_QWORD *)a1 + 8);
  v28 = 0LL;
  *((_QWORD *)a1 + 15) = v1;
  v3 = *(_DWORD *)(v1 + 56) & 0xFFF7FFFF;
  v4 = a1[35] & 0x7FFFFFFF;
  a1[34] = v3;
  v5 = (a1[4] & 0x1000000) == 0;
  a1[35] = v4;
  if ( !v5 )
  {
    v14 = *a1;
    v15 = v3;
    if ( (*a1 & 0x400) == 0 )
    {
      v15 = v3 | 0x80000;
      a1[34] = v3 | 0x80000;
    }
    v3 = v15;
    if ( *((_BYTE *)a1 + 24) <= 1u && (v14 & 0x100000) == 0 )
      a1[35] = v4 | 0x80000000;
  }
  v6 = *(_DWORD *)(v1 + 56);
  if ( (v6 & 0x8000000) != 0 )
  {
    PerSessionProtos = MiCreatePerSessionProtos((_QWORD *)v1, a1[42]);
    if ( PerSessionProtos < 0 )
    {
      ObfDereferenceObject(*((PVOID *)a1 + 7));
      MiDereferenceFailedControlArea(a1);
      return (unsigned int)PerSessionProtos;
    }
    a1[35] ^= (a1[35] ^ (a1[42] << 12)) & 0x7FFFF000;
  }
  else if ( !*((_QWORD *)a1 + 6) && (a1[7] & 0x44) != 0 && (v6 & 0x20) == 0 )
  {
    if ( *(_QWORD *)(v1 + 64) )
    {
      a1[34] = v3 | 0x10000000;
      _InterlockedIncrement((volatile signed __int32 *)(v1 + 92));
      if ( !ObCheckActiveHandles(*((_QWORD *)a1 + 7)) )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v1 + 92));
        ObfDereferenceObject(*((PVOID *)a1 + 7));
        MiDereferenceFailedControlArea(a1);
        return 3221225508LL;
      }
    }
  }
  v7 = (_QWORD *)*((_QWORD *)a1 + 7);
  v8 = 0;
  if ( v7 )
  {
    if ( (*(_DWORD *)(v7[1] + 52LL) & 0x10) != 0 )
      v8 = 1;
    else
      ObfDereferenceObject(v7);
  }
  v9 = 128;
  if ( (*(_DWORD *)(v1 + 56) & 0x20) != 0 || !*(_QWORD *)(v1 + 64) )
  {
    v13 = v1 + 128;
    do
    {
      v13 = *(_QWORD *)(v13 + 16);
      v9 += 56;
    }
    while ( v13 );
  }
  Object = ObCreateObjectEx(
             *((unsigned __int8 *)a1 + 72),
             (_DWORD)MmSectionObjectType,
             *((_QWORD *)a1 + 1),
             *((unsigned __int8 *)a1 + 72));
  if ( Object < 0 )
  {
    if ( (a1[34] & 0x10000000) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v1 + 92));
    }
    else if ( (*(_DWORD *)(v1 + 56) & 0x8000000) != 0 )
    {
      MiDereferencePerSessionProtos((__int64 *)v1, ((unsigned int)a1[35] >> 12) & 0x7FFFF);
    }
    if ( v8 )
      ObfDereferenceObject(*((PVOID *)a1 + 7));
    MiDereferenceFailedControlArea(a1);
    return (unsigned int)Object;
  }
  MEMORY[0] = *((_OWORD *)a1 + 5);
  MEMORY[0x10] = *((_OWORD *)a1 + 6);
  MEMORY[0x20] = *((_OWORD *)a1 + 7);
  MEMORY[0x30] = *((_OWORD *)a1 + 8);
  MEMORY[0x18] = 0LL;
  if ( v8 )
  {
    v17 = *((_QWORD *)a1 + 7);
    MEMORY[0x28] = v17;
    if ( (*(_DWORD *)(v1 + 56) & 0x20) != 0 )
      v18 = v17 | 1;
    else
      v18 = v17 | 2;
    MEMORY[0x28] = v18;
  }
  if ( (*a1 & 1) != 0 )
    goto LABEL_16;
  v11 = MEMORY[0x38] | 0x10000;
  MEMORY[0x38] |= 0x10000u;
  if ( (a1[4] & 0x400000) != 0 )
  {
    v11 |= 0x4000u;
    MEMORY[0x38] = v11;
  }
  if ( (a1[4] & 0x200000) == 0 )
    goto LABEL_16;
  MEMORY[0x38] = v11 | 0x40;
  v19 = MEMORY[0x30];
  if ( MEMORY[0x30] > (unsigned __int64)qword_140C651E8 )
  {
    ObfDereferenceObject(0LL);
    return 3221225495LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v21 = KeAbPreAcquire((__int64)&qword_140C651D0, 0LL);
  v22 = v21;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C651D0, 0LL) )
    ExfAcquirePushLockExclusiveEx(&qword_140C651D0, v21, (__int64)&qword_140C651D0);
  if ( v22 )
    *(_BYTE *)(v22 + 18) = 1;
  EmptyAddressRangeDownTree = MiFindEmptyAddressRangeDownTree(
                                &qword_140C651C8,
                                v19,
                                0x10000uLL,
                                0LL,
                                0x10000uLL,
                                qword_140C651E8,
                                &v28);
  if ( EmptyAddressRangeDownTree < 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C651D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C651D0);
    KeAbPostRelease((ULONG_PTR)&qword_140C651D0);
    v5 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v5 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    ObfDereferenceObject(0LL);
    return (unsigned int)EmptyAddressRangeDownTree;
  }
  v24 = 0;
  MEMORY[0x18] = v28 >> 12;
  MEMORY[0x20] = ((unsigned __int64)(v19 + 4095) >> 12) + (v28 >> 12) - 1;
  v25 = qword_140C651C8;
  v26 = v28 >> 12;
  if ( !qword_140C651C8 )
    goto LABEL_61;
  while ( v26 <= (*(unsigned int *)(v25 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v25 + 33) << 32))
       && v26 < (*(unsigned int *)(v25 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v25 + 32) << 32)) )
  {
    v27 = *(_QWORD *)v25;
    if ( !*(_QWORD *)v25 )
      goto LABEL_61;
LABEL_69:
    v25 = v27;
  }
  v27 = *(_QWORD *)(v25 + 8);
  if ( v27 )
    goto LABEL_69;
  v24 = 1;
LABEL_61:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140C651C8, v25, v24, 0LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C651D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C651D0);
  KeAbPostRelease((ULONG_PTR)&qword_140C651D0);
  v5 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v5 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
LABEL_16:
  *((_QWORD *)a1 + 18) = 0LL;
  return (unsigned int)Object;
}
