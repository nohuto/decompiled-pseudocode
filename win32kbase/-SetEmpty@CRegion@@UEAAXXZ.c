/*
 * XREFs of ?SetEmpty@CRegion@@UEAAXXZ @ 0x1C001C9E0
 * Callers:
 *     ?Release@CRegion@@UEBAJXZ @ 0x1C00AAB80 (-Release@CRegion@@UEBAJXZ.c)
 * Callees:
 *     ?vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ @ 0x1C001CA1C (-vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ.c)
 */

void __fastcall CRegion::SetEmpty(CRegion *this)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    RGNCOREOBJ::vDeleteRGNCOREOBJ((RGNCOREOBJ *)&v2);
    *((_QWORD *)this + 2) = 0LL;
  }
  *((_DWORD *)this + 3) = 0;
}
