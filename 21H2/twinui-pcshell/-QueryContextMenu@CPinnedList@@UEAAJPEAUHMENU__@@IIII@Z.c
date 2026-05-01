/*
 * XREFs of ?QueryContextMenu@CPinnedList@@UEAAJPEAUHMENU__@@IIII@Z @ 0x18015AEA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?_ShouldAddMenu@CPinnedList@@IEAAJI@Z @ 0x18015ED64 (-_ShouldAddMenu@CPinnedList@@IEAAJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPinnedList::QueryContextMenu(
        CPinnedList *this,
        HMENU a2,
        UINT a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  char *v6; // rdi
  __int64 result; // rax
  int v12; // eax
  UINT uID[4]; // [rsp+30h] [rbp-258h] BYREF
  WCHAR Buffer[264]; // [rsp+40h] [rbp-248h] BYREF

  v6 = (char *)this - 8;
  result = CPinnedList::_ShouldAddMenu((CPinnedList *)((char *)this - 8), a6);
  if ( !(_DWORD)result )
  {
    v12 = (*(__int64 (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 1) + 72LL))(
            (char *)this + 8,
            *((_QWORD *)this + 12));
    *((_DWORD *)this + 22) = v12 == 0;
    if ( (!v12 || (unsigned int)IsProcessAnExplorer())
      && (*(int (__fastcall **)(char *, UINT *))(*(_QWORD *)v6 + 136LL))(v6, uID) >= 0 )
    {
      if ( LoadStringW(&_ImageBase, uID[0], Buffer, 260) )
        InsertMenuW(a2, a3, 0x400u, (unsigned int)(a4 + *((_DWORD *)this + 22)), Buffer);
    }
    return 2LL;
  }
  return result;
}
