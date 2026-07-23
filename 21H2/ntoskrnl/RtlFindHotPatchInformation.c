/*
 * XREFs of RtlFindHotPatchInformation @ 0x14091B0B0
 * Callers:
 *     MiApplyDriverHotPatch @ 0x1408C8F14 (MiApplyDriverHotPatch.c)
 *     MiOpenHotPatchFile @ 0x1408CCC68 (MiOpenHotPatchFile.c)
 *     MiPerformImageHotPatch @ 0x1408CD024 (MiPerformImageHotPatch.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140286140 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeader @ 0x1403276A0 (RtlImageNtHeader.c)
 *     RtlFindHotPatchBase @ 0x14091B080 (RtlFindHotPatchBase.c)
 */

__int64 __fastcall RtlFindHotPatchInformation(char *BaseOfImage)
{
  PIMAGE_NT_HEADERS v2; // rdi
  _DWORD *v3; // rax
  char *v4; // rcx
  __int64 v5; // r8
  unsigned int SizeOfImage; // r10d
  unsigned int *v7; // r9
  unsigned int v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // r8d
  unsigned int v11; // r10d
  __int64 v12; // r9
  ULONG Size; // [rsp+38h] [rbp+10h] BYREF

  Size = 0;
  v2 = RtlImageNtHeader(BaseOfImage);
  v3 = RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0xAu, &Size);
  if ( !v3 )
    return 0LL;
  if ( Size <= 4 )
    return 0LL;
  if ( Size != *v3 )
    return 0LL;
  if ( Size < 0xF4 )
    return 0LL;
  if ( (_DWORD *)((char *)v3 + Size) < v3 )
    return 0LL;
  v4 = &BaseOfImage[v2->OptionalHeader.SizeOfImage];
  if ( v3 >= (_DWORD *)v4 )
    return 0LL;
  if ( (char *)v3 + Size > v4 )
    return 0LL;
  _mm_lfence();
  v5 = (unsigned int)v3[60];
  if ( (unsigned int)v5 >= 0xFFFFFFF8 || (_DWORD)v5 == 0 )
    return 0LL;
  SizeOfImage = v2->OptionalHeader.SizeOfImage;
  if ( (int)v5 + 8 > SizeOfImage )
    return 0LL;
  v7 = (unsigned int *)&BaseOfImage[v5];
  switch ( *(_DWORD *)&BaseOfImage[v5] )
  {
    case 1:
      v8 = 20;
      break;
    case 2:
      v8 = 24;
      break;
    case 3:
      v8 = 28;
      break;
    default:
      return 0LL;
  }
  v9 = v7[1];
  if ( v9 >= v8 )
  {
    if ( v7[2] )
    {
      if ( v9 + (unsigned int)v5 > v9 && v9 + (unsigned int)v5 <= SizeOfImage )
      {
        v10 = v7[4];
        if ( v10 <= 0x3FFFFFF9 )
        {
          v11 = 4 * v10 + v7[3];
          if ( v11 > 4 * v10 && v11 <= v9 && v10 == 1 && RtlFindHotPatchBase(v7) )
            return v12;
        }
      }
    }
  }
  return 0LL;
}
