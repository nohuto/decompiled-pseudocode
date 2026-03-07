__int64 __fastcall HalpApic1WriteRegister(int a1, int a2)
{
  __int64 result; // rax

  result = HalpLocalApic;
  *(_DWORD *)(a1 + HalpLocalApic) = a2;
  return result;
}
