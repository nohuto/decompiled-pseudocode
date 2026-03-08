/*
 * XREFs of ?EnsureTimeListEntry@CAnimationMarshaler@DirectComposition@@IEAAJXZ @ 0x1C00B88A0
 * Callers:
 *     ?Initialize@CAnimationMarshaler@DirectComposition@@MEAAJXZ @ 0x1C00B8730 (-Initialize@CAnimationMarshaler@DirectComposition@@MEAAJXZ.c)
 *     ?SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00B8760 (-SetBufferProperty@CAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_K.c)
 * Callees:
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0068568 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 */

__int64 __fastcall DirectComposition::CAnimationMarshaler::EnsureTimeListEntry(
        DirectComposition::CAnimationMarshaler *this,
        unsigned __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v3; // ebx
  __int64 QuotaZInit; // rax

  v2 = *((_QWORD *)this + 10);
  v3 = 0;
  if ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 24) & 2) == 0 )
      goto LABEL_3;
    *((_QWORD *)this + 10) = 0LL;
  }
  QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(this, a2, 0x38uLL, 0x6C614344u);
  if ( !QuotaZInit )
  {
    *((_QWORD *)this + 10) = 0LL;
    return (unsigned int)-1073741801;
  }
  *(_DWORD *)(QuotaZInit + 48) = 1;
  *(_QWORD *)QuotaZInit = this;
  *((_QWORD *)this + 10) = QuotaZInit;
  if ( v2 )
    *(_QWORD *)(v2 + 16) = QuotaZInit;
LABEL_3:
  if ( !*((_QWORD *)this + 9) )
    *((_QWORD *)this + 9) = *((_QWORD *)this + 10);
  return v3;
}
