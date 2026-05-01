/*
 * XREFs of ?GetNextItem@CAppLayoutItemEnum@@UEAAJW4APP_LAYOUT_ITEM_TYPE@@PEAUAPP_LAYOUT_ENUM_ITEM@@@Z @ 0x1804F1A50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationView@@@Z @ 0x1804E134C (-GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationVie.c)
 */

__int64 __fastcall CAppLayoutItemEnum::GetNextItem(__int64 a1, int a2, __int64 a3)
{
  int v5; // edi
  int v6; // eax
  unsigned int v7; // r15d
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rbx
  struct IApplicationView *v11; // rdx
  __int64 (__fastcall ***v12)(ApplicationViewHelpers *, GUID *, __int64 *); // rcx
  __int64 v13; // rcx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  __int64 v18; // [rsp+70h] [rbp+40h] BYREF
  int v19; // [rsp+78h] [rbp+48h]
  ApplicationViewHelpers *v20; // [rsp+80h] [rbp+50h] BYREF

  v19 = a2;
  *(_DWORD *)(a3 + 56) = 0;
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)a3 = 0LL;
  SetRectEmpty((LPRECT)(a3 + 24));
  SetRectEmpty((LPRECT)(a3 + 40));
  v5 = -2147319765;
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 72LL))(*(_QWORD *)(a1 + 16));
  if ( v6 )
  {
    v7 = v6 - 1;
    while ( *(_DWORD *)(a1 + 32) <= v7 && v5 == -2147319765 )
    {
      v18 = 0LL;
      v8 = *(_QWORD *)(a1 + 16);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
      if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v8 + 96LL))(
             v8,
             *(unsigned int *)(a1 + 32),
             &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
             &v18) >= 0 )
      {
        v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 24LL))(v18);
        if ( (v9 & v19) != 0 )
        {
          v5 = 0;
          if ( v9 != 1 )
            goto LABEL_11;
          v20 = 0LL;
          v10 = v18;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
          v5 = (*(__int64 (__fastcall **)(__int64, GUID *, ApplicationViewHelpers **))(*(_QWORD *)v10 + 48LL))(
                 v10,
                 &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
                 &v20);
          if ( v5 >= 0 )
          {
            v12 = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v20;
            *(_QWORD *)(a3 + 16) = v20;
            *(_QWORD *)(a3 + 8) = ApplicationViewHelpers::GetApplicationFromView(v12, v11);
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
          if ( v5 >= 0 )
          {
LABEL_11:
            v13 = v18;
            *(_QWORD *)a3 = v18;
            (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v13 + 56LL))(v13, 0LL, a3 + 24);
            (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v18 + 56LL))(v18, 1LL, a3 + 40);
            *(_DWORD *)(a3 + 56) = *(_DWORD *)(a1 + 32);
          }
        }
      }
      v14 = *(_DWORD *)(a1 + 32);
      v15 = v14 + 1;
      v16 = v14 - 1;
      if ( *(_DWORD *)(a1 + 24) != -1 )
        v16 = v15;
      *(_DWORD *)(a1 + 32) = v16;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    }
  }
  return (unsigned int)v5;
}
