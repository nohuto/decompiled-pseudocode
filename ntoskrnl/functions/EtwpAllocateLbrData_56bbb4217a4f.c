__int64 __fastcall EtwpAllocateLbrData(__int64 a1)
{
  __int64 Pool2; // rax

  Pool2 = ExAllocatePool2(64LL, 20LL, 2021094469LL);
  if ( !Pool2 )
    return 3221225495LL;
  *(_QWORD *)(a1 + 1024) = Pool2;
  return 0LL;
}
