/*
 * XREFs of xxxGetMenuItemRect @ 0x1C024E628
 * Callers:
 *     NtUserGetMenuItemRect @ 0x1C01FA360 (NtUserGetMenuItemRect.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C024E17C (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C024E7B4 (xxxMNRecomputeBarIfNeeded.c)
 */

__int64 __fastcall xxxGetMenuItemRect(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 MenuPwnd; // rbx
  int v8; // ebp
  __int64 v9; // rax
  int v10; // ebx
  int v11; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rcx
  _DWORD *v14; // rax
  __int64 v15; // rdx
  int v16; // r8d
  int v17; // r9d
  _DWORD *v18; // rcx
  int v19; // ebx
  int v20; // esi
  __int64 result; // rax
  _QWORD v22[7]; // [rsp+20h] [rbp-38h] BYREF

  v4 = a3;
  *(_OWORD *)a4 = 0LL;
  MenuPwnd = a1;
  if ( a3 >= *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 44LL) )
    return 0LL;
  if ( !a1 || (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 21LL) & 4) != 0 )
    MenuPwnd = GetMenuPwnd(a1, a2);
  if ( !MenuPwnd )
    return 0LL;
  v8 = *(_BYTE *)(*(_QWORD *)(MenuPwnd + 40) + 26LL) & 0x40;
  if ( (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 40LL) & 1) != 0 )
  {
    v9 = *(_QWORD *)(MenuPwnd + 40);
    v10 = (*(_BYTE *)(v9 + 26) & 0x40) != 0 ? *(_DWORD *)(v9 + 112) : *(_DWORD *)(v9 + 104);
    v11 = *(_DWORD *)(v9 + 108);
  }
  else
  {
    v22[2] = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v22[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v22;
    v22[1] = MenuPwnd;
    HMLockObject(MenuPwnd);
    xxxMNRecomputeBarIfNeeded(MenuPwnd, a2);
    v14 = *(_DWORD **)(MenuPwnd + 40);
    v10 = v8 ? v14[24] : v14[22];
    v11 = v14[23];
    ThreadUnlock1(v13);
  }
  if ( (unsigned int)v4 >= *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 44LL) )
    return 0LL;
  v15 = *(_QWORD *)(**(_QWORD **)a2 + 88LL) + 96 * v4;
  v16 = *(_DWORD *)(*(_QWORD *)v15 + 72LL);
  *(_DWORD *)(a4 + 8) = v16;
  v17 = *(_DWORD *)(*(_QWORD *)v15 + 76LL);
  *(_DWORD *)(a4 + 12) = v17;
  v18 = *(_DWORD **)v15;
  if ( v8 )
    v19 = v10 - (v18[16] + v18[18]);
  else
    v19 = v18[16] + v10;
  v20 = v18[17] + v11;
  result = 1LL;
  *(_DWORD *)a4 += v19;
  *(_DWORD *)(a4 + 4) += v20;
  *(_DWORD *)(a4 + 8) = v16 + v19;
  *(_DWORD *)(a4 + 12) = v17 + v20;
  return result;
}
