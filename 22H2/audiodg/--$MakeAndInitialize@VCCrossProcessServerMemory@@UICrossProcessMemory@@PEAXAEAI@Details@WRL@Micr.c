/*
 * XREFs of ??$MakeAndInitialize@VCCrossProcessServerMemory@@UICrossProcessMemory@@PEAXAEAI@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessMemory@@$$QEAPEAXAEAI@Z @ 0x140011450
 * Callers:
 *     ?Allocate@CCrossProcessMemoryManager@@UEAAJIPEAPEAUICrossProcessMemory@@@Z @ 0x140011B40 (-Allocate@CCrossProcessMemoryManager@@UEAAJIPEAPEAUICrossProcessMemory@@@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x140011420 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCrossProcessBaseMemory@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140011630 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCrossProcessBas.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D6DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCrossProcessServerMemory,ICrossProcessMemory,void *,unsigned int &>(
        _QWORD *a1,
        __int64 *a2,
        int *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v8; // rcx
  char *v9; // rbp
  int v10; // r14d
  __int64 v11; // r15
  const struct _GUID *v12; // rcx
  _QWORD *v13; // rcx
  int v14; // edi
  DWORD LastError; // edi

  *a1 = 0LL;
  v6 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    v8 = Microsoft::WRL::Details::ModuleBase::module_;
    *v6 = &CCrossProcessBaseMemory::`vftable';
    v6[2] = 0LL;
    *((_DWORD *)v6 + 6) = 0;
    v6[4] = 0LL;
    *((_DWORD *)v6 + 11) = 1;
    *v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CCrossProcessBaseMemory>::`vftable';
    if ( v8 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v8 + 8LL))(v8);
    *v7 = &CCrossProcessServerMemory::`vftable';
    v9 = (char *)v7[2];
    v10 = *a3;
    v11 = *a2;
    if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      LastError = GetLastError();
      CloseHandle(v9);
      SetLastError(LastError);
    }
    v7[2] = v11;
    *((_DWORD *)v7 + 6) = v10;
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_910f47db_d25f_4cf9_995e_f86c161b3eef, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a1 = v7;
      (*(void (__fastcall **)(_QWORD *))(*v7 + 8LL))(v7);
      v14 = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v12, v12) )
      {
        *a1 = v7;
        v13 = v7;
        v14 = 0;
      }
      else
      {
        v13 = 0LL;
        v14 = -2147467262;
      }
      if ( v14 >= 0 )
        (*(void (__fastcall **)(_QWORD *))(*v13 + 8LL))(v13);
    }
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCrossProcessBaseMemory>::Release(v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v14;
}
