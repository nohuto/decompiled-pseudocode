/*
 * XREFs of ?Save@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x18015B810
 * Callers:
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180158300 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z @ 0x180159790 (-ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z.c)
 *     ?PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z @ 0x18015A590 (-PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z.c)
 *     ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFAU3@@Z @ 0x18015AF50 (-ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFA.c)
 *     ?Resolve@CPinnedList@@UEAAJPEAUHWND__@@KPEFBU_ITEMIDLIST@@PEAPEFAU3@@Z @ 0x18015B450 (-Resolve@CPinnedList@@UEAAJPEAUHWND__@@KPEFBU_ITEMIDLIST@@PEAPEFAU3@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     memset_0 @ 0x180090958 (memset_0.c)
 *     DSA_EnumCallback @ 0x18014F9F4 (DSA_EnumCallback.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPinList::Save(struct _DSA **this, struct CPinnedList *a2)
{
  unsigned int v4; // ebx
  int *v5; // rsi
  struct _DSA *v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  LPITEMIDLIST *v9; // rsi
  __int64 result; // rax
  __int64 v11; // rbx
  unsigned int v12; // eax
  IStream *pData; // [rsp+20h] [rbp-99h] BYREF
  __int64 v14; // [rsp+28h] [rbp-91h]
  struct _DSA **v15; // [rsp+30h] [rbp-89h]
  HRESULT v16; // [rsp+38h] [rbp-81h]
  _QWORD v17[22]; // [rsp+40h] [rbp-79h] BYREF
  char pv[4]; // [rsp+F0h] [rbp+37h] BYREF
  int v19; // [rsp+F4h] [rbp+3Bh] BYREF

  memset_0(&pData, 0, 0xC8uLL);
  v4 = 0;
  v5 = (int *)byte_18056EDF0;
  do
    SHGetSpecialFolderLocation(0LL, *v5++, (LPITEMIDLIST *)&v17[v4++]);
  while ( v4 < 0x14 );
  pData = (IStream *)(*(__int64 (__fastcall **)(struct CPinnedList *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 1LL);
  if ( pData )
  {
    v14 = (*(__int64 (__fastcall **)(struct CPinnedList *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 1LL);
    if ( v14 )
    {
      v6 = *this;
      v16 = 0;
      v15 = this;
      v17[20] = a2;
      DSA_EnumCallback(v6, (PFNDAENUMCALLBACK)CPinList::ILWriteCallback, &pData);
      if ( v16 < 0 || (pv[0] = -1, v16 = IStream_Write(pData, pv, 1u), v16 < 0) )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 48LL))(v14, 0LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      v7 = v16;
    }
    else
    {
      v7 = -2147024891;
      v16 = -2147024891;
    }
    if ( v7 < 0 )
      (*(void (__fastcall **)(IStream *, _QWORD))(*(_QWORD *)pData + 48LL))(pData, 0LL);
    (*(void (__fastcall **)(IStream *))(*(_QWORD *)pData + 16LL))(pData);
  }
  else
  {
    v16 = -2147024891;
  }
  v8 = 0;
  v9 = (LPITEMIDLIST *)v17;
  do
  {
    ILFree(*v9);
    ++v8;
    ++v9;
  }
  while ( v8 < 0x14 );
  (*(void (__fastcall **)(char *, int *))(*((_QWORD *)a2 + 2) + 64LL))((char *)a2 + 16, &v19);
  (*(void (__fastcall **)(struct CPinnedList *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, (unsigned int)(v19 + 1));
  result = (unsigned int)v16;
  if ( v16 >= 0 )
  {
    v11 = *(_QWORD *)a2;
    v12 = (*(__int64 (__fastcall **)(struct CPinnedList *))(*(_QWORD *)a2 + 88LL))(a2);
    (*(void (__fastcall **)(struct CPinnedList *, _QWORD))(v11 + 80))(a2, v12);
    return (unsigned int)v16;
  }
  return result;
}
