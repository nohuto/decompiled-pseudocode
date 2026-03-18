/*
 * XREFs of ?SetReferenceArrayProperty@CContainerShapeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C021EC40
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD43C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?ClearShapes@CContainerShapeMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C021EB00 (-ClearShapes@CContainerShapeMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z.c)
 */

__int64 __fastcall DirectComposition::CContainerShapeMarshaler::SetReferenceArrayProperty(
        DirectComposition::CContainerShapeMarshaler *this,
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
  if ( (a4 || !a5) && a3 == 1 )
  {
    for ( i = 0; i < a5; ++i )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4[i] + 96LL))(
              a4[i],
              192LL) )
        return (unsigned int)-1073741811;
    }
    DirectComposition::CContainerShapeMarshaler::ClearShapes(this, a2);
    *((_DWORD *)this + 20) = a5;
    v11 = 0;
    *((_QWORD *)this + 9) = a4;
    *((_DWORD *)this + 21) = 0;
    *a6 = 1;
    *((_DWORD *)this + 4) |= 0x40u;
    if ( *((_DWORD *)this + 20) )
    {
      do
        DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 9)
                                                                                                + 8LL * v11++));
      while ( v11 < *((_DWORD *)this + 20) );
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
