/*
 * XREFs of IoSetOplockKeyContext @ 0x1403C9528
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x14023AE40 (FsRtlCheckOplockEx2.c)
 *     FsRtlpAttachOplockKey @ 0x14023FE88 (FsRtlpAttachOplockKey.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x14023EB8C (IopGetFileObjectExtension.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14023FE20 (ExAllocateFromNPagedLookasideList.c)
 *     IopSetTypeSpecificFoExtension @ 0x14023FE5C (IopSetTypeSpecificFoExtension.c)
 *     IopAllocateFileObjectExtension @ 0x14024F600 (IopAllocateFileObjectExtension.c)
 *     ExFreeToNPagedLookasideList @ 0x140298E70 (ExFreeToNPagedLookasideList.c)
 */

__int64 __fastcall IoSetOplockKeyContext(__int64 a1, __int128 *a2, unsigned __int16 a3)
{
  int v4; // edi
  __int64 result; // rax
  _OWORD *v6; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm0
  unsigned int v9; // ebx
  void *v10; // r8
  __int64 v11; // [rsp+48h] [rbp+20h] BYREF

  v11 = 0LL;
  v4 = a3;
  if ( (unsigned __int16)(a3 - 1) > 1u )
    return 3221225485LL;
  if ( *(_QWORD *)(a1 + 208) )
  {
    IopGetFileObjectExtension(a1, 6, &v11);
  }
  else
  {
    result = IopAllocateFileObjectExtension(a1, &v11);
    if ( (int)result < 0 )
      return result;
  }
  v6 = ExAllocateFromNPagedLookasideList(&IopOplockFoExtLookasideList);
  if ( !v6 )
    return 3221225626LL;
  *v6 = 0LL;
  v6[1] = 0LL;
  v6[2] = 0LL;
  *(_WORD *)v6 = v4;
  if ( v4 == 1 )
  {
    v8 = *a2;
  }
  else
  {
    if ( v4 != 2 )
      goto LABEL_12;
    if ( *((_BYTE *)a2 + 32) )
    {
      v7 = *a2;
      *((_WORD *)v6 + 1) |= 1u;
      *(_OWORD *)((char *)v6 + 4) = v7;
    }
    if ( !*((_BYTE *)a2 + 33) )
      goto LABEL_12;
    v8 = a2[1];
  }
  *((_WORD *)v6 + 1) |= 2u;
  *(_OWORD *)((char *)v6 + 20) = v8;
LABEL_12:
  v9 = IopSetTypeSpecificFoExtension(v11, 6u, (signed __int64)v6);
  if ( v9 == -1073741823 )
    ExFreeToNPagedLookasideList(&IopOplockFoExtLookasideList, v10);
  return v9;
}
