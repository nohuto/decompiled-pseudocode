unsigned __int64 __fastcall anonymous_namespace_::UpdateKeyState(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  char v4; // bl
  unsigned __int64 result; // rax
  unsigned __int8 v7; // bp
  char v8; // r8

  v4 = a2;
  if ( (unsigned __int8)(a2 - 16) > 2u
    || (v7 = (a4 - 96 + 2 * (a2 - 16)) ^ 1, ((void (*)(void))anonymous_namespace_::ApplyKeyStateToQueue)(), v8)
    || (result = (unsigned __int64)v7 >> 2, ((unsigned __int8)(1 << (2 * (v7 & 3))) & *(_BYTE *)(result + a1 + 236)) == 0) )
  {
    LOBYTE(a2) = v4;
    return anonymous_namespace_::ApplyKeyStateToQueue(a1, a2);
  }
  return result;
}
