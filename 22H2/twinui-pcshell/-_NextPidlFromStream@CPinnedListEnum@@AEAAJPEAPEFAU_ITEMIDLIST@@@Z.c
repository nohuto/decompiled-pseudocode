/*
 * XREFs of ?_NextPidlFromStream@CPinnedListEnum@@AEAAJPEAPEFAU_ITEMIDLIST@@@Z @ 0x18015E73C
 * Callers:
 *     ?Next@CPinnedListEnum@@UEAAJKPEAPEFAU_ITEMIDLIST@@PEAK@Z @ 0x180159DD0 (-Next@CPinnedListEnum@@UEAAJKPEAPEFAU_ITEMIDLIST@@PEAK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     GetPinSourceForPinnedItem @ 0x180156BE4 (GetPinSourceForPinnedItem.c)
 *     ?GetTimestampFromPidl@@YAJPEFBU_ITEMIDLIST@@W4IDLHID@@PEAU_FILETIME@@@Z @ 0x180157AC0 (-GetTimestampFromPidl@@YAJPEFBU_ITEMIDLIST@@W4IDLHID@@PEAU_FILETIME@@@Z.c)
 *     ?IsExpiredTombstone@@YA_NPEFBU_ITEMIDLIST@@@Z @ 0x180159334 (-IsExpiredTombstone@@YA_NPEFBU_ITEMIDLIST@@@Z.c)
 *     SetPinSourceForPinnedItem @ 0x18015BD4C (SetPinSourceForPinnedItem.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPinnedListEnum::_NextPidlFromStream(CPinnedListEnum *this, struct _ITEMIDLIST **a2)
{
  int v4; // r13d
  char v5; // r15
  bool v6; // r12
  char v7; // r14
  int v8; // ebx
  bool v9; // zf
  struct _ITEMIDLIST *v10; // rax
  int v12; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+38h] [rbp-28h] BYREF
  LPITEMIDLIST ppidlOut; // [rsp+40h] [rbp-20h] BYREF
  LPITEMIDLIST ppidl; // [rsp+48h] [rbp-18h] BYREF
  _BYTE pv[8]; // [rsp+50h] [rbp-10h] BYREF

  *a2 = 0LL;
  v4 = *((_DWORD *)this + 12) & 4;
  v5 = *((_BYTE *)this + 48) & 1;
  v6 = !v5 || (*((_BYTE *)this + 48) & 2) != 0;
  while ( 1 )
  {
    v7 = 0;
    v8 = IStream_Read(*((IStream **)this + 4), pv, 1u);
    if ( v8 < 0 )
      break;
    if ( pv[0] == 0xFF )
      return 1;
    ppidl = 0LL;
    v8 = SHGetSpecialFolderLocation(0LL, pv[0], &ppidl);
    if ( v8 >= 0 )
    {
      v8 = IStream_ReadPidl(*((IStream **)this + 4), &ppidlOut);
      if ( v8 >= 0 )
      {
        if ( (int)GetTimestampFromPidl(ppidlOut, -1091633108, &v13) < 0 )
          v9 = !v6;
        else
          v9 = v5 == 0;
        if ( v9 || !v4 && IsExpiredTombstone(ppidlOut) )
        {
          v7 = 1;
        }
        else
        {
          v10 = ILCombine(ppidl, ppidlOut);
          *a2 = v10;
          if ( v10 )
          {
            v8 = 0;
            if ( (int)GetPinSourceForPinnedItem((__int64)v10, &v12) >= 0 && v12 != 6
              || (v8 = SetPinSourceForPinnedItem(*a2, a2, 0), v8 >= 0) )
            {
              if ( *((_DWORD *)this + 10) )
                v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct _ITEMIDLIST **))(**((_QWORD **)this + 2)
                                                                                              + 96LL))(
                       *((_QWORD *)this + 2),
                       *((unsigned int *)this + 11),
                       *a2,
                       a2);
            }
          }
          else
          {
            v8 = -2147024882;
          }
        }
        ILFree(ppidlOut);
      }
      ILFree(ppidl);
      if ( v7 )
        continue;
    }
    return (unsigned int)v8;
  }
  return (unsigned int)v8;
}
