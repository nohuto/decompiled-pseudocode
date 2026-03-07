FIX __stdcall STROBJ_fxBreakExtra(STROBJ *pstro)
{
  if ( (pstro->flAccel & 0x1000) != 0 )
    return pstro[2].rclBkGround.bottom;
  else
    return 0;
}
