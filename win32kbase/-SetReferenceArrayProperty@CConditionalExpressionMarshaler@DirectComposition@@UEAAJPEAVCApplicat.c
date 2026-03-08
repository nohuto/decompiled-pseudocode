/*
 * XREFs of ?SetReferenceArrayProperty@CConditionalExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C0263590
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C0061AAC (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1C00A17F4 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 */

__int64 __fastcall DirectComposition::CConditionalExpressionMarshaler::SetReferenceArrayProperty(
        DirectComposition::CConditionalExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  unsigned __int64 v8; // r11
  unsigned int i; // r10d
  unsigned int v10; // ebp
  int v11; // r10d
  unsigned int j; // esi

  v6 = 0;
  *a6 = 0;
  if ( a3 != 11 || !a4 )
    return (unsigned int)-1073741811;
  v8 = a5;
  for ( i = 0; i < v8; i = v11 + 1 )
  {
    v10 = *((_DWORD *)a4[i] + 9);
    if ( !DirectComposition::CResourceMarshaler::IsDerivedResourceType(v10, 60)
      && !DirectComposition::CResourceMarshaler::IsDerivedResourceType(v10, 112) )
    {
      return (unsigned int)-1073741811;
    }
  }
  if ( *((_QWORD *)this + 16) || *((_DWORD *)this + 34) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    *((_DWORD *)this + 34) = v8;
    *((_QWORD *)this + 16) = a4;
    *a6 = 1;
    for ( j = 0; j < *((_DWORD *)this + 34); ++j )
      DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 16)
                                                                                              + 8LL * j));
  }
  return v6;
}
