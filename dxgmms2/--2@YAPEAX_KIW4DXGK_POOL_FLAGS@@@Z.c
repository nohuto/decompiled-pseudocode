__int64 __fastcall operator new(__int64 a1, unsigned int a2, __int64 a3)
{
  return ExAllocatePool2(a3, a1, a2);
}
