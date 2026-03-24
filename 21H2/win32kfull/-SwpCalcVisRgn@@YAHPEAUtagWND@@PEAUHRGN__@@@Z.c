/*
 * XREFs of ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00BEE08
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006E030 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C006EC64 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     CalcVisRgn @ 0x1C0073950 (CalcVisRgn.c)
 *     GetLayeredOrRedirectedParent @ 0x1C00BEEB0 (GetLayeredOrRedirectedParent.c)
 *     GetRedirectionBitmap @ 0x1C00BEF20 (GetRedirectionBitmap.c)
 *     ?IsMinimizedSausageWindow@@YAHQEAUtagWND@@@Z @ 0x1C00BEF60 (-IsMinimizedSausageWindow@@YAHQEAUtagWND@@@Z.c)
 */

__int64 __fastcall SwpCalcVisRgn(struct tagWND *a1, HRGN a2)
{
  char v3; // cl
  int v4; // ebx
  __int64 LayeredOrRedirectedParent; // rax
  struct tagWND *v6; // rsi
  unsigned int v7; // r10d
  __int64 RedirectionBitmap; // rax
  HRGN v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  v3 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  if ( (v3 & 0x10) == 0 )
    return 0LL;
  v4 = (4 * (v3 & 4)) | 1;
  LayeredOrRedirectedParent = GetLayeredOrRedirectedParent(a1);
  v6 = (struct tagWND *)LayeredOrRedirectedParent;
  v7 = v4;
  if ( LayeredOrRedirectedParent )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(LayeredOrRedirectedParent + 40) + 24LL) & 0x20000000) != 0 )
    {
      RedirectionBitmap = GetRedirectionBitmap(LayeredOrRedirectedParent);
      v7 = v4;
      if ( RedirectionBitmap )
      {
        if ( !(unsigned int)IsMinimizedSausageWindow(v6) )
          v7 |= 0x4000u;
      }
    }
  }
  return CalcVisRgn(&v10, (__int64)a1, a1, v7);
}
