/*
 * XREFs of MiShareExistingControlArea @ 0x1407D1CAC
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1407D12B0 (MiCreateImageOrDataSection.c)
 * Callees:
 *     PsIsCurrentThreadPrefetching @ 0x1402DCE70 (PsIsCurrentThreadPrefetching.c)
 *     MmChangeSectionBackingFile @ 0x1402F34E4 (MmChangeSectionBackingFile.c)
 *     IoSetTopLevelIrp @ 0x140343AF0 (IoSetTopLevelIrp.c)
 *     MiValidateControlAreaPartition @ 0x1403442B4 (MiValidateControlAreaPartition.c)
 *     MiValidateExistingImage @ 0x1406A1230 (MiValidateExistingImage.c)
 *     FsRtlReleaseFile @ 0x1407D18E0 (FsRtlReleaseFile.c)
 *     FsRtlGetFileSize @ 0x1407F4020 (FsRtlGetFileSize.c)
 */

__int64 __fastcall MiShareExistingControlArea(__int64 a1)
{
  __int64 v1; // r14
  struct _FILE_OBJECT *v3; // rdi
  int v4; // esi
  int v5; // edx
  bool v6; // zf
  __int64 v7; // rsi
  LARGE_INTEGER v8; // rax
  __int64 result; // rax
  LARGE_INTEGER v10; // rcx
  LARGE_INTEGER FileSize; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  FileSize.QuadPart = 0LL;
  v3 = *(struct _FILE_OBJECT **)(a1 + 56);
  v4 = MiValidateControlAreaPartition(a1, v1);
  if ( v4 < 0 )
  {
    if ( (*(_DWORD *)a1 & 2) != 0 )
    {
      IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
      FsRtlReleaseFile(v3);
      *(_DWORD *)a1 &= ~2u;
    }
    return (unsigned int)v4;
  }
  if ( (*(_DWORD *)(v1 + 56) & 0x200) != 0 && !PsIsCurrentThreadPrefetching() )
    MmChangeSectionBackingFile(0LL, v3, ((*(_DWORD *)(a1 + 16) & 0x1000000) != 0) + 1);
  v5 = *(_DWORD *)a1 | 4;
  v6 = (*(_BYTE *)a1 & 1) == 0;
  *(_DWORD *)a1 = v5;
  v7 = *(_QWORD *)v1;
  if ( v6 && (*(_BYTE *)(v1 + 56) & 0x20) == 0 )
  {
    v4 = FsRtlGetFileSize(v3, &FileSize);
    IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
    FsRtlReleaseFile(v3);
    *(_DWORD *)a1 &= ~2u;
    if ( v4 >= 0 )
    {
      v8 = FileSize;
      if ( !FileSize.QuadPart && !*(_QWORD *)(a1 + 152) )
        return 3221225758LL;
      goto LABEL_12;
    }
    return (unsigned int)v4;
  }
  if ( (v5 & 2) != 0 )
  {
    IoSetTopLevelIrp(*(PIRP *)(a1 + 184));
    FsRtlReleaseFile(v3);
    *(_DWORD *)a1 &= ~2u;
  }
  if ( (*(_DWORD *)(a1 + 16) & 0x1000000) != 0 )
  {
    result = MiValidateExistingImage((unsigned int *)a1);
    if ( (int)result < 0 )
      return result;
  }
  v8.QuadPart = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 24), -1LL, -1LL);
LABEL_12:
  v10 = *(LARGE_INTEGER *)(a1 + 152);
  if ( v10.QuadPart )
  {
    if ( v8.QuadPart < (unsigned __int64)v10.QuadPart )
    {
      if ( (*(_DWORD *)(a1 + 28) & 0x44) == 0 )
        return 3221225536LL;
    }
    else
    {
      *(_DWORD *)a1 |= 8u;
    }
    *(LARGE_INTEGER *)(a1 + 128) = v10;
  }
  else
  {
    *(_DWORD *)a1 |= 8u;
    *(LARGE_INTEGER *)(a1 + 128) = v8;
  }
  return 0LL;
}
