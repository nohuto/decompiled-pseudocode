/*
 * XREFs of ?SetReferenceArrayProperty@CCompositionLightMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C0093B90
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResourceMarshalers@CPrimitiveGroupMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@AEAI@Z @ 0x1C00063D4 (-ReleaseResourceMarshalers@CPrimitiveGroupMarshaler@DirectComposition@@AEAAXPEAVCApplicationChan.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD43C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CCompositionLightMarshaler::SetReferenceArrayProperty(
        DirectComposition::CCompositionLightMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  unsigned int i; // ebp
  struct DirectComposition::CResourceMarshaler *v11; // rcx
  struct DirectComposition::CResourceMarshaler **v12; // r8
  DirectComposition::CPrimitiveGroupMarshaler *v13; // rcx
  unsigned int *v14; // r14
  unsigned int v15; // edi

  v6 = 0;
  *a6 = 0;
  if ( a3 > 1 || a5 && !a4 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    for ( i = 0; i < a5; ++i )
    {
      v11 = a4[i];
      if ( !v11
        || !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v11 + 96LL))(
              v11,
              195LL) )
      {
        return (unsigned int)-1073741811;
      }
    }
    if ( a3 )
      v12 = (struct DirectComposition::CResourceMarshaler **)*((_QWORD *)this + 10);
    else
      v12 = (struct DirectComposition::CResourceMarshaler **)*((_QWORD *)this + 8);
    v13 = a3 != 0 ? (DirectComposition::CPrimitiveGroupMarshaler *)0x10 : 0LL;
    v14 = (unsigned int *)((char *)this + (_QWORD)v13 + 72);
    if ( v12 )
    {
      DirectComposition::CPrimitiveGroupMarshaler::ReleaseResourceMarshalers(
        v13,
        a2,
        v12,
        (unsigned int *)((char *)this + (_QWORD)v13 + 72));
      *((_DWORD *)this + 4) |= a3 != 0 ? 64 : 32;
    }
    *(_QWORD *)((char *)this + (a3 != 0 ? 0x10 : 0) + 64) = a4;
    *v14 = a5;
    *(_DWORD *)((char *)this + (a3 != 0 ? 0x10 : 0) + 76) = 0;
    v15 = 0;
    for ( *a6 = 1; v15 < *v14; ++v15 )
      DirectComposition::CResourceMarshaler::AddRef(a4[v15]);
  }
  return v6;
}
