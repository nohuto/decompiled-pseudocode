unsigned int *__fastcall XilCoreCommonBuffer_AcquireBuffer(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        bool *a5)
{
  unsigned int v5; // r10d
  unsigned int *v6; // rax
  unsigned int *v11; // rbp
  unsigned int *v12; // rbx
  int v13; // r8d

  v5 = 0;
  v6 = (unsigned int *)(a1 + 32);
  do
  {
    v11 = v6;
    if ( a2 <= *v6 )
      break;
    ++v5;
    v6 += 16;
  }
  while ( v5 < 2 );
  *(_BYTE *)(a1 + 25) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
  v12 = XilCoreCommonBuffer_AcquireBufferWithSegmenter(a1, v11, a3, a4, a5);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 16), *(_BYTE *)(a1 + 25));
  if ( v12 && !*a5 )
    goto LABEL_13;
  if ( KeGetCurrentIrql() )
  {
    *a5 = 1;
  }
  else
  {
    v13 = v12 == 0LL;
    if ( *a5 )
      v13 += v11[4];
    XilCoreCommonBuffer_AllocateBuffers((__int64 **)a1, (__int64)v11, v13);
    *a5 = 0;
    if ( v12 )
      goto LABEL_13;
    *(_BYTE *)(a1 + 25) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
    v12 = XilCoreCommonBuffer_AcquireBufferWithSegmenter(a1, v11, a3, a4, a5);
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 16), *(_BYTE *)(a1 + 25));
  }
  if ( v12 )
  {
LABEL_13:
    v12[11] = a2;
    v12[20] = 1;
    return v12;
  }
  if ( KeGetCurrentIrql() )
    MicrosoftTelemetryAssertTriggeredArgsMsgKM(
      "usbxhci.sys",
      a4,
      a2,
      "Common buffer allocation failure at DISPATCH LEVEL");
  return v12;
}
