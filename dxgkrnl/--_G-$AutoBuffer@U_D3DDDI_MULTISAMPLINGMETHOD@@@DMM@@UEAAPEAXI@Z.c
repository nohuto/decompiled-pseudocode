/*
 * XREFs of ??_G?$AutoBuffer@U_D3DDDI_MULTISAMPLINGMETHOD@@@DMM@@UEAAPEAXI@Z @ 0x1C0069F70
 * Callers:
 *     ??_E?$AutoBuffer@U_D3DDDI_MULTISAMPLINGMETHOD@@@DMM@@WBI@EAAPEAXI@Z @ 0x1C0027D80 (--_E-$AutoBuffer@U_D3DDDI_MULTISAMPLINGMETHOD@@@DMM@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1?$AutoBuffer@U_D3DDDI_MULTISAMPLINGMETHOD@@@DMM@@UEAA@XZ @ 0x1C0069F04 (--1-$AutoBuffer@U_D3DDDI_MULTISAMPLINGMETHOD@@@DMM@@UEAA@XZ.c)
 */

_QWORD *__fastcall DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`scalar deleting destructor'(_QWORD *P, char a2)
{
  DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::~AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
