__int64 __fastcall ExpQueryChannelInformation(unsigned int *a1, unsigned int a2, _DWORD *a3)
{
  size_t v4; // rsi
  int ChannelInformation; // ebx
  unsigned __int16 ProcessPartitionId; // ax
  size_t v8; // r8
  unsigned int v10; // [rsp+24h] [rbp-24h]
  size_t Size[4]; // [rsp+28h] [rbp-20h] BYREF
  void *Src; // [rsp+68h] [rbp+20h] BYREF

  v4 = a2;
  Size[0] = 0LL;
  Src = 0LL;
  if ( a2 >= 4 )
  {
    v10 = *a1;
    ProcessPartitionId = MmGetProcessPartitionId((__int64)KeGetCurrentThread()->ApcState.Process);
    ChannelInformation = MmGetChannelInformation(ProcessPartitionId, v10, &Src, Size);
    if ( ChannelInformation >= 0 )
    {
      v8 = Size[0];
      *a3 = Size[0];
      if ( v8 <= 0xFFFFFFFF )
      {
        if ( v4 >= v8 )
        {
          memmove(a1, Src, v8);
          ChannelInformation = 0;
        }
        else
        {
          ChannelInformation = -1073741789;
        }
      }
      else
      {
        ChannelInformation = -1073741670;
      }
    }
  }
  else
  {
    ChannelInformation = -1073741306;
  }
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  return (unsigned int)ChannelInformation;
}
