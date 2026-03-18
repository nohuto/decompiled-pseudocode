/*
 * XREFs of ?SetReferenceProperty@CGenericInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C02195D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD43C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CGenericInkMarshaler::SetReferenceProperty(
        DirectComposition::CGenericInkMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // edi
  struct DirectComposition::CResourceMarshaler *v9; // rdx
  struct DirectComposition::CResourceMarshaler *v10; // rdx

  v5 = 0;
  *a5 = 0;
  if ( a3 != 6 )
  {
    if ( a3 == 11
      && (!a4
       || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
            a4,
            46LL)) )
    {
      v9 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 29);
      if ( a4 != v9 )
      {
        DirectComposition::CApplicationChannel::ReleaseResource(a2, v9);
        *((_QWORD *)this + 29) = a4;
        if ( a4 )
          DirectComposition::CResourceMarshaler::AddRef(a4);
        *((_DWORD *)this + 4) &= ~0x200u;
LABEL_17:
        *a5 = 1;
        return v5;
      }
      return v5;
    }
    return (unsigned int)-1073741811;
  }
  if ( a4
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
          a4,
          168LL)
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
          a4,
          46LL) )
  {
    return (unsigned int)-1073741811;
  }
  v10 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 21);
  if ( a4 != v10 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v10);
    *((_QWORD *)this + 21) = a4;
    if ( a4 )
      DirectComposition::CResourceMarshaler::AddRef(a4);
    *((_DWORD *)this + 4) &= ~0x80u;
    goto LABEL_17;
  }
  return v5;
}
