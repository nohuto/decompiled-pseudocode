DWORD __stdcall STROBJ_dwGetCodePage(STROBJ *pstro)
{
  return *((_DWORD *)&pstro[2].rclBkGround + 4);
}
