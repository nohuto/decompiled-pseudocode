/*
 * XREFs of SeAuditProcessCreation @ 0x140840400
 * Callers:
 *     PspInsertProcess @ 0x14070E514 (PspInsertProcess.c)
 * Callees:
 *     PsReferencePrimaryTokenWithTag @ 0x1402666A0 (PsReferencePrimaryTokenWithTag.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     PsQueryProcessCommandLine @ 0x1402E8A40 (PsQueryProcessCommandLine.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     SepAdtLogAuditRecord @ 0x140397890 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PsLookupProcessByProcessId @ 0x1406AC100 (PsLookupProcessByProcessId.c)
 *     RtlCopySid @ 0x1406D4890 (RtlCopySid.c)
 *     SeCaptureSubjectContext @ 0x1407C9AC0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x1407E7618 (PsGetAllocatedFullProcessImageNameEx.c)
 *     SepAuditFailed @ 0x1409CEE50 (SepAuditFailed.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall SeAuditProcessCreation(struct _EX_RUNDOWN_REF *a1, UNICODE_STRING *a2)
{
  char v3; // si
  UNICODE_STRING *Pool2; // rdi
  unsigned int v5; // r13d
  void *Ptr; // rbx
  int AllocatedFullProcessImageName; // r14d
  PEPROCESS v8; // rbx
  ULONG_PTR v9; // rax
  ULONG_PTR v10; // rsi
  int v11; // ecx
  unsigned __int64 v12; // r12
  __int64 v13; // rax
  struct _KPROCESS *v14; // rbx
  _BYTE *v15; // r14
  __int64 v16; // rdx
  bool v17; // r8
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  unsigned int v22; // [rsp+34h] [rbp-CCh] BYREF
  PEPROCESS Process; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  PVOID v25; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING *v27; // [rsp+60h] [rbp-A0h]
  unsigned __int64 Count; // [rsp+68h] [rbp-98h]
  void *v29; // [rsp+70h] [rbp-90h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+78h] [rbp-88h] BYREF
  _QWORD Src[132]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE DestinationSid[80]; // [rsp+4C0h] [rbp+3C0h] BYREF

  v27 = a2;
  v3 = 0;
  v22 = 0;
  Pool2 = 0LL;
  Process = 0LL;
  v5 = 0;
  P = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v25 = 0LL;
  DestinationString = 0LL;
  if ( !a1[184].Count )
    return;
  Ptr = a1[168].Ptr;
  Count = a1[136].Count;
  v29 = Ptr;
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx((__int64)a1, (__int64)&P);
  if ( AllocatedFullProcessImageName >= 0 )
  {
    if ( PsLookupProcessByProcessId(Ptr, &Process) < 0 )
    {
      v5 = 1845;
    }
    else
    {
      v8 = Process;
      if ( Process[1].ActiveProcessors.StaticBitmap[2] )
        PsGetAllocatedFullProcessImageNameEx((__int64)Process, (__int64)&v25);
      else
        v5 = 1844;
      ObfDereferenceObjectWithTag(v8, 0x746C6644u);
    }
    v9 = PsReferencePrimaryTokenWithTag((__int64)a1, 0x746C6644u);
    v10 = v9;
    if ( v9 )
    {
      v11 = *(_DWORD *)(*(_QWORD *)(v9 + 216) + 32LL);
      if ( (v11 & 4) != 0 )
        v12 = 1938LL;
      else
        v12 = (v11 & 2 | 0xF20uLL) >> 1;
      v13 = *(unsigned int *)(v9 + 208);
      v14 = *(struct _KPROCESS **)(v10 + 24);
      Process = v14;
      if ( (unsigned int)v13 >= *(_DWORD *)(v10 + 124) )
      {
        v15 = SeNullSid;
LABEL_13:
        ObfDereferenceObject((PVOID)v10);
        if ( SepRmAuditProcessCommandLine )
        {
          if ( v27 )
          {
            Pool2 = v27;
            goto LABEL_15;
          }
          if ( (unsigned int)PsQueryProcessCommandLine(a1, 0LL, 0, 0, &v22) == -1073741820 )
          {
            Pool2 = (UNICODE_STRING *)ExAllocatePool2(256LL, v22, 1279485267LL);
            if ( Pool2 )
            {
              if ( (int)PsQueryProcessCommandLine(a1, (__int64)Pool2, v22, 0, &v22) >= 0 )
              {
                v3 = 1;
                goto LABEL_16;
              }
              ExFreePoolWithTag(Pool2, 0);
            }
          }
        }
        RtlInitUnicodeString(&DestinationString, &word_1408834C0);
        Pool2 = &DestinationString;
LABEL_15:
        v3 = 0;
LABEL_16:
        SeCaptureSubjectContext(&SubjectContext);
        memset(Src, 0, 0x418uLL);
        Src[0] = 0x125000000005LL;
        LODWORD(Src[2]) = 524421;
        v16 = **((_QWORD **)SubjectContext.PrimaryToken + 19);
        v17 = *((_QWORD *)SubjectContext.PrimaryToken + 3) != __PAIR64__(HIDWORD(Process), (unsigned int)v14);
        v18 = *(unsigned __int8 *)(v16 + 1);
        Src[12] = *((_QWORD *)SubjectContext.PrimaryToken + 3);
        Src[16] = Count;
        Src[6] = v16;
        HIDWORD(Src[3]) = 4 * v18 + 8;
        LODWORD(Src[3]) = 4;
        Src[10] = &SeSubsystemName;
        Src[22] = P;
        Src[7] = 0x2000000001LL;
        v19 = *(unsigned __int16 *)P + 16;
        Src[11] = 0x800000005LL;
        HIDWORD(Src[19]) = v19;
        Src[28] = v29;
        v20 = Pool2->Length + 16;
        Src[15] = 0x80000000BLL;
        LODWORD(Src[19]) = 2;
        Src[23] = 0x400000015LL;
        Src[24] = v12;
        Src[27] = 0x80000000BLL;
        LODWORD(Src[31]) = 34;
        HIDWORD(Src[31]) = v20;
        Src[34] = Pool2;
        if ( v17 )
        {
          Src[35] = 0x800000023LL;
          Src[36] = v14;
        }
        else
        {
          LODWORD(Src[35]) = 6;
        }
        if ( v5 )
        {
          Src[40] = v5;
          Src[39] = 0x400000015LL;
        }
        else
        {
          LODWORD(Src[39]) = 2;
          Src[42] = v25;
          HIDWORD(Src[39]) = *(unsigned __int16 *)v25 + 16;
        }
        v21 = (unsigned __int8)v15[1];
        LODWORD(Src[43]) = 4;
        Src[46] = v15;
        LODWORD(Src[1]) = 11;
        HIDWORD(Src[43]) = 4 * v21 + 8;
        SepAdtLogAuditRecord(Src);
        SeReleaseSubjectContext(&SubjectContext);
        goto LABEL_21;
      }
      AllocatedFullProcessImageName = RtlCopySid(0x44u, DestinationSid, *(PSID *)(*(_QWORD *)(v10 + 152) + 16 * v13));
      if ( AllocatedFullProcessImageName >= 0 )
      {
        v15 = DestinationSid;
        goto LABEL_13;
      }
      ObfDereferenceObject((PVOID)v10);
    }
    else
    {
      AllocatedFullProcessImageName = -1073741700;
    }
    v3 = 0;
  }
  SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
LABEL_21:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v25 )
    ExFreePoolWithTag(v25, 0);
  if ( v3 )
  {
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
}
