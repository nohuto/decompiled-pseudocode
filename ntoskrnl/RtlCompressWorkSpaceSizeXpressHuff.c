__int64 __fastcall RtlCompressWorkSpaceSizeXpressHuff(__int16 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( a1 == 256 )
    {
      *a2 = 1415999;
      result = 0LL;
      *a3 = 5161;
    }
    else
    {
      return 3221225659LL;
    }
  }
  else
  {
    *a2 = 166495;
    result = 0LL;
    *a3 = 5161;
  }
  return result;
}
