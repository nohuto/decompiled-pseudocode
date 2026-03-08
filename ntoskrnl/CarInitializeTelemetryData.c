/*
 * XREFs of CarInitializeTelemetryData @ 0x1405D1970
 * Callers:
 *     CarCreateTelemetryData @ 0x1405D161C (CarCreateTelemetryData.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140205C20 (RtlCaptureStackBackTrace.c)
 *     wcsncpy_s @ 0x1403DA3B0 (wcsncpy_s.c)
 *     CarCopyDriverName @ 0x1405D0358 (CarCopyDriverName.c)
 *     CarGetDriverInfoFromDriverName @ 0x1405D0C20 (CarGetDriverInfoFromDriverName.c)
 *     CarGetDriverInfoFromViolationStack @ 0x1405D0C78 (CarGetDriverInfoFromViolationStack.c)
 *     CarCreateViolationHashString @ 0x1405D313C (CarCreateViolationHashString.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     VfUtilGetDriverName @ 0x140ABF6B0 (VfUtilGetDriverName.c)
 */

__int64 __fastcall CarInitializeTelemetryData(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int16 **a4,
        __int64 a5)
{
  _QWORD *v10; // rbp
  __int64 DriverName; // rcx
  unsigned __int16 *v12; // rdi
  wchar_t *Pool2; // rax
  wchar_t *v14; // rbp

  if ( !a1 )
    return 3221225711LL;
  *(_DWORD *)(a1 + 1120) = a3;
  v10 = (_QWORD *)(a1 + 1128);
  *(_DWORD *)a1 = CarTipTag;
  RtlCaptureStackBackTrace(4u, 0xAu, (PVOID *)(a1 + 1128), 0LL);
  *(_QWORD *)(a1 + 1112) = a5;
  if ( a4 )
  {
    DriverName = (__int64)a4[7];
    if ( DriverName )
    {
LABEL_7:
      CarGetDriverInfoFromDriverName(DriverName, a1);
      return CarCreateViolationHashString(a1, a2, a3);
    }
    if ( a4[6] )
    {
      DriverName = VfUtilGetDriverName();
      goto LABEL_7;
    }
  }
  if ( CarUnloadingDriverData && *(_QWORD *)CarUnloadingDriverData )
  {
    CarCopyDriverName((_WORD *)(a1 + 4), (unsigned __int16 *)(*(_QWORD *)CarUnloadingDriverData + 24LL));
  }
  else if ( a3 - 8195 <= 2 )
  {
    v12 = *a4;
    if ( !v12 )
      return 3221225712LL;
    Pool2 = (wchar_t *)ExAllocatePool2(64LL, 2LL * *v12 + 2, 1316118851LL);
    v14 = Pool2;
    if ( !Pool2 )
      return 3221225495LL;
    wcsncpy_s(Pool2, *v12 + 1LL, *((const wchar_t **)v12 + 1), 0xFFFFFFFFFFFFFFFFuLL);
    CarGetDriverInfoFromDriverName((__int64)v14, a1);
    ExFreePoolWithTag(v14, 0x4E726143u);
  }
  else
  {
    CarGetDriverInfoFromViolationStack(
      v10,
      a1 + 80,
      a1 + 4,
      (_QWORD *)(a1 + 72),
      (_DWORD *)(a1 + 80),
      (_DWORD *)(a1 + 68));
  }
  return CarCreateViolationHashString(a1, a2, a3);
}
