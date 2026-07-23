/*
 * XREFs of SepAdtObjectReferenceAuditAlarm @ 0x14091F3CC
 * Callers:
 *     SeObjectReferenceAuditAlarm @ 0x140655E9C (SeObjectReferenceAuditAlarm.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x1403C2884 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     SepQueryNameString @ 0x1406C6CEC (SepQueryNameString.c)
 *     SepQueryTypeString @ 0x140920864 (SepQueryTypeString.c)
 *     SepAuditFailed @ 0x140925A60 (SepAuditFailed.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall SepAdtObjectReferenceAuditAlarm(__int64 a1, __int64 *a2, unsigned int a3, char a4)
{
  void *v4; // rdi
  __int64 v5; // r14
  __int64 v7; // rbx
  __int64 *v10; // rax
  __int64 v11; // r13
  __int64 v12; // rbx
  int v13; // esi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  unsigned __int16 *v18; // [rsp+30h] [rbp-D8h] BYREF
  PVOID P; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD Src[132]; // [rsp+48h] [rbp-C0h] BYREF

  P = 0LL;
  v4 = 0LL;
  v5 = *a2;
  v7 = a2[2];
  v18 = 0LL;
  if ( v5 )
    v10 = *(__int64 **)(v5 + 152);
  else
    v10 = *(__int64 **)(v7 + 152);
  v11 = *v10;
  v12 = *(_QWORD *)(v7 + 24);
  memset(Src, 0, 0x418uLL);
  Src[0] = 0x125300000003LL;
  LODWORD(Src[2]) = 524409;
  if ( !a4 )
    WORD1(Src[2]) = 16;
  v13 = SepQueryNameString(a1, &P);
  if ( v13 >= 0 )
  {
    v13 = SepQueryTypeString(a1, &v18);
    if ( v13 < 0 )
    {
      v4 = v18;
    }
    else
    {
      v14 = *(unsigned __int8 *)(v11 + 1);
      LODWORD(Src[3]) = 4;
      Src[6] = v11;
      Src[11] = 0x800000005LL;
      HIDWORD(Src[3]) = 4 * v14 + 8;
      Src[10] = &SeSubsystemName;
      Src[7] = 0x2000000001LL;
      if ( v5 )
        Src[12] = *(_QWORD *)(v5 + 24);
      else
        Src[12] = v12;
      v4 = v18;
      if ( v18 )
      {
        v15 = *v18;
        LODWORD(Src[15]) = 1;
        HIDWORD(Src[15]) = v15 + 16;
        Src[18] = v18;
      }
      if ( P )
      {
        v16 = *(unsigned __int16 *)P;
        LODWORD(Src[19]) = 1;
        HIDWORD(Src[19]) = v16 + 16;
        Src[22] = P;
      }
      Src[24] = a3;
      Src[28] = a3;
      Src[32] = a2[3];
      Src[23] = 0x400000007LL;
      Src[25] = 3LL;
      Src[27] = 0x40000000ALL;
      Src[31] = 0x80000000BLL;
      LODWORD(Src[1]) = 8;
      SepAdtLogAuditRecord(Src);
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v13 < 0 )
    SepAuditFailed((unsigned int)v13);
}
