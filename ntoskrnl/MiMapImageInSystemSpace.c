__int64 __fastcall MiMapImageInSystemSpace(__int64 *a1, int a2, __int64 a3)
{
  unsigned int v6; // r14d
  __int64 *v7; // rax
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 SessionId; // rax
  unsigned int v12; // r15d
  int v13; // r12d
  char *AnyMultiplexedVm; // rax
  __int64 result; // rax
  struct _KPROCESS *v16; // r13
  int v17; // r14d
  _QWORD v18[8]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v19; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v20; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v21; // [rsp+C8h] [rbp+58h] BYREF

  v19 = 0LL;
  memset(v18, 0, sizeof(v18));
  *(_QWORD *)a3 = 0LL;
  v6 = *(_DWORD *)(*(_QWORD *)(*a1 + 56) + 64LL);
  if ( !v6 )
    return 3221225595LL;
  if ( (unsigned int)MiControlAreaRequiresCharge((__int64)a1, 4LL) == 1 )
  {
    v7 = 0LL;
  }
  else
  {
    result = MiReferenceActiveSubsection(a1 + 16, 648, 0x11u);
    if ( (int)result < 0 )
      return result;
    v7 = a1;
  }
  *(_QWORD *)(a3 + 8) = v7;
  if ( (a2 & 1) != 0 )
    v8 = *(_DWORD *)(*a1 + 8);
  else
    v8 = (v6 >> 12) + ((v6 & 0xFFF) != 0);
  v18[6] = (unsigned __int64)v8 << 12;
  v9 = MiReferenceControlAreaFile((__int64)a1);
  v10 = v9;
  if ( (*(_DWORD *)(*(_QWORD *)(v9 + 8) + 52LL) & 0x10) != 0 )
    v18[5] = v9 | 1;
  else
    v18[5] = a1;
  SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  LODWORD(v18[7]) |= 0x20u;
  v20 = 0LL;
  v12 = a2 | 8;
  HIDWORD(v18[7]) = HIDWORD(v18[7]) & 0x80000002 | ((SessionId & 0x7FFFF) << 12) | 2;
  v21 = v8 << 12;
  v13 = MiMapViewInSystemSpace((unsigned int)v18, (unsigned int)&v19, (unsigned int)&v21, (unsigned int)&v20, 1LL, v12);
  MiDereferenceControlAreaFile((__int64)a1, v10);
  if ( v13 >= 0 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
LABEL_10:
    *(_QWORD *)(a3 + 24) = AnyMultiplexedVm;
    *(_QWORD *)a3 = v19;
    result = 0LL;
    *(_DWORD *)(a3 + 16) = v8;
    return result;
  }
  if ( (v12 & 2) != 0 )
  {
    v21 = 0LL;
    v16 = *(struct _KPROCESS **)(*(_QWORD *)(MiGetControlAreaPartition((__int64)a1) + 200) + 112LL);
    KeStackAttachProcess(v16, (PRKAPC_STATE)(a3 + 32));
    v17 = MiMapImageInSystemProcess(a1, v12, &v19, &v21);
    if ( v17 >= 0 )
    {
      AnyMultiplexedVm = (char *)&v16[1].ActiveProcessors.StaticBitmap[26];
      goto LABEL_10;
    }
    KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)(a3 + 32));
    if ( *(_QWORD *)(a3 + 8) )
      MiReturnCrossPartitionControlAreaCharges((__int64)a1);
    return (unsigned int)v17;
  }
  else
  {
    if ( *(_QWORD *)(a3 + 8) )
      MiReturnCrossPartitionControlAreaCharges((__int64)a1);
    return (unsigned int)v13;
  }
}
