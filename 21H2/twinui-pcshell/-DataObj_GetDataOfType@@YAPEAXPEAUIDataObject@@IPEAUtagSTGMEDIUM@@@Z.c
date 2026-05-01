/*
 * XREFs of ?DataObj_GetDataOfType@@YAPEAXPEAUIDataObject@@IPEAUtagSTGMEDIUM@@@Z @ 0x180154A1C
 * Callers:
 *     ?DataObj_GetIDList@@YAJPEAUIDataObject@@W4DATAOBJ_GET_ITEM_FLAGS@@PEAPEFAU_ITEMIDLIST@@@Z @ 0x180154AB4 (-DataObj_GetIDList@@YAJPEAUIDataObject@@W4DATAOBJ_GET_ITEM_FLAGS@@PEAPEFAU_ITEMIDLIST@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

LPVOID __fastcall DataObj_GetDataOfType(struct IDataObject *a1, __int16 a2, struct tagSTGMEDIUM *a3)
{
  LPVOID v3; // rbx
  __int16 v6; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+28h] [rbp-30h]
  int v8; // [rsp+30h] [rbp-28h]
  int v9; // [rsp+34h] [rbp-24h]
  int v10; // [rsp+38h] [rbp-20h]

  v9 = -1;
  v3 = 0LL;
  v7 = 0LL;
  v6 = a2;
  v8 = 1;
  v10 = 1;
  if ( !((unsigned int (__fastcall *)(struct IDataObject *, __int16 *))a1->lpVtbl->GetData)(a1, &v6) )
  {
    v3 = GlobalLock(a3->hBitmap);
    if ( !v3 )
      ReleaseStgMedium(a3);
  }
  return v3;
}
