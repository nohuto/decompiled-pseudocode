/*
 * XREFs of ?ReplacePidl@CPinList@@QEAAJPEAVCPinnedList@@PEFBU_ITEMIDLIST@@1W4PinnedListModifyFlags@@PEAPEFAU3@@Z @ 0x18015AF50
 * Callers:
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180158300 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     memset_0 @ 0x180090958 (memset_0.c)
 *     memcpy_0 @ 0x180091307 (memcpy_0.c)
 *     memmove_0 @ 0x180091313 (memmove_0.c)
 *     ?ILFindFirstHiddenID@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@@Z @ 0x180099578 (-ILFindFirstHiddenID@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@@Z.c)
 *     ?ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z @ 0x1800995CC (-ILFindHiddenIDOn@@YAPEFBU_HIDDENITEMID@@PEFBU_ITEMIDLIST@@W4IDLHID@@H@Z.c)
 *     ?ILNextHidden@@YAPEFBU_HIDDENITEMID@@PEFBU1@PEFBU_ITEMIDLIST@@@Z @ 0x180099630 (-ILNextHidden@@YAPEFBU_HIDDENITEMID@@PEFBU1@PEFBU_ITEMIDLIST@@@Z.c)
 *     ?SHILClone@@YAJPEFBU_ITEMIDLIST@@PEAPEFAU1@@Z @ 0x180140030 (-SHILClone@@YAJPEFBU_ITEMIDLIST@@PEAPEFAU1@@Z.c)
 *     _DSA_MaybeShrink @ 0x18014F980 (_DSA_MaybeShrink.c)
 *     ?Destruct@PINENTRY@@QEAAXXZ @ 0x180154DAC (-Destruct@PINENTRY@@QEAAXXZ.c)
 *     ?FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z @ 0x18015519C (-FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z.c)
 *     GetPinSourceForPinnedItem @ 0x180156BE4 (GetPinSourceForPinnedItem.c)
 *     ?ILAppendHiddenID@@YAPEFAU_ITEMIDLIST@@PEFAU1@PEFBU_HIDDENITEMID@@@Z @ 0x180157CAC (-ILAppendHiddenID@@YAPEFAU_ITEMIDLIST@@PEFAU1@PEFBU_HIDDENITEMID@@@Z.c)
 *     ?Save@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x18015B810 (-Save@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 *     SetPinSourceForPinnedItem @ 0x18015BD4C (SetPinSourceForPinnedItem.c)
 *     ?UpdateShellLink@PINENTRY@@QEAAJXZ @ 0x18015D1B8 (-UpdateShellLink@PINENTRY@@QEAAJXZ.c)
 *     _CacheAppIDInIDList @ 0x18015D24C (_CacheAppIDInIDList.c)
 *     ?_CreateTombstone@CPinList@@AEAAJPEAVCPinnedList@@PEBGPEAVPINENTRY@@@Z @ 0x18015D820 (-_CreateTombstone@CPinList@@AEAAJPEAVCPinnedList@@PEBGPEAVPINENTRY@@@Z.c)
 *     ?_GetBackupShortcutToDelete@CPinList@@AEAAXPEAVCPinnedList@@PEFBU_ITEMIDLIST@@PEAG@Z @ 0x18015E0C8 (-_GetBackupShortcutToDelete@CPinList@@AEAAXPEAVCPinnedList@@PEFBU_ITEMIDLIST@@PEAG@Z.c)
 *     ?_PhysicalPositionFromLogicalPosition@CPinList@@AEAAHH@Z @ 0x18015E9CC (-_PhysicalPositionFromLogicalPosition@CPinList@@AEAAHH@Z.c)
 *     DSA_GetItemPtr @ 0x1804E77C0 (DSA_GetItemPtr.c)
 *     DSA_Preallocate @ 0x1804E7874 (DSA_Preallocate.c)
 */

