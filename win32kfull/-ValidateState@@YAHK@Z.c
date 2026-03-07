_BOOL8 __fastcall ValidateState(__int16 a1)
{
  return HIBYTE(a1) <= 0xFu && ((unsigned __int8)a1 & byte_1C0322FF8[HIBYTE(a1)]) == (_BYTE)a1;
}
