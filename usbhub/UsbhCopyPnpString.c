/*
 * XREFs of UsbhCopyPnpString @ 0x1C00599F0
 * Callers:
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C0030E68 (UsbhFdoReturnDeviceConfigInfo.c)
 * Callees:
 *     memmove @ 0x1C0023580 (memmove.c)
 */

__int64 __fastcall UsbhCopyPnpString(__int64 a1, __int64 a2)
{
  void *Pool2; // rax

  *(_OWORD *)a1 = 0LL;
  if ( *(_QWORD *)(a2 + 8) && *(_DWORD *)(a2 + 4) )
  {
    *(_OWORD *)a1 = *(_OWORD *)a2;
    Pool2 = (void *)ExAllocatePool2(64LL, *(unsigned int *)(a2 + 4), 1112885333LL);
    *(_QWORD *)(a1 + 8) = Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    memmove(Pool2, *(const void **)(a2 + 8), *(unsigned int *)(a2 + 4));
  }
  return 0LL;
}
