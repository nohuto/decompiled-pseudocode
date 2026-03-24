/*
 * XREFs of SpbCheckDce @ 0x1C00D5700
 * Callers:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0072764 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     RevalidateDCE @ 0x1C00D5600 (RevalidateDCE.c)
 *     SpbCheck @ 0x1C021A72C (SpbCheck.c)
 * Callees:
 *     GetStyleWindow @ 0x1C0071560 (GetStyleWindow.c)
 *     IntersectRect @ 0x1C0075160 (IntersectRect.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     SpbCheckRect @ 0x1C021A844 (SpbCheckRect.c)
 */

__int64 __fastcall SpbCheckDce(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rax
  int v7; // edx
  LONG bottom; // r14d
  int v9; // ecx
  LONG left; // edi
  LONG right; // esi
  LONG top; // r15d
  unsigned int v13; // r12d
  __int64 StyleWindow; // rax
  __int64 v15; // rax
  int v16; // edx
  int v17; // ecx
  __int64 v18; // rbx
  struct tagRECT v19; // [rsp+20h] [rbp-20h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v19 = 0LL;
  result = GreGetBounds(v2, &v19, 0LL);
  if ( (_DWORD)result )
  {
    v4 = *(_QWORD *)(a1 + 88);
    if ( !v4 || (v5 = *(_DWORD *)(a1 + 64), (v5 & 0x4000) != 0) || v5 < 0 )
    {
      bottom = v19.bottom;
      right = v19.right;
      top = v19.top;
      left = v19.left;
    }
    else
    {
      v6 = *(_QWORD *)(v4 + 40);
      v7 = *(_DWORD *)(v6 + 32);
      bottom = v7 + v19.bottom;
      v9 = *(_DWORD *)(v6 + 28);
      left = v9 + v19.left;
      right = v9 + v19.right;
      top = v7 + v19.top;
      v19.left += v9;
      v19.top += v7;
      v19.right += v9;
      v19.bottom += v7;
    }
    v13 = *(_DWORD *)(a1 + 64);
    if ( (v13 & 0x4000) != 0 )
    {
      StyleWindow = GetStyleWindow(*(_QWORD *)(a1 + 16), 2848);
      if ( StyleWindow )
      {
        v15 = *(_QWORD *)(StyleWindow + 40);
        v16 = *(_DWORD *)(v15 + 92);
        v17 = *(_DWORD *)(v15 + 88);
        v19.left = v17 + left;
        v19.right = v17 + right;
        v19.top = v16 + top;
        v19.bottom = v16 + bottom;
      }
    }
    v18 = *(_QWORD *)(a1 + 16);
    result = IntersectRect(&v19, &v19.left, (int *)(*(_QWORD *)(v18 + 40) + 88LL));
    if ( (_DWORD)result )
      return SpbCheckRect((struct tagWND *)v18, &v19, v13);
  }
  return result;
}
