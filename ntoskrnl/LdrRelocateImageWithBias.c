/*
 * XREFs of LdrRelocateImageWithBias @ 0x1409BF024
 * Callers:
 *     MiMapSystemImageWithLargePage @ 0x140A46F04 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14035E710 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeaderEx @ 0x14035E850 (RtlImageNtHeaderEx.c)
 *     LdrProcessRelocationBlockLongLong @ 0x1409BEF68 (LdrProcessRelocationBlockLongLong.c)
 */

__int64 __fastcall LdrRelocateImageWithBias(unsigned __int64 a1)
{
  unsigned int v1; // ebx
  int v3; // edx
  __int64 v4; // rdi
  __int16 v5; // ax
  __int64 v6; // rbp
  unsigned __int16 *v7; // rax
  int v8; // esi
  unsigned int v9; // r8d
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF
  int v12; // [rsp+78h] [rbp+20h] BYREF

  v1 = 0;
  v12 = 0;
  v11 = 0LL;
  if ( (int)RtlImageNtHeaderEx(1, a1, 0LL, &v11) < 0 )
    return (unsigned int)-1073741701;
  v4 = v11;
  v5 = *(_WORD *)(v11 + 24);
  if ( v5 == 267 )
  {
    v6 = *(unsigned int *)(v11 + 52);
  }
  else
  {
    if ( v5 != 523 )
      return (unsigned int)-1073741701;
    v6 = *(_QWORD *)(v11 + 48);
  }
  LOBYTE(v3) = 1;
  v7 = (unsigned __int16 *)RtlImageDirectoryEntryToData(a1, v3, 5, (int)&v12);
  if ( !v7 )
    return (*(_BYTE *)(v4 + 22) & 1) != 0 ? 0xC0000018 : 0;
  v8 = v12;
  if ( !v12 )
    return (*(_BYTE *)(v4 + 22) & 1) != 0 ? 0xC0000018 : 0;
  while ( 1 )
  {
    v9 = *((_DWORD *)v7 + 1);
    v8 -= v9;
    v7 = LdrProcessRelocationBlockLongLong(*(_WORD *)(v4 + 4), a1 + *(unsigned int *)v7, (v9 - 8) >> 1, v7 + 4, a1 - v6);
    if ( !v7 )
      break;
    if ( !v8 )
      return v1;
  }
  return (unsigned int)-1073741701;
}
