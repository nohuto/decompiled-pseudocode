ULONG __stdcall BRUSHOBJ_ulGetBrushColor(BRUSHOBJ *pbo)
{
  FLONG flColorType; // eax

  if ( (pbo[5].iSolidColor & 0x10) == 0 )
    return -1;
  flColorType = pbo->flColorType;
  if ( (flColorType & 8) != 0 && (pbo->flColorType = flColorType & 0xFFFFFFF7, (pbo[3].iSolidColor & 1) != 0) )
    return HIDWORD(pbo[5].pvRbrush);
  else
    return pbo[1].iSolidColor;
}
