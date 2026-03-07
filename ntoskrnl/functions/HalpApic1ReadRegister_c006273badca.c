__int64 __fastcall HalpApic1ReadRegister(int a1)
{
  return *(unsigned int *)(a1 + HalpLocalApic);
}
