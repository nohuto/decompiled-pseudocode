/*
 * XREFs of ?GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C022DF9C
 * Callers:
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C022E08C (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 * Callees:
 *     GreGetRandomRgn @ 0x1C0131360 (GreGetRandomRgn.c)
 */

__int64 __fastcall GetTrueClipRgn(HDC a1, HRGN a2, __int64 a3, __int64 a4)
{
  HRGN EmptyRgn; // rbx
  unsigned int v7; // ebp
  __int64 result; // rax
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  EmptyRgn = (HRGN)CreateEmptyRgn(a1, a2, a3, a4);
  v7 = GreCopyVisRgn(a1, a2);
  result = GreGetDCOrg(a1, &v9);
  if ( (_DWORD)result )
  {
    if ( (unsigned int)GreGetRandomRgn(a1, EmptyRgn, 1) )
    {
      GreOffsetRgn(EmptyRgn, (unsigned int)v9, HIDWORD(v9));
      v7 = GreCombineRgn(a2, a2, EmptyRgn, 1LL);
    }
    GreOffsetRgn(a2, (unsigned int)-(int)v9, (unsigned int)-HIDWORD(v9));
    GreDeleteObject(EmptyRgn);
    return v7;
  }
  return result;
}
