__int64 __fastcall VidMmiGetLogicalAddress(void *a1, __int64 a2)
{
  __int64 result; // rax

  result = SysMmGetLogicalAddress(a1);
  if ( result )
    result += a2;
  return result;
}
