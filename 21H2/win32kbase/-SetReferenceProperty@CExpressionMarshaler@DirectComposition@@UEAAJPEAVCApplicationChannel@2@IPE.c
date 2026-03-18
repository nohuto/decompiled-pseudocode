/*
 * XREFs of ?SetReferenceProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C009BF30
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C009C050 (-SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD43C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CExpressionMarshaler::SetReferenceProperty(
        DirectComposition::CExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  struct DirectComposition::CResourceMarshaler *v9; // rdx
  struct DirectComposition::CResourceMarshaler *v11; // rdx

  v5 = 0;
  *a5 = 0;
  if ( a3 == 11 )
  {
    if ( a4
      && (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
           a4,
           168LL) )
    {
      v11 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 17);
      if ( v11 == a4 )
        return v5;
      DirectComposition::CApplicationChannel::ReleaseResource(a2, v11);
      *((_QWORD *)this + 17) = a4;
      DirectComposition::CResourceMarshaler::AddRef(a4);
      *a5 = 1;
      goto LABEL_9;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 != 15 )
    return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetReferenceProperty(this, a2, a3, a4, a5);
  if ( !a4
    || !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
          a4,
          168LL) )
  {
    return (unsigned int)-1073741811;
  }
  v9 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 20);
  if ( v9 != a4 )
  {
    if ( v9 )
      DirectComposition::CApplicationChannel::ReleaseResource(a2, v9);
    *((_QWORD *)this + 20) = a4;
    DirectComposition::CResourceMarshaler::AddRef(a4);
    *a5 = 1;
    *((_DWORD *)this + 48) = 1;
LABEL_9:
    *((_DWORD *)this + 4) &= ~0x800u;
  }
  return v5;
}
