/*
 * XREFs of sub_18004A758 @ 0x18004A758
 * Callers:
 *     sub_18000CBF0 @ 0x18000CBF0 (sub_18000CBF0.c)
 *     sub_1800D56D8 @ 0x1800D56D8 (sub_1800D56D8.c)
 *     sub_1800DB7BC @ 0x1800DB7BC (sub_1800DB7BC.c)
 *     sub_1800DC0A4 @ 0x1800DC0A4 (sub_1800DC0A4.c)
 *     sub_1800DDFC0 @ 0x1800DDFC0 (sub_1800DDFC0.c)
 *     sub_1801314B4 @ 0x1801314B4 (sub_1801314B4.c)
 * Callees:
 *     memcpy @ 0x18007443F (memcpy.c)
 */

__int64 __fastcall sub_18004A758(unsigned __int16 *Src, __int64 *a2)
{
  unsigned int v2; // ebx
  _DWORD *v5; // rax
  __int64 v6; // rax

  v2 = 0;
  if ( Src && a2 )
  {
    if ( *Src == 0xFFFE && Src[8] < 0x16u )
    {
      return (unsigned int)-2147024809;
    }
    else
    {
      v5 = CoTaskMemAlloc(Src[8] + 82LL);
      *a2 = (__int64)v5;
      if ( v5 )
      {
        *v5 = Src[8] + 82;
        *(_DWORD *)(*a2 + 4) = 0;
        *(_DWORD *)(*a2 + 8) = 0;
        *(_DWORD *)(*a2 + 12) = 0;
        *(_OWORD *)(*a2 + 16) = xmmword_180160A08;
        *(_OWORD *)(*a2 + 48) = xmmword_1801609F8;
        memcpy((void *)(*a2 + 64), Src, Src[8] + 18LL);
        v6 = *a2;
        if ( *Src == 0xFFFE )
        {
          *(_OWORD *)(v6 + 32) = *(_OWORD *)(Src + 12);
        }
        else
        {
          *(_OWORD *)(v6 + 32) = xmmword_18015B740;
          *(_DWORD *)(*a2 + 32) = *Src;
        }
      }
      else
      {
        return (unsigned int)-2147024882;
      }
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v2;
}
