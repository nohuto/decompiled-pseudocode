/*
 * XREFs of SeAuditProcessCreation @ 0x1407BCD28
 * Callers:
 *     PspInsertProcess @ 0x1406971A0 (PspInsertProcess.c)
 * Callees:
 *     PsQueryProcessCommandLine @ 0x14023D260 (PsQueryProcessCommandLine.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     SepAdtLogAuditRecord @ 0x1403C2884 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     SeCaptureSubjectContext @ 0x14064A950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14067B228 (PsGetAllocatedFullProcessImageNameEx.c)
 *     PsLookupProcessByProcessId @ 0x14068F4F0 (PsLookupProcessByProcessId.c)
 *     PsReferencePrimaryToken @ 0x14071E0E0 (PsReferencePrimaryToken.c)
 *     RtlCopySid @ 0x14071E2B0 (RtlCopySid.c)
 *     SepAuditFailed @ 0x140925A60 (SepAuditFailed.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall SeAuditProcessCreation(PEPROCESS Process, unsigned __int16 *a2)
{
  unsigned __int16 *PoolWithTag; // rsi
  unsigned int v4; // r13d
  void *v5; // rbx
  int AllocatedFullProcessImageName; // r14d
  PEPROCESS v7; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  int v10; // ecx
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  bool v15; // r8
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  char v19; // [rsp+30h] [rbp-D0h]
  unsigned int NumberOfBytes[3]; // [rsp+34h] [rbp-CCh] BYREF
  PVOID v21; // [rsp+40h] [rbp-C0h] BYREF
  PEPROCESS Processa; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE *v23; // [rsp+50h] [rbp-B0h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int16 *v25; // [rsp+68h] [rbp-98h]
  __int64 v26; // [rsp+70h] [rbp-90h]
  struct _LIST_ENTRY *Flink; // [rsp+78h] [rbp-88h]
  void *v28; // [rsp+80h] [rbp-80h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+88h] [rbp-78h] BYREF
  _QWORD Src[132]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE DestinationSid[80]; // [rsp+4D0h] [rbp+3D0h] BYREF

  v25 = a2;
  memset(NumberOfBytes, 0, sizeof(NumberOfBytes));
  PoolWithTag = 0LL;
  Processa = 0LL;
  v4 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v21 = 0LL;
  v19 = 0;
  DestinationString = 0LL;
  v23 = DestinationSid;
  if ( !Process[1].ActiveProcessors.Bitmap[2] )
    return;
  v5 = (void *)Process[1].AffinityPadding[2];
  Flink = Process[1].Header.WaitListHead.Flink;
  v28 = v5;
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)Process, (__int64)&NumberOfBytes[1]);
  if ( AllocatedFullProcessImageName >= 0 )
  {
    if ( PsLookupProcessByProcessId(v5, &Processa) < 0 )
    {
      v4 = 1845;
    }
    else
    {
      v7 = Processa;
      if ( Processa[1].ActiveProcessors.Bitmap[2] )
        PsGetAllocatedFullProcessImageNameEx((__int64)Processa, (__int64)&v21);
      else
        v4 = 1844;
      ObfDereferenceObjectWithTag(v7, 0x746C6644u);
    }
    v8 = PsReferencePrimaryToken(Process);
    v9 = v8;
    if ( v8 )
    {
      v10 = *(_DWORD *)(v8[27] + 32LL);
      if ( (v10 & 4) != 0 )
        v11 = 1938LL;
      else
        v11 = (v10 & 2 | 0xF20uLL) >> 1;
      v12 = *((unsigned int *)v8 + 52);
      v13 = v9[3];
      v26 = v13;
      if ( (unsigned int)v12 >= *((_DWORD *)v9 + 31) )
        v23 = SeNullSid;
      else
        AllocatedFullProcessImageName = RtlCopySid(0x44u, DestinationSid, *(PSID *)(v9[19] + 16 * v12));
      HalPutDmaAdapter((PADAPTER_OBJECT)v9);
      if ( AllocatedFullProcessImageName >= 0 )
      {
        if ( SepRmAuditProcessCommandLine )
        {
          if ( v25 )
          {
            PoolWithTag = v25;
            goto LABEL_16;
          }
          if ( (unsigned int)PsQueryProcessCommandLine((struct _EX_RUNDOWN_REF *)Process, 0LL, 0, 0, NumberOfBytes) == -1073741820 )
          {
            PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes[0], 0x4C436553u);
            if ( PoolWithTag )
            {
              if ( (int)PsQueryProcessCommandLine(
                          (struct _EX_RUNDOWN_REF *)Process,
                          (__int64)PoolWithTag,
                          NumberOfBytes[0],
                          0,
                          NumberOfBytes) >= 0 )
              {
                v19 = 1;
                goto LABEL_16;
              }
              ExFreePoolWithTag(PoolWithTag, 0);
            }
          }
          RtlInitUnicodeString(&DestinationString, &word_1407D7CE0);
        }
        else
        {
          RtlInitUnicodeString(&DestinationString, &word_1407D7CE0);
        }
        PoolWithTag = (unsigned __int16 *)&DestinationString;
LABEL_16:
        SeCaptureSubjectContext(&SubjectContext);
        memset(Src, 0, 0x418uLL);
        Src[0] = 0x125000000005LL;
        LODWORD(Src[2]) = 524422;
        v14 = **((_QWORD **)SubjectContext.PrimaryToken + 19);
        v15 = *((_QWORD *)SubjectContext.PrimaryToken + 3) != __PAIR64__(HIDWORD(v26), v13);
        v16 = *(unsigned __int8 *)(v14 + 1);
        Src[12] = *((_QWORD *)SubjectContext.PrimaryToken + 3);
        Src[16] = Flink;
        Src[6] = v14;
        HIDWORD(Src[3]) = 4 * v16 + 8;
        LODWORD(Src[3]) = 4;
        Src[10] = &SeSubsystemName;
        Src[22] = *(_QWORD *)&NumberOfBytes[1];
        Src[7] = 0x2000000001LL;
        v17 = (unsigned __int16)**(_WORD **)&NumberOfBytes[1] + 16;
        Src[11] = 0x800000005LL;
        HIDWORD(Src[19]) = v17;
        Src[28] = v28;
        v18 = *PoolWithTag + 16;
        Src[15] = 0x80000000BLL;
        LODWORD(Src[19]) = 2;
        Src[23] = 0x400000015LL;
        Src[24] = v11;
        Src[27] = 0x80000000BLL;
        LODWORD(Src[31]) = 34;
        HIDWORD(Src[31]) = v18;
        Src[34] = PoolWithTag;
        if ( v15 )
        {
          Src[35] = 0x800000023LL;
          Src[36] = v13;
        }
        else
        {
          LODWORD(Src[35]) = 6;
        }
        if ( v4 )
        {
          Src[40] = v4;
          Src[39] = 0x400000015LL;
        }
        else
        {
          LODWORD(Src[39]) = 2;
          Src[42] = v21;
          HIDWORD(Src[39]) = *(unsigned __int16 *)v21 + 16;
        }
        Src[46] = v23;
        LODWORD(Src[43]) = 4;
        LODWORD(Src[1]) = 11;
        HIDWORD(Src[43]) = 4 * (unsigned __int8)v23[1] + 8;
        SepAdtLogAuditRecord(Src);
        SeReleaseSubjectContext(&SubjectContext);
        goto LABEL_21;
      }
    }
    else
    {
      AllocatedFullProcessImageName = -1073741700;
    }
  }
  SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
LABEL_21:
  if ( *(_QWORD *)&NumberOfBytes[1] )
    ExFreePoolWithTag(*(PVOID *)&NumberOfBytes[1], 0);
  if ( v21 )
    ExFreePoolWithTag(v21, 0);
  if ( v19 )
  {
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
}
