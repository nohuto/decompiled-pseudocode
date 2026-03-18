/*
 * XREFs of ?SetBufferProperty@CNaturalAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0234390
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0030874 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C00A8F60 (-SetBufferProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 */

__int64 __fastcall DirectComposition::CNaturalAnimationMarshaler::SetBufferProperty(
        DirectComposition::CNaturalAnimationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _OWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  _OWORD *Quota; // rax

  v6 = 0;
  *a6 = 0;
  if ( a3 == 53 )
  {
    if ( a5 == 16 )
    {
      if ( *((_QWORD *)this + 24) )
      {
        return (unsigned int)-1073741790;
      }
      else
      {
        Quota = (_OWORD *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(this, 260LL, 16LL, 1936606020);
        *((_QWORD *)this + 24) = Quota;
        if ( Quota )
        {
          *Quota = *a4;
          *a6 = 1;
          *((_DWORD *)this + 4) |= 0x80000u;
        }
        else
        {
          return (unsigned int)-1073741801;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetBufferProperty(this, a2, a3, a4, a5, a6);
  }
  return v6;
}
