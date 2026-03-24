/*
 * XREFs of ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C014D818
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C014BAF4 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     DxgkUpdateGdiInfo @ 0x1C014E780 (DxgkUpdateGdiInfo.c)
 *     DxgkUpdateDpiInfoForNewOverride @ 0x1C02A9EC0 (DxgkUpdateDpiInfoForNewOverride.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall QueryWin32DpiValues(
        unsigned int *a1,
        struct _DPI_SCALE_FACTOR_COLLECTION *a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // edi
  struct DXGPROCESS *Current; // rax
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(int *); // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(int *); // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // rax
  int v17; // [rsp+20h] [rbp-18h] BYREF
  int v18; // [rsp+24h] [rbp-14h]
  unsigned int *v19; // [rsp+28h] [rbp-10h]

  v6 = -1073741275;
  Current = DXGPROCESS::GetCurrent((__int64)a1, (__int64)a2, a3, a4);
  if ( Current )
    v8 = *((_QWORD *)Current + 11);
  else
    v8 = 0LL;
  if ( v8 )
  {
    v9 = *(__int64 (__fastcall **)(int *))(v8 + 352);
    if ( v9 )
    {
      if ( a1 && (v17 = 0, v18 = 4, v19 = a1, v6 = v9(&v17), v6 < 0) )
      {
        v16 = WdLogNewEntry5_WdAssertion(v11, v10);
        *(_QWORD *)(v16 + 24) = 1443LL;
      }
      else
      {
        if ( !a2 )
          return (unsigned int)v6;
        v12 = *(__int64 (__fastcall **)(int *))(v8 + 352);
        v17 = 1;
        v18 = 32;
        v19 = (unsigned int *)a2;
        v6 = v12(&v17);
        if ( v6 >= 0 )
          return (unsigned int)v6;
        v16 = WdLogNewEntry5_WdAssertion(v14, v13);
        *(_QWORD *)(v16 + 24) = 1456LL;
      }
      WdLogEvent5_WdAssertion(v16);
    }
  }
  return (unsigned int)v6;
}
