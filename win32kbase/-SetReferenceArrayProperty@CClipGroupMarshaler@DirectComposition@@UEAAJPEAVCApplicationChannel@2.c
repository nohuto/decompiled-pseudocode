/*
 * XREFs of ?SetReferenceArrayProperty@CClipGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C0254AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C0061AAC (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1C00A17F4 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CClipGroupMarshaler::SetReferenceArrayProperty(
        DirectComposition::CClipGroupMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  struct DirectComposition::CApplicationChannel *v7; // r9
  __int64 i; // r10
  int v10; // r10d
  __int64 v11; // rsi
  unsigned int v12; // ebx

  v7 = a2;
  *a6 = 0;
  if ( a3 == 4 && a4 )
  {
    for ( i = 0LL; (unsigned int)i < a5; i = (unsigned int)(v10 + 1) )
    {
      if ( !DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)a4[i] + 9), 67) )
        return (unsigned int)-1073741811;
    }
    if ( *((_QWORD *)this + 12) )
      (*(void (__fastcall **)(DirectComposition::CClipGroupMarshaler *, struct DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 192LL))(
        this,
        v7);
    *((_DWORD *)this + 26) = a5;
    v11 = 0LL;
    *((_QWORD *)this + 12) = a4;
    v12 = 0;
    for ( *a6 = 1; (unsigned int)v11 < *((_DWORD *)this + 26); v11 = (unsigned int)(v11 + 1) )
      DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 12)
                                                                                              + 8 * v11));
    *((_DWORD *)this + 27) = 0;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v12;
}
