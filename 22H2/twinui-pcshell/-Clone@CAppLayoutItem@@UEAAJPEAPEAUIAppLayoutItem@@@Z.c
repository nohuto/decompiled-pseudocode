/*
 * XREFs of ?Clone@CAppLayoutItem@@UEAAJPEAPEAUIAppLayoutItem@@@Z @ 0x1804F3D40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?s_CreateInstance_Clone@CAppLayoutItem@@SAJW4APP_LAYOUT_ITEM_TYPE@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@PEAUIApplicationView@@PEAUAPPLICATION_VIEW_DATA@@PEAUtagRECT@@4AEBU_GUID@@PEAPEAX@Z @ 0x1804F497C (-s_CreateInstance_Clone@CAppLayoutItem@@SAJW4APP_LAYOUT_ITEM_TYPE@@W4APP_LAYOUT_ITEM_BEHAVIOR_FL.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayoutItem::Clone(RTL_SRWLOCK *this, struct IAppLayoutItem **a2)
{
  RTL_SRWLOCK *v4; // rdi
  int Instance_Clone; // ebx
  struct IAppLayoutItem *v7; // [rsp+60h] [rbp+8h] BYREF

  *a2 = 0LL;
  v4 = this + 3;
  AcquireSRWLockShared(this + 3);
  v7 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  Instance_Clone = CAppLayoutItem::s_CreateInstance_Clone(
                     LODWORD(this[4].Ptr),
                     LODWORD(this[2].Ptr),
                     this[5].Ptr,
                     &this[10],
                     &this[6],
                     &this[8]);
  if ( Instance_Clone >= 0 )
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v7);
    *a2 = v7;
    Instance_Clone = 0;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return (unsigned int)Instance_Clone;
}
