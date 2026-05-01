/*
 * XREFs of ??$MakeAndInitialize@V?$SimpleClassFactory@VFullScreenPositioner@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VFullScreenPositioner@@$0A@@12@@Z @ 0x1802136B8
 * Callers:
 *     ??$CreateClassFactory@V?$SimpleClassFactory@VFullScreenPositioner@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180213280 (--$CreateClassFactory@V-$SimpleClassFactory@VFullScreenPositioner@@$0A@@WRL@Microsoft@@@Details@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::SimpleClassFactory<FullScreenPositioner,0>,Microsoft::WRL::SimpleClassFactory<FullScreenPositioner,0>,>(
        _QWORD *a1)
{
  unsigned int v1; // edi
  _DWORD *v3; // rax
  _DWORD *v4; // rbx

  v1 = 0;
  *a1 = 0LL;
  v3 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  if ( v3 )
  {
    v3[3] = 1;
    v3[5] = 4;
    *(_QWORD *)v3 = &Microsoft::WRL::SimpleClassFactory<FullScreenPositioner,0>::`vftable';
    ((void (__fastcall *)(_DWORD *))Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::AddRef)(v3);
    *a1 = v4;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v1;
}
