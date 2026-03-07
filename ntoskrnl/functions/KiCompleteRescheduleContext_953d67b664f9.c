__int64 __fastcall KiCompleteRescheduleContext(_BYTE *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = 0LL;
  if ( *a1 )
  {
    do
    {
      KiCompleteRescheduleContextEntry((__int64)&a1[32 * v2 + 16 + 8 * (unsigned int)v2], a2);
      result = (unsigned __int8)*a1;
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < (unsigned int)result );
  }
  return result;
}
