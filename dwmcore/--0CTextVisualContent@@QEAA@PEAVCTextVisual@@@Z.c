/*
 * XREFs of ??0CTextVisualContent@@QEAA@PEAVCTextVisual@@@Z @ 0x1802516B4
 * Callers:
 *     ?Initialize@CTextVisual@@MEAAJXZ @ 0x1802518A0 (-Initialize@CTextVisual@@MEAAJXZ.c)
 * Callees:
 *     ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x1800B8F68 (--0CContent@@IEAA@PEAVCComposition@@@Z.c)
 */

CTextVisualContent *__fastcall CTextVisualContent::CTextVisualContent(
        CTextVisualContent *this,
        struct CComposition **a2)
{
  CTextVisualContent *v2; // r10
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  CTextVisualContent *result; // rax
  __int64 v7; // r9

  *((_QWORD *)this + 8) = &CParticleEmitter::`vbtable'{for `CContent'};
  *((_QWORD *)this + 14) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 13) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 14) + 4LL) + 112) = &COverlaySwapChainBase::`vftable'{for `IUnknown'};
  CContent::CContent(this, a2[2]);
  v3 = *((_QWORD *)v2 + 8);
  *(_QWORD *)v2 = &CTextVisualContent::`vftable';
  *(_QWORD *)((char *)v2 + *(int *)(v3 + 4) + 64) = &CTextVisualContent::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)v2 + *(int *)(*((_QWORD *)v2 + 8) + 8LL) + 64) = &CTextVisualContent::`vftable'{for `IContent'};
  v4 = *(int *)(*((_QWORD *)v2 + 8) + 4LL);
  *(_DWORD *)((char *)v2 + v4 + 60) = v4 - 24;
  v5 = *(int *)(*((_QWORD *)v2 + 8) + 8LL);
  result = v2;
  *(_DWORD *)((char *)v2 + v5 + 60) = v5 - 40;
  *((_QWORD *)v2 + 9) = v7;
  return result;
}
