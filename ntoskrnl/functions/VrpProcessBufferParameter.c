__int64 __fastcall VrpProcessBufferParameter(char a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  unsigned int v4; // ebx
  __int64 Pool2; // rax

  v4 = 0;
  Pool2 = 0LL;
  if ( a1 == 1 )
  {
    if ( a3 && (Pool2 = ExAllocatePool2(256LL, a3, 1734693462LL)) == 0 )
      return (unsigned int)-1073741670;
    else
      *a4 = Pool2;
  }
  else
  {
    *a4 = a2;
  }
  return v4;
}
