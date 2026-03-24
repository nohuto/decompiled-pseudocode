/*
 * XREFs of ?SetReferenceProperty@CSpriteVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C005E380
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C005ADF0 (-SetReferenceProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCR.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0060A08 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01D46F4 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CSpriteVisualMarshaler::SetReferenceProperty(
        DirectComposition::CSpriteVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v8; // edi
  struct DirectComposition::CResourceMarshaler **v9; // r14
  unsigned int v10; // ebx
  struct DirectComposition::CResourceMarshaler *v11; // rdx

  v8 = 0;
  v9 = 0LL;
  *a5 = 0;
  v10 = 0;
  switch ( a3 )
  {
    case 10:
      v8 = -1073741811;
      break;
    case 51:
      if ( a4
        && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
              a4,
              14LL) )
      {
        v8 = -1073741811;
      }
      v9 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 368);
      if ( v8 < 0 )
        v9 = 0LL;
      v10 = v8 >= 0;
      break;
    case 52:
      if ( a4
        && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
              a4,
              37LL) )
      {
        v8 = -1073741811;
      }
      v9 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 376);
      if ( v8 < 0 )
        v9 = 0LL;
      v10 = ((v8 >> 31) & 0xFFFFFFFE) + 2;
      break;
    default:
      return (unsigned int)DirectComposition::CVisualMarshaler::SetReferenceProperty(this, a2, a3, a4, a5);
  }
  if ( v10 )
  {
    if ( v8 >= 0 )
    {
      v11 = *v9;
      if ( *v9 != a4 )
      {
        if ( v11 )
        {
          DirectComposition::CApplicationChannel::ReleaseResource(a2, v11);
          *v9 = 0LL;
        }
        if ( a4 )
        {
          *v9 = a4;
          DirectComposition::CResourceMarshaler::AddRef(a4);
        }
        *((_DWORD *)this + 96) |= v10;
        *a5 = 1;
      }
    }
  }
  return (unsigned int)v8;
}