__int64 __fastcall CPinList::ReplacePidl(
        HDSA *a1,
        struct CPinnedList *a2,
        const struct _ITEMIDLIST *a3,
        const struct _ITEMIDLIST *a4,
        char a5,
        struct _ITEMIDLIST **a6)
{
  struct _ITEMIDLIST **v6; // r14
  int v11; // ebx
  CPinList *v12; // rcx
  const ITEMIDLIST **PidlOrAppID; // rdi
  CPinList *v14; // rcx
  int Tombstone; // eax
  HDSA v16; // rbx
  int v17; // edx
  __int128 v18; // xmm1
  int v19; // eax
  struct _DSA *v20; // rsi
  int v21; // edi
  int v22; // eax
  int v23; // r14d
  int v24; // eax
  PVOID ItemPtr; // rbx
  PVOID v26; // rax
  __int64 v27; // r8
  int v28; // eax
  HDSA v29; // rbx
  CPinList *v30; // rcx
  const struct _ITEMIDLIST *ID; // rax
  const struct _ITEMIDLIST *HiddenID; // rbx
  unsigned __int16 *v33; // r10
  const struct _ITEMIDLIST *v34; // r14
  struct _ITEMIDLIST *v35; // rsi
  int v36; // edx
  ITEMIDLIST *v37; // rsi
  int i[2]; // [rsp+20h] [rbp-E0h] BYREF
  _OWORD Src[2]; // [rsp+28h] [rbp-D8h] BYREF
  WCHAR pszPath[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2B8h] [rbp+1B8h]

