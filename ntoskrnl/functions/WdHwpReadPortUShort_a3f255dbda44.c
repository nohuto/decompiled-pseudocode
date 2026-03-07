__int64 __fastcall WdHwpReadPortUShort(unsigned __int16 a1)
{
  __int64 result; // rax

  LOWORD(result) = __inword(a1);
  return (unsigned __int16)result;
}
