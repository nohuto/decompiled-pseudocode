void __fastcall CLegacyRenderTarget::SyncLock(CLegacyRenderTarget *this, char a2, unsigned int a3)
{
  char v4; // al

  if ( (!*((_BYTE *)this + 18558) || a2)
    && a3 > *((_DWORD *)this + 4587)
    && (a2
     || *((_BYTE *)this + 18557)
     || *((_BYTE *)this + 18556)
     || CDirtyRegion::DoesIntersect(*((_QWORD *)this + 3) + 104LL, (float *)this + 4507)) )
  {
    v4 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 18) + 240LL))((char *)this - 144);
    if ( (int)COverlayContext::SyncLock(
                (CLegacyRenderTarget *)((char *)this + 56),
                *((struct IOverlaySwapChain **)this + 5),
                *((_DWORD *)this + 4588) + 1 + *((_DWORD *)this + 4587),
                v4) >= 0 )
    {
      ++*((_DWORD *)this + 4586);
      ++*((_DWORD *)this + 4587);
    }
  }
}
