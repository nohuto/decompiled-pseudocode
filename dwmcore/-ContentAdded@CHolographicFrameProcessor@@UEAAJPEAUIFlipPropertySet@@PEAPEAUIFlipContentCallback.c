__int64 __fastcall CHolographicFrameProcessor::ContentAdded(
        void (__fastcall ***this)(char *),
        struct IFlipPropertySet *a2,
        struct IFlipContentCallback **a3)
{
  *a3 = (struct IFlipContentCallback *)((unsigned __int64)(this + 1) & ((unsigned __int128)-(__int128)(unsigned __int64)(this - 3) >> 64));
  (**(this - 3))((char *)this - 24);
  return 0LL;
}
