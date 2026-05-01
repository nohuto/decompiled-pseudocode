/*
 * XREFs of ?InvokeCommand@CPinnedList@@UEAAJPEAU_CMINVOKECOMMANDINFO@@@Z @ 0x180159190
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     memset_0 @ 0x180090978 (memset_0.c)
 *     ?_TogglePinned@CPinnedList@@IEAAJW4PINNEDLISTMODIFYCALLER@@@Z @ 0x18015EFC4 (-_TogglePinned@CPinnedList@@IEAAJW4PINNEDLISTMODIFYCALLER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?GetVerbFromInvokeCommandInfo@@YAJPEAUIContextMenu@@PEAU_CMINVOKECOMMANDINFO@@PEAGK@Z @ 0x1804E765C (-GetVerbFromInvokeCommandInfo@@YAJPEAUIContextMenu@@PEAU_CMINVOKECOMMANDINFO@@PEAGK@Z.c)
 */

__int64 __fastcall CPinnedList::InvokeCommand(unsigned __int64 this, struct _CMINVOKECOMMANDINFO *a2)
{
  unsigned int v4; // esi
  unsigned int i; // ebx
  const WCHAR *v6; // rax
  WCHAR String1[128]; // [rsp+30h] [rbp-128h] BYREF

  v4 = -2147024809;
  if ( a2->lpVerb >= (LPCSTR)0x10000 )
  {
    memset_0(String1, 0, sizeof(String1));
    GetVerbFromInvokeCommandInfo((struct IContextMenu *)(this & -(__int64)(this != 8)), a2, String1, 0x80u);
    for ( i = 0; i < 2; ++i )
    {
      v6 = (const WCHAR *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)(this - 8) + 160LL))(
                            this - 8,
                            i);
      if ( CompareStringOrdinal(String1, -1, v6, -1, 1) == 2 )
        break;
    }
  }
  else
  {
    i = (unsigned int)a2->lpVerb;
  }
  if ( i == *(_DWORD *)(this + 88)
    && (*(unsigned int (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)(this - 8) + 200LL))(this - 8, i) )
  {
    return (unsigned int)CPinnedList::_TogglePinned(this - 8, 4LL);
  }
  return v4;
}
