/*
 * XREFs of ?SetReferenceArrayProperty@CClipGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C021F970
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD43C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CClipGroupMarshaler::SetReferenceArrayProperty(
        DirectComposition::CClipGroupMarshaler *this,
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
  if ( a3 == 4 && a4 )
  {
    for ( i = 0; i < a5; ++i )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4[i] + 96LL))(
              a4[i],
              65LL) )
        return (unsigned int)-1073741811;
    }
    if ( *((_QWORD *)this + 13) )
      (*(void (__fastcall **)(DirectComposition::CClipGroupMarshaler *, struct DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 88LL))(
        this,
        a2);
    *((_DWORD *)this + 28) = a5;
    v11 = 0;
    *((_QWORD *)this + 13) = a4;
    for ( *a6 = 1; v11 < *((_DWORD *)this + 28); ++v11 )
      DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 13)
                                                                                              + 8LL * v11));
    *((_DWORD *)this + 29) = 0;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
