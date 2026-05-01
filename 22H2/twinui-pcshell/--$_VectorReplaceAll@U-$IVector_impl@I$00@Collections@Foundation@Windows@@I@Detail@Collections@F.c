/*
 * XREFs of ??$_VectorReplaceAll@U?$IVector_impl@I$00@Collections@Foundation@Windows@@I@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVector_impl@I$00@123@IPEAI@Z @ 0x1803208E0
 * Callers:
 *     ?ReplaceAll@?$IVector_impl@I$00@Collections@Foundation@Windows@@UEAAJIPEAI@Z @ 0x180327FB0 (-ReplaceAll@-$IVector_impl@I$00@Collections@Foundation@Windows@@UEAAJIPEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_VectorReplaceAll<Windows::Foundation::Collections::IVector_impl<unsigned int,1>,unsigned int>(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3)
{
  int v6; // esi
  unsigned int v7; // ebx

  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1);
  if ( v6 >= 0 )
  {
    v7 = 0;
    if ( a2 )
    {
      while ( 1 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 104LL))(a1, *a3);
        if ( v6 < 0 )
          break;
        ++v7;
        ++a3;
        if ( v7 >= a2 )
          return (unsigned int)v6;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1);
    }
  }
  return (unsigned int)v6;
}
