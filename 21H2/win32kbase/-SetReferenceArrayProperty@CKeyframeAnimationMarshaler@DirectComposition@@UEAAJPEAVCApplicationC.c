/*
 * XREFs of ?SetReferenceArrayProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C022AFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD43C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?SetReferenceArrayProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C022ACB0 (-SetReferenceArrayProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChan.c)
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetReferenceArrayProperty(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  unsigned int i; // esi
  unsigned int v12; // esi

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
  if ( a3 != 15 )
    return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetReferenceArrayProperty(
                           this,
                           a2,
                           a3,
                           a4,
                           a5,
                           a6);
  if ( *((_QWORD *)this + 19) || *((_DWORD *)this + 63) )
    return (unsigned int)-1073741811;
  *((_DWORD *)this + 63) = a5;
  v12 = 0;
  *((_QWORD *)this + 19) = a4;
  *a6 = 1;
  *((_DWORD *)this + 4) &= ~0x800u;
  if ( *((_DWORD *)this + 63) )
  {
    do
      DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 19)
                                                                                              + 8LL * v12++));
    while ( v12 < *((_DWORD *)this + 63) );
  }
  return v6;
}
