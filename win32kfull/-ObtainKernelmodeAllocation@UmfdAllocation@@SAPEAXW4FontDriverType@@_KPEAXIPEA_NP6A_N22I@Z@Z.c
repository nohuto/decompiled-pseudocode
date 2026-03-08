/*
 * XREFs of ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1C00C3FAC
 * Callers:
 *     ?CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ @ 0x1C00C3B70 (-CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ.c)
 *     ?CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z @ 0x1C00C3E60 (-CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureKerningPairs@QueryFontTreeRequest@@AEAAXXZ @ 0x1C03083B4 (-CaptureKerningPairs@QueryFontTreeRequest@@AEAAXXZ.c)
 * Callees:
 *     ?_ValidateAllocationPair@UmfdAllocation@@CA_NW4FontDriverType@@_KPEAV1@PEAXIP6A_N33I@Z@Z @ 0x1C00C3CE4 (-_ValidateAllocationPair@UmfdAllocation@@CA_NW4FontDriverType@@_KPEAV1@PEAXIP6A_N33I@Z@Z.c)
 *     ?LookupCommon@CPointerHashTable@NSInstrumentation@@AEAAPEAUENTRY@12@PEBX@Z @ 0x1C00C42A0 (-LookupCommon@CPointerHashTable@NSInstrumentation@@AEAAPEAUENTRY@12@PEBX@Z.c)
 *     ?_FindAndReferenceExistingKernelmodeAllocation@UmfdAllocation@@CAPEAV1@PEAX@Z @ 0x1C00C4600 (-_FindAndReferenceExistingKernelmodeAllocation@UmfdAllocation@@CAPEAV1@PEAX@Z.c)
 *     ?TryCopyMemoryFromProbedPointer@@YA_NPEAX0I@Z @ 0x1C00C468C (-TryCopyMemoryFromProbedPointer@@YA_NPEAX0I@Z.c)
 *     ?TryProbeForRead@@YA_NPEAXII@Z @ 0x1C00C46AC (-TryProbeForRead@@YA_NPEAXII@Z.c)
 *     ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x1C00C46E0 (-Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z.c)
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C00D7674 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1C012511C (-ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z.c)
 *     ??1?$CAutoExclusiveCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAA@XZ @ 0x1C012DCC4 (--1-$CAutoExclusiveCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrument.c)
 *     ??1?$CAutoSharedCReaderWriterLock@VCPrioritizedWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAA@XZ @ 0x1C0130000 (--1-$CAutoSharedCReaderWriterLock@VCPrioritizedWriterLock@NSInstrumentation@@@NSInstrumentation@.c)
 *     unique_ptr_UmfdAllocation__lambda_e063d8fab83c87fda3b4c41002095086___::_unique_ptr_UmfdAllocation__lambda_e063d8fab83c87fda3b4c41002095086___ @ 0x1C0308200 (unique_ptr_UmfdAllocation__lambda_e063d8fab83c87fda3b4c41002095086___--_unique_ptr_UmfdAllocatio.c)
 */

_DWORD *__fastcall UmfdAllocation::ObtainKernelmodeAllocation(
        __int64 a1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        _BYTE *a5,
        unsigned __int8 (__fastcall *a6)(void *, __int64, _QWORD))
{
  int v9; // r13d
  __int64 v10; // rbx
  _DWORD *v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // r8
  struct NSInstrumentation::CPointerHashTable::ENTRY *v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdi
  unsigned int v18; // r8d
  _BYTE *v19; // r15
  _DWORD *v21; // rax
  _BYTE *v22; // rbx
  struct UmfdAllocation *v23; // rax
  void *v24; // rbx
  __int64 v25; // [rsp+30h] [rbp-48h]
  __int64 v26; // [rsp+38h] [rbp-40h] BYREF
  _DWORD *v27; // [rsp+40h] [rbp-38h] BYREF

  v9 = a1;
  v25 = *(_QWORD *)(SGDGetSessionState(a1) + 40);
  v10 = *(_QWORD *)(v25 + 8);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v10, 0LL);
  v11 = 0LL;
  v13 = **(_QWORD **)(SGDGetSessionState(v12) + 40);
  v26 = v13;
  while ( 1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 24));
    if ( !*(_DWORD *)(v13 + 28) )
      break;
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared((NSInstrumentation::CPrioritizedWriterLock *)v13);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v13, 0LL);
    ExReleasePushLockSharedEx(v13, 0LL, v14);
    KeLeaveCriticalRegion();
  }
  v15 = NSInstrumentation::CPointerHashTable::LookupCommon((NSInstrumentation::CPointerHashTable *)v13, a3);
  if ( v15 )
  {
    v17 = *((_QWORD *)v15 + 1);
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared((NSInstrumentation::CPrioritizedWriterLock *)v13);
    v11 = (_DWORD *)(v17 - 28);
    ++*v11;
  }
  else
  {
    NSInstrumentation::CAutoSharedCReaderWriterLock<NSInstrumentation::CPrioritizedWriterLock>::~CAutoSharedCReaderWriterLock<NSInstrumentation::CPrioritizedWriterLock>(&v26);
  }
  ExReleasePushLockSharedEx(v10, 0LL, v16);
  KeLeaveCriticalRegion();
  v19 = a5;
  if ( a5 )
    *a5 = 0;
  if ( v11 )
  {
    if ( UmfdAllocation::_ValidateAllocationPair(v9, a2, (__int64)v11, a3, a4, a6) )
      return v11 + 7;
    UmfdAllocation::ReleaseKernelmodeAllocation(v11 + 7);
    return 0LL;
  }
  if ( !TryProbeForRead(a3, a4, v18) || a4 + 28 < a4 )
    return 0LL;
  v21 = EngAllocMem(0, a4 + 28, 0x61646647u);
  v27 = v21;
  v11 = v21;
  if ( !v21 )
    goto LABEL_22;
  v21[1] = v9;
  *((_QWORD *)v21 + 1) = a2;
  v21[6] = a4;
  *v21 = 1;
  *((_QWORD *)v21 + 2) = a3;
  if ( !TryCopyMemoryFromProbedPointer(v21 + 7, a3, a4) )
    goto LABEL_22;
  a5 = *(_BYTE **)(v25 + 8);
  v22 = a5;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v22, 0LL);
  v23 = UmfdAllocation::_FindAndReferenceExistingKernelmodeAllocation(a3);
  if ( !v23 )
  {
    if ( NSInstrumentation::CPointerHashTable::Insert(*(NSInstrumentation::CPointerHashTable **)v25, a3, v11 + 7) )
    {
      ExReleasePushLockExclusiveEx(v22, 0LL);
      KeLeaveCriticalRegion();
      if ( v19 )
        *v19 = 1;
      return v11 + 7;
    }
    ExReleasePushLockExclusiveEx(v22, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_22;
  }
  v24 = (char *)v23 + 28;
  if ( !UmfdAllocation::_ValidateAllocationPair(v9, a2, (__int64)v23, a3, a4, a6) )
  {
    UmfdAllocation::ReleaseKernelmodeAllocation(v24);
    NSInstrumentation::CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::~CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>(&a5);
LABEL_22:
    v24 = 0LL;
    goto LABEL_23;
  }
  NSInstrumentation::CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::~CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>(&a5);
LABEL_23:
  unique_ptr_UmfdAllocation__lambda_e063d8fab83c87fda3b4c41002095086___::_unique_ptr_UmfdAllocation__lambda_e063d8fab83c87fda3b4c41002095086___(&v27);
  return v24;
}
