unsigned __int64 __fastcall MiMakeValidPte(unsigned __int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rsi
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rbx
  int v9; // r9d
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 LeafVa; // rbp
  unsigned __int64 v15; // rcx
  int v16; // eax

  v4 = a3 & 0x1F;
  v6 = (a2 & 0xFFFFFFFFFFLL) << 12;
  v7 = v6 | MmProtectToPteMask[v4] & 0xFFF0000000000E7FuLL | 0x21;
  if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v8 = v6 | MmProtectToPteMask[v4] & 0xFFF0000000000E7FuLL | 0x121;
    v9 = a3 & 0x4000000;
    goto LABEL_3;
  }
  LeafVa = (__int64)(a1 << 25) >> 16;
  if ( a1 >= 0xFFFFF6FB40000000uLL && a1 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    if ( a1 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v7 = v6 | MmProtectToPteMask[v4] & 0xFFF0000000000E7FuLL | 0x8000000000000021uLL;
    }
    else if ( (a3 & 0x4000000) == 0 )
    {
      v7 = v6 & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v4] & 0x7FF0000000000E7FLL | 0x21;
    }
    if ( (unsigned int)MiUserPdeOrAbove(a1) )
      v7 |= 4uLL;
  }
  v15 = v7;
  v8 = v7 | 4;
  if ( a1 > 0xFFFFF6BFFFFFFF78uLL )
    v8 = v15;
  v9 = a3 & 0x4000000;
  if ( (a3 & 0x4000000) != 0 )
    LeafVa = MiGetLeafVa((__int64)(a1 << 25) >> 16);
  if ( LeafVa < 0xFFFF800000000000uLL )
  {
    v16 = HIBYTE(word_140C6697C);
  }
  else
  {
    if ( byte_140C6A058[((LeafVa >> 39) & 0x1FF) - 256] == 1
      || LeafVa >= 0xFFFFF68000000000uLL && LeafVa <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      goto LABEL_3;
    }
    if ( LeafVa > qword_140C66CF0 || LeafVa < qword_140C6A1D8 )
      v16 = (unsigned __int8)word_140C6697C;
    else
      v16 = HIBYTE(word_140C6697C);
  }
  if ( v16 )
    v8 |= 0x100uLL;
LABEL_3:
  v10 = v8 | 0x42;
  if ( a3 >= 0 || (v4 & 5) != 4 )
    v10 = v8;
  if ( (a3 & 0x40000000) != 0 )
    v10 &= ~4uLL;
  if ( (a3 & 0x20000000) != 0 )
    v10 = ((unsigned __int16)v10 ^ (unsigned __int16)((unsigned __int8)word_140C6697C << 8)) & 0x100 ^ (unsigned __int64)v10;
  v11 = v10 & 0xFFFFFFFFFFFFFEFFuLL;
  if ( (a3 & 0x8000000) == 0 )
    v11 = v10;
  v12 = v11 | 0x80;
  if ( !v9 )
    v12 = v11;
  return v12 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
}
