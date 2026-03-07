__int64 __fastcall DXGDOORBELL::Connect(DXGDOORBELL *this, __int64 a2, __int64 a3)
{
  bool v4; // zf
  struct _MDL *v5; // r14
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rsi
  const wchar_t *v9; // r9
  PVOID v10; // rcx
  struct _MDL *Mdl; // r15
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  unsigned int v13; // r8d
  LONGLONG v14; // rcx
  __int64 v15; // rdx
  NTSTATUS v16; // eax
  const wchar_t *v17; // r9
  PHYSICAL_ADDRESS v18; // rax
  unsigned int v19; // r9d
  LONGLONG v20; // rdx
  __int64 v21; // r8
  NTSTATUS v22; // eax
  __int64 v24; // [rsp+50h] [rbp-30h] BYREF
  PVOID VirtualAddress[2]; // [rsp+58h] [rbp-28h]
  PVOID BaseAddress[2]; // [rsp+68h] [rbp-18h]
  ULONG_PTR Length; // [rsp+B0h] [rbp+30h] BYREF

  Length = *((_QWORD *)this + 4);
  v24 = *(_QWORD *)this;
  *(_OWORD *)VirtualAddress = 0LL;
  v4 = *((_QWORD *)this + 8) == 0LL;
  v5 = 0LL;
  *(_OWORD *)BaseAddress = 0LL;
  v6 = *((_QWORD *)this + 1);
  LODWORD(VirtualAddress[0]) = _mm_cvtsi128_si32((__m128i)0LL) & 0xFFFFFFFE | !v4;
  v7 = ADAPTER_RENDER::DdiConnectDoorbell(
         *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL) + 16LL),
         (struct _DXGKARG_CONNECTDOORBELL *)&v24,
         a3);
  v8 = v7;
  if ( v7 < 0 )
  {
    WdLogSingleEntry2(2LL, this, v7);
    v9 = L"DXGDOORBELL 0x%I64x: DdiConnectDoorbell failed with status 0x%I64x";
LABEL_9:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v9, (__int64)this, v8, 0LL, 0LL, 0LL);
    return (unsigned int)v8;
  }
  v10 = VirtualAddress[1];
  if ( !VirtualAddress[1] || *((_QWORD *)this + 8) && !BaseAddress[0] )
  {
    WdLogSingleEntry5(0LL, 275LL, 51LL, VirtualAddress[1], BaseAddress[0], 0LL);
    v10 = VirtualAddress[1];
  }
  Mdl = IoAllocateMdl(v10, Length, 0, 0, 0LL);
  if ( !Mdl )
  {
    v8 = -1073741801LL;
    WdLogSingleEntry2(2LL, this, -1073741801LL);
    v9 = L"DXGDOORBELL 0x%I64x: Failed to allocate memory for Mdl, returning 0x%I64x";
    goto LABEL_9;
  }
  PhysicalAddress = MmGetPhysicalAddress(VirtualAddress[1]);
  v13 = 0;
  v14 = PhysicalAddress.QuadPart >> 12;
  if ( (Length & 0xFFFFFFFFFFFFF000uLL) != 0 )
  {
    v15 = 0LL;
    do
    {
      ++v13;
      *((_QWORD *)&Mdl[1].Next + v15) = v14++;
      v15 = v13;
    }
    while ( v13 < Length >> 12 );
  }
  v16 = MmRotatePhysicalView(*((PVOID *)this + 6), &Length, Mdl, MmToFrameBufferNoCopy, 0LL, 0LL);
  v8 = v16;
  if ( v16 < 0 )
  {
    WdLogSingleEntry2(2LL, this, v16);
    v17 = L"DXGDOORBELL 0x%I64x: MmRotatePhysicalView failed with Status 0x%I64x";
LABEL_15:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v17, (__int64)this, v8, 0LL, 0LL, 0LL);
    goto LABEL_25;
  }
  if ( *((_QWORD *)this + 8) )
  {
    Length = *((_QWORD *)this + 5);
    v5 = IoAllocateMdl(BaseAddress[0], Length, 0, 0, 0LL);
    if ( !v5 )
    {
      v8 = -1073741801LL;
      WdLogSingleEntry2(2LL, this, -1073741801LL);
      v17 = L"DXGDOORBELL 0x%I64x: Failed to allocate memory for secondary Mdl, returning 0x%I64x";
      goto LABEL_15;
    }
    v18 = MmGetPhysicalAddress(BaseAddress[0]);
    v19 = 0;
    v20 = v18.QuadPart >> 12;
    if ( (Length & 0xFFFFFFFFFFFFF000uLL) != 0 )
    {
      v21 = 0LL;
      do
      {
        ++v19;
        *((_QWORD *)&v5[1].Next + v21) = v20++;
        v21 = v19;
      }
      while ( v19 < Length >> 12 );
    }
    v22 = MmRotatePhysicalView(*((PVOID *)this + 8), &Length, v5, MmToFrameBufferNoCopy, 0LL, 0LL);
    v8 = v22;
    if ( v22 < 0 )
    {
      WdLogSingleEntry2(2LL, this, v22);
      v17 = L"DXGDOORBELL 0x%I64x: MmRotatePhysicalView failed for secondary CPUVA with Status 0x%I64x";
      goto LABEL_15;
    }
  }
  **((_QWORD **)this + 15) = LODWORD(BaseAddress[1]) == 1;
LABEL_25:
  IoFreeMdl(Mdl);
  if ( v5 )
    IoFreeMdl(v5);
  return (unsigned int)v8;
}
