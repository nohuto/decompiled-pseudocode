/*
 * XREFs of ?SetReferenceProperty@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C01DE0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C005ADF0 (-SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCR.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0060A08 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01D46F4 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CParticleEmitterVisualMarshaler::SetReferenceProperty(
        DirectComposition::CParticleEmitterVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // edi
  struct DirectComposition::CResourceMarshaler *v9; // rdx
  struct DirectComposition::CResourceMarshaler *v10; // rdx
  struct DirectComposition::CResourceMarshaler *v11; // rdx
  struct DirectComposition::CResourceMarshaler *v12; // rdx
  struct DirectComposition::CResourceMarshaler *v13; // rdx
  struct DirectComposition::CResourceMarshaler *v14; // rdx

  v5 = 0;
  *a5 = 0;
  switch ( a3 )
  {
    case '3':
      if ( !a4
        || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
             a4,
             90LL) )
      {
        v14 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 46);
        if ( a4 == v14 )
          return v5;
        if ( v14 )
          DirectComposition::CApplicationChannel::ReleaseResource(a2, v14);
        *((_QWORD *)this + 46) = a4;
        if ( a4 )
          DirectComposition::CResourceMarshaler::AddRef(a4);
        *((_DWORD *)this + 136) |= 2u;
        goto LABEL_57;
      }
      return (unsigned int)-1073741811;
    case '8':
      if ( !a4
        || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
             a4,
             14LL) )
      {
        v13 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 49);
        if ( a4 == v13 )
          return v5;
        if ( v13 )
          DirectComposition::CApplicationChannel::ReleaseResource(a2, v13);
        *((_QWORD *)this + 49) = a4;
        if ( a4 )
          DirectComposition::CResourceMarshaler::AddRef(a4);
        *((_DWORD *)this + 136) |= 0x40u;
        goto LABEL_57;
      }
      return (unsigned int)-1073741811;
    case '9':
      if ( !a4
        || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
             a4,
             65LL) )
      {
        v12 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 50);
        if ( a4 == v12 )
          return v5;
        if ( v12 )
          DirectComposition::CApplicationChannel::ReleaseResource(a2, v12);
        *((_QWORD *)this + 50) = a4;
        if ( a4 )
          DirectComposition::CResourceMarshaler::AddRef(a4);
        *((_DWORD *)this + 136) |= 0x80u;
        goto LABEL_57;
      }
      return (unsigned int)-1073741811;
    case '<':
      if ( !a4
        || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
             a4,
             193LL) )
      {
        v11 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 52);
        if ( a4 == v11 )
          return v5;
        if ( v11 )
          DirectComposition::CApplicationChannel::ReleaseResource(a2, v11);
        *((_QWORD *)this + 52) = a4;
        if ( a4 )
          DirectComposition::CResourceMarshaler::AddRef(a4);
        *((_DWORD *)this + 136) |= 0x400u;
        goto LABEL_57;
      }
      return (unsigned int)-1073741811;
    case 'H':
      if ( !a4
        || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
             a4,
             119LL) )
      {
        v10 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 62);
        if ( a4 == v10 )
          return v5;
        if ( v10 )
          DirectComposition::CApplicationChannel::ReleaseResource(a2, v10);
        *((_QWORD *)this + 62) = a4;
        if ( a4 )
          DirectComposition::CResourceMarshaler::AddRef(a4);
        *((_DWORD *)this + 136) |= 0x400000u;
        goto LABEL_57;
      }
      return (unsigned int)-1073741811;
    case 'I':
      if ( !a4
        || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
             a4,
             115LL) )
      {
        v9 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 63);
        if ( a4 == v9 )
          return v5;
        if ( v9 )
          DirectComposition::CApplicationChannel::ReleaseResource(a2, v9);
        *((_QWORD *)this + 63) = a4;
        if ( a4 )
          DirectComposition::CResourceMarshaler::AddRef(a4);
        *((_DWORD *)this + 136) |= 0x800000u;
LABEL_57:
        *a5 = 1;
        return v5;
      }
      return (unsigned int)-1073741811;
  }
  return (unsigned int)DirectComposition::CVisualMarshaler::SetReferenceProperty(this, a2, a3, a4, a5);
}
