__int64 __fastcall IommupHvDismissPageFault(int a1, __int64 a2, __int16 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+38h] [rbp-30h]
  ULONG_PTR BugCheckParameter4; // [rsp+40h] [rbp-28h]
  __int64 v12; // [rsp+48h] [rbp-20h]

  BugCheckParameter4 = 0LL;
  v12 = 0LL;
  v9 = a2;
  v7 = a3 & 0x1FF;
  if ( a1 != -1 )
    v7 = ((unsigned int)v7 ^ (a1 << 11)) & 0x7FFFF800 ^ (unsigned __int64)v7 | 0x400;
  BugCheckParameter3 = v7 | 0x8000000000000000uLL;
  if ( a4 >= 0 )
  {
    if ( a6 && !IommupHvGpaAlwaysValid )
    {
      BugCheckParameter3 = v7 | 0xC000000000000000uLL;
      BugCheckParameter4 = a6 & 0xF | a5 & 0xFFFFFFFFFFFFF000uLL;
    }
  }
  else
  {
    BugCheckParameter3 = v7 | 0xA000000000000000uLL;
  }
  result = ((__int64 (__fastcall *)(__int64, __int64 *))qword_140C62240)(1LL, &v9);
  if ( (int)result < 0 )
    KeBugCheckEx(0x159u, 0x3102uLL, (int)result, BugCheckParameter3, BugCheckParameter4);
  return result;
}
