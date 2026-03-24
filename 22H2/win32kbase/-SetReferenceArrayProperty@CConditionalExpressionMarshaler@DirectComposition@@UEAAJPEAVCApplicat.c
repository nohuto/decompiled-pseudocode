/*
 * XREFs of ?SetReferenceArrayProperty@CConditionalExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C01EB540
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01D46F4 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
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
  int v9; // edi
  unsigned int v10; // ebp

  v6 = 0;
  v9 = 0;
  *a6 = 0;
  if ( a3 != 11 || !a4 )
    v9 = -1073741811;
  v10 = 0;
  if ( v9 >= 0 )
  {
    do
    {
      if ( v10 >= a5 )
        break;
      if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4[v10] + 96LL))(
              a4[v10],
              58LL)
        && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4[v10] + 96LL))(
              a4[v10],
              110LL) )
      {
        v9 = -1073741811;
      }
      ++v10;
    }
    while ( v9 >= 0 );
    if ( v9 >= 0 )
    {
      if ( *((_QWORD *)this + 16) || *((_DWORD *)this + 34) )
        v9 = -1073741811;
      if ( v9 >= 0 )
      {
        *((_DWORD *)this + 34) = a5;
        *((_QWORD *)this + 16) = a4;
        *a6 = 1;
        if ( *((_DWORD *)this + 34) )
        {
          do
            DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 16) + 8LL * v6++));
          while ( v6 < *((_DWORD *)this + 34) );
        }
      }
    }
  }
  return (unsigned int)v9;
}
