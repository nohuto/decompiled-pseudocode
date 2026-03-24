/*
 * XREFs of xxxSetWindowRgn @ 0x1C010DEC0
 * Callers:
 *     NtUserSetWindowRgn @ 0x1C010DDD0 (NtUserSetWindowRgn.c)
 *     NtUserSetWindowRgnEx @ 0x1C0202BE0 (NtUserSetWindowRgnEx.c)
 * Callees:
 *     InternalBeginDeferWindowPos @ 0x1C006B960 (InternalBeginDeferWindowPos.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C006B9F0 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006ED1C (xxxEndDeferWindowPosEx.c)
 *     MirrorRegion @ 0x1C010DF9C (MirrorRegion.c)
 */

__int64 __fastcall xxxSetWindowRgn(_QWORD *a1, __int64 a2, int a3)
{
  unsigned int v3; // edi
  __int64 v6; // rax
  __int64 v7; // rbx
  void *v8; // rcx
  __int64 v9; // rax

  v3 = 0;
  if ( a2 )
  {
    v6 = UserValidateCopyRgn(a2);
    v7 = v6;
    if ( !v6 )
    {
LABEL_10:
      GreDeleteObject(v7);
      return v3;
    }
    MirrorRegion(a1, v6, 0LL);
  }
  else
  {
    v7 = 1LL;
  }
  v8 = InternalBeginDeferWindowPos(1);
  if ( !v8
    || (v9 = _DeferWindowPos((__int64)v8, a1, 0LL, 0, 0, 0, 0, a3 != 0 ? 6199 : 6207, 0)) == 0
    || (*(_QWORD *)(*(_QWORD *)(v9 + 40) + 112LL) = v7, (v3 = xxxEndDeferWindowPosEx((struct tagSMWP *)v9, 0)) == 0) )
  {
    if ( v7 != 1 )
      goto LABEL_10;
  }
  return v3;
}
