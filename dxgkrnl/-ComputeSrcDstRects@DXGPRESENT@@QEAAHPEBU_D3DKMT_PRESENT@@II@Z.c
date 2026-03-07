__int64 __fastcall DXGPRESENT::ComputeSrcDstRects(
        struct tagRECT *this,
        const struct _D3DKMT_PRESENT *a2,
        LONG a3,
        LONG a4)
{
  struct tagRECT *v4; // rdi
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // eax
  LONG bottom; // r11d
  LONG right; // edx
  LONG v10; // r8d
  LONG v11; // ecx
  LONG v12; // r10d
  LONG v13; // r9d
  LONG v14; // r11d
  int bottom_low; // eax

  this[8].top = 0;
  v4 = this + 8;
  this[8].left = 0;
  this[8].right = this[2].left - this[1].right;
  this[8].bottom = this[2].top - this[1].bottom;
  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  if ( (*(_BYTE *)&Value & 2) == 0 )
  {
    this[9].top = 0;
    this[9].left = 0;
    this[9].right = a3;
    this[9].bottom = a4;
    if ( (unsigned int)DXGPRESENT::ClipRects(
                         this + 9,
                         v4,
                         (const struct tagRECT *)((unsigned __int64)&a2->SrcRect & -(__int64)((*(_DWORD *)&a2->Flags.0 & 0x80u) != 0)),
                         (const struct tagRECT *)((unsigned __int64)&a2->DstRect & -(__int64)((a2->Flags.Value & 0x40) != 0))) )
      goto LABEL_5;
    return 0LL;
  }
  if ( (*(_BYTE *)&Value & 0x40) != 0 && !DXGPRESENT::IntersectRect(v4, &a2->DstRect, v4) )
    return 0LL;
  this[9] = *v4;
LABEL_5:
  bottom = this[8].bottom;
  right = this[1].right;
  v10 = right + v4->left;
  v11 = this[1].bottom;
  v12 = right + this[8].right;
  v13 = v11 + this[8].top;
  v4->left = v10;
  v14 = v11 + bottom;
  this[8].top = v13;
  this[8].right = v12;
  this[8].bottom = v14;
  if ( (a2->Flags.Value & 0x10000) != 0 )
  {
    bottom_low = LOWORD(this[26].bottom);
    if ( (unsigned __int16)bottom_low > 1u )
    {
      v4->left = v10 * bottom_low;
      this[8].top = v13 * bottom_low;
      this[8].right = v12 * bottom_low;
      this[8].bottom = v14 * bottom_low;
    }
  }
  return 1LL;
}
