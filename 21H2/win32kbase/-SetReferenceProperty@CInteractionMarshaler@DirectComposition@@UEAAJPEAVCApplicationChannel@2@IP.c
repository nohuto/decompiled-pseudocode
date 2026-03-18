/*
 * XREFs of ?SetReferenceProperty@CInteractionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00C1570
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD43C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::SetReferenceProperty(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  unsigned int v5; // ebx
  struct DirectComposition::CResourceMarshaler *v9; // rdx
  struct DirectComposition::CResourceMarshaler *v11; // rdx

  v5 = 0;
  *a5 = 0;
  if ( a3 == 12 )
  {
    if ( !a4
      || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
           a4,
           103LL) )
    {
      v11 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 40);
      if ( v11 == a4 )
        return v5;
      if ( v11 )
      {
        DirectComposition::CApplicationChannel::ReleaseResource(a2, v11);
        *((_QWORD *)this + 40) = 0LL;
      }
      if ( a4 )
      {
        *((_QWORD *)this + 40) = a4;
        DirectComposition::CResourceMarshaler::AddRef(a4);
      }
      *((_DWORD *)this + 4) |= 0x400u;
      goto LABEL_11;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 != 16
    || a4
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
          a4,
          80LL) )
  {
    return (unsigned int)-1073741811;
  }
  v9 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 41);
  if ( v9 != a4 )
  {
    if ( v9 )
    {
      DirectComposition::CApplicationChannel::ReleaseResource(a2, v9);
      *((_QWORD *)this + 41) = 0LL;
    }
    if ( a4 )
    {
      *((_QWORD *)this + 41) = a4;
      DirectComposition::CResourceMarshaler::AddRef(a4);
    }
    *((_DWORD *)this + 4) |= 0x2000u;
LABEL_11:
    *a5 = 1;
  }
  return v5;
}
