/*
 * XREFs of ?SetReferenceArrayProperty@CConditionalExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C022B570
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD43C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CConditionalExpressionMarshaler::SetReferenceArrayProperty(
        DirectComposition::CConditionalExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  unsigned int i; // esi
  unsigned int v10; // esi

  v6 = 0;
  *a6 = 0;
  if ( a3 != 11 || !a4 )
    return (unsigned int)-1073741811;
  for ( i = 0; i < a5; ++i )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4[i] + 96LL))(
            a4[i],
            58LL)
      && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4[i] + 96LL))(
            a4[i],
            110LL) )
    {
      return (unsigned int)-1073741811;
    }
  }
  if ( *((_QWORD *)this + 17) || *((_DWORD *)this + 36) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    *((_DWORD *)this + 36) = a5;
    v10 = 0;
    *((_QWORD *)this + 17) = a4;
    for ( *a6 = 1; v10 < *((_DWORD *)this + 36); ++v10 )
      DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 17)
                                                                                              + 8LL * v10));
  }
  return v6;
}
