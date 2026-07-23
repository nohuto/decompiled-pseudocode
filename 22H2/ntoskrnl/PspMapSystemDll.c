/*
 * XREFs of PspMapSystemDll @ 0x1406FCA38
 * Callers:
 *     PsMapSystemDlls @ 0x1406FC94C (PsMapSystemDlls.c)
 *     PspLocateSystemDll @ 0x140793A08 (PspLocateSystemDll.c)
 *     PspInitPhase3 @ 0x140A4B0C0 (PspInitPhase3.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14029CFE0 (RtlImageNtHeader.c)
 *     ObFastDereferenceObject @ 0x140345620 (ObFastDereferenceObject.c)
 *     MmMapViewOfSectionEx @ 0x1403529F0 (MmMapViewOfSectionEx.c)
 *     ZwSetInformationVirtualMemory @ 0x1403FCE20 (ZwSetInformationVirtualMemory.c)
 *     PspReferenceSystemDll @ 0x1406FD074 (PspReferenceSystemDll.c)
 */

__int64 __fastcall PspMapSystemDll(struct _KPROCESS *a1, __int64 a2, int a3, int a4)
{
  struct _DMA_ADAPTER *v8; // r14
  bool v9; // zf
  unsigned __int64 v10; // rax
  unsigned int v11; // edi
  PVOID v13; // rsi
  PIMAGE_NT_HEADERS v14; // rax
  unsigned __int64 ImageBase_high; // rcx
  PVOID BaseOfImage; // [rsp+68h] [rbp-19h] BYREF
  __int64 v17; // [rsp+70h] [rbp-11h] BYREF
  __int64 v18; // [rsp+78h] [rbp-9h] BYREF
  _MEMORY_RANGE_ENTRY VirtualAddresses; // [rsp+80h] [rbp-1h] BYREF
  __int128 v20; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v21; // [rsp+A0h] [rbp+1Fh]
  _QWORD v22[2]; // [rsp+A8h] [rbp+27h] BYREF
  __int128 v23; // [rsp+B8h] [rbp+37h]
  int VmInformation; // [rsp+F0h] [rbp+6Fh] BYREF

  v8 = (struct _DMA_ADAPTER *)PspReferenceSystemDll(a2);
  if ( !v8 )
    return 3221225473LL;
  BaseOfImage = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  v22[0] = 1LL;
  v22[1] = &v20;
  v21 = 0LL;
  v23 = 0LL;
  LOBYTE(v23) = 5;
  v9 = (*(_BYTE *)(a2 + 16) & 8) == 0;
  v20 = 0LL;
  *((_QWORD *)&v23 + 1) = 32LL;
  v10 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  if ( v9 )
    v10 = 0x7FFFFFFEFFFFLL;
  *((_QWORD *)&v20 + 1) = v10;
  v11 = MmMapViewOfSectionEx(
          (int)v8,
          (int)a1,
          (int)&BaseOfImage,
          (__int64)&v18,
          (__int64)&v17,
          a3 != 0 ? 0x20000000 : 0,
          4,
          v22,
          2,
          0,
          0LL);
  ObFastDereferenceObject((signed __int64 *)a2, v8);
  if ( v11 != 1073741827 )
    goto LABEL_5;
  if ( a1 != PsInitialSystemProcess )
  {
    v11 = -1073741800;
LABEL_5:
    if ( (v11 & 0x80000000) != 0 )
      return v11;
  }
  if ( a4 )
  {
    v13 = BaseOfImage;
    v11 = 0;
    v14 = RtlImageNtHeader(BaseOfImage);
    if ( v14->OptionalHeader.Magic == 267 )
      ImageBase_high = HIDWORD(v14->OptionalHeader.ImageBase);
    else
      ImageBase_high = v14->OptionalHeader.ImageBase;
    *(_QWORD *)(a2 + 40) = ImageBase_high;
    *(_QWORD *)(a2 + 48) = v13;
    return v11;
  }
  if ( *(PVOID *)(a2 + 40) == BaseOfImage )
  {
    VirtualAddresses.VirtualAddress = BaseOfImage;
    VmInformation = 1;
    VirtualAddresses.NumberOfBytes = 4096LL;
    ZwSetInformationVirtualMemory(
      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
      VmImageHotPatchInformation,
      1uLL,
      &VirtualAddresses,
      &VmInformation,
      4u);
    return v11;
  }
  return 3221225473LL;
}
