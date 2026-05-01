/*
 * XREFs of ?_ShouldAddMenu@CPinnedList@@IEAAJI@Z @ 0x18015EBF4
 * Callers:
 *     ?GetState@CPinnedList@@UEAAJPEAUIShellItemArray@@HPEAK@Z @ 0x180157990 (-GetState@CPinnedList@@UEAAJPEAUIShellItemArray@@HPEAK@Z.c)
 *     ?QueryContextMenu@CPinnedList@@UEAAJPEAUHMENU__@@IIII@Z @ 0x18015AD30 (-QueryContextMenu@CPinnedList@@UEAAJPEAUHMENU__@@IIII@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z @ 0x18013A33C (-GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z.c)
 *     ?SHSimpleIDListFromAttributesAndFlags@@YAJPEBGKW4SIMPLE_IDLIST_FLAGS@@PEAPEFAU_ITEMIDLIST@@@Z @ 0x18015B748 (-SHSimpleIDListFromAttributesAndFlags@@YAJPEBGKW4SIMPLE_IDLIST_FLAGS@@PEAPEFAU_ITEMIDLIST@@@Z.c)
 *     ?_GetPinnableInfoImpl@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@3PEAPEAGPEAH@Z @ 0x18015E198 (-_GetPinnableInfoImpl@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPE.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPinnedList::_ShouldAddMenu(CPinnedList *this, unsigned int a2)
{
  unsigned int v4; // esi
  int PinnableInfoImpl; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  TaskbarPinHelper *v8; // rcx
  struct IShellItem **v9; // r8
  int TaskbarPinnableItem; // eax
  TaskbarPinHelper *v11; // rcx
  IUnknown *punk; // [rsp+40h] [rbp-30h] BYREF
  TaskbarPinHelper *v14; // [rsp+48h] [rbp-28h] BYREF
  void *ppvOut; // [rsp+50h] [rbp-20h] BYREF
  LPITEMIDLIST pidl; // [rsp+58h] [rbp-18h] BYREF
  LPVOID pv; // [rsp+60h] [rbp-10h] BYREF

  if ( (a2 & 1) != 0 || (*(unsigned int (__fastcall **)(CPinnedList *))(*(_QWORD *)this + 120LL))(this) )
    return 1LL;
  v4 = ~(unsigned __int8)(a2 >> 5) & 8 | 2;
  v14 = 0LL;
  if ( IUnknown_QueryService(
         *((IUnknown **)this + 8),
         &IID_IShellLinkW,
         &GUID_0000010b_0000_0000_c000_000000000046,
         &ppvOut) < 0 )
  {
    PinnableInfoImpl = (*(__int64 (__fastcall **)(char *, _QWORD, _QWORD, TaskbarPinHelper **, _QWORD, _QWORD, _QWORD))(*((_QWORD *)this + 2) + 32LL))(
                         (char *)this + 16,
                         *((_QWORD *)this + 11),
                         v4,
                         &v14,
                         0LL,
                         0LL,
                         0LL);
  }
  else
  {
    PinnableInfoImpl = -2147467259;
    if ( !(*(unsigned int (__fastcall **)(void *, LPVOID *))(*(_QWORD *)ppvOut + 64LL))(ppvOut, &pv) && pv )
    {
      PinnableInfoImpl = SHSimpleIDListFromAttributesAndFlags((const WCHAR *)pv, v6, v7, &pidl);
      if ( PinnableInfoImpl >= 0 )
      {
        PinnableInfoImpl = (**(__int64 (__fastcall ***)(void *, GUID *, IUnknown **))ppvOut)(
                             ppvOut,
                             &GUID_000214f9_0000_0000_c000_000000000046,
                             &punk);
        if ( PinnableInfoImpl >= 0 )
        {
          PinnableInfoImpl = CPinnedList::_GetPinnableInfoImpl(
                               (__int64)this,
                               pidl,
                               (__int64)punk,
                               v4,
                               (IUnknown **)&v14,
                               0LL,
                               0LL,
                               0LL);
          ((void (__fastcall *)(IUnknown *))punk->lpVtbl->Release)(punk);
        }
        ILFree(pidl);
      }
      CoTaskMemFree(pv);
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppvOut + 16LL))(ppvOut);
  }
  v8 = v14;
  if ( v14 )
  {
    if ( !PinnableInfoImpl )
    {
      punk = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
      TaskbarPinnableItem = TaskbarPinHelper::GetTaskbarPinnableItem(v14, (struct IShellItem *)&punk, v9);
      v11 = v14;
      if ( TaskbarPinnableItem >= 0 )
      {
        (*(void (__fastcall **)(TaskbarPinHelper *))(*(_QWORD *)v14 + 16LL))(v14);
        v11 = (TaskbarPinHelper *)punk;
        punk = 0LL;
        v14 = v11;
      }
      PinnableInfoImpl = SHGetIDListFromObject((IUnknown *)v11, (LPITEMIDLIST *)this + 13);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
      v8 = v14;
    }
    (*(void (__fastcall **)(TaskbarPinHelper *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( PinnableInfoImpl >= 0 )
  {
    if ( (*(unsigned int (__fastcall **)(CPinnedList *, _QWORD))(*(_QWORD *)this + 128LL))(this, a2) )
      return 1;
  }
  return (unsigned int)PinnableInfoImpl;
}
