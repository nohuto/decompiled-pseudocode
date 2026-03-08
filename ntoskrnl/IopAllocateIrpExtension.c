/*
 * XREFs of IopAllocateIrpExtension @ 0x1402B22EC
 * Callers:
 *     IopSetDiskIoAttributionExtension @ 0x1402B1E30 (IopSetDiskIoAttributionExtension.c)
 *     IoSetActivityIdIrp @ 0x1402B2080 (IoSetActivityIdIrp.c)
 *     IoPropagateIrpExtensionEx @ 0x1402B2100 (IoPropagateIrpExtensionEx.c)
 *     IopSetDriverFlagsExtension @ 0x1402B22A0 (IopSetDriverFlagsExtension.c)
 *     IopSetCopyInformationExtension @ 0x14035A9EC (IopSetCopyInformationExtension.c)
 *     IoSetGenericIrpExtension @ 0x140390920 (IoSetGenericIrpExtension.c)
 *     IopPerfCallDriver @ 0x14045728A (IopPerfCallDriver.c)
 *     IoClearAdapterCryptoEngineExtension @ 0x140556880 (IoClearAdapterCryptoEngineExtension.c)
 *     IoSetAdapterCryptoEngineExtension @ 0x140556980 (IoSetAdapterCryptoEngineExtension.c)
 *     IoSetFsTrackOffsetState @ 0x1405569E0 (IoSetFsTrackOffsetState.c)
 *     IoSetFsZeroingOffsetRequired @ 0x140556A80 (IoSetFsZeroingOffsetRequired.c)
 *     ViGetContextPointer @ 0x140AC104C (ViGetContextPointer.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

_WORD *__fastcall IopAllocateIrpExtension(__int64 a1, int a2)
{
  _WORD *Pool2; // r8
  char v3; // di
  __int64 v6; // rax

  Pool2 = *(_WORD **)(a1 + 200);
  v3 = a2;
  if ( !Pool2 )
  {
    if ( a2 != 2 )
    {
      Pool2 = (_WORD *)ExAllocatePool2(64LL, 80LL, 1483764297LL);
      if ( !Pool2 )
        return Pool2;
      Pool2[1] = 1 << v3;
      *(_BYTE *)(a1 + 71) |= 0x40u;
LABEL_10:
      *(_QWORD *)(a1 + 200) = Pool2;
      *Pool2 |= 1u;
      return Pool2;
    }
    *(_BYTE *)(a1 + 71) |= 0x80u;
    return (_WORD *)(a1 + 196);
  }
  if ( *(char *)(a1 + 71) < 0 )
  {
    if ( a2 != 2 )
    {
      v6 = ExAllocatePool2(64LL, 80LL, 1483764297LL);
      Pool2 = (_WORD *)v6;
      if ( !v6 )
        return Pool2;
      *(_WORD *)(v6 + 2) = (1 << (v3 & 0xF)) | 4;
      *(_DWORD *)(v6 + 4) = *(_DWORD *)(a1 + 200);
      *(_BYTE *)(a1 + 71) = *(_BYTE *)(a1 + 71) & 0x3F | 0x40;
      goto LABEL_10;
    }
    return (_WORD *)(a1 + 196);
  }
  Pool2[1] |= 1 << a2;
  return Pool2;
}
