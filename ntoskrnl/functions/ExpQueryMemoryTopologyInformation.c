__int64 __fastcall ExpQueryMemoryTopologyInformation(void *a1, unsigned int a2, _DWORD *a3)
{
  size_t v4; // rdi
  int NodeChannelRanges; // ebx
  size_t v7; // r8
  size_t Size[4]; // [rsp+28h] [rbp-20h] BYREF
  void *Src; // [rsp+68h] [rbp+20h] BYREF

  v4 = a2;
  Size[0] = 0LL;
  Src = 0LL;
  NodeChannelRanges = MmGetNodeChannelRanges(&Src, Size);
  if ( NodeChannelRanges >= 0 )
  {
    v7 = Size[0];
    *a3 = Size[0];
    if ( v7 > 0xFFFFFFFF )
    {
      NodeChannelRanges = -1073741670;
    }
    else if ( v7 > v4 )
    {
      NodeChannelRanges = -1073741789;
    }
    else
    {
      memmove(a1, Src, v7);
      NodeChannelRanges = 0;
    }
  }
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  return (unsigned int)NodeChannelRanges;
}
