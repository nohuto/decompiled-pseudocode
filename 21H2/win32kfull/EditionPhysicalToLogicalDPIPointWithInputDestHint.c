/*
 * XREFs of EditionPhysicalToLogicalDPIPointWithInputDestHint @ 0x1C014C470
 * Callers:
 *     <none>
 * Callees:
 *     TransformVectorWithInputTargetPrecedence @ 0x1C010F7F8 (TransformVectorWithInputTargetPrecedence.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z @ 0x1C014C4E8 (-PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z.c)
 *     PWND_FROM_INPUTDEST_OPT @ 0x1C01D4358 (PWND_FROM_INPUTDEST_OPT.c)
 */

struct tagPOINT __fastcall EditionPhysicalToLogicalDPIPointWithInputDestHint(
        struct tagPOINT *a1,
        struct tagPOINT a2,
        const struct _SUBPIXELS *a3,
        __int64 a4)
{
  const struct tagWND *v6; // rax
  int v7; // r8d
  const struct tagWND *v8; // rbx
  struct tagPOINT result; // rax
  struct tagPOINT v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  v6 = (const struct tagWND *)PWND_FROM_INPUTDEST_OPT(a4);
  v8 = v6;
  if ( v6 )
  {
    if ( !(unsigned int)TransformVectorWithInputTargetPrecedence(v6, (int)&v10, v7) )
      PhysicalToLogicalDPIPointWithHitTest(&v10, &v10, a3, v8);
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  }
  result = v10;
  *a1 = v10;
  return result;
}
