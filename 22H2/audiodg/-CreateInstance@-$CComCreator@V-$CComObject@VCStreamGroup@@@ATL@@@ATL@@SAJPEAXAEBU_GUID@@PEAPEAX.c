/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCStreamGroup@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140011E74
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCStreamGroup@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCStreamGroup@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400127B0 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCStreamGroup@@@ATL@@@ATL@@V-$CComCr.c)
 * Callees:
 *     ??0?$CComObject@VCStreamGroup@@@ATL@@QEAA@PEAX@Z @ 0x140011DDC (--0-$CComObject@VCStreamGroup@@@ATL@@QEAA@PEAX@Z.c)
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140012490 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x14001CC88 (--2@YAPEAX_K@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x14001EBD4 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     ?InternalFinalConstructRelease@CStreamGroup@@QEAAXXZ @ 0x14003E10C (-InternalFinalConstructRelease@CStreamGroup@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CStreamGroup>>::CreateInstance(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // r14
  __int64 v4; // r15
  unsigned int v6; // esi
  void *v7; // rax
  volatile int *v8; // rdx
  _BYTE *v9; // rdi
  int v10; // eax
  _QWORD v11[11]; // [rsp+0h] [rbp-58h] BYREF
  _BYTE *v14; // [rsp+78h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  try
  {
    *a3 = 0LL;
    v6 = -2147024882;
    v7 = operator new(0x190uLL);
    v11[4] = v7;
    if ( v7 )
      v9 = (_BYTE *)ATL::CComObject<CStreamGroup>::CComObject<CStreamGroup>((__int64)v7);
    else
      v9 = 0LL;
    v14 = v9;
  }
  catch ( ... )
  {
    v8 = (volatile int *)v11;
    v3 = a3;
    v4 = a2;
    v6 = -2147024882;
    v9 = v14;
  }
  if ( v9 )
  {
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v9 + 344), v8);
    v10 = ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)(v9 + 352));
    if ( v10 >= 0 )
    {
      v9[392] = 1;
      v10 = 0;
    }
    v6 = 0;
    if ( v10 < 0 )
      v6 = v10;
    CStreamGroup::InternalFinalConstructRelease((CStreamGroup *)v9);
    if ( v6 || (v6 = (**(__int64 (__fastcall ***)(_BYTE *, __int64, _QWORD *))v9)(v9, v4, v3)) != 0 )
      (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v9 + 104LL))(v9, 1LL);
  }
  return v6;
}
