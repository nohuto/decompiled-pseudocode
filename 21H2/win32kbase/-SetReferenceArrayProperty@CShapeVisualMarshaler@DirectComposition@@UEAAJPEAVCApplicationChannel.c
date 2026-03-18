/*
 * XREFs of ?SetReferenceArrayProperty@CShapeVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C021C4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferenceArrayProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C00AE080 (-SetReferenceArrayProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD43C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?ClearShapes@CShapeVisualMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C021C33C (-ClearShapes@CShapeVisualMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z.c)
 */

__int64 __fastcall DirectComposition::CShapeVisualMarshaler::SetReferenceArrayProperty(
        DirectComposition::CShapeVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  unsigned int i; // ebp
  unsigned int v11; // esi

  v6 = 0;
  *a6 = 0;
  if ( a4 || !a5 )
  {
    if ( a3 == 53 )
    {
      for ( i = 0; i < a5; ++i )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4[i] + 96LL))(
                a4[i],
                192LL) )
          return (unsigned int)-1073741811;
      }
      DirectComposition::CShapeVisualMarshaler::ClearShapes(this, a2);
      *((_DWORD *)this + 100) = a5;
      v11 = 0;
      *((_QWORD *)this + 49) = a4;
      *((_DWORD *)this + 101) = 0;
      *a6 = 1;
      *((_DWORD *)this + 102) |= 2u;
      if ( *((_DWORD *)this + 100) )
      {
        do
          DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 49)
                                                                                                  + 8LL * v11++));
        while ( v11 < *((_DWORD *)this + 100) );
      }
    }
    else
    {
      return (unsigned int)DirectComposition::CVisualMarshaler::SetReferenceArrayProperty(this, a2, a3, a4, a5, a6);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
