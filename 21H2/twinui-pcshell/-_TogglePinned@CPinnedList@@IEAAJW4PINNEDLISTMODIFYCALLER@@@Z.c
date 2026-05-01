/*
 * XREFs of ?_TogglePinned@CPinnedList@@IEAAJW4PINNEDLISTMODIFYCALLER@@@Z @ 0x18015EFC4
 * Callers:
 *     ?Invoke@CPinnedList@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z @ 0x1801590F0 (-Invoke@CPinnedList@@UEAAJPEAUIShellItemArray@@PEAUIBindCtx@@@Z.c)
 *     ?InvokeCommand@CPinnedList@@UEAAJPEAU_CMINVOKECOMMANDINFO@@@Z @ 0x180159190 (-InvokeCommand@CPinnedList@@UEAAJPEAU_CMINVOKECOMMANDINFO@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPinnedList::_TogglePinned(__int64 a1, unsigned int a2)
{
  __int64 v2; // r11
  __int64 v3; // rax
  __int64 v4; // r9
  bool v5; // zf
  __int64 v6; // rcx
  __int64 (__fastcall *v7)(__int64, __int64, __int64, __int64); // rax
  __int64 v8; // r8
  __int64 v9; // rdx

  v2 = *(_QWORD *)(a1 + 104);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = a2;
  v5 = *(_DWORD *)(a1 + 96) == 0;
  v6 = a1 + 24;
  v7 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v3 + 128);
  if ( v5 )
  {
    v8 = v2;
    v9 = 0LL;
  }
  else
  {
    v8 = 0LL;
    v9 = v2;
  }
  return v7(v6, v9, v8, v4);
}
