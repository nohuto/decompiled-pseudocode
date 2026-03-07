bool __fastcall IsValidFONTDIFF(const void *a1, unsigned int a2, int a3)
{
  return !a3
      || a3 > 0
      && a3 < a2
      && a2 > 0x14
      && (unsigned int)a3 < (unsigned __int64)a2 - 20
      && (((_BYTE)a1 + (_BYTE)a3) & 3) == 0;
}
