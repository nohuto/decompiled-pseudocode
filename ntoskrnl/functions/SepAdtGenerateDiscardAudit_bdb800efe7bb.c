void __fastcall SepAdtGenerateDiscardAudit(unsigned int *P)
{
  int v2; // eax
  _QWORD Src[132]; // [rsp+20h] [rbp-E0h] BYREF

  memset(Src, 0, 0x418uLL);
  v2 = *((unsigned __int8 *)SeLocalSystemSid + 1);
  Src[0] = 0x120400000001LL;
  LODWORD(Src[2]) = 524390;
  Src[6] = SeLocalSystemSid;
  HIDWORD(Src[3]) = 4 * v2 + 8;
  LODWORD(Src[3]) = 4;
  Src[10] = &SeSubsystemName;
  Src[12] = P[8];
  Src[7] = 0x2000000001LL;
  Src[11] = 0x40000001BLL;
  LODWORD(Src[1]) = 3;
  SepAdtLogAuditRecord(Src);
  if ( *((_BYTE *)P + 36) )
    ExFreePoolWithTag(P, 0);
}
