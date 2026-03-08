/*
 * XREFs of VfCheckUserHandle @ 0x140AD0CE4
 * Callers:
 *     ObDuplicateObject @ 0x1406ED5C0 (ObDuplicateObject.c)
 *     NtClose @ 0x1407C00E0 (NtClose.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCloseHandle @ 0x1407F0D20 (ObCloseHandle.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140205C20 (RtlCaptureStackBackTrace.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlEqualUnicodeString @ 0x1406EA560 (RtlEqualUnicodeString.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ObQueryTypeName @ 0x14097937C (ObQueryTypeName.c)
 *     VfUtilIsLocalSystem @ 0x140ABF724 (VfUtilIsLocalSystem.c)
 *     VfDriverIsKernelImageAddress @ 0x140AC7714 (VfDriverIsKernelImageAddress.c)
 *     VfTargetDriversIsEnabled @ 0x140AC8614 (VfTargetDriversIsEnabled.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 */

char __fastcall VfCheckUserHandle(ULONG_PTR BugCheckParameter2)
{
  struct _KPROCESS *Process; // rdi
  unsigned __int64 v3; // rax
  unsigned int v4; // ebp
  __int64 v5; // rbx
  unsigned __int64 *i; // r14
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  NTSTATUS v9; // eax
  PVOID v10; // rbp
  char v11; // si
  PVOID Object; // [rsp+30h] [rbp-B8h] BYREF
  int v14; // [rsp+38h] [rbp-B0h] BYREF
  PVOID BackTrace[8]; // [rsp+40h] [rbp-A8h] BYREF
  UNICODE_STRING String1; // [rsp+80h] [rbp-68h] BYREF

  memset(BackTrace, 0, sizeof(BackTrace));
  Process = KeGetCurrentThread()->ApcState.Process;
  LOBYTE(v3) = (_BYTE)PsInitialSystemProcess;
  if ( !PsInitialSystemProcess )
    return v3;
  if ( Process == PsInitialSystemProcess )
    return v3;
  if ( Process == PsIdleProcess )
    return v3;
  if ( !BugCheckParameter2 )
    return v3;
  LOWORD(v3) = RtlCaptureStackBackTrace(2u, 8u, BackTrace, 0LL);
  v4 = (unsigned __int16)v3;
  v5 = 0LL;
  if ( !(_WORD)v3 )
    return v3;
  for ( i = (unsigned __int64 *)BackTrace; ; ++i )
  {
    v7 = *i;
    LOBYTE(v3) = VfDriverIsKernelImageAddress(*i);
    if ( !(_DWORD)v3 )
      break;
    if ( KernelVerifier )
      goto LABEL_9;
LABEL_25:
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= v4 )
      return v3;
  }
  LODWORD(v3) = VfTargetDriversIsEnabled(v8);
  if ( !(_DWORD)v3 )
  {
    if ( !ViDriverXDVBase )
      return v3;
    LOBYTE(v3) = ViDriverXDVImageSize;
    if ( !ViDriverXDVImageSize )
      return v3;
    if ( v7 < ViDriverXDVBase )
      return v3;
    v3 = ViDriverXDVBase + (unsigned int)ViDriverXDVImageSize;
    if ( v7 >= v3 )
      return v3;
    goto LABEL_25;
  }
LABEL_9:
  if ( (unsigned int)v5 < v4 )
  {
    LODWORD(v3) = VfUtilIsLocalSystem(Process);
    if ( !(_DWORD)v3 )
    {
      Object = 0LL;
      v9 = ObReferenceObjectByHandle((HANDLE)BugCheckParameter2, 0, 0LL, 1, &Object, 0LL);
      v10 = Object;
      if ( v9 < 0 )
        goto LABEL_17;
      v11 = 0;
      if ( (int)ObQueryTypeName((__int64)Object, (__int64)&String1, 0x40u, &v14) >= 0
        && (RtlEqualUnicodeString(&String1, &ViDesktopTypeName, 0)
         || RtlEqualUnicodeString(&String1, &ViWindowStationTypeName, 0)) )
      {
        v11 = 1;
      }
      LOBYTE(v3) = ObfDereferenceObject(v10);
      if ( !v11 )
      {
LABEL_17:
        LOBYTE(v3) = ViHandleBreaksEnabled;
        if ( ViHandleBreaksEnabled )
          LOBYTE(v3) = VerifierBugCheckIfAppropriate(
                         0xC4u,
                         0xF6uLL,
                         BugCheckParameter2,
                         (ULONG_PTR)Process,
                         (__int64)BackTrace[v5]);
      }
    }
  }
  return v3;
}
