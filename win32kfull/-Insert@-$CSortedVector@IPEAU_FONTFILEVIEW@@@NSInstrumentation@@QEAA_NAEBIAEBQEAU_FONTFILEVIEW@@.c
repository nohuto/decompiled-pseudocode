/*
 * XREFs of ?Insert@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIAEBQEAU_FONTFILEVIEW@@@Z @ 0x1C0118C4C
 * Callers:
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C01188EC (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z.c)
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     ??1?$CAutoExclusiveCReaderWriterLock@VCPrioritizedWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAA@XZ @ 0x1C026D138 (--1-$CAutoExclusiveCReaderWriterLock@VCPrioritizedWriterLock@NSInstrumentation@@@NSInstrumentati.c)
 *     ?ReAllocate@?$CSortedVector@_K_K@NSInstrumentation@@AEAA_N_K@Z @ 0x1C02A9A28 (-ReAllocate@-$CSortedVector@_K_K@NSInstrumentation@@AEAA_N_K@Z.c)
 *     ?Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QEAAXXZ @ 0x1C0307DAC (-Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QEAAXXZ.c)
 */

char __fastcall NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Insert(
        __int64 a1,
        unsigned int *a2,
        _QWORD *a3)
{
  char v6; // bp
  unsigned __int64 v7; // r8
  __int64 *v8; // r14
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned int v11; // r11d
  __int64 *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v17; // r9
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  v18 = a1;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1, 0LL);
  v6 = 1;
  _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 16), 0, 1);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 28), 1u);
  if ( *(_DWORD *)(a1 + 24) )
    NSInstrumentation::CPlatformSingleWatierSignal::Wait((NSInstrumentation::CPlatformSingleWatierSignal *)(a1 + 8));
  v7 = *(_QWORD *)(a1 + 40);
  v8 = (__int64 *)(a1 + 48);
  v9 = 0LL;
  if ( !v7 )
    goto LABEL_9;
  v10 = *(_QWORD *)(a1 + 40);
  v11 = *a2;
  do
  {
    if ( *(_DWORD *)(*v8 + 16 * ((v10 >> 1) + v9)) >= v11 )
    {
      v10 >>= 1;
    }
    else
    {
      v9 += (v10 >> 1) + 1;
      v10 += -1LL - (v10 >> 1);
    }
  }
  while ( v10 );
  if ( v9 < v7 )
  {
    v12 = (__int64 *)(a1 + 48);
    v17 = *(_QWORD *)(a1 + 48);
    if ( *(_DWORD *)(v17 + 16 * v9) == v11 )
    {
      *(_QWORD *)(v17 + 16 * v9 + 8) = *a3;
LABEL_18:
      NSInstrumentation::CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPrioritizedWriterLock>::~CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPrioritizedWriterLock>(&v18);
      return v6;
    }
  }
  else
  {
LABEL_9:
    v12 = (__int64 *)(a1 + 48);
  }
  v13 = *(_QWORD *)(a1 + 32);
  if ( v7 == v13 )
  {
    v8 = v12;
    if ( !(unsigned __int8)NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::ReAllocate(a1, 2 * v13) )
    {
      v6 = 0;
      goto LABEL_18;
    }
  }
  v14 = 16 * v9;
  memmove((void *)(16 * v9 + *v8 + 16), (const void *)(16 * v9 + *v8), 16 * (*(_QWORD *)(a1 + 40) - v9));
  v15 = *v8;
  *(_DWORD *)(v14 + v15) = *a2;
  *(_QWORD *)(v14 + v15 + 8) = *a3;
  ++*(_QWORD *)(a1 + 40);
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 28));
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
  return v6;
}
