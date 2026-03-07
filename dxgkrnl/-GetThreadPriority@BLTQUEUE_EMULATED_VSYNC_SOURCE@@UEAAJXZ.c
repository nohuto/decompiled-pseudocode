__int64 __fastcall BLTQUEUE_EMULATED_VSYNC_SOURCE::GetThreadPriority(BLTQUEUE_EMULATED_VSYNC_SOURCE *this)
{
  return *((_BYTE *)this + 8) != 0 ? 20 : 14;
}
