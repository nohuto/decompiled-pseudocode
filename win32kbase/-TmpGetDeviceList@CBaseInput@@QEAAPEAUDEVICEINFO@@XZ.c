/*
 * XREFs of ?TmpGetDeviceList@CBaseInput@@QEAAPEAUDEVICEINFO@@XZ @ 0x1C00CBBB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct DEVICEINFO *__fastcall CBaseInput::TmpGetDeviceList(CBaseInput *this)
{
  return (struct DEVICEINFO *)**((_QWORD **)this + 166);
}
