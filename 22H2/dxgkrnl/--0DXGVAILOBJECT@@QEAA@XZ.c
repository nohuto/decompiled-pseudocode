/*
 * XREFs of ??0DXGVAILOBJECT@@QEAA@XZ @ 0x1C02B4514
 * Callers:
 *     ?ObjectInit@DXGVAILOBJECT@@SAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x1C02B5FD0 (-ObjectInit@DXGVAILOBJECT@@SAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z.c)
 * Callees:
 *     <none>
 */

DXGVAILOBJECT *__fastcall DXGVAILOBJECT::DXGVAILOBJECT(DXGVAILOBJECT *this)
{
  *(_QWORD *)this = &DXGVAILOBJECT::`vftable';
  *((_QWORD *)this + 4) = &DXGVAIL::`vftable';
  *((_DWORD *)this + 17) = -1;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 18) = 53;
  *((_DWORD *)this + 32) = -1;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)this + 10);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)this + 10);
  return this;
}
