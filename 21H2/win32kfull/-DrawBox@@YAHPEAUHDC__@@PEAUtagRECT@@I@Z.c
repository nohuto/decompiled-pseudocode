/*
 * XREFs of ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C00439E0
 * Callers:
 *     DrawFrameControl @ 0x1C0045C38 (DrawFrameControl.c)
 * Callees:
 *     GreSetTextColor @ 0x1C0044618 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C00446A0 (GreSetBkColor.c)
 *     FillRect @ 0x1C0045734 (FillRect.c)
 *     GrePolyPatBlt @ 0x1C0045794 (GrePolyPatBlt.c)
 *     GreExtTextOutWInternal @ 0x1C00AAE5C (GreExtTextOutWInternal.c)
 *     ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x1C011BB0C (-FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

__int64 __fastcall DrawBox(HDC a1, struct tagRECT *a2, __int16 a3)
{
  unsigned __int16 *v3; // r14
  int v5; // r15d
  const wchar_t *v8; // rax
  LONG top; // r9d
  int v10; // r10d
  int v11; // eax
  int v12; // ecx
  int v13; // r12d
  int v14; // r13d
  unsigned __int16 *v15; // r14
  __int64 i; // rbx
  HBRUSH *v18; // r8
  int v19; // [rsp+20h] [rbp-49h]

  v3 = L"nmlkji";
  v5 = a3 & 0x708;
  if ( (a3 & 2) != 0 )
  {
    v18 = (HBRUSH *)ghbrWhite;
    goto LABEL_16;
  }
  if ( (a3 & 1) != 0 )
  {
    v18 = (HBRUSH *)ghbrBlack;
LABEL_16:
    FillRect(a1, a2, *v18);
    goto LABEL_6;
  }
  v8 = L"gfedcb";
  if ( (a3 & 4) != 0 )
    v8 = L"nmlkji";
  v3 = (unsigned __int16 *)v8;
LABEL_6:
  top = a2->top;
  v10 = a2->bottom - top;
  v11 = a2->right - a2->left;
  v12 = v11;
  if ( v11 >= v10 )
    v12 = a2->bottom - top;
  v13 = a2->left + (v11 - v12) / 2;
  v14 = top + (v10 - v12) / 2;
  if ( v5 == 1032 && (*(_WORD *)(gpsi + 6996LL) < 8u || *(_DWORD *)(gpsi + 4648LL) == 0xFFFFFF) )
  {
    GreSetBkColor(a1);
    GreSetTextColor(a1);
    GrePolyPatBlt(a1);
    GreSetBkColor(a1);
  }
  else
  {
    GreSetTextColor(a1);
    GreExtTextOutWInternal(a1, v13, v14, 0, 0LL, v3, 1, 0LL, 0LL, 0);
  }
  v15 = v3 + 1;
  for ( i = 1LL; i < 5; ++i )
  {
    GreSetTextColor(a1);
    GreExtTextOutWInternal(a1, v13, v14, 0, 0LL, v15++, 1, 0LL, 0LL, 0);
  }
  if ( (a3 & 0x400) != 0 )
  {
    GreSetTextColor(a1);
    FlipUserTextOutW(a1, v13, v14, v15, v19);
  }
  GreSetTextColor(a1);
  return 1LL;
}
