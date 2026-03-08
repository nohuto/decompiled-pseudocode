/*
 * XREFs of IovpCompleteRequest2 @ 0x140AC9AFC
 * Callers:
 *     IovpLocalCompletionRoutine @ 0x140ABEB60 (IovpLocalCompletionRoutine.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MdlInvariantPostProcessing1 @ 0x1405CD074 (MdlInvariantPostProcessing1.c)
 *     ViErrorReport6 @ 0x1405CDBC0 (ViErrorReport6.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x1405D0134 (ViIrpDatabaseAcquireLockExclusive.c)
 *     ViIrpDatabaseReleaseLockExclusive @ 0x1405D017C (ViIrpDatabaseReleaseLockExclusive.c)
 *     VfUtilAddressRangeRemoveCheckEmpty @ 0x140ABF44C (VfUtilAddressRangeRemoveCheckEmpty.c)
 *     IovpValidateStatusInformation @ 0x140ACA15C (IovpValidateStatusInformation.c)
 *     VfMajorAdvanceIrpStatus @ 0x140ACFE6C (VfMajorAdvanceIrpStatus.c)
 *     VfMajorVerifyFinalIrpStack @ 0x140AD01D8 (VfMajorVerifyFinalIrpStack.c)
 *     VfMajorVerifyIrpStackUpward @ 0x140AD0324 (VfMajorVerifyIrpStackUpward.c)
 *     IovpSessionDataDereference @ 0x140ADAFB4 (IovpSessionDataDereference.c)
 *     IovpSessionDataReference @ 0x140ADB01C (IovpSessionDataReference.c)
 *     ViWdIrpBeforeCompletionRoutine @ 0x140ADB358 (ViWdIrpBeforeCompletionRoutine.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140ADE8EC (VfIrpDatabaseEntryReleaseLock.c)
 */

