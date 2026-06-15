/*
 * XREFs of ?Release@?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAKXZ @ 0x140017D90
 * Callers:
 *     ?Release@?$CComObject@VCAPOWrapperSrv@@@ATL@@W7EAAKXZ @ 0x14002A940 (-Release@-$CComObject@VCAPOWrapperSrv@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCAPOWrapperSrv@@@ATL@@WBA@EAAKXZ @ 0x14002A950 (-Release@-$CComObject@VCAPOWrapperSrv@@@ATL@@WBA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCAPOWrapperSrv@@@ATL@@WBI@EAAKXZ @ 0x14002A960 (-Release@-$CComObject@VCAPOWrapperSrv@@@ATL@@WBI@EAAKXZ.c)
 * Callees:
 *     ?SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z @ 0x14001EB9C (-SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
unsigned int __fastcall ATL::CComObject<CAPOWrapperSrv>::Release(int *a1)
{
  unsigned int result; // eax
  unsigned int v3; // ebx

  result = ATL::CComMultiThreadModel::SafeDecrementReference(a1 + 8);
  v3 = result;
  if ( !result )
  {
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( a1 )
      (*(void (__fastcall **)(int *, _QWORD))(*(_QWORD *)a1 + 64LL))(a1, v3 + 1);
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
    return v3;
  }
  return result;
}
