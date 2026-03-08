/*
 * XREFs of EtwpAllocDataBlock @ 0x14068ED78
 * Callers:
 *     EtwpNotifyGuid @ 0x14068EA84 (EtwpNotifyGuid.c)
 *     EtwpBuildNotificationPacket @ 0x14068ECF4 (EtwpBuildNotificationPacket.c)
 *     EtwpEnableGuid @ 0x14068EEBC (EtwpEnableGuid.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140695580 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpQueueReply @ 0x140783E98 (EtwpQueueReply.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpAllocDataBlock(size_t Size, void *Src, _QWORD *a3)
{
  unsigned int v3; // ebx
  unsigned int v6; // ebp
  _DWORD *Pool2; // rax
  _DWORD *v8; // rsi

  v3 = 0;
  *a3 = 0LL;
  if ( Src && *((_DWORD *)Src + 1) != (_DWORD)Size )
  {
    return (unsigned int)-1073741820;
  }
  else
  {
    v6 = Size;
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, (unsigned int)Size, 1148679237LL);
    v8 = Pool2;
    if ( Pool2 )
    {
      if ( Src )
        memmove(Pool2, Src, v6);
      v8[2] = 1;
      *a3 = v8;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v3;
}
