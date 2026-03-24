/*
 * XREFs of ?SetReferenceArrayProperty@CClipGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C01E9020
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01D46F4 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CClipGroupMarshaler::SetReferenceArrayProperty(
        DirectComposition::CClipGroupMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  int v6; // edi
  __int64 v10; // r14
  __int64 v11; // rsi

  v6 = 0;
  *a6 = 0;
  if ( a3 != 4 || !a4 )
    v6 = -1073741811;
  v10 = 0LL;
  if ( v6 >= 0 )
  {
    do
    {
      if ( (unsigned int)v10 >= a5 )
        break;
      if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4[v10] + 96LL))(
              a4[v10],
              65LL) )
        v6 = -1073741811;
      v10 = (unsigned int)(v10 + 1);
    }
    while ( v6 >= 0 );
    if ( v6 >= 0 )
    {
      if ( *((_QWORD *)this + 12) )
        (*(void (__fastcall **)(DirectComposition::CClipGroupMarshaler *, struct DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 88LL))(
          this,
          a2);
      *((_QWORD *)this + 12) = a4;
      v11 = 0LL;
      *((_DWORD *)this + 26) = a5;
      *a6 = 1;
      if ( *((_DWORD *)this + 26) )
      {
        do
        {
          DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 12)
                                                                                                  + 8 * v11));
          v11 = (unsigned int)(v11 + 1);
        }
        while ( (unsigned int)v11 < *((_DWORD *)this + 26) );
      }
      *((_DWORD *)this + 27) = 0;
    }
  }
  return (unsigned int)v6;
}
