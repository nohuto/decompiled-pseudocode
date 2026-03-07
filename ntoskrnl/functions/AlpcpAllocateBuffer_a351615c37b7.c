__int64 __fastcall AlpcpAllocateBuffer(__int64 a1, __int64 a2, __int64 a3)
{
  return ExAllocatePool2(256LL, a2, a3);
}
