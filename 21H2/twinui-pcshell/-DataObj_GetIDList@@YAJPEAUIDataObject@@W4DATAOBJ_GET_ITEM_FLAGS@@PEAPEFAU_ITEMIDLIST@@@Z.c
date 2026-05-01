/*
 * XREFs of ?DataObj_GetIDList@@YAJPEAUIDataObject@@W4DATAOBJ_GET_ITEM_FLAGS@@PEAPEFAU_ITEMIDLIST@@@Z @ 0x180154AB4
 * Callers:
 *     ?GetPinnableInfo@CPinnedList@@UEAAJPEAUIDataObject@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@2PEAPEAGPEAH@Z @ 0x180156E70 (-GetPinnableInfo@CPinnedList@@UEAAJPEAUIDataObject@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@2PEAPEAGP.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?DataObj_GetDataOfType@@YAPEAXPEAUIDataObject@@IPEAUtagSTGMEDIUM@@@Z @ 0x180154A1C (-DataObj_GetDataOfType@@YAPEAXPEAUIDataObject@@IPEAUtagSTGMEDIUM@@@Z.c)
 *     ?DataObj_GetPath@@YAJPEAUIDataObject@@PEAGI@Z @ 0x180154CB0 (-DataObj_GetPath@@YAJPEAUIDataObject@@PEAGI@Z.c)
 *     ?ReleaseStgMediumHGLOBAL@@YAXPEBXPEAUtagSTGMEDIUM@@@Z @ 0x18015B080 (-ReleaseStgMediumHGLOBAL@@YAXPEBXPEAUtagSTGMEDIUM@@@Z.c)
 *     ?SHGetItemArrayFromDataObjEx@@YAJPEAUIDataObject@@GPEAUtagSTGMEDIUM@@PEAPEAU_IDA@@@Z @ 0x18015B7EC (-SHGetItemArrayFromDataObjEx@@YAJPEAUIDataObject@@GPEAUtagSTGMEDIUM@@PEAPEAU_IDA@@@Z.c)
 *     ?_InitClipboardFormats@@YAXXZ @ 0x18015E6D4 (-_InitClipboardFormats@@YAXXZ.c)
 *     SHGetUIObjectFromFullPIDL @ 0x18015FE28 (SHGetUIObjectFromFullPIDL.c)
 *     _alloca_probe @ 0x1801610C0 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DataObj_GetIDList(struct IDataObject *a1, enum DATAOBJ_GET_ITEM_FLAGS a2, struct _ITEMIDLIST **a3)
{
  char v4; // si
  HRESULT Path; // ebx
  unsigned __int16 v7; // dx
  __int64 v8; // rdx
  const void *v9; // rcx
  __int64 v10; // r8
  struct _ITEMIDLIST *v11; // rax
  const CHAR *DataOfType; // rax
  struct _IDA *v14; // [rsp+30h] [rbp-D0h] BYREF
  struct _ITEMIDLIST *v15; // [rsp+38h] [rbp-C8h] BYREF
  struct tagSTGMEDIUM v16; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR pszName[2088]; // [rsp+60h] [rbp-A0h] BYREF

  *a3 = 0LL;
  v4 = a2;
  Path = -2147024809;
  if ( !a1 )
    return (unsigned int)Path;
  _InitClipboardFormats();
  _InitClipboardFormats();
  Path = SHGetItemArrayFromDataObjEx(a1, v7, &v16, &v14);
  if ( Path >= 0 )
  {
    if ( (v4 & 8) == 0 || v14->cidl == 1 )
    {
      if ( v14->cidl )
        v11 = ILCombine((LPCITEMIDLIST)((char *)v14 + v14->aoffset[0]), (LPCITEMIDLIST)((char *)v14 + v14[1].cidl));
      else
        v11 = 0LL;
      *a3 = v11;
      Path = v11 == 0LL ? 0x8007000E : 0;
    }
    else
    {
      Path = -2147467259;
    }
    goto LABEL_17;
  }
  if ( (v4 & 2) == 0 )
  {
    Path = DataObj_GetPath(a1, pszName, v10);
    if ( Path < 0 )
      goto LABEL_14;
    Path = SHParseDisplayName(pszName, 0LL, a3, 0, 0LL);
    v4 |= 4u;
  }
  if ( Path < 0 )
  {
LABEL_14:
    if ( (v4 & 4) != 0 || (DataOfType = (const CHAR *)DataObj_GetDataOfType(a1, g_cfURL_Storage, &v16)) == 0LL )
    {
LABEL_18:
      if ( Path < 0 )
        return (unsigned int)Path;
      goto LABEL_19;
    }
    SHAnsiToUnicode(DataOfType, pszName, 2084);
    Path = SHParseDisplayName(pszName, 0LL, a3, 0, 0LL);
LABEL_17:
    ReleaseStgMediumHGLOBAL(v9, &v16);
    goto LABEL_18;
  }
LABEL_19:
  if ( (v4 & 1) != 0 && (int)SHGetUIObjectFromFullPIDL(*a3, v8, v10, &v14) >= 0 )
  {
    if ( (*(int (__fastcall **)(struct _IDA *, struct _ITEMIDLIST **))(*(_QWORD *)v14 + 32LL))(v14, &v15) >= 0 && v15 )
    {
      ILFree(*a3);
      *a3 = v15;
    }
    (*(void (__fastcall **)(struct _IDA *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return (unsigned int)Path;
}
