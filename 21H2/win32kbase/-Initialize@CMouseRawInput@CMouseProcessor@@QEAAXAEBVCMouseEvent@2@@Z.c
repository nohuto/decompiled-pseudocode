/*
 * XREFs of ?Initialize@CMouseRawInput@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1C0041D90
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0040F54 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CMouseProcessor::CMouseRawInput::Initialize(
        CMouseProcessor::CMouseRawInput *this,
        const struct CMouseProcessor::CMouseEvent *a2)
{
  int v2; // r9d
  int v4; // ecx
  __int64 v5; // rax
  __int128 v6; // [rsp+0h] [rbp-28h]

  v2 = 0;
  *((_BYTE *)this + 68) = 0;
  LODWORD(v6) = 0;
  *(_OWORD *)this = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)&v6 + 1) = 0LL;
  *(_OWORD *)((char *)this + 40) = v6;
  *((_QWORD *)this + 7) = *(_OWORD *)&_mm_unpackhi_pd((__m128d)0LL, (__m128d)0LL);
  v4 = *(_DWORD *)(*((_QWORD *)a2 + 1) + 112LL) & 0x10;
  *((_BYTE *)this + 69) = v4 != 0;
  if ( !v4 )
  {
    *((_QWORD *)this + 4) = *(_QWORD *)(*((_QWORD *)a2 + 1) + 88LL);
    *((_QWORD *)this + 3) = *(_QWORD *)(*((_QWORD *)a2 + 1) + 80LL);
    v5 = *((_QWORD *)a2 + 1);
    *(_OWORD *)((char *)this + 40) = *(_OWORD *)v5;
    *((_QWORD *)this + 7) = *(_QWORD *)(v5 + 16);
    *((_DWORD *)this + 3) = *(_DWORD *)(*((_QWORD *)a2 + 1) + 44LL);
    *((_DWORD *)this + 4) = *(_DWORD *)(*((_QWORD *)a2 + 1) + 48LL);
    *((_DWORD *)this + 2) = 0;
    *((_DWORD *)this + 5) = *(_DWORD *)(*((_QWORD *)a2 + 1) + 40LL);
    *((_WORD *)this + 2) = *(_WORD *)(*((_QWORD *)a2 + 1) + 28LL);
    *((_WORD *)this + 3) = *(_WORD *)(*((_QWORD *)a2 + 1) + 30LL);
    *((_DWORD *)this + 2) = *(_DWORD *)(*((_QWORD *)a2 + 1) + 32LL);
    *(_WORD *)this = *((_WORD *)this + 35) & *(_WORD *)(*((_QWORD *)a2 + 1) + 36LL);
    if ( *((_DWORD *)this + 10) )
    {
      *((_DWORD *)this + 16) = 1;
      v2 = 1;
    }
    if ( (*(_DWORD *)(*((_QWORD *)a2 + 1) + 112LL) & 0x20) != 0 )
      *((_DWORD *)this + 16) = v2 | 2;
  }
}
