void __fastcall SepAdtObjectReferenceAuditAlarm(char *a1, __int64 *a2, unsigned int a3, char a4)
{
  unsigned __int16 *v4; // rdi
  __int64 v5; // r14
  __int64 v7; // rbx
  __int64 *v10; // rax
  __int64 v11; // r13
  __int64 v12; // rbx
  int v13; // esi
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // r8d
  unsigned __int16 *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int16 *v23; // [rsp+30h] [rbp-D8h] BYREF
  PVOID P; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD Src[132]; // [rsp+48h] [rbp-C0h] BYREF

  P = 0LL;
  v4 = 0LL;
  v5 = *a2;
  v7 = a2[2];
  v23 = 0LL;
  if ( v5 )
    v10 = *(__int64 **)(v5 + 152);
  else
    v10 = *(__int64 **)(v7 + 152);
  v11 = *v10;
  v12 = *(_QWORD *)(v7 + 24);
  memset(Src, 0, 0x418uLL);
  LODWORD(Src[1]) = 0;
  LODWORD(Src[2]) = 524408;
  Src[0] = 0x125300000003LL;
  if ( !a4 )
    WORD1(Src[2]) = 16;
  v13 = SepQueryNameString(a1, &P);
  if ( v13 >= 0 )
  {
    v13 = SepQueryTypeString(a1, &v23, v14, v15);
    if ( v13 < 0 )
    {
      v4 = v23;
    }
    else
    {
      LODWORD(Src[4 * LODWORD(Src[1]) + 3]) = 4;
      HIDWORD(Src[4 * LODWORD(Src[1]) + 3]) = 4 * *(unsigned __int8 *)(v11 + 1) + 8;
      Src[4 * LODWORD(Src[1]) + 6] = v11;
      ++LODWORD(Src[1]);
      LODWORD(Src[4 * LODWORD(Src[1]) + 3]) = 1;
      HIDWORD(Src[4 * LODWORD(Src[1]) + 3]) = 32;
      Src[4 * LODWORD(Src[1]) + 6] = &SeSubsystemName;
      v16 = 4LL * (unsigned int)++LODWORD(Src[1]);
      if ( v5 )
      {
        v17 = *(_QWORD *)(v5 + 24);
        LODWORD(Src[v16 + 3]) = 5;
        HIDWORD(Src[4 * LODWORD(Src[1]) + 3]) = 8;
        Src[4 * LODWORD(Src[1]) + 4] = v17;
      }
      else
      {
        LODWORD(Src[v16 + 3]) = 5;
        HIDWORD(Src[4 * LODWORD(Src[1]) + 3]) = 8;
        Src[4 * LODWORD(Src[1]) + 4] = v12;
      }
      v4 = v23;
      v18 = ++LODWORD(Src[1]);
      if ( v23 )
      {
        LODWORD(Src[4 * v18 + 3]) = 1;
        HIDWORD(Src[4 * LODWORD(Src[1]) + 3]) = *v4 + 16;
        Src[4 * LODWORD(Src[1]) + 6] = v4;
        v18 = Src[1];
      }
      v19 = (unsigned __int16 *)P;
      v20 = v18 + 1;
      LODWORD(Src[1]) = v18 + 1;
      if ( P )
      {
        LODWORD(Src[4 * v20 + 3]) = 1;
        HIDWORD(Src[4 * LODWORD(Src[1]) + 3]) = *v19 + 16;
        Src[4 * LODWORD(Src[1]) + 6] = v19;
        LODWORD(v20) = Src[1];
      }
      v21 = (unsigned int)(v20 + 1);
      LODWORD(Src[1]) = v21;
      LODWORD(Src[4 * v21 + 3]) = 7;
      HIDWORD(Src[4 * LODWORD(Src[1]) + 3]) = 4;
      Src[4 * LODWORD(Src[1]) + 4] = a3;
      Src[4 * LODWORD(Src[1]) + 5] = v18;
      ++LODWORD(Src[1]);
      LODWORD(Src[4 * LODWORD(Src[1]) + 3]) = 10;
      HIDWORD(Src[4 * LODWORD(Src[1]) + 3]) = 4;
      Src[4 * LODWORD(Src[1]) + 4] = a3;
      ++LODWORD(Src[1]);
      LODWORD(Src[4 * LODWORD(Src[1]) + 3]) = 11;
      HIDWORD(Src[4 * LODWORD(Src[1]) + 3]) = 8;
      Src[4 * LODWORD(Src[1]) + 4] = a2[3];
      ++LODWORD(Src[1]);
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
