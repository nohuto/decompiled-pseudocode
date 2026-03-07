__int64 __fastcall HalpApicX2WriteRegister(int a1, unsigned int a2)
{
  __int64 result; // rax

  result = a2;
  __writemsr((a1 >> 4) + 2048, a2);
  return result;
}
