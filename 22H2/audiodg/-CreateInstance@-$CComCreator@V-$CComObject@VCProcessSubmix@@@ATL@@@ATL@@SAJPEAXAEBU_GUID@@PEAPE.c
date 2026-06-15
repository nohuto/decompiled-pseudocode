/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCProcessSubmix@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400124C0
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCProcessSubmix@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCProcessSubmix@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400127D0 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCProcessSubmix@@@ATL@@@ATL@@V-$CCom.c)
 * Callees:
 *     ??0CSubmixImpl@@QEAA@XZ @ 0x14001043C (--0CSubmixImpl@@QEAA@XZ.c)
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140012490 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x14001CC88 (--2@YAPEAX_K@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x14001EBD4 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     ?InternalFinalConstructRelease@CProcessSubmix@@QEAAXXZ @ 0x14004F6E8 (-InternalFinalConstructRelease@CProcessSubmix@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CProcessSubmix>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // r15
  __int64 v4; // r12
  unsigned int v6; // r14d
  char *v7; // rax
  volatile int *v8; // rdx
  char *v9; // rdi
  int v10; // eax
  _QWORD v11[13]; // [rsp+0h] [rbp-68h] BYREF
  char *v14; // [rsp+88h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  try
  {
    *a3 = 0LL;
    v6 = -2147024882;
    v7 = (char *)operator new(0x188uLL);
    v9 = v7;
    v11[4] = v7;
    if ( v7 )
    {
      *((_DWORD *)v7 + 84) = 0;
      *(_OWORD *)(v7 + 344) = 0LL;
      *(_OWORD *)(v7 + 360) = 0LL;
      *((_QWORD *)v7 + 47) = 0LL;
      v7[384] = 0;
      CSubmixImpl::CSubmixImpl((CSubmixImpl *)(v7 + 16));
      *(_QWORD *)v9 = &ATL::CComObject<CProcessSubmix>::`vftable'{for `IProcessSubmix'};
      *((_QWORD *)v9 + 1) = &ATL::CComObject<CProcessSubmix>::`vftable'{for `IFastRundown'};
      *((_QWORD *)v9 + 2) = &ATL::CComObject<CProcessSubmix>::`vftable'{for `CSubmixImpl'};
      (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    }
    else
    {
      v9 = 0LL;
    }
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
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v9 + 336), v8);
    v10 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)(v9 + 344));
    if ( v10 >= 0 )
    {
      v9[384] = 1;
      v10 = 0;
    }
    v6 = 0;
    if ( v10 < 0 )
      v6 = v10;
    CProcessSubmix::InternalFinalConstructRelease((CProcessSubmix *)v9);
    if ( v6 || (v6 = (**(__int64 (__fastcall ***)(char *, __int64, _QWORD *))v9)(v9, v4, v3)) != 0 )
      (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v9 + 96LL))(v9, 1LL);
  }
  return v6;
}
