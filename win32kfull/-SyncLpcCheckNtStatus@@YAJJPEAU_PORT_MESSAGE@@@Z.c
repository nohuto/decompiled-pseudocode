__int64 __fastcall SyncLpcCheckNtStatus(int a1, struct _PORT_MESSAGE *a2)
{
  __int64 result; // rax
  int Type; // ecx
  unsigned int v4; // edx

  result = (unsigned int)a1;
  if ( a1 >= 0 )
  {
    if ( a1 == 192 || a1 == 258 )
    {
      return 3221225473LL;
    }
    else
    {
      Type = (unsigned __int16)a2->u2.s2.Type;
      v4 = -1073741823;
      if ( (Type & 0xFFFF00FF) == 2 )
        return (unsigned int)result;
      return v4;
    }
  }
  return result;
}
