/*
 * XREFs of HmgShareLockIgnoreStockBit @ 0x1C00AE0E0
 * Callers:
 *     EngModifySurface @ 0x1C00AE7E0 (EngModifySurface.c)
 *     ?W32kCddSetDeviceBitmapAdapterLuid@@YAHPEAUHSURF__@@U_LUID@@@Z @ 0x1C00B4240 (-W32kCddSetDeviceBitmapAdapterLuid@@YAHPEAUHSURF__@@U_LUID@@@Z.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0021FC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0022260 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0022C40 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0022D90 (-TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z.c)
 */

__int64 __fastcall HmgShareLockIgnoreStockBit(unsigned int a1)
{
  __int64 v1; // rbx
  GdiHandleManager *v3; // rbx
  unsigned int v4; // eax
  __int64 v5; // r9
  unsigned __int64 v6; // rdx
  unsigned int v7; // r8d
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  int v12; // [rsp+38h] [rbp-20h]

  v1 = 0LL;
  v11 = 0LL;
  v12 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v11, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0LL, 0, 0);
  if ( v12 )
  {
    if ( *(_BYTE *)(v11 + 14) == 5 && ((HIWORD(a1) ^ *(unsigned __int16 *)(v11 + 12)) & 0xFFFFFF7F) == 0 )
    {
      v3 = gpHandleManager;
      v4 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v11 & 0xFFFFFF);
      v5 = *((_QWORD *)v3 + 2);
      v6 = v4;
      v7 = *(_DWORD *)(v5 + 2056);
      if ( v4 >= v7 + ((*(unsigned __int16 *)(v5 + 2) + 0xFFFF) << 16) )
        goto LABEL_15;
      if ( v4 >= v7 )
        v8 = ((v4 - v7) >> 16) + 1;
      else
        v8 = 0LL;
      v9 = *(_QWORD *)(v5 + 8 * v8 + 8);
      if ( (_DWORD)v8 )
        v6 = ((1 - (_DWORD)v8) << 16) - v7 + v4;
      if ( (unsigned int)v6 >= *(_DWORD *)(v9 + 20) )
LABEL_15:
        v1 = 0LL;
      else
        v1 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8 * (v6 >> 8)) + 16LL * (unsigned __int8)v6 + 8);
      ++*(_DWORD *)(v1 + 8);
      TrackHmgrReferenceIncrement(5, (struct OBJECT *)v1);
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v11);
    if ( v12 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v11);
  }
  return v1;
}
