/*
 * XREFs of ?SetBufferProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C02180E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0030874 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ?SetBufferProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0215D20 (-SetBufferProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEB.c)
 */

__int64 __fastcall DirectComposition::CTableTransferEffectMarshaler::SetBufferProperty(
        DirectComposition::CTableTransferEffectMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _OWORD *a4,
        size_t Size,
        bool *a6)
{
  unsigned int v6; // ebx
  __int64 v8; // rax
  char *v9; // rsi
  void *Quota; // rax
  void *v11; // rbp

  v6 = 0;
  if ( a3 )
  {
    switch ( a3 )
    {
      case 1:
        v8 = 136LL;
        break;
      case 2:
        v8 = 152LL;
        break;
      case 3:
        v8 = 168LL;
        break;
      default:
        return (unsigned int)DirectComposition::CFilterEffectMarshaler::SetBufferProperty(this, a2, a3, a4, Size, a6);
    }
  }
  else
  {
    v8 = 120LL;
  }
  v9 = (char *)this + v8;
  if ( (DirectComposition::CTableTransferEffectMarshaler *)((char *)this + v8) )
  {
    if ( (Size & 3) != 0 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      Quota = (void *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(this, 260LL, Size, 1650869060);
      v11 = Quota;
      if ( Quota )
      {
        memmove(Quota, a4, Size);
        if ( *(_QWORD *)v9 )
          NSInstrumentation::CLeakTrackingAllocator::Free(
            (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
            *(char **)v9);
        *(_QWORD *)v9 = v11;
        *((_QWORD *)v9 + 1) = (unsigned int)(Size >> 2);
        *a6 = 1;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return v6;
}