void __fastcall IovpCompleteRequest2(ULONG_PTR a1, __int64 a2)
{
  _DWORD *v2; // r14
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r13
  __int64 v8; // rcx
  int v9; // eax
  int v10; // esi
  BOOL v11; // r15d
  _BYTE *v12; // r12
  int v13; // eax
  _QWORD *v14; // r15
  _QWORD *v15; // rsi
  __int64 v16; // rax
  int v17; // ecx
  int v18; // edx
  __int64 v19; // rax
  bool v20; // zf
  unsigned __int64 v21; // rbx
  __int64 v22; // rax
  unsigned int i; // edx
  __int64 v24; // r8
  __int64 v25; // rcx
  unsigned int v26; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v27; // [rsp+80h] [rbp+18h] BYREF
  __int64 v28; // [rsp+88h] [rbp+20h]

  v2 = *(_DWORD **)a2;
  if ( *(_QWORD *)a2 )
  {
    v5 = *(_QWORD *)(a2 + 8);
    *(_BYTE *)(v5 + 16) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 8));
    if ( *(_QWORD *)(v5 + 248) )
      ViWdIrpBeforeCompletionRoutine();
    v6 = *(char *)(a1 + 67);
    v27 = *(_DWORD *)(a1 + 48);
    v7 = (__int64)&v2[30 * v6 - 10];
    v28 = 120 * v6;
    v8 = *(_QWORD *)(v7 + 8);
    v9 = *(_DWORD *)(v8 + 4);
    if ( (v9 & 0x40000000) != 0 )
    {
      v10 = 0;
    }
    else
    {
      v10 = 1;
      *(_DWORD *)(v8 + 4) = v9 | 0x40000000;
      LOBYTE(v6) = *(_BYTE *)(a1 + 67);
    }
    v11 = v7 == v8;
    v12 = (_BYTE *)(*(_QWORD *)(a1 + 184) - 72LL);
    if ( (char)v6 <= *(char *)(a1 + 66)
      && (unsigned __int8)(*v12 - 3) <= 1u
      && *(_QWORD *)(a1 + 8)
      && (MmVerifierData & 0x6000) != 0 )
    {
      MdlInvariantPostProcessing1(v5, a1, *(_QWORD *)(a1 + 184) - 72LL);
    }
    VfMajorVerifyIrpStackUpward(v5, (_DWORD)v12, v7, v10, v11);
    v13 = v2[8];
    v26 = v27;
    if ( (v13 & 2) == 0 && (*(_DWORD *)(v7 + 4) & 0x4000000) != 0 && !*(_BYTE *)(a1 + 65) )
    {
      if ( (*(_DWORD *)(a1 + 16) & 0x800) != 0 )
        ViErrorReport6(574LL, *(const void **)&v2[(unsigned __int64)v28 / 4], (const void *)a1, v27);
      v2[8] |= 2u;
    }
    v14 = (_QWORD *)(v7 + 16);
    while ( 1 )
    {
      v15 = (_QWORD *)*v14;
      if ( (_QWORD *)*v14 == v14 )
        break;
      if ( (_QWORD *)v15[1] != v14 || (v16 = *v15, *(_QWORD **)(*v15 + 8LL) != v15) )
        __fastfail(3u);
      *v14 = v16;
      *(_QWORD *)(v16 + 8) = v14;
      v17 = *((_DWORD *)v15 - 2) | 0x40000000;
      *((_DWORD *)v15 - 2) = v17;
      *((_DWORD *)v15 + 6) = v27;
      if ( *(_BYTE *)(a1 + 65) )
        *((_DWORD *)v15 - 2) = v17 | 0x2000000;
      IovpValidateStatusInformation(v5, v15[5], v15 + 6, *(_QWORD *)(a2 + 32));
      if ( (*(_DWORD *)(v5 + 56) & 0x20) == 0 )
      {
        if ( (unsigned int)VfMajorAdvanceIrpStatus(v12, v26, &v27) )
        {
          *((_DWORD *)v15 - 2) |= 0x8000000u;
          *((_DWORD *)v15 + 7) = v27;
        }
      }
    }
    *(_DWORD *)(a1 + 48) = v27;
    memset((void *)v7, 0, 0x78uLL);
    *(_QWORD *)(v7 + 24) = v7 + 16;
    *v14 = v14;
    v18 = *(unsigned __int8 *)(v5 + 184);
    *(_BYTE *)(v5 + 186) = *(_BYTE *)(a1 + 67) + 1;
    if ( v18 == *(char *)(a1 + 67) )
    {
      *(_QWORD *)a2 = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
      VfMajorVerifyFinalIrpStack(v5, *(_QWORD *)(a1 + 184) - 72LL);
      v19 = *(_QWORD *)v2;
      *(_DWORD *)(v19 + 56) &= ~1u;
      *(_QWORD *)(v19 + 240) = 0LL;
      IovpSessionDataDereference(v2);
      v20 = (*(_DWORD *)(v5 + 24))-- == 1;
      LOBYTE(v26) = 0;
      if ( v20 )
      {
        ViIrpDatabaseAcquireLockExclusive((KIRQL *)&v26);
        v21 = *(_QWORD *)v5;
        (*(void (__fastcall **)(__int64, _QWORD, __int64))(v5 + 48))(v5, *(_QWORD *)v5, 1LL);
        *(_QWORD *)v5 = 0LL;
        VfUtilAddressRangeRemoveCheckEmpty(
          (__int64 *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (v21 >> 12))),
          v21);
        ViIrpDatabaseReleaseLockExclusive(v26);
      }
      _InterlockedDecrement((volatile signed __int32 *)(v5 + 20));
      v22 = *(_QWORD *)(v5 + 224);
      if ( v22 )
      {
        for ( i = 0; i < *(_DWORD *)v22; ++i )
        {
          v24 = *(_QWORD *)(v22 + 8);
          v25 = 32LL * i;
          if ( *(_QWORD *)(v25 + v24) )
          {
            *(_OWORD *)(v25 + v24) = 0LL;
            *(_OWORD *)(v25 + v24 + 16) = 0LL;
          }
          v22 = *(_QWORD *)(v5 + 224);
        }
        *(_QWORD *)(v22 + 16) = 0LL;
      }
    }
    else
    {
      IovpSessionDataReference(v2);
      _InterlockedAdd((volatile signed __int32 *)(v5 + 20), 1u);
    }
    VfIrpDatabaseEntryReleaseLock(v5);
    --*(_DWORD *)(a2 + 20);
  }
}
