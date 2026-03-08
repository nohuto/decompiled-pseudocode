/*
 * XREFs of ?SmartRectInRegion@@YAIPEAUHRGN__@@PEAUtagRECT@@@Z @ 0x1C0050388
 * Callers:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C0052B80 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall SmartRectInRegion(HRGN a1, struct tagRECT *a2)
{
  int RgnBox; // eax
  LONG left; // edx
  LONG v6; // ecx
  LONG right; // eax
  LONG top; // edx
  LONG v9; // ecx
  LONG bottom; // eax
  __int64 v11; // rax
  bool v12; // zf
  int v14; // eax
  __int64 v15; // rcx
  __int128 v16; // [rsp+20h] [rbp-20h] BYREF

  v16 = 0LL;
  if ( !(unsigned int)GreRectInRegion(a1, a2) )
    return 0LL;
  RgnBox = GreGetRgnBox(a1, &v16);
  if ( !RgnBox )
    return 3LL;
  if ( RgnBox != 2 )
  {
    SetRectRgnIndirect(ghrgnInv2, a2);
    v14 = GreCombineRgn(ghrgnInv2, ghrgnInv2, a1, 1LL) - 1;
    if ( v14 )
    {
      if ( v14 != 1 )
        return 1LL;
      if ( (unsigned int)GreGetRgnBox(ghrgnInv2, &v16) )
      {
        v15 = *(_QWORD *)&a2->left - v16;
        if ( *(_QWORD *)&a2->left == (_QWORD)v16 )
          v15 = *(_QWORD *)&a2->right - *((_QWORD *)&v16 + 1);
        v12 = v15 == 0;
        goto LABEL_17;
      }
      return 3LL;
    }
    return 0LL;
  }
  left = v16;
  v6 = DWORD2(v16);
  if ( (int)v16 <= a2->left )
    left = a2->left;
  right = a2->right;
  LODWORD(v16) = left;
  if ( SDWORD2(v16) >= right )
    v6 = right;
  DWORD2(v16) = v6;
  if ( left >= v6 )
    return 0LL;
  top = DWORD1(v16);
  v9 = HIDWORD(v16);
  if ( SDWORD1(v16) <= a2->top )
    top = a2->top;
  bottom = a2->bottom;
  DWORD1(v16) = top;
  if ( SHIDWORD(v16) >= bottom )
    v9 = bottom;
  HIDWORD(v16) = v9;
  if ( top >= v9 )
    return 0LL;
  v11 = *(_QWORD *)&a2->left - v16;
  if ( *(_QWORD *)&a2->left == (_QWORD)v16 )
    v11 = *(_QWORD *)&a2->right - *((_QWORD *)&v16 + 1);
  v12 = v11 == 0;
LABEL_17:
  if ( !v12 )
    return 1LL;
  return 2LL;
}
