/*
 * XREFs of PfpQueryFileExtentsRequest @ 0x14097B4F0
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x1406AE494 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x140412530 (ZwQueryInformationFile.c)
 *     ZwFsControlFile @ 0x140412A30 (ZwFsControlFile.c)
 *     ZwQueryVolumeInformationFile @ 0x140412C30 (ZwQueryVolumeInformationFile.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     PfpOpenHandleCreate @ 0x1406A5020 (PfpOpenHandleCreate.c)
 *     PfpOpenHandleClose @ 0x1406A5824 (PfpOpenHandleClose.c)
 *     PfpPrefetchSharedDeref @ 0x140766630 (PfpPrefetchSharedDeref.c)
 *     PfpPrefetchSharedCleanup @ 0x1407666FC (PfpPrefetchSharedCleanup.c)
 *     PfpPrefetchSharedInitialize @ 0x140766DB4 (PfpPrefetchSharedInitialize.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 *     PfpPrefetchSharedStart @ 0x1407E0898 (PfpPrefetchSharedStart.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpQueryFileExtentsRequest(__int64 a1, char a2, _DWORD *a3)
{
  void *Pool2; // r14
  _DWORD *v6; // r12
  ULONG_PTR v7; // rsi
  int inited; // ebx
  __int64 v9; // rax
  __int128 v10; // xmm7
  __m128i v11; // xmm6
  unsigned int v12; // ebx
  char *v13; // xmm0_8
  __int64 v14; // r13
  __int64 v15; // rax
  ULONG OutputBufferLength; // r15d
  NTSTATUS v17; // eax
  ULONG Information; // r13d
  _DWORD *OutputBuffer; // rax
  NTSTATUS v20; // eax
  NTSTATUS v21; // eax
  __int64 v22; // rax
  int v25; // [rsp+54h] [rbp-144h]
  ULONG v26; // [rsp+70h] [rbp-128h]
  __int64 FileInformation; // [rsp+78h] [rbp-120h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-118h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+90h] [rbp-108h] BYREF
  void *Src[2]; // [rsp+A0h] [rbp-F8h]
  __m128i v31; // [rsp+B0h] [rbp-E8h]
  volatile void *Address[2]; // [rsp+C0h] [rbp-D8h]
  ULONG v33[2]; // [rsp+D0h] [rbp-C8h]
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
  Pool2 = 0LL;
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
  *(_QWORD *)v33 = *(_QWORD *)(v9 + 48);
  if ( _mm_cvtsi128_si32(*(__m128i *)Src) != 2 )
  {
    inited = -1073741735;
    goto LABEL_58;
  }
  v12 = _mm_cvtsi128_si32(v11);
  if ( (v12 & 1) != 0 || v12 - 1 > 0xFFFFF || (v11.m128i_i8[4] & 1) != 0 || !v11.m128i_i32[1] || v11.m128i_i32[1] >= v12 )
    goto LABEL_57;
  Pool2 = (void *)ExAllocatePool2(256LL, v12, 1883465296LL);
  if ( !Pool2 )
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
  memmove(Pool2, Src[1], v12);
  if ( *((_WORD *)Pool2 + (v12 >> 1) - 1)
    || (v14 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v11, 4)) >> 1, *((_WORD *)Pool2 + v14) != 92) )
  {
LABEL_57:
    inited = -1073741811;
    goto LABEL_58;
  }
  v15 = ExAllocatePool2(64LL, 144LL, 1129539152LL);
  v7 = v15;
  if ( !v15 )
    goto LABEL_13;
  PfpPrefetchSharedInitialize(v15);
  *(_DWORD *)(v7 + 56) = 15;
  *(_DWORD *)(v7 + 60) = 150;
  inited = PfpPrefetchSharedStart(v7);
  if ( inited >= 0 )
  {
    *((_WORD *)Pool2 + v14) = 0;
    inited = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)Pool2);
    if ( inited >= 0 )
    {
      OutputBufferLength = 32;
      inited = PfpOpenHandleCreate((__int64)&FileHandle, v7, (__int64)&DestinationString, 0LL, 1048960, 0x20u, 0, 0LL);
      if ( inited >= 0 )
      {
        *((_WORD *)Pool2 + v14) = 92;
        inited = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)Pool2);
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
              KeBugCheckEx(0x191u, 0xF93uLL, 0LL, 0LL, 0LL);
            if ( (v17 & 0xC0000000) != 0xC0000000 )
            {
              LODWORD(Address[0]) = DWORD2(FsInformation);
              Information = v33[0];
              v26 = v33[0];
              if ( v33[0] > 0x20 )
                OutputBufferLength = v33[0];
              while ( 1 )
              {
                if ( OutputBufferLength > 0xA00000 )
                  goto LABEL_2;
                if ( v6 )
                  ExFreePoolWithTag(v6, 0);
                OutputBuffer = (_DWORD *)ExAllocatePool2(256LL, OutputBufferLength, 1699112528LL);
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
                  KeBugCheckEx(0x191u, 0xFD1uLL, 0LL, 0LL, 0LL);
                if ( v20 >= 0 )
                  break;
                if ( v20 == -1073741807 )
                  goto LABEL_43;
                if ( v20 != -2147483643 )
                  goto LABEL_58;
                OutputBufferLength *= 2;
              }
              Information = IoStatusBlock.Information;
              v33[0] = IoStatusBlock.Information;
              if ( *v6 )
              {
                inited = 0;
LABEL_47:
                v22 = *(_QWORD *)(v35 + 16);
                *(_OWORD *)v22 = v10;
                *(__m128i *)(v22 + 16) = v11;
                *(_OWORD *)(v22 + 32) = *(_OWORD *)Address;
                *(_QWORD *)(v22 + 48) = *(_QWORD *)v33;
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
                KeBugCheckEx(0x191u, 0x100CuLL, 0LL, 0LL, 0LL);
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
    PfpOpenHandleClose((__int64)&v37, v7);
  if ( (v42 & 0x400000000LL) != 0 )
    PfpOpenHandleClose((__int64)&FileHandle, v7);
  if ( v7 )
  {
    PfpPrefetchSharedCleanup(v7);
    PfpPrefetchSharedDeref((volatile signed __int64 *)v7);
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)inited;
}
