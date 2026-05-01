/*
 * XREFs of ?ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z @ 0x180159790
 * Callers:
 *     ?ItemChangeNotify@CPinnedList@@W7EAAJPEFBU_ITEMIDLIST@@0@Z @ 0x180171E00 (-ItemChangeNotify@CPinnedList@@W7EAAJPEFBU_ITEMIDLIST@@0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?SHILClone@@YAJPEFBU_ITEMIDLIST@@PEAPEFAU1@@Z @ 0x180140030 (-SHILClone@@YAJPEFBU_ITEMIDLIST@@PEAPEFAU1@@Z.c)
 *     ??1CPinList@@QEAA@XZ @ 0x180152C04 (--1CPinList@@QEAA@XZ.c)
 *     ?FindPidl@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@PEAH@Z @ 0x180155104 (-FindPidl@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@PEAH@Z.c)
 *     ?ILGetHiddenStringAllocW@@YAHPEFBU_ITEMIDLIST@@W4IDLHID@@PEAPEAG@Z @ 0x180157F58 (-ILGetHiddenStringAllocW@@YAHPEFBU_ITEMIDLIST@@W4IDLHID@@PEAPEAG@Z.c)
 *     ?Load@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x180159A1C (-Load@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 *     ?Save@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x18015B810 (-Save@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 *     ?UpdateShellLink@PINENTRY@@QEAAJXZ @ 0x18015D1B8 (-UpdateShellLink@PINENTRY@@QEAAJXZ.c)
 *     _CacheAppIDInIDList @ 0x18015D24C (_CacheAppIDInIDList.c)
 *     ?_DoNotifyPinListChange@CPinnedList@@IEAAXPEFBU_ITEMIDLIST@@H@Z @ 0x18015DAC8 (-_DoNotifyPinListChange@CPinnedList@@IEAAXPEFBU_ITEMIDLIST@@H@Z.c)
 *     SimpleToRealIDListWithContext @ 0x180160B3C (SimpleToRealIDListWithContext.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPinnedList::ItemChangeNotify(
        CPinnedList *this,
        const struct _ITEMIDLIST *a2,
        const struct _ITEMIDLIST *a3)
{
  const ITEMIDLIST *v3; // rsi
  const struct _ITEMIDLIST *v4; // r15
  int v6; // ebx
  ITEMIDLIST *v7; // rax
  ITEMIDLIST *v8; // rax
  WCHAR *v9; // r13
  WCHAR *v10; // r14
  struct _ITEMIDLIST *v11; // r12
  struct CPinnedList *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  const struct _ITEMIDLIST **v15; // rdi
  const ITEMIDLIST *v16; // rcx
  ITEMIDLIST *v17; // r14
  struct _ITEMIDLIST *v19; // [rsp+30h] [rbp-50h] BYREF
  struct _ITEMIDLIST *v20; // [rsp+38h] [rbp-48h] BYREF
  LPCWCH lpString1; // [rsp+40h] [rbp-40h] BYREF
  LPCWCH lpString2; // [rsp+48h] [rbp-38h] BYREF
  struct CPinnedList *v23; // [rsp+50h] [rbp-30h]
  LPITEMIDLIST pidl; // [rsp+58h] [rbp-28h]
  LPITEMIDLIST v25; // [rsp+60h] [rbp-20h]
  __int128 v26; // [rsp+68h] [rbp-18h] BYREF

  v3 = a3;
  v4 = a2;
  v6 = -2147024809;
  if ( a2 && a3 )
  {
    v7 = (ITEMIDLIST *)SHLogILFromFSIL(a2);
    pidl = v7;
    if ( v7 )
      v4 = v7;
    v8 = (ITEMIDLIST *)SHLogILFromFSIL(v3);
    v25 = v8;
    if ( v8 )
      v3 = v8;
    v9 = 0LL;
    lpString1 = 0LL;
    v10 = 0LL;
    lpString2 = 0LL;
    v11 = 0LL;
    v20 = 0LL;
    v26 = 0LL;
    v12 = (CPinnedList *)((char *)this - 16);
    v23 = v12;
    if ( (int)CPinList::Load((CPinList *)&v26, v12) < 0 )
    {
      v6 = -2147024882;
      goto LABEL_19;
    }
    v15 = CPinList::FindPidl((HDSA *)&v26, v4, 0LL);
    if ( !v15 )
    {
      v6 = -2147023728;
      goto LABEL_17;
    }
    v6 = SimpleToRealIDListWithContext(v14, v13, v3, &v19);
    if ( v6 < 0 )
    {
LABEL_26:
      CoTaskMemFree(v10);
      CoTaskMemFree(v9);
      ILFree(v11);
      ILFree(pidl);
      ILFree(v25);
      CPinList::~CPinList((CPinList *)&v26);
      return (unsigned int)v6;
    }
    v6 = CacheAppIDInIDList(v19);
    if ( v6 >= 0 )
    {
      v6 = SHILClone(*v15, &v20);
      if ( v6 >= 0 )
      {
        ILGetHiddenStringAllocW(*v15, -1091633123, (void **)&lpString1);
        ILFree((LPITEMIDLIST)*v15);
        v16 = v19;
        *v15 = v19;
        ILGetHiddenStringAllocW(v16, -1091633123, (void **)&lpString2);
        v17 = 0LL;
        PINENTRY::UpdateShellLink((PINENTRY *)v15);
        v9 = (WCHAR *)lpString1;
        v11 = v20;
LABEL_15:
        ILFree(v17);
        v10 = (WCHAR *)lpString2;
LABEL_17:
        v12 = v23;
LABEL_19:
        if ( v6 >= 0 && (!v9 || !v10 || !ILIsEqual(v4, v3) || CompareStringOrdinal(v9, -1, v10, -1, 1) != 2) )
        {
          v6 = CPinList::Save((CPinList *)&v26, v12);
          if ( v6 >= 0 )
            CPinnedList::_DoNotifyPinListChange(v12, v11, 1);
        }
        goto LABEL_26;
      }
      v11 = v20;
    }
    v17 = v19;
    goto LABEL_15;
  }
  return (unsigned int)v6;
}
