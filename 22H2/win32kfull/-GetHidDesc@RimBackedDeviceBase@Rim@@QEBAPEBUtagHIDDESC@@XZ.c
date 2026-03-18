/*
 * XREFs of ?GetHidDesc@RimBackedDeviceBase@Rim@@QEBAPEBUtagHIDDESC@@XZ @ 0x1C0227C90
 * Callers:
 *     ?CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z @ 0x1C0243170 (-CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z.c)
 *     ?Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0243980 (-Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     <none>
 */

const struct tagHIDDESC *__fastcall Rim::RimBackedDeviceBase::GetHidDesc(Rim::RimBackedDeviceBase *this)
{
  const struct tagHIDDESC *result; // rax

  result = (const struct tagHIDDESC *)*((_QWORD *)this + 2);
  if ( result )
    return (const struct tagHIDDESC *)*((_QWORD *)result + 66);
  return result;
}
