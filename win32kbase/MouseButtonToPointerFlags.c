/*
 * XREFs of MouseButtonToPointerFlags @ 0x1C007C950
 * Callers:
 *     ?MouseSpeedHitTest@CMouseProcessor@@CA?AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x1C007C734 (-MouseSpeedHitTest@CMouseProcessor@@CA-AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4.c)
 * Callees:
 *     <none>
 */

int __fastcall MouseButtonToPointerFlags(__int16 a1)
{
  int v2; // r8d
  int result; // eax
  int v4; // ecx
  int v5; // edx

  v2 = ((a1 & 0x400) << 9) | 0x106002;
  if ( (a1 & 0x800) == 0 )
    v2 = ((a1 & 0x400) << 9) | 0x6002;
  if ( (a1 & 0x155) != 0 )
  {
    v4 = v2 | (16 * (a1 & 1) + 65540) | 0x20;
    if ( (a1 & 4) == 0 )
      v4 = v2 | (16 * (a1 & 1) + 65540);
    v5 = v4 | 0x40;
    if ( (a1 & 0x10) == 0 )
      v5 = v4;
    v2 = v5 | 0x80;
    if ( (a1 & 0x40) == 0 )
      v2 = v5;
    if ( (a1 & 0x100) != 0 )
      v2 |= 0x100u;
  }
  result = v2 | 0x40000;
  if ( (a1 & 0x2AA) == 0 )
    return v2;
  return result;
}
