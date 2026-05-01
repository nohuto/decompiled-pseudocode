/*
 * XREFs of ?FindDesktop@CVirtualDesktopCollection@@UEAAJAEBU_GUID@@PEAPEAUIVirtualDesktop@@@Z @ 0x1804A6990
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?Compare@VirtualDesktopGuidFinder@@QEBAHV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@0@Z @ 0x1804A6784 (-Compare@VirtualDesktopGuidFinder@@QEBAHV-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@0@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopCollection::FindDesktop(
        CVirtualDesktopCollection *this,
        const struct _GUID *a2,
        struct IVirtualDesktop **a3)
{
  __int64 v5; // rax
  struct IVirtualDesktop *v6; // rax
  __int64 v7; // r14
  __int64 v8; // rbx
  int v9; // ebx
  __int64 *v11; // rbx
  __int64 v12; // [rsp+20h] [rbp-40h] BYREF
  __int64 v13; // [rsp+28h] [rbp-38h] BYREF
  __int64 v14; // [rsp+30h] [rbp-30h] BYREF
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF

  *a3 = 0LL;
  v5 = *(_QWORD *)&a2->Data1 - 0x4658059A45DB96FFLL;
  if ( *(_QWORD *)&a2->Data1 == 0x4658059A45DB96FFLL )
    v5 = *(_QWORD *)a2->Data4 - 0x1012647F7CCD4687LL;
  if ( v5 )
  {
    v15 = (__int128)*a2;
    v14 = 0LL;
    v7 = 0LL;
    v8 = 0LL;
    if ( *((_QWORD *)this + 7) )
    {
      while ( 1 )
      {
        v12 = 0LL;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
        v13 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v8);
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v13);
        if ( !(unsigned int)VirtualDesktopGuidFinder::Compare(&v15, &v13, &v12) )
          break;
        if ( (unsigned __int64)++v8 >= *((_QWORD *)this + 7) )
          goto LABEL_8;
      }
      v7 = v8;
      v9 = 0;
    }
    else
    {
LABEL_8:
      v9 = -2147319765;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    if ( v9 < 0 )
      return (unsigned int)v9;
    v11 = (__int64 *)(*((_QWORD *)this + 6) + 8 * v7);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v11);
    v6 = (struct IVirtualDesktop *)*v11;
  }
  else
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 5);
    v6 = (struct IVirtualDesktop *)*((_QWORD *)this + 5);
  }
  *a3 = v6;
  return 0LL;
}
