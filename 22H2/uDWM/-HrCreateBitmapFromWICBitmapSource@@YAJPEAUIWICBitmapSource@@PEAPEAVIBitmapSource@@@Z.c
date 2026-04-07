/*
 * XREFs of ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x18004FE5C
 * Callers:
 *     ?DecompressBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x18004FCE8 (-DecompressBitmap@CCompressedSourceBitmap@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HrInit@CWICBitmapWrapper@@QEAAJPEAUIWICBitmapSource@@@Z @ 0x18004FEF0 (-HrInit@CWICBitmapWrapper@@QEAAJPEAUIWICBitmapSource@@@Z.c)
 *     ??0CWICBitmapWrapper@@QEAA@XZ @ 0x180050150 (--0CWICBitmapWrapper@@QEAA@XZ.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800515EC (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180051BCC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HrCreateBitmapFromWICBitmapSource(struct IWICBitmapSource *a1, struct IBitmapSource **a2)
{
  CWICBitmapWrapper *v4; // rax
  CMILCOMBase *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  struct IBitmapSource *v8; // rax

  v4 = (CWICBitmapWrapper *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                              WPF::g_pProcessHeap,
                              248LL);
  if ( v4 )
    v5 = CWICBitmapWrapper::CWICBitmapWrapper(v4);
  else
    v5 = 0LL;
  if ( v5 )
  {
    CMILCOMBase::InternalAddRef(v5);
    v6 = CWICBitmapWrapper::HrInit(v5, a1);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x1Au);
    }
    else
    {
      v8 = (CMILCOMBase *)((char *)v5 + 16);
      v5 = 0LL;
      *a2 = v8;
    }
    if ( v5 )
      CMILCOMBase::InternalRelease(v5);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x17u);
  }
  return v7;
}
