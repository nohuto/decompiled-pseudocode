/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140012220
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140012490 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x14001CC88 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     ??_G?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@QEAAPEAXI@Z @ 0x14003AD8C (--_G-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall ATL::CComCreator<ATL::CComObjectCached<ATL::CComClassFactory>>::CreateInstance(
        __int64 (__fastcall **a1)(_QWORD, _QWORD, _QWORD),
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v6; // esi
  _BYTE *v7; // rax
  _BYTE *v8; // rdi
  int v9; // eax

  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v6 = -2147024882;
  v7 = operator new(0x48uLL);
  v8 = v7;
  if ( v7 )
  {
    *((_DWORD *)v7 + 2) = 0;
    *((_OWORD *)v7 + 1) = 0LL;
    *((_OWORD *)v7 + 2) = 0LL;
    *((_QWORD *)v7 + 6) = 0LL;
    v7[56] = 0;
    *(_QWORD *)v7 = &ATL::CComObjectCached<ATL::CComClassFactory>::`vftable';
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    *((_QWORD *)v8 + 8) = a1;
    v9 = ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)(v8 + 16));
    if ( v9 >= 0 )
    {
      v8[56] = 1;
      v9 = 0;
    }
    v6 = 0;
    if ( v9 < 0 )
      v6 = v9;
    if ( v6 || (v6 = (**(__int64 (__fastcall ***)(_BYTE *, __int64, _QWORD *))v8)(v8, a2, a3)) != 0 )
      ATL::CComObjectCached<ATL::CComClassFactory>::`scalar deleting destructor'(v8);
  }
  return v6;
}
