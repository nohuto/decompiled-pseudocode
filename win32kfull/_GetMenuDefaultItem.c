__int64 __fastcall GetMenuDefaultItem(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rax
  _QWORD *v7; // rsi
  signed int v8; // ebx
  int v9; // ebp
  int v10; // ecx
  unsigned int MenuDefaultItem; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD v15[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]

  SmartObjStackRefBase<tagMENU>::Init(v15, 0LL);
  v6 = *(_QWORD *)(a1 + 40);
  v16 = 0LL;
  v7 = *(_QWORD **)(a1 + 88);
  v8 = 0;
  v9 = *(_DWORD *)(v6 + 44);
  if ( v9 <= 0 )
    goto LABEL_5;
  while ( 1 )
  {
    v10 = *(_DWORD *)(*v7 + 4LL);
    if ( (v10 & 0x1000) != 0 && ((v10 & 3) == 0 || (a3 & 1) != 0) )
      break;
    ++v8;
    v7 += 12;
    if ( v8 >= v9 )
      goto LABEL_5;
  }
  if ( (a3 & 2) == 0 )
    goto LABEL_12;
  v13 = v7[2];
  if ( !v13 )
    goto LABEL_12;
  SmartObjStackRefBase<tagMENU>::operator=(v15, v13);
  v14 = v16;
  if ( !v16 )
    v14 = *(_QWORD *)v15[0];
  MenuDefaultItem = GetMenuDefaultItem(v14, a2, a3);
  if ( MenuDefaultItem == -1 )
  {
LABEL_12:
    if ( v8 < v9 )
    {
      if ( !a2 )
        v8 = *(_DWORD *)(*v7 + 8LL);
      MenuDefaultItem = v8;
      goto LABEL_6;
    }
LABEL_5:
    MenuDefaultItem = -1;
  }
LABEL_6:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v15);
  return MenuDefaultItem;
}
