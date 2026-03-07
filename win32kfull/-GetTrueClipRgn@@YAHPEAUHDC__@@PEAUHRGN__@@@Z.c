__int64 __fastcall GetTrueClipRgn(HDC a1, HRGN a2)
{
  HRGN EmptyRgn; // rbx
  unsigned int v5; // ebp
  __int64 result; // rax
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  EmptyRgn = (HRGN)CreateEmptyRgn(a1, a2);
  v5 = GreCopyVisRgn(a1, a2);
  result = GreGetDCOrg(a1, &v7);
  if ( (_DWORD)result )
  {
    if ( (unsigned int)GreGetRandomRgn(a1, EmptyRgn, 1) )
    {
      GreOffsetRgn(EmptyRgn, (unsigned int)v7, HIDWORD(v7));
      v5 = GreCombineRgn(a2, a2, EmptyRgn, 1LL);
    }
    GreOffsetRgn(a2, (unsigned int)-(int)v7, (unsigned int)-HIDWORD(v7));
    GreDeleteObject(EmptyRgn);
    return v5;
  }
  return result;
}
