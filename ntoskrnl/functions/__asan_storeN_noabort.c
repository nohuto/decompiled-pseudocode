__int64 __fastcall _asan_storeN_noabort(ULONG_PTR BugCheckParameter1, ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax
  ULONG_PTR v4; // rdx
  __int64 v5; // r9
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  if ( KasaniEnabled )
  {
    result = 0xFFFF800000000000uLL;
    if ( BugCheckParameter1 >= 0xFFFF800000000000uLL )
    {
      if ( BugCheckParameter2 )
      {
        v4 = BugCheckParameter1;
        do
        {
          v5 = *(unsigned __int8 *)(((v4 + 0x800000000000LL) >> 3) + KasaniShadow);
          if ( (_BYTE)v5 )
          {
            if ( (char)((v4 & 7) + 1) > (char)v5 )
              KeBugCheckEx(0x1F2u, BugCheckParameter1, BugCheckParameter2, retaddr, v5 | 0x100);
          }
          result = ++v4 - BugCheckParameter1;
        }
        while ( v4 - BugCheckParameter1 < BugCheckParameter2 );
      }
    }
  }
  return result;
}
