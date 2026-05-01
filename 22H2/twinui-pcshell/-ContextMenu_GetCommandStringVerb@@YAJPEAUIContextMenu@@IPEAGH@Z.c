/*
 * XREFs of ?ContextMenu_GetCommandStringVerb@@YAJPEAUIContextMenu@@IPEAGH@Z @ 0x1804E7140
 * Callers:
 *     ?GetVerbFromInvokeCommandInfo@@YAJPEAUIContextMenu@@PEAU_CMINVOKECOMMANDINFO@@PEAGK@Z @ 0x1804E72CC (-GetVerbFromInvokeCommandInfo@@YAJPEAUIContextMenu@@PEAU_CMINVOKECOMMANDINFO@@PEAGK@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180039910 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ContextMenu_GetCommandStringVerb(struct IContextMenu *a1, unsigned int a2, char *a3, int a4)
{
  __int64 v4; // r12
  __int64 v6; // r10
  __int64 v8; // rdx
  char *v9; // rcx
  __int16 v10; // ax
  char *v11; // rax
  __int64 v12; // rbp
  HRESULT (__stdcall *GetCommandString)(IContextMenu *, UINT_PTR, UINT, UINT *, CHAR *, UINT); // rax
  int v14; // edi
  int v15; // eax
  struct IContextMenuVtbl *lpVtbl; // rax
  CHAR pszSrc[272]; // [rsp+40h] [rbp-368h] BYREF
  unsigned __int16 v19[264]; // [rsp+150h] [rbp-258h] BYREF

  v4 = a4;
  v6 = a2;
  if ( (unsigned __int64)(a4 - 1LL) > 0x7FFFFFFE )
  {
    if ( a4 )
      *(_WORD *)a3 = 0;
  }
  else
  {
    v8 = a4;
    v9 = a3;
    do
    {
      if ( !(2147483646LL - a4 + v8) )
        break;
      v10 = *(_WORD *)&v9[(char *)&szAgent - a3];
      if ( !v10 )
        break;
      *(_WORD *)v9 = v10;
      v9 += 2;
      --v8;
    }
    while ( v8 );
    v11 = v9 - 2;
    if ( v8 )
      v11 = v9;
    *(_WORD *)v11 = 0;
  }
  v12 = v6;
  GetCommandString = a1->lpVtbl->GetCommandString;
  if ( (unsigned __int64)a4 >= 0x41 )
  {
    v15 = ((__int64 (__fastcall *)(struct IContextMenu *, __int64, __int64))GetCommandString)(a1, v6, 4LL);
    goto LABEL_15;
  }
  v19[0] = 0;
  v14 = ((__int64 (__fastcall *)(struct IContextMenu *, __int64, __int64))GetCommandString)(a1, v6, 4LL);
  if ( v14 >= 0 )
  {
    v15 = StringCchCopyW(a3, v4, (char *)v19);
LABEL_15:
    v14 = v15;
  }
  if ( (int)(v14 + 0x80000000) >= 0 && v14 != -2147024774 )
  {
    lpVtbl = a1->lpVtbl;
    pszSrc[0] = 0;
    v14 = ((__int64 (__fastcall *)(struct IContextMenu *, __int64, _QWORD, _QWORD, CHAR *, int))lpVtbl->GetCommandString)(
            a1,
            v12,
            0LL,
            0LL,
            pszSrc,
            65);
    if ( v14 >= 0 )
      SHAnsiToUnicode(pszSrc, (PWSTR)a3, v4);
  }
  return (unsigned int)v14;
}
