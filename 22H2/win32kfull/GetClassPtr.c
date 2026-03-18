/*
 * XREFs of GetClassPtr @ 0x1C00B4D40
 * Callers:
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 *     _GetWOWClass @ 0x1C01BE188 (_GetWOWClass.c)
 * Callees:
 *     _InnerGetClassPtr @ 0x1C00CC96C (_InnerGetClassPtr.c)
 */

__int64 __fastcall GetClassPtr(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  unsigned __int16 v6; // bx
  __int64 result; // rax
  __int64 v8; // r9
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 v11; // r9

  v4 = a2 + 344;
  v6 = a1;
  result = InnerGetClassPtr(a1, a2 + 344, a3, a4);
  if ( !result )
  {
    result = InnerGetClassPtr(v6, a2 + 352, 0LL, v8);
    if ( !result )
    {
      v10 = hModClient;
      result = InnerGetClassPtr(v6, v4, hModClient, v9);
      if ( !result )
        return InnerGetClassPtr(v6, a2 + 352, v10, v11);
    }
  }
  return result;
}
