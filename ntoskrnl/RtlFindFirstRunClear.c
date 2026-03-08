/*
 * XREFs of RtlFindFirstRunClear @ 0x14039D4E0
 * Callers:
 *     PnprMirrorMarkedPages @ 0x140A9A0AC (PnprMirrorMarkedPages.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindFirstRunClear(PRTL_BITMAP BitMapHeader, PULONG StartingIndex)
{
  unsigned int SizeOfBitMap; // r10d
  ULONG v3; // r8d
  unsigned int *Buffer; // rbx
  unsigned int *v6; // rdx
  unsigned int v7; // r11d
  unsigned __int64 v8; // rdi
  unsigned int v9; // r11d
  __int64 v10; // rcx
  ULONG v11; // r9d
  unsigned __int64 i; // rax
  unsigned int *v13; // rax
  unsigned int v14; // r8d
  unsigned int *v16; // rax

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v3 = 0;
  if ( BitMapHeader->SizeOfBitMap )
  {
    Buffer = BitMapHeader->Buffer;
    v6 = Buffer;
    v7 = *Buffer;
    v8 = (unsigned __int64)&Buffer[(unsigned __int64)(SizeOfBitMap - 1) >> 5];
    while ( 1 )
    {
      v9 = ~v7;
      if ( v9 )
        break;
      v16 = v6 + 1;
      v6 = v16;
      if ( (unsigned __int64)v16 > v8 )
        goto LABEL_15;
      v7 = *v16;
    }
    _BitScanForward64((unsigned __int64 *)&v10, v9);
    v11 = v10 + 32 * (v6 - Buffer);
    if ( v11 > SizeOfBitMap )
    {
LABEL_15:
      v11 = SizeOfBitMap;
      goto LABEL_13;
    }
    for ( i = ~(v9 | ((1 << v10) - 1)); ; i = *v13 )
    {
      if ( (_DWORD)i )
      {
        _BitScanForward64(&i, i);
        goto LABEL_10;
      }
      v13 = v6 + 1;
      if ( (unsigned __int64)(v6 + 1) > v8 )
        break;
      ++v6;
    }
    LODWORD(i) = 32;
LABEL_10:
    v14 = SizeOfBitMap;
    if ( 32 * (unsigned int)(v6 - Buffer) + (unsigned int)i <= SizeOfBitMap )
      v14 = 32 * (v6 - Buffer) + i;
    v3 = v14 - v11;
  }
  else
  {
    v11 = 0;
  }
LABEL_13:
  *StartingIndex = v11;
  return v3;
}
