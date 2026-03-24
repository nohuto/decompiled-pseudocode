/*
 * XREFs of ?UpdateAttributes@CDxHandleStereoBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180264F10
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180016EC0 (-UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x180068DD4 (-InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDxHandleStereoBitmapRealization::UpdateAttributes(
        CDxHandleStereoBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2)
{
  unsigned int v2; // edi
  int v3; // ebp
  int v4; // r14d
  int v5; // esi
  __int64 v7; // rdx
  int v8; // r8d
  char v9; // cl
  int v10; // eax

  v2 = 3;
  v3 = *((_DWORD *)this - 47);
  v4 = *((_DWORD *)this - 20);
  v5 = 3;
  if ( *((_DWORD *)this - 58) )
    v5 = *((_DWORD *)this - 58);
  CDxHandleBitmapRealization::UpdateAttributes(this, a2);
  v7 = *((_QWORD *)this + 5);
  if ( v7 )
  {
    v8 = *((_DWORD *)this - 58);
    v9 = 0;
    v10 = 3;
    if ( v8 )
      v10 = *((_DWORD *)this - 58);
    if ( v5 != v10 )
    {
      if ( v8 )
        v2 = *((_DWORD *)this - 58);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v7 + 80) + 8LL))(v7 + 80, v2);
      v9 = 1;
    }
    if ( v3 != *((_DWORD *)this - 47) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 5) + 80LL) + 16LL))(*((_QWORD *)this + 5) + 80LL);
      v9 = 1;
    }
    if ( v4 != *((_DWORD *)this - 20) )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 5) + 80LL) + 24LL))(*((_QWORD *)this + 5) + 80LL);
      v9 = 1;
    }
    if ( v9 )
      CD2DBitmapCache::InitializeCache(
        (CDxHandleStereoBitmapRealization *)((char *)this + 48),
        (struct ID2DBitmapCacheSource *)((*((_QWORD *)this + 5) + 96LL) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)this + 5) >> 64)));
  }
}
