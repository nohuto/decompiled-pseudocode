/*
 * XREFs of ObpCaptureBoundaryDescriptor @ 0x140743538
 * Callers:
 *     NtOpenPrivateNamespace @ 0x140741560 (NtOpenPrivateNamespace.c)
 *     NtCreatePrivateNamespace @ 0x140741A50 (NtCreatePrivateNamespace.c)
 * Callees:
 *     RtlLengthSid @ 0x140245EC0 (RtlLengthSid.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ObpCheckDuplicateEntries @ 0x1407437B0 (ObpCheckDuplicateEntries.c)
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x140743B80 (RtlEnumerateBoundaryDescriptorEntries.c)
 *     SeQueryInformationToken @ 0x1407B9760 (SeQueryInformationToken.c)
 *     SeCaptureSubjectContextEx @ 0x1407C9AF0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpCaptureBoundaryDescriptor(__m128i *Src, __int64 *a2)
{
  __m128i *v4; // rax
  unsigned int v5; // edi
  char *v6; // rcx
  __int64 Pool2; // rsi
  char v9; // r13
  __int64 v10; // r15
  unsigned __int64 v11; // r15
  __int64 v12; // r15
  NTSTATUS v13; // edi
  int v14; // edx
  struct _KTHREAD *CurrentThread; // rcx
  PACCESS_TOKEN PrimaryToken; // rdi
  _DWORD *v17; // rcx
  unsigned int v18; // eax
  ULONG v19; // [rsp+20h] [rbp-88h]
  PVOID P; // [rsp+28h] [rbp-80h] BYREF
  size_t Size; // [rsp+30h] [rbp-78h]
  PVOID v22; // [rsp+38h] [rbp-70h]
  __m128i v23; // [rsp+40h] [rbp-68h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-58h] BYREF
  PVOID TokenInformation; // [rsp+C8h] [rbp+20h] BYREF

  memset(&SubjectContext, 0, sizeof(SubjectContext));
  *a2 = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v4 = (__m128i *)0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Src < 0x7FFFFFFF0000LL )
      v4 = Src;
    v23 = *v4;
    v5 = _mm_cvtsi128_si32(_mm_srli_si128(v23, 8));
    v23.m128i_i32[2] = v5;
    if ( v5 - 16 > 0x7FEF )
      return 3221225485LL;
    if ( v5 )
    {
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v6 = &Src->m128i_i8[v5];
      if ( (unsigned __int64)v6 > 0x7FFFFFFF0000LL || v6 < (char *)Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    v23 = *Src;
    v5 = v23.m128i_u32[2];
  }
  Pool2 = 0LL;
  LODWORD(TokenInformation) = 0;
  v9 = 0;
  Size = v5;
  v10 = v5;
  P = 0LL;
  v19 = 0;
  if ( (v23.m128i_i8[12] & 1) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = 1;
    SeCaptureSubjectContextEx(CurrentThread, CurrentThread->ApcState.Process, &SubjectContext);
    PrimaryToken = SubjectContext.PrimaryToken;
    if ( SubjectContext.ClientToken )
      PrimaryToken = SubjectContext.ClientToken;
    SeQueryInformationToken(PrimaryToken, TokenIsAppContainer, &TokenInformation);
    if ( (_DWORD)TokenInformation )
    {
      v13 = SeQueryInformationToken(PrimaryToken, TokenAppContainerSid, &P);
      if ( v13 < 0 )
        goto LABEL_20;
      v19 = RtlLengthSid(*(PSID *)P);
      v10 += ((v19 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 8;
    }
    v5 = v23.m128i_u32[2];
  }
  v11 = v10 + 48;
  if ( v11 > 0xFFFFFFFF )
  {
    v13 = -1073741675;
    goto LABEL_20;
  }
  Pool2 = ExAllocatePool2(256LL, (unsigned int)v11, 1397645903LL);
  v22 = (PVOID)Pool2;
  if ( !Pool2 )
  {
    v13 = -1073741670;
    goto LABEL_20;
  }
  *(_QWORD *)(Pool2 + 24) = (unsigned int)v11 - 48LL;
  v12 = Pool2 + 48;
  memmove((void *)(Pool2 + 48), Src, Size);
  if ( P )
  {
    v17 = (_DWORD *)(v12 + Size);
    if ( v12 + Size != ((v12 + Size + 7) & 0xFFFFFFFFFFFFFFF8uLL) )
    {
LABEL_38:
      v13 = -1073741811;
      goto LABEL_20;
    }
    *v17 = 2;
    v18 = ((v19 + 7) & 0xFFFFFFF8) + 8;
    v17[1] = v18;
    v5 += v18;
    ++v23.m128i_i32[1];
    memmove(v17 + 2, *(const void **)P, v19);
  }
  *(_DWORD *)(Pool2 + 56) = v5;
  *(_DWORD *)(Pool2 + 52) = v23.m128i_i32[1];
  v13 = RtlEnumerateBoundaryDescriptorEntries(Pool2 + 48, 0LL, 0LL);
  if ( v13 >= 0 && !(unsigned int)ObpCheckDuplicateEntries(Pool2) )
    goto LABEL_38;
  *(_BYTE *)(Pool2 + 40) = 0;
  RtlEnumerateBoundaryDescriptorEntries(Pool2 + 48, ObpHashBoundaryFunction, Pool2);
  v14 = (3134165325u * (unsigned __int64)*(unsigned __int8 *)(Pool2 + 40)) >> 32;
  *(_BYTE *)(Pool2 + 40) -= 37 * ((v14 + (((unsigned int)*(unsigned __int8 *)(Pool2 + 40) - v14) >> 1)) >> 5);
LABEL_20:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v9 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v13 < 0 )
  {
    if ( Pool2 )
      ExFreePoolWithTag((PVOID)Pool2, 0x534E624Fu);
  }
  else
  {
    *a2 = Pool2;
  }
  return (unsigned int)v13;
}
