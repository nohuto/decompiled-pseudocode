/*
 * XREFs of ?SetReferenceProperty@CLayerVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0009490
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00845C0 (-SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCR.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD43C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CLayerVisualMarshaler::SetReferenceProperty(
        DirectComposition::CLayerVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v5; // esi
  __int64 v9; // rbp
  int v10; // r14d
  struct DirectComposition::CResourceMarshaler *v11; // rdx

  v5 = 0;
  *a5 = 0;
  if ( a3 == 53 )
  {
    if ( a4
      && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
            a4,
            55LL) )
    {
      v5 = -1073741811;
    }
    v9 = 384LL;
    v10 = 1;
  }
  else
  {
    if ( a3 != 54 )
      return (unsigned int)DirectComposition::CVisualMarshaler::SetReferenceProperty(this, a2, a3, a4, a5);
    if ( a4
      && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
            a4,
            37LL) )
    {
      v5 = -1073741811;
    }
    v9 = 392LL;
    v10 = 2;
  }
  if ( v5 >= 0 )
  {
    v11 = *(struct DirectComposition::CResourceMarshaler **)((char *)this + v9);
    if ( v11 != a4 )
    {
      if ( v11 )
      {
        DirectComposition::CApplicationChannel::ReleaseResource(a2, v11);
        *(_QWORD *)((char *)this + v9) = 0LL;
      }
      if ( a4 )
      {
        *(_QWORD *)((char *)this + v9) = a4;
        DirectComposition::CResourceMarshaler::AddRef(a4);
      }
      *((_DWORD *)this + 101) |= v10;
      *a5 = 1;
    }
  }
  return (unsigned int)v5;
}