  v6 = a6;
  if ( a6 )
    *a6 = 0LL;
  v11 = -2147023728;
  PidlOrAppID = CPinList::FindPidlOrAppID(a1, a3, 1, i);
  if ( PidlOrAppID )
  {
    v11 = 0;
    if ( !a6 || (v6 = 0LL, v11 = SHILClone(*PidlOrAppID, a6), v11 >= 0) )
    {
      pszPath[0] = (unsigned __int16)v6;
      if ( !a4 )
      {
        CPinList::_GetBackupShortcutToDelete(v12, a2, *PidlOrAppID, pszPath);
        if ( (a5 & 1) == 0 )
        {
LABEL_10:
          PINENTRY::Destruct((PINENTRY *)PidlOrAppID);
          v16 = *a1;
          if ( i[0] >= 0 )
          {
            v17 = *(_DWORD *)v16;
            if ( i[0] < *(_DWORD *)v16 )
            {
              if ( i[0] < v17 - 1 )
              {
                memmove_0(
                  (void *)(*((_QWORD *)v16 + 1) + (unsigned int)(i[0] * *((_DWORD *)v16 + 5))),
                  (const void *)(*((_QWORD *)v16 + 1) + (unsigned int)(*((_DWORD *)v16 + 5) * (i[0] + 1))),
                  (unsigned int)(*((_DWORD *)v16 + 5) * (v17 - i[0] - 1)));
                v17 = *(_DWORD *)v16;
              }
              *(_DWORD *)v16 = v17 - 1;
              DSA_MaybeShrink((__int64)v16);
            }
          }
          goto LABEL_43;
        }
        Tombstone = CPinList::_CreateTombstone(v14, a2, pszPath, (struct PINENTRY *)PidlOrAppID);
        if ( Tombstone < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x95E,
            (__int64)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
            (const char *)(unsigned int)Tombstone);
          goto LABEL_10;
        }
LABEL_43:
        v11 = CPinList::Save((CPinList *)a1, a2);
        goto LABEL_61;
      }
      if ( (unsigned __int64)a4 < 0x10000 )
      {
        v18 = *((_OWORD *)PidlOrAppID + 1);
        Src[0] = *(_OWORD *)PidlOrAppID;
        Src[1] = v18;
        v19 = CPinList::_PhysicalPositionFromLogicalPosition((CPinList *)a1, (int)a4 - 1);
        v20 = *a1;
        v21 = v19;
        if ( *a1 )
          v22 = *(_DWORD *)v20;
        else
          v22 = (int)v6;
        if ( v21 > v22 )
          v11 = -2147483637;
        if ( v11 < 0 )
          goto LABEL_61;
        v23 = i[0];
        if ( i[0] >= v21 )
        {
          if ( i[0] <= v21 )
          {
LABEL_34:
            LOWORD(v6) = 0;
            if ( (int)GetPinSourceForPinnedItem((__int64)a3, i) >= 0 && i[0] != 6 )
            {
              v28 = SetPinSourceForPinnedItem(*(_QWORD *)&Src[0], Src, (unsigned int)i[0]);
              if ( v28 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x995,
                  (__int64)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                  (const char *)(unsigned int)v28);
            }
            v29 = *a1;
            if ( v21 < 0 )
              goto LABEL_43;
            if ( v21 >= *(_DWORD *)v29 )
            {
              if ( !(unsigned int)DSA_Preallocate(*a1, (unsigned int)(v21 - *(_DWORD *)v29 + 1)) )
                goto LABEL_43;
              memset_0(
                (void *)(*((_QWORD *)v29 + 1) + (unsigned int)(*(_DWORD *)v29 * *((_DWORD *)v29 + 5))),
                0,
                (unsigned int)(*((_DWORD *)v29 + 5) * (v21 - *(_DWORD *)v29)));
              *(_DWORD *)v29 = v21 + 1;
            }
            memcpy_0(
              (void *)(*((_QWORD *)v29 + 1) + (unsigned int)(v21 * *((_DWORD *)v29 + 5))),
              Src,
              *((unsigned int *)v29 + 5));
            goto LABEL_43;
          }
          ItemPtr = DSA_GetItemPtr(*a1, v21);
          v26 = DSA_GetItemPtr(v20, v21 + 1);
          v27 = v23 - v21;
        }
        else
        {
          if ( v20 )
            v24 = *(_DWORD *)v20;
          else
            v24 = 0;
          if ( v21 >= v24 )
          {
            if ( v20 )
              v21 = *(_DWORD *)v20;
            else
              v21 = 0;
          }
          --v21;
          ItemPtr = DSA_GetItemPtr(*a1, i[0] + 1);
          v26 = DSA_GetItemPtr(v20, v23);
          v27 = v21 - v23;
        }
        memmove(v26, ItemPtr, 32 * v27);
        goto LABEL_34;
      }
      if ( !ILIsEqual(*PidlOrAppID, a4) )
        CPinList::_GetBackupShortcutToDelete(v30, a2, *PidlOrAppID, pszPath);
      v11 = SHILClone(a4, (struct _ITEMIDLIST **)i);
      if ( v11 < 0 )
        goto LABEL_61;
      v11 = CacheAppIDInIDList(*(struct _ITEMIDLIST **)i);
      if ( v11 < 0 )
      {
        v37 = *(ITEMIDLIST **)i;
        goto LABEL_60;
      }
      if ( ILFindHiddenIDOn(*PidlOrAppID, -1091633108) )
      {
        ID = ILFindLastID(*PidlOrAppID);
        HiddenID = (const struct _ITEMIDLIST *)ILFindFirstHiddenID(ID);
        v34 = (const struct _ITEMIDLIST *)((char *)v33 + *v33);
        if ( HiddenID )
        {
          v35 = *(struct _ITEMIDLIST **)i;
          do
          {
            v36 = *(_DWORD *)((char *)&HiddenID[1].mkid.cb + 1);
            if ( v36 != -1091633108 && !ILFindHiddenIDOn(v35, v36) )
              v35 = ILAppendHiddenID(v35, (const struct _HIDDENITEMID *)HiddenID);
            HiddenID = ILNextHidden((const struct _HIDDENITEMID *)HiddenID, v34);
          }
          while ( HiddenID );
          v6 = 0LL;
          goto LABEL_58;
        }
        v6 = 0LL;
      }
      v35 = *(struct _ITEMIDLIST **)i;
LABEL_58:
      ILFree((LPITEMIDLIST)*PidlOrAppID);
      *PidlOrAppID = v35;
      v37 = (ITEMIDLIST *)v6;
      PINENTRY::UpdateShellLink((PINENTRY *)PidlOrAppID);
      v11 = CPinList::Save((CPinList *)a1, a2);
LABEL_60:
      ILFree(v37);
LABEL_61:
      if ( (_WORD)v6 != pszPath[0] )
      {
        SHRemoveLocalizedName(pszPath);
        DeleteFileW(pszPath);
      }
    }
  }
  return (unsigned int)v11;
}
