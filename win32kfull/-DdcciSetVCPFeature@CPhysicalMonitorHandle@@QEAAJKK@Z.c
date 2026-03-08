/*
 * XREFs of ?DdcciSetVCPFeature@CPhysicalMonitorHandle@@QEAAJKK@Z @ 0x1C026C504
 * Callers:
 *     NtGdiDDCCISetVCPFeature @ 0x1C026CE60 (NtGdiDDCCISetVCPFeature.c)
 * Callees:
 *     ?DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x1C026C384 (-DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z.c)
 */

__int64 __fastcall CPhysicalMonitorHandle::DdcciSetVCPFeature(CPhysicalMonitorHandle *this, char a2, __int16 a3)
{
  int v7; // [rsp+48h] [rbp+20h] BYREF
  char v8; // [rsp+4Ch] [rbp+24h]
  char v9; // [rsp+4Dh] [rbp+25h]
  char v10; // [rsp+4Eh] [rbp+26h]

  if ( (unsigned int)GreIsInLowBox() )
    return 3221225506LL;
  v7 = 230481;
  v10 = 0;
  v8 = HIBYTE(a3);
  HIBYTE(v7) = a2;
  v9 = a3;
  return CPhysicalMonitorHandle::DdcciSendDataToMonitorDevice(this, -500000LL, (unsigned __int8 *)&v7, 7);
}
