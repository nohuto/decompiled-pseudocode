/*
 * XREFs of HmgPentryFromPobj @ 0x1C004A180
 * Callers:
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C0044400 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C006D528 (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C00D5DA4 (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00DE3A0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004B5B0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HmgPentryFromPobj(_DWORD *a1)
{
  GdiHandleManager *v2; // rdi
  unsigned int v3; // eax
  __int64 v4; // rbx
  unsigned int v5; // r8d
  unsigned int v6; // esi
  unsigned int v7; // ebp
  __int64 v8; // r9
  __int64 v9; // r15
  unsigned int v10; // eax
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  _DWORD *v13; // rdx

  v2 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 8008LL);
  v3 = GdiHandleManager::DecodeIndex(v2, (unsigned __int16)*a1 | (*a1 >> 8) & 0xFF0000);
  v4 = *((_QWORD *)v2 + 2);
  v5 = v3;
  v6 = *(_DWORD *)(v4 + 2056);
  v7 = v6 + ((*(unsigned __int16 *)(v4 + 2) + 0xFFFF) << 16);
  if ( v3 >= v7 )
  {
    v9 = 0LL;
  }
  else
  {
    if ( v3 >= v6 )
    {
      v8 = *(_QWORD *)(v4 + 8LL * (((v3 - v6) >> 16) + 1) + 8);
      v3 += -65536 * ((v3 - v6) >> 16) - v6;
    }
    else
    {
      v8 = *(_QWORD *)(v4 + 8);
    }
    v9 = 0LL;
    if ( v3 < *(_DWORD *)(v8 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v8 + 24) + 8 * ((unsigned __int64)v3 >> 8))
                   + 16LL * (unsigned __int8)v3
                   + 8) )
    {
      v9 = *(_QWORD *)v8 + 24LL * v3;
    }
  }
  v10 = GdiHandleManager::DecodeIndex(v2, v5);
  v11 = v10;
  if ( v10 >= v7
    || (v10 >= v6
      ? (v12 = *(_QWORD *)(v4 + 8LL * (((v10 - v6) >> 16) + 1) + 8),
         v11 = -65536 * (((unsigned int)v11 - v6) >> 16) - v6 + (unsigned int)v11)
      : (v12 = *(_QWORD *)(v4 + 8)),
        (unsigned int)v11 >= *(_DWORD *)(v12 + 20)) )
  {
    v13 = 0LL;
  }
  else
  {
    v13 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8 * (v11 >> 8)) + 16LL * (unsigned __int8)v11 + 8);
  }
  if ( v13 != a1 )
    return 0LL;
  return v9;
}
