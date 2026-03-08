/*
 * XREFs of ?CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z @ 0x1C0185410
 * Callers:
 *     NtGdiOpenDCW @ 0x1C003D110 (NtGdiOpenDCW.c)
 * Callees:
 *     AllocThreadBufferWithTag @ 0x1C003C700 (AllocThreadBufferWithTag.c)
 *     PopThreadGuardedObject @ 0x1C00453C0 (PopThreadGuardedObject.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 */

struct _devicemodeW *__fastcall CaptureDEVMODEW(struct _devicemodeW *volatile a1)
{
  int dmSize; // esi
  int dmDriverExtra; // r14d
  __int64 v3; // rdi
  _WORD *v4; // rbx

  dmSize = a1->dmSize;
  dmDriverExtra = a1->dmDriverExtra;
  v3 = (unsigned int)(dmSize + dmDriverExtra);
  if ( (unsigned int)v3 <= 0x48 )
    return 0LL;
  v4 = (_WORD *)AllocThreadBufferWithTag(v3, 0x706D7447u, 0);
  if ( v4 )
  {
    if ( (struct _devicemodeW *volatile)((char *)a1 + v3) < a1
      || (unsigned __int64)a1->dmDeviceName + v3 > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v4, a1, (unsigned int)v3);
    v4[34] = dmSize;
    v4[35] = dmDriverExtra;
  }
  return (struct _devicemodeW *)v4;
}
