/*
 * XREFs of ?SetReferenceProperty@CHolographicExclusiveViewMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C022D730
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD43C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CHolographicExclusiveViewMarshaler::SetReferenceProperty(
        DirectComposition::CHolographicExclusiveViewMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  struct DirectComposition::CResourceMarshaler *v9; // rdx

  v5 = 0;
  if ( a3 == 2
    && (!a4
     || (*(unsigned int (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)a4 + 8LL))(a4) == 40) )
  {
    v9 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 13);
    if ( v9 != a4 )
    {
      if ( v9 )
        DirectComposition::CApplicationChannel::ReleaseResource(a2, v9);
      *((_QWORD *)this + 13) = a4;
      if ( a4 )
        DirectComposition::CResourceMarshaler::AddRef(a4);
      *((_DWORD *)this + 4) |= 0x40u;
      *a5 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
