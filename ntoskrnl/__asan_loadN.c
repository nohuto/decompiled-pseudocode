/*
 * XREFs of __asan_loadN @ 0x140563E40
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall _asan_loadN(ULONG_PTR BugCheckParameter1, ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax
  ULONG_PTR v5; // rdx
  unsigned __int64 v6; // rcx
  char v7; // r9
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  if ( KasaniEnabled )
  {
    result = 0xFFFF800000000000uLL;
    if ( BugCheckParameter1 >= 0xFFFF800000000000uLL )
    {
      if ( BugCheckParameter2 )
      {
        v5 = BugCheckParameter1;
        do
        {
          v6 = (v5 + 0x800000000000LL) >> 3;
          v7 = *(_BYTE *)(v6 + KasaniShadow);
          if ( v7 )
          {
            if ( (char)((v5 & 7) + 1) > v7 )
              KeBugCheckEx(
                0x1F2u,
                BugCheckParameter1,
                BugCheckParameter2,
                retaddr,
                *(unsigned __int8 *)(v6 + KasaniShadow));
          }
          result = ++v5 - BugCheckParameter1;
        }
        while ( v5 - BugCheckParameter1 < BugCheckParameter2 );
      }
    }
  }
  return result;
}
