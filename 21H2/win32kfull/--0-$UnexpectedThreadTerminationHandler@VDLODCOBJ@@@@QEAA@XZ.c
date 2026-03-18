/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D630
 * Callers:
 *     GreStretchDIBitsInternal @ 0x1C0029B2C (GreStretchDIBitsInternal.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C002C6F4 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C002E3F0 (GreSetDIBitsToDeviceInternal.c)
 *     NtGdiAlphaBlend @ 0x1C0039BB0 (NtGdiAlphaBlend.c)
 *     GreDrawStream @ 0x1C003C990 (GreDrawStream.c)
 *     NtGdiBitBltInternal @ 0x1C003DD70 (NtGdiBitBltInternal.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C0041980 (--0DLODCOBJ@@QEAA@XZ.c)
 *     NtGdiPatBlt @ 0x1C0042E10 (NtGdiPatBlt.c)
 *     GreExtTextOutWInternal @ 0x1C008ABC0 (GreExtTextOutWInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0090C1C (GreCreateCompatibleBitmapInternal.c)
 *     ?GreSetICMMode@@YAHPEAUHDC__@@KK@Z @ 0x1C00E3818 (-GreSetICMMode@@YAHPEAUHDC__@@KK@Z.c)
 * Callees:
 *     ?Feature_3101493560__private_IsEnabled@@YAHXZ @ 0x1C015D3B4 (-Feature_3101493560__private_IsEnabled@@YAHXZ.c)
 */

_OWORD *__fastcall UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(
        _OWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( (unsigned int)Feature_3101493560__private_IsEnabled() )
    PushThreadGuardedObject(
      a1,
      (unsigned __int64)(a1 - 1) & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64),
      UnexpectedThreadTerminationHandler<DLODCOBJ>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
