__int64 __fastcall xxxPaintMenuBar(__int64 a1, HDC a2, int a3, int a4, int a5, char a6)
{
  __int64 v10; // rdx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // r14d
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // r8
  _QWORD v28[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v29; // [rsp+40h] [rbp-40h]
  __int128 v30; // [rsp+48h] [rbp-38h] BYREF
  __int64 v31; // [rsp+58h] [rbp-28h]
  __int128 v32; // [rsp+60h] [rbp-20h] BYREF
  __int64 v33; // [rsp+70h] [rbp-10h]

  SmartObjStackRefBase<tagMENU>::Init(v28, 0LL);
  v10 = *(_QWORD *)(a1 + 168);
  v31 = 0LL;
  v11 = 0;
  v33 = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  v32 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v28, v10);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v28) )
  {
    v12 = v29;
    if ( !v29 )
      v12 = *(_QWORD *)v28[0];
    *(_DWORD *)(*(_QWORD *)(v12 + 40) + 40LL) |= 0x200u;
    ThreadLock(v12, &v30);
    v13 = *(_QWORD *)(*(_QWORD *)v28[0] + 40LL);
    if ( (a6 & 1) != 0 )
      *(_DWORD *)(v13 + 40) &= ~0x10u;
    else
      *(_DWORD *)(v13 + 40) |= 0x10u;
    v14 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 96LL) - *(_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL) - a3 - a4;
    v15 = *(_QWORD *)(*(_QWORD *)v28[0] + 80LL);
    ThreadLock(v15, &v32);
    if ( a1 != *(_QWORD *)(*(_QWORD *)v28[0] + 80LL)
      || !*(_DWORD *)(*(_QWORD *)v28[0] + 64LL)
      || (v18 = *(_QWORD *)v28[0], !*(_DWORD *)(*(_QWORD *)v28[0] + 68LL)) )
    {
      xxxMenuBarCompute((unsigned int)v28, a1, a5, a3, v14);
    }
    if ( gihmodUserApiHook >= 0 && v15 && (unsigned int)xxxSendUAHInitMenuMessage(v15, v28, a2) )
    {
      v19 = v29;
      if ( !v29 )
        v19 = *(_QWORD *)v28[0];
      xxxSendUAHMenuMessage(v15, 145LL, v19, a2);
    }
    ThreadUnlock1(v18, v16, v17);
    if ( v29 )
      v20 = v29;
    else
      v20 = *(_QWORD *)v28[0];
    if ( (unsigned int)MNIsUAHMenu(v20) )
    {
      if ( !v21 )
        v21 = *(_QWORD *)v28[0];
      xxxMenuDraw(a2, v21, 0LL);
    }
    else
    {
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v28[0] + 40LL) + 24LL) )
        v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v28[0] + 40LL) + 24LL);
      else
        v22 = *(_QWORD *)(gpsi + 4936LL);
      v23 = GreSelectBrush(a2, v22);
      NtGdiPatBlt(a2, a3, a5, *(_DWORD *)(*(_QWORD *)v28[0] + 64LL), *(_DWORD *)(*(_QWORD *)v28[0] + 68LL), 15728673);
      v24 = v29;
      if ( !v29 )
        v24 = *(_QWORD *)v28[0];
      xxxMenuDraw(a2, v24, 0LL);
      GreSelectBrush(a2, v23);
    }
    v11 = *(_DWORD *)(*(_QWORD *)v28[0] + 68LL);
    ThreadUnlockMenuNoModify((__int64)&v30, v25, v26);
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v28);
  return v11;
}
