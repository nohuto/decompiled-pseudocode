/*
 * XREFs of ??0CMouseAcceleration@@IEAA@I@Z @ 0x1C000C294
 * Callers:
 *     CMouseAcceleration_CreateInstance @ 0x1C000C240 (CMouseAcceleration_CreateInstance.c)
 * Callees:
 *     ?UpdateMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEAAXI@Z @ 0x1C000D2E4 (-UpdateMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEAAXI@Z.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 */

CMouseAcceleration *__fastcall CMouseAcceleration::CMouseAcceleration(CMouseAcceleration *this, unsigned int a2)
{
  *((_BYTE *)this + 8) = 0;
  memset((char *)this + 16, 0, 0x50uLL);
  *((_DWORD *)this + 24) = a2;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 27) = 0;
  *(_QWORD *)this = &CMouseAcceleration::`vftable';
  *((_BYTE *)this + 112) = 1;
  CMouseAcceleration::MOUSE_SENSITIVITY_INFO::UpdateMouseSensitivity((CMouseAcceleration *)((char *)this + 104), a2);
  return this;
}
