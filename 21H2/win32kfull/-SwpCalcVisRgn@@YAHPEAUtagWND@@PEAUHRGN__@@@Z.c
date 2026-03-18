/*
 * XREFs of ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00DF0C0
 * Callers:
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C00435F8 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0047DD4 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     GetRedirectionBitmap @ 0x1C0049330 (GetRedirectionBitmap.c)
 *     CalcVisRgn @ 0x1C004B8D0 (CalcVisRgn.c)
 *     GetLayeredOrRedirectedParent @ 0x1C00DF160 (GetLayeredOrRedirectedParent.c)
 *     ?IsMinimizedSausageWindow@@YAHQEBUtagWND@@@Z @ 0x1C00DF1BC (-IsMinimizedSausageWindow@@YAHQEBUtagWND@@@Z.c)
 */

__int64 __fastcall SwpCalcVisRgn(struct tagWND *a1, HRGN a2)
{
  char v3; // cl
  int v4; // ebx
  __int64 LayeredOrRedirectedParent; // rax
  const struct tagWND *v6; // rsi
  unsigned int v7; // r9d
  int v8; // eax
  HRGN v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  v3 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  if ( (v3 & 0x10) == 0 )
    return 0LL;
  v4 = (4 * (v3 & 4)) | 1;
  LayeredOrRedirectedParent = GetLayeredOrRedirectedParent(a1);
  v6 = (const struct tagWND *)LayeredOrRedirectedParent;
  v7 = v4;
  if ( LayeredOrRedirectedParent && (*(_DWORD *)(*(_QWORD *)(LayeredOrRedirectedParent + 40) + 24LL) & 0x20000000) != 0 )
  {
    if ( GetRedirectionBitmap(LayeredOrRedirectedParent) )
    {
      v8 = IsMinimizedSausageWindow(v6);
      v7 = v4;
      if ( !v8 )
        v7 = v4 | 0x4000;
    }
    else
    {
      v7 = v4;
    }
  }
  return CalcVisRgn(&v10, a1, a1, v7);
}
