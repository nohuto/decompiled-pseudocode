/*
 * XREFs of NtMapViewOfSection @ 0x140638420
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x140413800 (memset.c)
 *     MiMapViewOfSectionCommon @ 0x140638690 (MiMapViewOfSectionCommon.c)
 *     MiValidateZeroBits @ 0x1406388BC (MiValidateZeroBits.c)
 *     MiMapViewOfSection @ 0x140639150 (MiMapViewOfSection.c)
 *     MiMapParametersInitialize @ 0x1406396D0 (MiMapParametersInitialize.c)
 *     EtwTiLogMapExecView @ 0x1406A0AF4 (EtwTiLogMapExecView.c)
 *     DbgkMapViewOfSection @ 0x1406FCFD4 (DbgkMapViewOfSection.c)
 */

NTSTATUS __cdecl NtMapViewOfSection(
        HANDLE SectionHandle,
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        SIZE_T CommitSize,
        PLARGE_INTEGER SectionOffset,
        PSIZE_T ViewSize,
        SECTION_INHERIT InheritDisposition,
        ULONG AllocationType,
        ULONG Win32Protect)
{
  __int64 v13; // rdx
  __int64 v14; // r8
  NTSTATUS result; // eax
  __int64 v16; // rbx
  ULONG v17; // r13d
  PLARGE_INTEGER v18; // rdi
  PSIZE_T v19; // r14
  char v20; // r15
  NTSTATUS v21; // ebx
  bool v22; // zf
  unsigned __int8 v23; // [rsp+40h] [rbp-F8h]
  unsigned __int8 v24; // [rsp+50h] [rbp-E8h]
  __int64 v25[2]; // [rsp+58h] [rbp-E0h] BYREF
  __int128 v26; // [rsp+68h] [rbp-D0h] BYREF
  PADAPTER_OBJECT DmaAdapter[2]; // [rsp+78h] [rbp-C0h]
  NTSTATUS v28; // [rsp+88h] [rbp-B0h]
  _QWORD v29[16]; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+158h] [rbp+20h] BYREF

  v30 = ZeroBits;
  memset(v29, 0, sizeof(v29));
  *(_OWORD *)v25 = 0LL;
  v26 = 0LL;
  *(_OWORD *)DmaAdapter = 0LL;
  result = MiValidateZeroBits(&v30, v13, v14);
  if ( result >= 0 )
  {
    v24 = KeGetCurrentThread()->$6BEBF485330D18E60173AA6D991B35AC::gap0[10];
    v23 = v24;
    v16 = v30;
    v17 = Win32Protect;
    v18 = SectionOffset;
    v19 = ViewSize;
    result = MiMapViewOfSectionCommon(
               ProcessHandle,
               SectionHandle,
               0LL,
               BaseAddress,
               ViewSize,
               SectionOffset,
               Win32Protect,
               v30,
               v23,
               v25);
    if ( result < 0 )
    {
      ++dword_140C4E7E0;
      return result;
    }
    v20 = AllocationType;
    v21 = MiMapParametersInitialize(v29, v25[1], AllocationType, v17, v16);
    if ( v21 < 0 )
    {
      v22 = v25[0] == 0;
    }
    else
    {
      v21 = MiMapViewOfSection(
              DmaAdapter[0],
              (unsigned int)v29,
              (unsigned int)v25,
              CommitSize,
              (__int64)&v26,
              InheritDisposition,
              0);
      v28 = v21;
      if ( v21 >= 0 )
      {
        if ( (v29[9] & 4) != 0 )
          DbgkMapViewOfSection((ULONG_PTR)DmaAdapter[1]);
        if ( ((__int64)DmaAdapter[0][3].DmaOperations & 0x20) == 0 && (BYTE8(v26) & 2) != 0 )
          EtwTiLogMapExecView(DmaAdapter[1], v24, v25[0], v25[1], v20, v17);
        *v19 = v29[3];
        *BaseAddress = (PVOID)v25[0];
        if ( v18 )
          v18->QuadPart = v26;
        goto LABEL_12;
      }
      v22 = v25[0] == 0;
    }
    if ( v22 )
      ++dword_140C4E7E0;
    else
      ++dword_140C4E7E4;
LABEL_12:
    HalPutDmaAdapter(DmaAdapter[0]);
    ObfDereferenceObjectWithTag(DmaAdapter[1], 0x77566D4Du);
    return v21;
  }
  return result;
}
