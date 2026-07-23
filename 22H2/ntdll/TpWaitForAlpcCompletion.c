/*
 * XREFs of TpWaitForAlpcCompletion @ 0x18007A640
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x18004CF8C (TppBarrierAdjust.c)
 *     TppAlpcpValidateAlpc @ 0x18007A74C (TppAlpcpValidateAlpc.c)
 *     ZwAlpcQueryInformation @ 0x18009E5F0 (ZwAlpcQueryInformation.c)
 */

void __cdecl TpWaitForAlpcCompletion(PTP_ALPC Alpc)
{
  int PortInformation; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)TppAlpcpValidateAlpc(Alpc, 0LL, 0LL) )
  {
    PortInformation = *((_DWORD *)Alpc + 70);
    if ( PortInformation )
      ZwAlpcQueryInformation(*((HANDLE *)Alpc + 34), AlpcWaitForPortReferences, &PortInformation, 4u, 0LL);
    TppBarrierAdjust((_RTL_SRWLOCK *)Alpc + 16, 0, 1);
  }
}
