/*
 * XREFs of ?SetReferenceProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0065310
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@PEAPEAV?$CWeakReference@VCResourceMarshaler@DirectComposition@@@2@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1C00619CC (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@P.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1C00A17F4 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 */

__int64 __fastcall DirectComposition::CExpressionMarshaler::SetReferenceProperty(
        DirectComposition::CExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v7; // ebx
  DirectComposition::CApplicationChannel *v8; // r9
  bool v9; // zf
  DirectComposition::CApplicationChannel *v10; // r9

  switch ( a3 )
  {
    case 11:
      v7 = 0;
      if ( a4
        && (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                              *((unsigned int *)a4 + 9),
                              169LL) )
      {
        if ( a4 != *((struct DirectComposition::CResourceMarshaler **)this + 16) )
        {
          v9 = (*((_QWORD *)a4 + 3))++ == -1LL;
          if ( !v9 )
          {
            DirectComposition::CApplicationChannel::ReleaseResource(
              v10,
              *((struct DirectComposition::CResourceMarshaler **)this + 16));
            *((_QWORD *)this + 16) = a4;
            *((_DWORD *)this + 4) &= ~0x800u;
            goto LABEL_13;
          }
LABEL_18:
          KeBugCheck(0xC01E0103);
        }
        return v7;
      }
      return (unsigned int)-1073741811;
    case 15:
      v7 = 0;
      if ( a4
        && (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                              *((unsigned int *)a4 + 9),
                              169LL) )
      {
        if ( a4 != *((struct DirectComposition::CResourceMarshaler **)this + 19) )
        {
          v9 = (*((_QWORD *)a4 + 3))++ == -1LL;
          if ( !v9 )
          {
            DirectComposition::CApplicationChannel::ReleaseResource(
              v8,
              *((struct DirectComposition::CResourceMarshaler **)this + 19));
            *((_QWORD *)this + 19) = a4;
            *((_DWORD *)this + 4) &= ~0x800u;
            *((_BYTE *)this + 184) = 1;
LABEL_13:
            *a5 = 1;
            return v7;
          }
          goto LABEL_18;
        }
        return v7;
      }
      return (unsigned int)-1073741811;
    case 2:
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a2,
               (struct DirectComposition::CWeakReferenceBase **)this + 9,
               (unsigned int *)a4,
               (__int64)a2,
               0x93u,
               (int *)this + 4,
               64,
               1,
               a5);
    default:
      return 3221225485LL;
  }
}
