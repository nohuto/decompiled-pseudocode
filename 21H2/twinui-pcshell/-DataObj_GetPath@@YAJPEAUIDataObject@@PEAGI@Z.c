/*
 * XREFs of ?DataObj_GetPath@@YAJPEAUIDataObject@@PEAGI@Z @ 0x180154CB0
 * Callers:
 *     ?DataObj_GetIDList@@YAJPEAUIDataObject@@W4DATAOBJ_GET_ITEM_FLAGS@@PEAPEFAU_ITEMIDLIST@@@Z @ 0x180154AB4 (-DataObj_GetIDList@@YAJPEAUIDataObject@@W4DATAOBJ_GET_ITEM_FLAGS@@PEAPEFAU_ITEMIDLIST@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DataObj_GetPath(struct IDataObject *a1, unsigned __int16 *a2)
{
  signed int v3; // ebx
  __int16 v5; // [rsp+20h] [rbp-48h] BYREF
  __int64 v6; // [rsp+28h] [rbp-40h]
  int v7; // [rsp+30h] [rbp-38h]
  int v8; // [rsp+34h] [rbp-34h]
  int v9; // [rsp+38h] [rbp-30h]
  STGMEDIUM v10; // [rsp+40h] [rbp-28h] BYREF

  *a2 = 0;
  v5 = 15;
  v6 = 0LL;
  v8 = -1;
  v7 = 1;
  v9 = 1;
  v3 = ((__int64 (__fastcall *)(struct IDataObject *, __int16 *, STGMEDIUM *))a1->lpVtbl->GetData)(a1, &v5, &v10);
  if ( v3 >= 0 )
  {
    v3 = DragQueryFileW((HDROP)v10.hBitmap, 0, a2, 0x824u) == 0 ? 0x80004005 : 0;
    ReleaseStgMedium(&v10);
  }
  return (unsigned int)v3;
}
