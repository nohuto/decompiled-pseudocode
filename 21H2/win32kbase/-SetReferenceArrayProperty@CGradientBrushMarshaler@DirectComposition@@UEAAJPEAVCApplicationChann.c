/*
 * XREFs of ?SetReferenceArrayProperty@CGradientBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C021D110
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD43C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?ClearStops@CGradientBrushMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C021CF10 (-ClearStops@CGradientBrushMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z.c)
 */

__int64 __fastcall DirectComposition::CGradientBrushMarshaler::SetReferenceArrayProperty(
        DirectComposition::CGradientBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  unsigned int i; // esi
  unsigned int v11; // esi

  v6 = 0;
  *a6 = 0;
  if ( (!a5 || a4) && a3 == 1 )
  {
    for ( i = 0; i < a5; ++i )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4[i] + 96LL))(
              a4[i],
              21LL) )
        return (unsigned int)-1073741811;
    }
    DirectComposition::CGradientBrushMarshaler::ClearStops(this, a2);
    *((_DWORD *)this + 28) = a5;
    v11 = 0;
    *((_QWORD *)this + 13) = a4;
    *((_DWORD *)this + 29) = 0;
    *a6 = 1;
    *((_DWORD *)this + 4) |= 0x100u;
    if ( *((_DWORD *)this + 28) )
    {
      do
        DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 13)
                                                                                                + 8LL * v11++));
      while ( v11 < *((_DWORD *)this + 28) );
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
