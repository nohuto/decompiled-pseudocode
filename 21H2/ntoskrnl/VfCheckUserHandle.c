/*
 * XREFs of VfCheckUserHandle @ 0x1409DB184
 * Callers:
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     NtClose @ 0x140707D60 (NtClose.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140707FE0 (ObpReferenceObjectByHandleWithTag.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     RtlCaptureStackBackTrace @ 0x1402C1720 (RtlCaptureStackBackTrace.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlEqualUnicodeString @ 0x1406F0B70 (RtlEqualUnicodeString.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     ObQueryTypeName @ 0x1408DE030 (ObQueryTypeName.c)
 *     VfUtilIsLocalSystem @ 0x1409C77E4 (VfUtilIsLocalSystem.c)
 *     VfDriverIsKernelImageAddress @ 0x1409C98C0 (VfDriverIsKernelImageAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D1D54 (VerifierBugCheckIfAppropriate.c)
 *     VfTargetDriversIsEnabled @ 0x1409D7F30 (VfTargetDriversIsEnabled.c)
 */

void __fastcall VfCheckUserHandle(ULONG_PTR BugCheckParameter2)
{
  struct _KPROCESS *Process; // rbx
  USHORT v3; // ax
  unsigned int v4; // ebp
  __int64 v5; // rdi
  unsigned __int64 *v6; // r14
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  NTSTATUS v9; // eax
  struct _DMA_ADAPTER *v10; // rbp
  char v11; // si
  PVOID Object; // [rsp+30h] [rbp-B8h] BYREF
  int v13; // [rsp+38h] [rbp-B0h] BYREF
  PVOID BackTrace[8]; // [rsp+40h] [rbp-A8h] BYREF
  UNICODE_STRING String1; // [rsp+80h] [rbp-68h] BYREF

  memset(BackTrace, 0, sizeof(BackTrace));
  if ( (MmVerifierData & 0x100) != 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( PsInitialSystemProcess )
    {
      if ( Process != PsInitialSystemProcess && Process != PsIdleProcess )
      {
        if ( BugCheckParameter2 )
        {
          v3 = RtlCaptureStackBackTrace(2u, 8u, BackTrace, 0LL);
          v4 = v3;
          v5 = 0LL;
          if ( v3 )
          {
            v6 = (unsigned __int64 *)BackTrace;
            do
            {
              v7 = *v6;
              if ( VfDriverIsKernelImageAddress(*v6) )
              {
                if ( KernelVerifier )
                  break;
              }
              else
              {
                if ( (unsigned int)VfTargetDriversIsEnabled(v8) )
                  break;
                if ( !ViDriverXDVBase
                  || !ViDriverXDVImageSize
                  || v7 < ViDriverXDVBase
                  || v7 >= ViDriverXDVBase + (unsigned __int64)(unsigned int)ViDriverXDVImageSize )
                {
                  return;
                }
              }
              v5 = (unsigned int)(v5 + 1);
              ++v6;
            }
            while ( (unsigned int)v5 < v4 );
            if ( (unsigned int)v5 < v4 && !(unsigned int)VfUtilIsLocalSystem(Process) )
            {
              Object = 0LL;
              v9 = ObReferenceObjectByHandle((HANDLE)BugCheckParameter2, 0, 0LL, 1, &Object, 0LL);
              v10 = (struct _DMA_ADAPTER *)Object;
              if ( v9 < 0 )
                goto LABEL_25;
              v11 = 0;
              if ( (int)ObQueryTypeName((__int64)Object, (__int64)&String1, 0x40u, &v13) >= 0
                && (RtlEqualUnicodeString(&String1, &ViDesktopTypeName, 0)
                 || RtlEqualUnicodeString(&String1, &ViWindowStationTypeName, 0)) )
              {
                v11 = 1;
              }
              HalPutDmaAdapter(v10);
              if ( !v11 )
              {
LABEL_25:
                if ( ViHandleBreaksEnabled )
                  VerifierBugCheckIfAppropriate(
                    0xC4u,
                    0xF6uLL,
                    BugCheckParameter2,
                    (ULONG_PTR)Process,
                    (__int64)BackTrace[v5]);
              }
            }
          }
        }
      }
    }
  }
}
