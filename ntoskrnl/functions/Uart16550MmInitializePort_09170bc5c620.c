char __fastcall Uart16550MmInitializePort(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  *(_WORD *)(a2 + 12) = 1;
  return Uart16550InitializePortCommon(a1, a2, a3, a4, a5);
}
