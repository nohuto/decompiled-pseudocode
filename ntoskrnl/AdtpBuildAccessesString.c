/*
 * XREFs of AdtpBuildAccessesString @ 0x140A58C90
 * Callers:
 *     AdtpPackageParameters @ 0x1403958B4 (AdtpPackageParameters.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14066DCEC (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14066E738 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     AdtpBuildObjectTypeStrings @ 0x140A59130 (AdtpBuildObjectTypeStrings.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140208B50 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1402447D0 (RtlAppendUnicodeStringToString.c)
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     RtlEqualUnicodeString @ 0x1406EA560 (RtlEqualUnicodeString.c)
 *     RtlIntegerToUnicodeString @ 0x1407805C0 (RtlIntegerToUnicodeString.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall AdtpBuildAccessesString(
        const UNICODE_STRING *a1,
        const UNICODE_STRING *a2,
        int a3,
        int a4,
        PUNICODE_STRING DestinationString,
        wchar_t **a6,
        __int64 a7,
        _DWORD *a8,
        _BYTE *a9)
{
  int v9; // r12d
  NTSTATUS appended; // r13d
  int v11; // r8d
  __int64 *v12; // r14
  int v14; // ecx
  int v15; // r9d
  const WCHAR *v16; // r15
  unsigned int v17; // ebx
  __int64 v18; // rax
  int v19; // ecx
  wchar_t *Pool2; // rax
  unsigned int v21; // ebx
  unsigned int v22; // esi
  __int64 *v23; // r14
  int *v24; // rsi
  wchar_t **v25; // rdi
  struct _KTHREAD *CurrentThread; // rax
  char v27; // si
  __int64 *v28; // rbx
  const UNICODE_STRING *v29; // rdi
  BOOLEAN v30; // al
  __int64 *v31; // rcx
  _QWORD *v32; // r12
  _QWORD *v33; // rbx
  wchar_t *Buffer; // rax
  bool v35; // r14
  const UNICODE_STRING *v36; // r15
  _QWORD *v37; // rdi
  int v38; // r14d
  int v39; // esi
  unsigned int i; // ebx
  UNICODE_STRING Destination; // [rsp+20h] [rbp-99h] BYREF
  int v42; // [rsp+30h] [rbp-89h]
  const WCHAR *v43; // [rsp+38h] [rbp-81h]
  wchar_t **v44; // [rsp+40h] [rbp-79h]
  UNICODE_STRING String; // [rsp+48h] [rbp-71h] BYREF
  PCUNICODE_STRING String2; // [rsp+58h] [rbp-61h]
  PCUNICODE_STRING v47; // [rsp+60h] [rbp-59h]
  _QWORD *v48; // [rsp+68h] [rbp-51h]
  wchar_t *v49; // [rsp+70h] [rbp-49h]
  UNICODE_STRING *v50; // [rsp+78h] [rbp-41h]
  UNICODE_STRING v51; // [rsp+80h] [rbp-39h] BYREF
  UNICODE_STRING v52; // [rsp+90h] [rbp-29h] BYREF
  char v53; // [rsp+A0h] [rbp-19h] BYREF

  v9 = a3;
  v47 = a2;
  v42 = a3;
  appended = 0;
  String2 = a1;
  v11 = 0;
  v50 = DestinationString;
  v12 = 0LL;
  v44 = a6;
  *(_QWORD *)&String.Length = 0LL;
  v48 = 0LL;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  v51 = 0LL;
  v52 = 0LL;
  if ( !v9 )
  {
    if ( a6 )
    {
      a6[1] = (wchar_t *)4;
      *a6 = (wchar_t *)"-";
    }
    else if ( DestinationString )
    {
      RtlInitUnicodeString(DestinationString, L"-");
    }
    return 0LL;
  }
  v14 = v9;
  do
  {
    ++v11;
    v14 &= v14 - 1;
  }
  while ( v14 );
  if ( a4 )
  {
    v15 = a4 - 1;
    if ( !v15 )
    {
      v16 = L"\r\n";
      goto LABEL_15;
    }
    if ( v15 == 1 )
    {
      v16 = L":\t";
      goto LABEL_15;
    }
  }
  v16 = L"\r\n\t\t\t\t";
LABEL_15:
  v43 = v16;
  v17 = 24 * v11 + 1;
  if ( a7 && a8 && (v18 = (unsigned int)*a8, v19 = v18 + v17, (unsigned int)v18 + v17 < 0x400) )
  {
    Pool2 = (wchar_t *)(a7 + 2 * v18);
    *a8 = v19;
    v49 = Pool2;
  }
  else
  {
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, 2LL * v17, 1799447891LL);
    v49 = Pool2;
    if ( !Pool2 )
      return 3221225495LL;
    *a9 = 1;
  }
  Destination.Length = 0;
  Destination.MaximumLength = 2 * v17;
  v21 = 5;
  Destination.Buffer = Pool2;
  if ( (v9 & 0x1F0000) != 0 )
  {
    v22 = 0;
    v23 = AdtpStandardAccessTypes;
    do
    {
      if ( (v9 & *(_DWORD *)v23) != 0 )
      {
        RtlAppendUnicodeToString(&Destination, L"%%");
        RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)&AdtpEventIdStringStandard + v22);
        appended = RtlAppendUnicodeToString(&Destination, v16);
      }
      ++v22;
      v23 = (__int64 *)((char *)v23 + 4);
    }
    while ( v22 < 5 );
    v12 = *(__int64 **)&String.Length;
  }
  v24 = &dword_14004C84C;
  do
  {
    if ( (v9 & *v24) != 0 )
    {
      RtlAppendUnicodeToString(&Destination, L"%%");
      RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)&AdtpEventIdStringStandard + v21);
      appended = RtlAppendUnicodeToString(&Destination, v16);
    }
    ++v21;
    ++v24;
  }
  while ( v21 < 7 );
  v25 = v44;
  if ( (_WORD)v9 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&AdtpSourceModuleLock, 1u);
    v27 = 0;
    v28 = &AdtpSourceModules;
    if ( AdtpSourceModules )
    {
      v29 = String2;
      do
      {
        if ( v27 )
          break;
        v30 = RtlEqualUnicodeString((PCUNICODE_STRING)(*v28 + 8), v29, 1u);
        v31 = (__int64 *)*v28;
        if ( v30 )
        {
          v27 = 1;
          *v28 = *v31;
          v12 = v31;
          *v31 = AdtpSourceModules;
          AdtpSourceModules = (__int64)v31;
        }
        else
        {
          v28 = (__int64 *)*v28;
        }
      }
      while ( *v28 );
      v25 = v44;
      if ( v27 == 1 )
      {
        v32 = v12 + 3;
        v27 = 0;
        v33 = v12 + 3;
        RtlInitUnicodeString(&v51, L"DS");
        v35 = 0;
        if ( RtlEqualUnicodeString(String2, &v51, 1u) )
        {
          if ( v47->Length == 78 )
          {
            Buffer = v47->Buffer;
            if ( *Buffer == 37 && Buffer[1] == 123 && Buffer[38] == 125 )
              v35 = 1;
          }
        }
        RtlInitUnicodeString(&v52, L"Directory Service Object");
        if ( *v32 )
        {
          v36 = v47;
          do
          {
            if ( v27 )
              break;
            if ( v35 && RtlEqualUnicodeString((PCUNICODE_STRING)(*v33 + 8LL), &v52, 1u)
              || RtlEqualUnicodeString((PCUNICODE_STRING)(*v33 + 8LL), v36, 1u) )
            {
              v37 = (_QWORD *)*v33;
              v27 = 1;
              v48 = v37;
              *v33 = *v37;
              *v37 = *v32;
              *v32 = v37;
            }
            else
            {
              v33 = (_QWORD *)*v33;
            }
          }
          while ( *v33 );
          v25 = v44;
          v16 = v43;
        }
        v9 = v42;
      }
    }
    ExReleaseResourceLite(&AdtpSourceModuleLock);
    KeLeaveCriticalRegion();
    if ( v27 )
      v38 = *((_DWORD *)v48 + 6);
    else
      v38 = 1552;
    *(_QWORD *)&String.Length = 1310720LL;
    String.Buffer = (wchar_t *)&v53;
    v39 = 1;
    for ( i = 0; i < 0x10; ++i )
    {
      if ( (v39 & v9) != 0 )
      {
        appended = RtlIntegerToUnicodeString(i + v38, 0xAu, &String);
        if ( appended >= 0 )
        {
          RtlAppendUnicodeToString(&Destination, L"%%");
          RtlAppendUnicodeStringToString(&Destination, &String);
          appended = RtlAppendUnicodeToString(&Destination, v16);
        }
      }
      v39 *= 2;
    }
  }
  if ( appended >= 0 )
  {
    if ( v25 )
    {
      *v25 = v49;
      v25[1] = (wchar_t *)((unsigned int)Destination.Length + 2);
    }
    else
    {
      *v50 = Destination;
    }
  }
  return (unsigned int)appended;
}
