/*
 * XREFs of ?UpdateForRemovedItemsAsNecessary@CPinnedList@@UEAAJXZ @ 0x18015CFF0
 * Callers:
 *     ?UpdateForRemovedItemsAsNecessary@CPinnedList@@W7EAAJXZ @ 0x180171F60 (-UpdateForRemovedItemsAsNecessary@CPinnedList@@W7EAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?_DoNotifyPinListChange@CPinnedList@@IEAAXPEFBU_ITEMIDLIST@@H@Z @ 0x18015DAC8 (-_DoNotifyPinListChange@CPinnedList@@IEAAXPEFBU_ITEMIDLIST@@H@Z.c)
 *     ?_GetRemovedGlobalChangeCount@CPinnedList@@IEAAKXZ @ 0x18015E3A4 (-_GetRemovedGlobalChangeCount@CPinnedList@@IEAAKXZ.c)
 *     ?_ResolveTargetLink@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@PEAH@Z @ 0x18015EA4C (-_ResolveTargetLink@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@PEAH@Z.c)
 *     McTemplateU0qd_EventWriteTransfer @ 0x18015FC34 (McTemplateU0qd_EventWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPinnedList::UpdateForRemovedItemsAsNecessary(CPinnedList *this)
{
  int v2; // esi
  unsigned int v3; // r15d
  __int64 v4; // rax
  int v5; // r14d
  int v6; // eax
  const struct _ITEMIDLIST *v7; // rdx
  unsigned int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v12; // [rsp+30h] [rbp-30h] BYREF
  LPITEMIDLIST v13; // [rsp+38h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-20h] BYREF
  LPITEMIDLIST pidl; // [rsp+48h] [rbp-18h] BYREF

  v2 = 0;
  v3 = CPinnedList::_GetRemovedGlobalChangeCount(this);
  if ( (unsigned int)IsProcessAnExplorer()
    && v3 != (*(unsigned int (__fastcall **)(char *))(*((_QWORD *)this - 2) + 184LL))((char *)this - 16) )
  {
    v4 = *(_QWORD *)this;
    v5 = 0;
    *((_DWORD *)this + 16) = 1;
    v12 = 0;
    v2 = (*(__int64 (__fastcall **)(CPinnedList *, __int64 *))(v4 + 24))(this, &v14);
    if ( v2 >= 0 )
    {
      while ( !(*(unsigned int (__fastcall **)(__int64, __int64, LPITEMIDLIST *, _QWORD))(*(_QWORD *)v14 + 24LL))(
                 v14,
                 1LL,
                 &v13,
                 0LL) )
      {
        v6 = (*(__int64 (__fastcall **)(CPinnedList *, _QWORD, __int64, LPITEMIDLIST, LPITEMIDLIST *))(*(_QWORD *)this + 48LL))(
               this,
               0LL,
               17LL,
               v13,
               &pidl);
        v7 = v13;
        v8 = v6;
        if ( v6 < 0 )
        {
          if ( (*(int (__fastcall **)(char *, LPITEMIDLIST, __int64))(*((_QWORD *)this + 2) + 24LL))(
                 (char *)this + 16,
                 v13,
                 15LL) >= 0 )
            v5 = 1;
          v12 = v5;
          if ( (byte_180652282 & 1) != 0 )
            McTemplateU0qd_EventWriteTransfer(v10, v9, v8);
        }
        else
        {
          if ( pidl )
            v7 = pidl;
          CPinnedList::_ResolveTargetLink((CPinnedList *)((char *)this - 16), v7, &v12);
          ILFree(pidl);
          v5 = v12;
        }
        ILFree(v13);
      }
      v2 = 0;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    *((_DWORD *)this + 16) = 0;
    if ( v5 )
      CPinnedList::_DoNotifyPinListChange((CPinnedList *)((char *)this - 16), 0LL, 1);
    (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this - 2) + 176LL))((char *)this - 16, v3);
  }
  return (unsigned int)v2;
}
