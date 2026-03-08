/*
 * XREFs of NVMeSendLunInternalData @ 0x1C002828C
 * Callers:
 *     NVMeHwUnitControl @ 0x1C0008600 (NVMeHwUnitControl.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003260 (__security_check_cookie.c)
 *     memset @ 0x1C0004580 (memset.c)
 */

_BOOL8 __fastcall NVMeSendLunInternalData(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v7[60]; // [rsp+30h] [rbp-D0h] BYREF

  memset(v7, 0, sizeof(v7));
  LODWORD(v7[28]) = 11;
  LODWORD(v7[1]) = 10;
  v7[0] = "NamespaceId";
  v7[2] = a2 + 16;
  v7[3] = "States";
  LODWORD(v7[4]) = 14;
  v7[5] = a2 + 20;
  LODWORD(v7[22]) = 14;
  v7[6] = "IoRecord.SuccessCount";
  LODWORD(v7[7]) = 10;
  v7[8] = a2 + 24;
  v7[9] = "IoRecord.OtherErrorCount";
  v7[11] = a2 + 32;
  v7[12] = "IoRecord.IoSplitCount";
  v7[14] = a2 + 36;
  v7[15] = "IoRecord.PortDriverResetCount";
  v7[17] = a2 + 40;
  v7[18] = "IoRecord.TotalResetCount";
  v7[20] = a2 + 44;
  v7[21] = "LbaFormat";
  v7[23] = a2 + 48;
  v7[24] = "LogicalBlockSize";
  v7[26] = a2 + 52;
  v7[27] = "LogicalBlockCount";
  v7[29] = a2 + 56;
  v7[30] = "ThinProvisioning";
  v7[32] = a2 + 65;
  v7[33] = "End2EndProtection";
  v7[35] = a2 + 66;
  v7[36] = "NGUID";
  v7[38] = a2 + 68;
  v7[39] = "EUI64";
  LODWORD(v7[10]) = 10;
  LODWORD(v7[13]) = 10;
  LODWORD(v7[16]) = 10;
  LODWORD(v7[19]) = 10;
  LODWORD(v7[25]) = 10;
  LODWORD(v7[31]) = 8;
  LODWORD(v7[34]) = 8;
  LODWORD(v7[37]) = 16;
  WORD2(v7[37]) = 16;
  LODWORD(v7[40]) = 16;
  WORD2(v7[40]) = 8;
  LODWORD(v7[52]) = 10;
  LODWORD(v7[43]) = 9;
  v7[41] = a2 + 84;
  LODWORD(v7[46]) = 9;
  v7[42] = "OptimalIoBoundary";
  LODWORD(v7[49]) = 9;
  v7[44] = a2 + 92;
  v7[51] = "OptimalWriteSize";
  v7[45] = "SetId";
  v7[47] = a2 + 94;
  v7[48] = "EnduranceGroupId";
  v7[50] = a2 + 96;
  v7[53] = a2 + 100;
  v7[56] = a2 + 100;
  v7[57] = "ReservationCapabilities";
  v7[59] = a2 + 112;
  v7[54] = "OptimalWriteSize";
  LODWORD(v7[55]) = 10;
  LODWORD(v7[58]) = 12;
  return (unsigned int)StorPortExtendedFunction(115LL, a1, a2, a3) != 0;
}
