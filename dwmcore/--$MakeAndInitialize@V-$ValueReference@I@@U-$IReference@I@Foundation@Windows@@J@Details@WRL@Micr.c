/*
 * XREFs of ??$MakeAndInitialize@V?$ValueReference@I@@U?$IReference@I@Foundation@Windows@@J@Details@WRL@Microsoft@@YAJPEAPEAU?$IReference@I@Foundation@Windows@@$$QEAJ@Z @ 0x18028DC88
 * Callers:
 *     ?CreatePrimaryDescription@CDDisplayManager@@AEAAJAEBVRenderTargetInfo@@AEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@PEAPEAUIDisplayPrimaryDescription@Core@Display@Devices@Windows@@@Z @ 0x180290B44 (-CreatePrimaryDescription@CDDisplayManager@@AEAAJAEBVRenderTargetInfo@@AEBUPixelFormatInfo@@AEBU.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ValueReference@I@@QEAA@XZ @ 0x18028E6E4 (--0-$ValueReference@I@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@V?$ValueReference@I@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18028EE98 (--1-$MakeAllocator@V-$ValueReference@I@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ValueReference<unsigned int>,Windows::Foundation::IReference<unsigned int>,long>(
        _QWORD *a1,
        _DWORD *a2)
{
  LPVOID v4; // rax
  _DWORD *v6; // rdi
  unsigned int v7; // ebx
  LPVOID v8; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = DefaultHeap::Alloc(0x48uLL);
  v8 = v4;
  if ( v4 )
  {
    v6 = (_DWORD *)ValueReference<unsigned int>::ValueReference<unsigned int>(v4);
    v6[16] = *a2;
    v7 = (**(__int64 (__fastcall ***)(_DWORD *, GUID *, _QWORD *))v6)(
           v6,
           &GUID_513ef3af_e784_5325_a91e_97c2b8111cf3,
           a1);
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 16LL))(v6);
    return v7;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<ValueReference<unsigned int>>::~MakeAllocator<ValueReference<unsigned int>>(&v8);
    return 2147942414LL;
  }
}
