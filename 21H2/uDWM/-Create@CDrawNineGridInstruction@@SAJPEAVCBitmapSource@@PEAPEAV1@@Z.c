/*
 * XREFs of ?Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z @ 0x18000D814
 * Callers:
 *     ?UpdateBitmap@CImage@@QEAAJXZ @ 0x18000D78C (-UpdateBitmap@CImage@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CDrawNineGridInstruction@@AEAAJPEAVCBitmapSource@@@Z @ 0x18000D9F4 (-Initialize@CDrawNineGridInstruction@@AEAAJPEAVCBitmapSource@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawNineGridInstruction::Create(struct CBitmapSource *a1, struct CDrawNineGridInstruction **a2)
{
  __int64 v4; // rax
  CDrawNineGridInstruction *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi

  v4 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         128LL);
  v5 = (CDrawNineGridInstruction *)v4;
  if ( v4 )
  {
    *(_DWORD *)(v4 + 8) = 1;
    *(_QWORD *)v4 = &CDrawNineGridInstruction::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v6 = CDrawNineGridInstruction::Initialize(v5, a1);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x36u);
    }
    else
    {
      *a2 = v5;
      v5 = 0LL;
    }
    if ( v5 )
      CBaseObject::Release(v5);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x34u);
  }
  return v7;
}
