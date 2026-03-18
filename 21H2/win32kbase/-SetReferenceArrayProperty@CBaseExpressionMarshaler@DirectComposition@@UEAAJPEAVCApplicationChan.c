/*
 * XREFs of ?SetReferenceArrayProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C022ACB0
 * Callers:
 *     ?SetReferenceArrayProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C022AFE0 (-SetReferenceArrayProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationC.c)
 * Callees:
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD43C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CBaseExpressionMarshaler::SetReferenceArrayProperty(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  unsigned int i; // esi
  unsigned int v11; // esi

  v6 = 0;
  *a6 = 0;
  if ( !a4 )
    return (unsigned int)-1073741811;
  for ( i = 0; i < a5; ++i )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4[i] + 96LL))(
            a4[i],
            10LL) )
      return (unsigned int)-1073741811;
  }
  if ( a3 != 8 || *((_QWORD *)this + 14) || *((_DWORD *)this + 31) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    *((_DWORD *)this + 31) = a5;
    v11 = 0;
    *((_QWORD *)this + 14) = a4;
    *a6 = 1;
    *((_DWORD *)this + 4) &= ~0x200u;
    if ( *((_DWORD *)this + 31) )
    {
      do
        DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 14)
                                                                                                + 8LL * v11++));
      while ( v11 < *((_DWORD *)this + 31) );
    }
  }
  return v6;
}
