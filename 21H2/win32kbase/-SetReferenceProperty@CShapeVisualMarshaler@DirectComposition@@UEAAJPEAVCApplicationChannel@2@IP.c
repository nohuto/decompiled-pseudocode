/*
 * XREFs of ?SetReferenceProperty@CShapeVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C021C5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00845C0 (-SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCR.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD43C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CShapeVisualMarshaler::SetReferenceProperty(
        DirectComposition::CShapeVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v8; // ebx
  unsigned int v9; // ecx
  struct DirectComposition::CResourceMarshaler **v10; // r14

  v8 = 0;
  *a5 = 0;
  if ( a3 == 10 )
  {
    return (unsigned int)-1073741811;
  }
  else if ( a3 == 54 )
  {
    if ( a4
      && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
            a4,
            193LL) )
    {
      v8 = -1073741811;
    }
    v10 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 384);
    v9 = v8;
    if ( v8 < 0 )
      v10 = 0LL;
    if ( v10 && v8 >= 0 && *v10 != a4 )
    {
      DirectComposition::CApplicationChannel::ReleaseResource(a2, *v10);
      *v10 = a4;
      if ( a4 )
        DirectComposition::CResourceMarshaler::AddRef(a4);
      *((_DWORD *)this + 102) |= v8 >= 0;
      v9 = v8;
      *a5 = 1;
    }
  }
  else
  {
    return (unsigned int)DirectComposition::CVisualMarshaler::SetReferenceProperty(this, a2, a3, a4, a5);
  }
  return v9;
}
