/*
 * XREFs of sub_180012AA8 @ 0x180012AA8
 * Callers:
 *     sub_180013220 @ 0x180013220 (sub_180013220.c)
 *     sub_180066684 @ 0x180066684 (sub_180066684.c)
 *     sub_18008F218 @ 0x18008F218 (sub_18008F218.c)
 *     sub_18010A460 @ 0x18010A460 (sub_18010A460.c)
 * Callees:
 *     sub_180012CF0 @ 0x180012CF0 (sub_180012CF0.c)
 *     sub_180013590 @ 0x180013590 (sub_180013590.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180013618 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180012AA8(_QWORD *Src, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax

  Src[2] = 0LL;
  Src[3] = 15LL;
  *(_BYTE *)Src = 0;
  v4 = *(_QWORD *)(a2 + 16) + *(_QWORD *)(a3 + 16);
  if ( v4 != 15 )
  {
    if ( Src[3] >= v4 )
    {
      if ( v4 < 0x10 && Src[3] >= 0x10uLL )
        sub_180013590(Src);
    }
    else
    {
      sub_180012CF0(Src);
      Src[2] = 0LL;
    }
  }
  std::string::append(Src);
  std::string::append(Src);
  return Src;
}
