/*
 * XREFs of xxxGetMenuItemRect @ 0x1C023B35C
 * Callers:
 *     NtUserGetMenuItemRect @ 0x1C01D36F0 (NtUserGetMenuItemRect.c)
 * Callees:
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C023A528 (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C023BD88 (xxxMNRecomputeBarIfNeeded.c)
 */

__int64 __fastcall xxxGetMenuItemRect(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 MenuPwnd; // rbx
  int v8; // ebp
  __int64 v9; // rax
  int v10; // ebx
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _DWORD *v15; // rax
  __int64 v16; // rdx
  int v17; // r8d
  int v18; // r9d
  _DWORD *v19; // rcx
  int v20; // ebx
  int v21; // esi
  __int64 result; // rax
  __int128 v23; // [rsp+20h] [rbp-38h] BYREF
  __int64 v24; // [rsp+30h] [rbp-28h]

  v4 = a3;
  *(_OWORD *)a4 = 0LL;
  MenuPwnd = a1;
  if ( a3 >= *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 44LL) )
    return 0LL;
  if ( !a1 || (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 21LL) & 4) != 0 )
  {
    MenuPwnd = GetMenuPwnd(a1, a2);
    if ( !MenuPwnd )
      return 0LL;
  }
  v8 = *(_BYTE *)(*(_QWORD *)(MenuPwnd + 40) + 26LL) & 0x40;
  if ( (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 40LL) & 1) != 0 )
  {
    v9 = *(_QWORD *)(MenuPwnd + 40);
    v10 = (*(_BYTE *)(v9 + 26) & 0x40) != 0 ? *(_DWORD *)(v9 + 112) : *(_DWORD *)(v9 + 104);
    v11 = *(_DWORD *)(v9 + 108);
  }
  else
  {
    v23 = 0LL;
    v24 = 0LL;
    ThreadLockAlways(MenuPwnd, &v23);
    xxxMNRecomputeBarIfNeeded(MenuPwnd, a2);
    v15 = *(_DWORD **)(MenuPwnd + 40);
    v10 = v8 ? v15[24] : v15[22];
    v11 = v15[23];
    ThreadUnlock1(v13, v12, v14);
  }
  if ( (unsigned int)v4 >= *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 44LL) )
    return 0LL;
  v16 = *(_QWORD *)(**(_QWORD **)a2 + 88LL) + 96 * v4;
  v17 = *(_DWORD *)(*(_QWORD *)v16 + 72LL);
  *(_DWORD *)(a4 + 8) = v17;
  v18 = *(_DWORD *)(*(_QWORD *)v16 + 76LL);
  *(_DWORD *)(a4 + 12) = v18;
  v19 = *(_DWORD **)v16;
  if ( v8 )
    v20 = v10 - (v19[16] + v19[18]);
  else
    v20 = v19[16] + v10;
  v21 = v19[17] + v11;
  result = 1LL;
  *(_DWORD *)a4 += v20;
  *(_DWORD *)(a4 + 4) += v21;
  *(_DWORD *)(a4 + 8) = v17 + v20;
  *(_DWORD *)(a4 + 12) = v18 + v21;
  return result;
}
