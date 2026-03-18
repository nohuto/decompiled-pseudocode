/*
 * XREFs of ?SetReferenceProperty@CCompositionCubeMapMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0234C70
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD43C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CCompositionCubeMapMarshaler::SetReferenceProperty(
        DirectComposition::CCompositionCubeMapMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  __int64 v10; // rdx
  struct DirectComposition::CResourceMarshaler **v11; // r14

  v5 = 0;
  *a5 = 0;
  if ( a3 != 3 )
    return 3221225485LL;
  v10 = *((unsigned int *)this + 20);
  if ( (unsigned int)v10 < 6 * *((_DWORD *)this + 22)
    && (v11 = (struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 8) + 24 * v10)) != 0LL
    && (!a4
     || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
          a4,
          40LL)) )
  {
    if ( *v11 != a4 )
    {
      DirectComposition::CApplicationChannel::ReleaseResource(a2, *v11);
      *v11 = a4;
      if ( a4 )
        DirectComposition::CResourceMarshaler::AddRef(a4);
      *((_DWORD *)this + 4) |= 0x40u;
      *((_DWORD *)this + 19) = 0;
      *a5 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
