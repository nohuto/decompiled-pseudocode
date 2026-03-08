/*
 * XREFs of ?SetReferenceArrayProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C005E550
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C0061AAC (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1C00A17F4 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ?SetReferenceArrayProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C0262D30 (-SetReferenceArrayProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChan.c)
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetReferenceArrayProperty(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  struct DirectComposition::CResourceMarshaler **v7; // r10
  unsigned __int64 v11; // r11
  unsigned int i; // r9d
  int v13; // r9d
  unsigned int v14; // esi

  v6 = 0;
  v7 = a4;
  *a6 = 0;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v11 = a5;
  for ( i = 0; i < v11; i = v13 + 1 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                             *((unsigned int *)v7[i] + 9),
                             11LL) )
      return (unsigned int)-1073741811;
  }
  if ( a3 != 15 )
    return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetReferenceArrayProperty(
                           this,
                           a2,
                           a3,
                           v7,
                           v11,
                           a6);
  if ( *((_QWORD *)this + 18) || *((_DWORD *)this + 59) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    *((_DWORD *)this + 59) = v11;
    *((_QWORD *)this + 18) = v7;
    *a6 = 1;
    v14 = 0;
    *((_DWORD *)this + 4) &= ~0x800u;
    if ( *((_DWORD *)this + 59) )
    {
      do
        DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 18)
                                                                                                + 8LL * v14++));
      while ( v14 < *((_DWORD *)this + 59) );
    }
  }
  return v6;
}
