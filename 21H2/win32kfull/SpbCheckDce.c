/*
 * XREFs of SpbCheckDce @ 0x1C00DC6F0
 * Callers:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0049764 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     SpbCheck @ 0x1C00DC1F8 (SpbCheck.c)
 *     RevalidateDCE @ 0x1C00DC650 (RevalidateDCE.c)
 * Callees:
 *     IntersectRect @ 0x1C004CD28 (IntersectRect.c)
 *     GetStyleWindow @ 0x1C004CDA0 (GetStyleWindow.c)
 *     SpbCheckRect @ 0x1C00DC7C0 (SpbCheckRect.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall SpbCheckDce(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  LONG bottom; // r14d
  LONG right; // esi
  LONG top; // r15d
  LONG left; // edi
  unsigned int v9; // r12d
  struct tagWND *v10; // rbx
  int v11; // eax
  __int64 v12; // rax
  int v13; // edx
  int v14; // ecx
  __int64 StyleWindow; // rax
  __int64 v16; // rax
  int v17; // edx
  int v18; // ecx
  struct tagRECT v19; // [rsp+20h] [rbp-20h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v19 = 0LL;
  result = GreGetBounds(v2, &v19, 0LL);
  if ( (_DWORD)result )
  {
    v4 = *(_QWORD *)(a1 + 88);
    if ( !v4 || (v11 = *(_DWORD *)(a1 + 64), (v11 & 0x4000) != 0) || v11 < 0 )
    {
      bottom = v19.bottom;
      right = v19.right;
      top = v19.top;
      left = v19.left;
    }
    else
    {
      v12 = *(_QWORD *)(v4 + 40);
      v13 = *(_DWORD *)(v12 + 32);
      bottom = v13 + v19.bottom;
      v14 = *(_DWORD *)(v12 + 28);
      left = v14 + v19.left;
      right = v14 + v19.right;
      top = v13 + v19.top;
      v19.left += v14;
      v19.top += v13;
      v19.right += v14;
      v19.bottom += v13;
    }
    v9 = *(_DWORD *)(a1 + 64);
    if ( (v9 & 0x4000) != 0 )
    {
      StyleWindow = GetStyleWindow(*(_QWORD *)(a1 + 16), 2848);
      if ( StyleWindow )
      {
        v16 = *(_QWORD *)(StyleWindow + 40);
        v17 = *(_DWORD *)(v16 + 92);
        v18 = *(_DWORD *)(v16 + 88);
        v19.left = v18 + left;
        v19.right = v18 + right;
        v19.top = v17 + top;
        v19.bottom = v17 + bottom;
      }
    }
    v10 = *(struct tagWND **)(a1 + 16);
    result = IntersectRect(&v19, &v19.left, (int *)(*((_QWORD *)v10 + 5) + 88LL));
    if ( (_DWORD)result )
      return SpbCheckRect(v10, &v19, v9);
  }
  return result;
}
