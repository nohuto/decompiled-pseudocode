/*
 * XREFs of ?Initialize@CMouseRawInput@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1C00C9578
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0052A60 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMouseProcessor::CMouseRawInput::Initialize(
        CMouseProcessor::CMouseRawInput *this,
        const struct CMouseProcessor::CMouseEvent *a2)
{
  int v4; // ecx
  __int64 v5; // rax
  int v6; // ecx
  bool v7; // zf

  *((_BYTE *)this + 68) = 0;
  *(_OWORD *)this = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *(_OWORD *)((char *)this + 40) = 0uLL;
  *((_QWORD *)this + 7) = *(_OWORD *)&_mm_unpackhi_pd((__m128d)0LL, (__m128d)0LL);
  v4 = *(_DWORD *)(*((_QWORD *)a2 + 1) + 112LL);
  *((_BYTE *)this + 69) = (v4 & 0x10) != 0;
  if ( (v4 & 0x10) == 0 )
  {
    *((_QWORD *)this + 4) = *(_QWORD *)(*((_QWORD *)a2 + 1) + 88LL);
    *((_QWORD *)this + 3) = *(_QWORD *)(*((_QWORD *)a2 + 1) + 80LL);
    v5 = *((_QWORD *)a2 + 1);
    *(_OWORD *)((char *)this + 40) = *(_OWORD *)v5;
    *((_QWORD *)this + 7) = *(_QWORD *)(v5 + 16);
    *((_DWORD *)this + 3) = *(_DWORD *)(*((_QWORD *)a2 + 1) + 44LL);
    v6 = *(_DWORD *)(*((_QWORD *)a2 + 1) + 48LL);
    *((_DWORD *)this + 2) = 0;
    *((_DWORD *)this + 4) = v6;
    *((_DWORD *)this + 5) = *(_DWORD *)(*((_QWORD *)a2 + 1) + 40LL);
    *((_WORD *)this + 2) = (**(__int64 (__fastcall ***)(const struct CMouseProcessor::CMouseEvent *))a2)(a2);
    *((_WORD *)this + 3) = (*(__int64 (__fastcall **)(const struct CMouseProcessor::CMouseEvent *))(*(_QWORD *)a2 + 8LL))(a2);
    *((_DWORD *)this + 2) = *(_DWORD *)(*((_QWORD *)a2 + 1) + 32LL);
    v7 = *((_DWORD *)this + 10) == 0;
    *(_WORD *)this = *((_WORD *)this + 35) & *(_WORD *)(*((_QWORD *)a2 + 1) + 36LL);
    if ( !v7 )
      *((_DWORD *)this + 16) |= 1u;
    if ( (*(_DWORD *)(*((_QWORD *)a2 + 1) + 112LL) & 0x20) != 0 )
      *((_DWORD *)this + 16) |= 2u;
  }
}
