__int64 __fastcall GetImageTuple(_IMAGE_DOS_HEADER *Timestamp, unsigned int *SizeOfImage, unsigned int *ImageBase)
{
  __int16 v3; // cx
  unsigned int v4; // ecx
  unsigned int v5; // r9d
  __int64 result; // rax

  v3 = *(_WORD *)(0x1C0000018LL + MEMORY[0x1C000003C]);
  if ( v3 == 267 || v3 == 523 )
  {
    v4 = *(_DWORD *)(0x1C0000050LL + MEMORY[0x1C000003C]);
    v5 = *(_DWORD *)(0x1C0000008LL + MEMORY[0x1C000003C]);
  }
  else
  {
    v4 = 0;
    v5 = 0;
  }
  *SizeOfImage = v5;
  result = 1LL;
  *ImageBase = v4;
  return result;
}
