/*
 * XREFs of IopAllocateIrpExtension @ 0x1402E6980
 * Callers:
 *     IopSetDiskIoAttributionExtension @ 0x1402E66DC (IopSetDiskIoAttributionExtension.c)
 *     IopSetDriverFlagsExtension @ 0x1402E6758 (IopSetDriverFlagsExtension.c)
 *     IoPropagateIrpExtensionEx @ 0x1402E67D0 (IoPropagateIrpExtensionEx.c)
 *     IoSetActivityIdIrp @ 0x140378C70 (IoSetActivityIdIrp.c)
 *     IoSetGenericIrpExtension @ 0x140379B90 (IoSetGenericIrpExtension.c)
 *     IopSetCopyInformationExtension @ 0x1403F0BDC (IopSetCopyInformationExtension.c)
 *     IoClearAdapterCryptoEngineExtension @ 0x140507770 (IoClearAdapterCryptoEngineExtension.c)
 *     IoSetAdapterCryptoEngineExtension @ 0x140507870 (IoSetAdapterCryptoEngineExtension.c)
 *     IoSetFsTrackOffsetState @ 0x1405078D0 (IoSetFsTrackOffsetState.c)
 *     IoSetFsZeroingOffsetRequired @ 0x140507970 (IoSetFsZeroingOffsetRequired.c)
 *     IopPerfCallDriver @ 0x140507C40 (IopPerfCallDriver.c)
 *     ViGetContextPointer @ 0x1409C84E4 (ViGetContextPointer.c)
 * Callees:
 *     memset @ 0x140413800 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

_WORD *__fastcall IopAllocateIrpExtension(__int64 a1, int a2)
{
  _WORD *v2; // rbx
  char v3; // si
  _WORD *PoolWithTag; // rax
  _WORD *v7; // rax

  v2 = *(_WORD **)(a1 + 200);
  v3 = a2;
  if ( !v2 )
  {
    if ( a2 != 2 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x58707249u);
      v2 = PoolWithTag;
      if ( !PoolWithTag )
        return v2;
      memset(PoolWithTag, 0, 0x50uLL);
      v2[1] = 1 << v3;
      *(_BYTE *)(a1 + 71) |= 0x40u;
LABEL_10:
      *(_QWORD *)(a1 + 200) = v2;
      *v2 |= 1u;
      return v2;
    }
    *(_BYTE *)(a1 + 71) |= 0x80u;
    return (_WORD *)(a1 + 196);
  }
  if ( *(char *)(a1 + 71) < 0 )
  {
    if ( a2 != 2 )
    {
      v7 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x58707249u);
      v2 = v7;
      if ( !v7 )
        return v2;
      memset(v7, 0, 0x50uLL);
      v2[1] = (1 << (v3 & 0xF)) | 4;
      *((_DWORD *)v2 + 1) = *(_DWORD *)(a1 + 200);
      *(_BYTE *)(a1 + 71) = *(_BYTE *)(a1 + 71) & 0x3F | 0x40;
      goto LABEL_10;
    }
    return (_WORD *)(a1 + 196);
  }
  v2[1] |= 1 << a2;
  return v2;
}
