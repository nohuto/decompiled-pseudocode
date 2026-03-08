/*
 * XREFs of MiCommitVadCfgBits @ 0x1407D2AEC
 * Callers:
 *     MiCommitVadMetadataBits @ 0x1407D2944 (MiCommitVadMetadataBits.c)
 * Callees:
 *     MiMarkPrivateImageCfgBits @ 0x14075BBE8 (MiMarkPrivateImageCfgBits.c)
 *     MiMarkPrivateOpenCfgBits @ 0x14075C5C4 (MiMarkPrivateOpenCfgBits.c)
 *     MiMarkSharedImageCfgBits @ 0x1407D20C4 (MiMarkSharedImageCfgBits.c)
 *     MiSelectCfgBitMap @ 0x1407D2C08 (MiSelectCfgBitMap.c)
 */

__int64 __fastcall MiCommitVadCfgBits(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6,
        char a7)
{
  _QWORD *v10; // rax
  __int64 v11; // r10
  _QWORD *v12; // rdi
  __int64 result; // rax
  __int16 v14; // cx
  __int64 v15; // rdx
  int v16; // r10d
  __int64 v17; // rcx

  v10 = (_QWORD *)MiSelectCfgBitMap(a1, a3, a5);
  v12 = v10;
  switch ( a6 )
  {
    case 1:
      result = MiMarkSharedImageCfgBits(v10, (unsigned int)(a6 - 1), v11);
      break;
    case 2:
      result = MiMarkPrivateImageCfgBits((__int64)v10, (unsigned int)(a6 - 2), v11);
      break;
    case 3:
      result = MiMarkPrivateOpenCfgBits((int)v10, a3, a4, (a7 & 2) == 0);
      break;
    default:
      result = 3221225473LL;
      break;
  }
  if ( *(_QWORD *)(a1 + 1408) )
  {
    v14 = *(_WORD *)(a1 + 2412);
    if ( (v14 == 332 || v14 == 452) && (int)result >= 0 )
    {
      v15 = *(_QWORD *)(a1 + 1680);
      v16 = v15 + 424;
      if ( v12 != (_QWORD *)(v15 + 424) )
        return MiMarkPrivateOpenCfgBits(v16, a3, a4, 0);
      v17 = 0x100000000LL;
      if ( a3 <= 0x100000000LL )
      {
        v16 = v15 + 456;
        if ( a4 <= 0x100000000LL )
          v17 = a4;
        a4 = v17;
        return MiMarkPrivateOpenCfgBits(v16, a3, a4, 0);
      }
    }
  }
  return result;
}
