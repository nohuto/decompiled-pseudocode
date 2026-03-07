__int64 __fastcall WdHwpReadPortUChar(unsigned __int16 a1)
{
  __int64 result; // rax

  LOBYTE(result) = __inbyte(a1);
  return (unsigned __int8)result;
}
