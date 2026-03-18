/*
 * XREFs of ?SetReferenceProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C002C9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0028FA0 (-SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C002FD60 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C003019C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1C0092B30 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 */

__int64 __fastcall DirectComposition::CExpressionMarshaler::SetReferenceProperty(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v8; // ebx
  DirectComposition::CResourceMarshaler *v9; // r9

  if ( a3 == 11 )
  {
    v8 = 0;
    if ( a4
      && (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((unsigned int *)a4 + 9), 169LL) )
    {
      if ( a4 != this[16] )
      {
        DirectComposition::CResourceMarshaler::AddRef(a4);
        DirectComposition::CApplicationChannel::ReleaseResource(a2, this[16]);
        this[16] = a4;
        *((_DWORD *)this + 4) &= ~0x800u;
        goto LABEL_11;
      }
      return v8;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 == 15 )
  {
    v8 = 0;
    if ( a4
      && (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((unsigned int *)a4 + 9), 169LL) )
    {
      if ( v9 != this[19] )
      {
        DirectComposition::CResourceMarshaler::AddRef(v9);
        DirectComposition::CApplicationChannel::ReleaseResource(a2, this[19]);
        this[19] = a4;
        *((_DWORD *)this + 4) &= ~0x800u;
        *((_BYTE *)this + 184) = 1;
LABEL_11:
        *a5 = 1;
        return v8;
      }
      return v8;
    }
    return (unsigned int)-1073741811;
  }
  return DirectComposition::CBaseExpressionMarshaler::SetReferenceProperty(
           (DirectComposition::CBaseExpressionMarshaler *)this,
           a2,
           a3,
           a4,
           a5);
}
