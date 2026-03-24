/*
 * XREFs of PfpQueryFileExtentsRequest @ 0x1408DFD5C
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x1406CD5D0 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14032EB60 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x1403F9C40 (ZwQueryInformationFile.c)
 *     ZwFsControlFile @ 0x1403FA140 (ZwFsControlFile.c)
 *     ZwQueryVolumeInformationFile @ 0x1403FA340 (ZwQueryVolumeInformationFile.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     PfpOpenHandleCreate @ 0x140633828 (PfpOpenHandleCreate.c)
 *     PfpOpenHandleClose @ 0x1406339C0 (PfpOpenHandleClose.c)
 *     ProbeForWrite @ 0x1406CD560 (ProbeForWrite.c)
 *     PfpPrefetchSharedDeref @ 0x14070BCAC (PfpPrefetchSharedDeref.c)
 *     PfpPrefetchSharedCleanup @ 0x14070BCDC (PfpPrefetchSharedCleanup.c)
 *     PfpPrefetchSharedStart @ 0x14070BF54 (PfpPrefetchSharedStart.c)
 *     PfpPrefetchSharedInitialize @ 0x14070C0A0 (PfpPrefetchSharedInitialize.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfpQueryFileExtentsRequest(__int64 a1, char a2, _DWORD *a3)
{
  PVOID PoolWithTag; // r14
  _DWORD *v6; // r12
  ULONG_PTR v7; // rsi
  int inited; // ebx
  __int64 v9; // rax
  __int128 v10; // xmm7
  __m128i v11; // xmm6
  unsigned int v12; // ebx
  char *v13; // xmm0_8
  __int64 v14; // r13
  PVOID v15; // rax
  ULONG OutputBufferLength; // r15d
  NTSTATUS v17; // eax
  unsigned int Information; // r13d
  _DWORD *OutputBuffer; // rax
  NTSTATUS v20; // eax
  NTSTATUS v21; // eax
  __int64 v22; // rax
  int v25; // [rsp+54h] [rbp-144h]
  unsigned int v26; // [rsp+70h] [rbp-128h]
  __int64 FileInformation; // [rsp+78h] [rbp-120h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-118h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+90h] [rbp-108h] BYREF
  void *Src[2]; // [rsp+A0h] [rbp-F8h]
  __m128i v31; // [rsp+B0h] [rbp-E8h]
  volatile void *Address[2]; // [rsp+C0h] [rbp-D8h]
  SIZE_T NumberOfBytes; // [rsp+D0h] [rbp-C8h]
  __int64 InputBuffer; // [rsp+D8h] [rbp-C0h] BYREF
  __int64 v35; // [rsp+E0h] [rbp-B8h]
  _DWORD *v36; // [rsp+E8h] [rbp-B0h]
  HANDLE v37; // [rsp+F0h] [rbp-A8h] BYREF
  __int128 v38; // [rsp+F8h] [rbp-A0h]
  __int64 v39; // [rsp+108h] [rbp-90h]
  HANDLE FileHandle; // [rsp+110h] [rbp-88h] BYREF
  __int128 v41; // [rsp+118h] [rbp-80h]
  __int64 v42; // [rsp+128h] [rbp-70h]
  __int128 FsInformation; // [rsp+130h] [rbp-68h] BYREF
  __int64 v44; // [rsp+140h] [rbp-58h]

  v36 = a3;
  v35 = a1;
  IoStatusBlock = 0LL;
  InputBuffer = 0LL;
  FileInformation = 0LL;
  FsInformation = 0LL;
  v44 = 0LL;
  DestinationString = 0LL;
  PoolWithTag = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  FileHandle = 0LL;
  v41 = 0LL;
  v42 = 0x200000000LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0x200000000LL;
  v25 = 1;
  if ( *(_DWORD *)(a1 + 24) < 0x38u )
  {
LABEL_2:
    inited = -1073741306;
    goto LABEL_58;
  }
  if ( a2 )
    ProbeForWrite(*(volatile void **)(a1 + 16), 0x38uLL, 8u);
  v9 = *(_QWORD *)(a1 + 16);
  *(_OWORD *)Src = *(_OWORD *)v9;
  v10 = *(_OWORD *)Src;
  v11 = *(__m128i *)(v9 + 16);
  v31 = v11;
  *(_OWORD *)Address = *(_OWORD *)(v9 + 32);
  NumberOfBytes = *(_QWORD *)(v9 + 48);
  if ( _mm_cvtsi128_si32(*(__m128i *)Src) != 2 )
  {
    inited = -1073741735;
    goto LABEL_58;
  }
  v12 = _mm_cvtsi128_si32(v11);
  if ( (v12 & 1) != 0 || v12 - 1 > 0xFFFFF || (v11.m128i_i8[4] & 1) != 0 || !v11.m128i_i32[1] || v11.m128i_i32[1] >= v12 )
    goto LABEL_57;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v12, 0x70436650u);
  if ( !PoolWithTag )
  {
LABEL_13:
    inited = -1073741670;
    goto LABEL_58;
  }
  if ( a2 )
  {
    if ( (_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)Src, 8)) & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = (char *)_mm_srli_si128(*(__m128i *)Src, 8).m128i_u64[0];
    Src[1] = v13;
    if ( (unsigned __int64)&v13[v12] > 0x7FFFFFFF0000LL || &v13[v12] < v13 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  memmove(PoolWithTag, Src[1], v12);
  if ( *((_WORD *)PoolWithTag + (v12 >> 1) - 1)
    || (v14 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v11, 4)) >> 1, *((_WORD *)PoolWithTag + v14) != 92) )
  {
LABEL_57:
    inited = -1073741811;
    goto LABEL_58;
  }
  v15 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x43536650u);
  v7 = (ULONG_PTR)v15;
  if ( !v15 )
    goto LABEL_13;
  PfpPrefetchSharedInitialize((__int64)v15);
  *(_DWORD *)(v7 + 56) = 15;
  *(_DWORD *)(v7 + 60) = 150;
  inited = PfpPrefetchSharedStart(v7);
  if ( inited >= 0 )
  {
    *((_WORD *)PoolWithTag + v14) = 0;
    inited = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)PoolWithTag);
    if ( inited >= 0 )
    {
      OutputBufferLength = 32;
      inited = PfpOpenHandleCreate((__int64)&FileHandle, v7, (__int64)&DestinationString, 0LL, 1048960, 0x20u, 0, 0LL);
      if ( inited >= 0 )
      {
        *((_WORD *)PoolWithTag + v14) = 92;
        inited = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)PoolWithTag);
        if ( inited >= 0 )
        {
          inited = PfpOpenHandleCreate(
                     (__int64)&v37,
                     v7,
                     (__int64)&DestinationString,
                     0LL,
                     1048704,
                     0x20u,
                     0x80u,
                     (__int64)&FileHandle);
          if ( inited >= 0 )
          {
            v17 = ZwQueryVolumeInformationFile(
                    FileHandle,
                    &IoStatusBlock,
                    &FsInformation,
                    0x18u,
                    FileFsVolumeInformation);
            inited = v17;
            if ( v17 == 259 )
              KeBugCheckEx(0x191u, 0xF72uLL, 0LL, 0LL, 0LL);
            if ( (v17 & 0xC0000000) != 0xC0000000 )
            {
              LODWORD(Address[0]) = DWORD2(FsInformation);
              Information = NumberOfBytes;
              v26 = NumberOfBytes;
              if ( (unsigned int)NumberOfBytes > 0x20 )
                OutputBufferLength = NumberOfBytes;
              while ( 1 )
              {
                if ( OutputBufferLength > 0xA00000 )
                  goto LABEL_2;
                if ( v6 )
                  ExFreePoolWithTag(v6, 0);
                OutputBuffer = ExAllocatePoolWithTag(PagedPool, OutputBufferLength, 0x65466650u);
                v6 = OutputBuffer;
                if ( !OutputBuffer )
                  goto LABEL_13;
                v20 = ZwFsControlFile(
                        v37,
                        0LL,
                        0LL,
                        0LL,
                        &IoStatusBlock,
                        0x90073u,
                        &InputBuffer,
                        8u,
                        OutputBuffer,
                        OutputBufferLength);
                inited = v20;
                if ( v20 == 259 )
                  KeBugCheckEx(0x191u, 0xFB0uLL, 0LL, 0LL, 0LL);
                if ( v20 >= 0 )
                  break;
                if ( v20 == -1073741807 )
                  goto LABEL_43;
                if ( v20 != -2147483643 )
                  goto LABEL_58;
                OutputBufferLength *= 2;
              }
              Information = IoStatusBlock.Information;
              LODWORD(NumberOfBytes) = IoStatusBlock.Information;
              if ( *v6 )
              {
                inited = 0;
LABEL_47:
                v22 = *(_QWORD *)(v35 + 16);
                *(_OWORD *)v22 = v10;
                *(__m128i *)(v22 + 16) = v11;
                *(_OWORD *)(v22 + 32) = *(_OWORD *)Address;
                *(_QWORD *)(v22 + 48) = NumberOfBytes;
                if ( inited == -1073741807 )
                {
                  v25 = 0;
                }
                else if ( v26 >= Information )
                {
                  if ( a2 )
                    ProbeForWrite(Address[1], Information, 8u);
                  memmove((void *)Address[1], v6, Information);
                }
                else
                {
                  v25 = 0;
                  inited = -1073741789;
                }
                *v36 = 56;
                goto LABEL_58;
              }
LABEL_43:
              v21 = ZwQueryInformationFile(v37, &IoStatusBlock, &FileInformation, 8u, FileInternalInformation);
              inited = v21;
              if ( v21 == 259 )
                KeBugCheckEx(0x191u, 0xFEBuLL, 0LL, 0LL, 0LL);
              if ( v21 >= 0 )
              {
                v31.m128i_i64[1] = FileInformation;
                inited = -1073741807;
                v11 = v31;
                goto LABEL_47;
              }
            }
          }
        }
      }
    }
  }
LABEL_58:
  if ( v25 && (inited == -1073741807 || inited == -1073741789) )
    inited = -1073741823;
  if ( (v39 & 0x400000000LL) != 0 )
    PfpOpenHandleClose(&v37, v7);
  if ( (v42 & 0x400000000LL) != 0 )
    PfpOpenHandleClose(&FileHandle, v7);
  if ( v7 )
  {
    PfpPrefetchSharedCleanup(v7);
    PfpPrefetchSharedDeref((volatile signed __int64 *)v7);
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)inited;
}
