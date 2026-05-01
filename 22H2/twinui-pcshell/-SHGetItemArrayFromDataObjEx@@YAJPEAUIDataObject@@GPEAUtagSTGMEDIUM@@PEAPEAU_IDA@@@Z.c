/*
 * XREFs of ?SHGetItemArrayFromDataObjEx@@YAJPEAUIDataObject@@GPEAUtagSTGMEDIUM@@PEAPEAU_IDA@@@Z @ 0x18015B67C
 * Callers:
 *     ?DataObj_GetIDList@@YAJPEAUIDataObject@@W4DATAOBJ_GET_ITEM_FLAGS@@PEAPEFAU_ITEMIDLIST@@@Z @ 0x180154944 (-DataObj_GetIDList@@YAJPEAUIDataObject@@W4DATAOBJ_GET_ITEM_FLAGS@@PEAPEFAU_ITEMIDLIST@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     memset_0 @ 0x180090958 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1801C00D4 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall SHGetItemArrayFromDataObjEx(
        struct IDataObject *a1,
        __int64 a2,
        struct tagSTGMEDIUM *a3,
        struct _IDA **a4)
{
  unsigned __int16 v4; // bx
  struct IDataObjectVtbl *lpVtbl; // rax
  int v9; // ebx
  struct _IDA *v10; // rax
  unsigned __int16 v12; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+28h] [rbp-40h]
  int v14; // [rsp+30h] [rbp-38h]
  int v15; // [rsp+34h] [rbp-34h]
  int v16; // [rsp+38h] [rbp-30h]

  v4 = g_cfHIDA_Storage;
  *a4 = 0LL;
  memset_0(a3, 0, sizeof(struct tagSTGMEDIUM));
  v13 = 0LL;
  v15 = -1;
  v14 = 1;
  v16 = 1;
  lpVtbl = a1->lpVtbl;
  v12 = v4;
  v9 = ((__int64 (__fastcall *)(struct IDataObject *, unsigned __int16 *, struct tagSTGMEDIUM *))lpVtbl->GetData)(
         a1,
         &v12,
         a3);
  if ( v9 >= 0 )
  {
    v10 = (struct _IDA *)GlobalLock(a3->hBitmap);
    *a4 = v10;
    if ( !v10 )
    {
      ReleaseStgMedium(a3);
      return (unsigned int)ResultFromKnownLastError();
    }
  }
  return (unsigned int)v9;
}
