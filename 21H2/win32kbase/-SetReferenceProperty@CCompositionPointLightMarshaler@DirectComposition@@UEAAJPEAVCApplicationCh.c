/*
 * XREFs of ?SetReferenceProperty@CCompositionPointLightMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0232BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD43C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CCompositionPointLightMarshaler::SetReferenceProperty(
        DirectComposition::CCompositionPointLightMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  struct DirectComposition::CResourceMarshaler **v10; // r14

  v5 = 0;
  *a5 = 0;
  if ( a3 != 7 )
    return 3221225485LL;
  v10 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 136);
  if ( this == (DirectComposition::CCompositionPointLightMarshaler *)-136LL
    || a4
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
          a4,
          195LL) )
  {
    return (unsigned int)-1073741811;
  }
  else if ( *v10 != a4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, *v10);
    *v10 = a4;
    if ( a4 )
      DirectComposition::CResourceMarshaler::AddRef(a4);
    *((_DWORD *)this + 4) |= 0x1000u;
    *a5 = 1;
  }
  return v5;
}
