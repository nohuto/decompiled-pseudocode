__int64 __fastcall operator new[](unsigned __int64 a1, unsigned int a2, __int64 a3)
{
  if ( !a1 )
    a1 = 1LL;
  if ( a1 > 0x7FFFFFFF )
    return 0LL;
  else
    return ExAllocatePool2(a3, a1, a2);
}
