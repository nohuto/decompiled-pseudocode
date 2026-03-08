/*
 * XREFs of ?VerifyDDCCIMessageChecksum@CPhysicalMonitorHandle@@CAJEPEBEK@Z @ 0x1C026C9C4
 * Callers:
 *     ?DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z @ 0x1C026C2D0 (-DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AEAAJ_JPEAXK@Z.c)
 * Callees:
 *     ?ComputeDDCCIMessageChecksum@CPhysicalMonitorHandle@@CAEEPEBEK@Z @ 0x1C026B604 (-ComputeDDCCIMessageChecksum@CPhysicalMonitorHandle@@CAEEPEBEK@Z.c)
 */

__int64 __fastcall CPhysicalMonitorHandle::VerifyDDCCIMessageChecksum(
        __int64 a1,
        const unsigned __int8 *a2,
        unsigned int a3)
{
  int v4; // ecx
  unsigned int v6; // r8d
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  bool v14; // zf
  char v15; // al
  __int64 v16; // r8
  __int64 v17; // r10

  if ( a3 < 3 )
    return 3223192968LL;
  v4 = a2[2];
  if ( v4 != 1 && v4 != 2 && v4 != 3 && v4 != 7 && v4 != 12 )
  {
    if ( v4 == 78 )
    {
      v6 = 9;
      goto LABEL_13;
    }
    if ( v4 != 227 && v4 != 243 )
      return 3223192969LL;
  }
  v6 = (a2[1] & 0x7F) + 3;
  if ( (a2[1] & 0x7F) == 0xFFFFFFFD )
    return 3223192970LL;
LABEL_13:
  if ( a3 < v6 )
    return 3223192970LL;
  v7 = v4 - 1;
  if ( !v7 )
    goto LABEL_28;
  v8 = v7 - 1;
  if ( !v8 )
  {
    v14 = v6 == 11;
LABEL_27:
    if ( !v14 )
      return 3223192970LL;
    goto LABEL_28;
  }
  v9 = v8 - 1;
  if ( !v9 )
    goto LABEL_28;
  v10 = v9 - 4;
  if ( !v10 )
    goto LABEL_28;
  v11 = v10 - 5;
  if ( !v11 )
    goto LABEL_28;
  v12 = v11 - 66;
  if ( !v12 )
  {
    v14 = v6 == 9;
    goto LABEL_27;
  }
  v13 = v12 - 149;
  if ( v13 )
  {
    if ( v13 != 16 )
      return 3223192968LL;
    goto LABEL_28;
  }
  if ( v6 - 6 > 0x20 )
    return 3223192970LL;
LABEL_28:
  v15 = CPhysicalMonitorHandle::ComputeDDCCIMessageChecksum(111, a2, v6 - 1);
  return v15 != *(_BYTE *)(v16 + v17) ? 0xC01E058B : 0;
}
