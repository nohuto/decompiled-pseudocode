/*
 * XREFs of ?SetReferenceProperty@CDDisplayRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C022EB30
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD43C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDDisplayRenderTargetMarshaler::SetReferenceProperty(
        DirectComposition::CDDisplayRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  struct DirectComposition::CResourceMarshaler *v9; // rdx

  v5 = 0;
  if ( a3 )
    return (unsigned int)-1073741811;
  if ( *((struct DirectComposition::CResourceMarshaler **)this + 21) != a4 )
  {
    if ( a4
      && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
            a4,
            51LL) )
    {
      return (unsigned int)-1073741811;
    }
    v9 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 21);
    if ( v9 )
    {
      DirectComposition::CApplicationChannel::ReleaseResource(a2, v9);
      *((_QWORD *)this + 21) = 0LL;
    }
    if ( a4 )
    {
      *((_QWORD *)this + 21) = a4;
      DirectComposition::CResourceMarshaler::AddRef(a4);
    }
    *((_DWORD *)this + 4) |= 0x40u;
    *a5 = 1;
  }
  return v5;
}
