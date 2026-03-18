/*
 * XREFs of ?SetReferenceProperty@CGradientBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C021D1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD43C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CGradientBrushMarshaler::SetReferenceProperty(
        DirectComposition::CGradientBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  struct DirectComposition::CResourceMarshaler **v5; // rsi
  unsigned int v6; // ebx
  int v7; // r14d
  __int64 v11; // rdx

  v5 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 96);
  v6 = 0;
  v7 = 512;
  if ( a3 != 3 )
    v5 = 0LL;
  *a5 = 0;
  if ( a3 != 3 )
    v7 = 0;
  if ( !v5 )
    return (unsigned int)-1073741811;
  if ( !a4 )
    goto LABEL_10;
  v11 = 27LL;
  if ( a3 != 3 )
    v11 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 96LL))(
         a4,
         v11) )
  {
LABEL_10:
    if ( *v5 != a4 )
    {
      DirectComposition::CApplicationChannel::ReleaseResource(a2, *v5);
      *v5 = a4;
      if ( a4 )
        DirectComposition::CResourceMarshaler::AddRef(a4);
      *((_DWORD *)this + 4) |= v7;
      *a5 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
