/*
 * XREFs of ?GetSizeForDpi@CCursorSizes@@QEBAII@Z @ 0x1C003AAB8
 * Callers:
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C003B9FC (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     NtUserGetIconInfo @ 0x1C0060FD0 (NtUserGetIconInfo.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00DBE14 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00E001C (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 */

__int64 __fastcall CCursorSizes::GetSizeForDpi(CCursorSizes *this, unsigned int a2)
{
  CCursorSizes *v2; // rsi
  unsigned __int64 v4; // rax
  unsigned int v5; // edi

  v2 = gpCursorSizes;
  CPushLock::AcquireLockShared((CCursorSizes *)((char *)gpCursorSizes + 64));
  if ( a2 >= 0x90 )
  {
    if ( a2 >= 0xC0 )
    {
      if ( a2 >= 0x120 )
        v4 = (-(__int64)(a2 < 0x180) & 0xFFFFFFFFFFFFFFF8uLL) + 60;
      else
        v4 = 44LL;
    }
    else
    {
      v4 = 36LL;
    }
  }
  else
  {
    v4 = 28LL;
  }
  v5 = *(_DWORD *)((char *)v2 + v4);
  CPushLock::ReleaseLock((CCursorSizes *)((char *)v2 + 64));
  return v5;
}
