/*
 * XREFs of ?RemoveAllDisplaySource@SESSION_VIEW@@QEAAXXZ @ 0x1C01C582C
 * Callers:
 *     ?RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ @ 0x1C01C4F08 (-RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z @ 0x1C01C55D8 (-RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SESSION_VIEW::RemoveAllDisplaySource(SESSION_VIEW *this)
{
  SESSION_VIEW *v1; // rdx
  SESSION_VIEW *v2; // r9
  SESSION_VIEW *v3; // rax
  SESSION_VIEW *v4; // r10
  SESSION_VIEW **v5; // rax

  v1 = (SESSION_VIEW *)*((_QWORD *)this + 6);
  while ( v1 != (SESSION_VIEW *)((char *)this + 48) )
  {
    v2 = *(SESSION_VIEW **)v1;
    v3 = v1;
    v4 = v1;
    v1 = v2;
    *((_QWORD *)v3 - 1) = 0LL;
    if ( *((SESSION_VIEW **)v2 + 1) != v3 || (v5 = (SESSION_VIEW **)*((_QWORD *)v3 + 1), *v5 != v4) )
      __fastfail(3u);
    *v5 = v2;
    *((_QWORD *)v2 + 1) = v5;
    --*((_DWORD *)this + 10);
  }
}
