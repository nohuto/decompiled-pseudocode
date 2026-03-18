/*
 * XREFs of ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x1C00226A0
 * Callers:
 *     DrvEnumDisplayDevices @ 0x1C0023B90 (DrvEnumDisplayDevices.c)
 *     DrvEnumDisplaySettings @ 0x1C0033CC0 (DrvEnumDisplaySettings.c)
 *     ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00BB234 (-DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVI.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0029EC8 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     memmove @ 0x1C00D6F40 (memmove.c)
 */

__int64 __fastcall DrvProbeAndCaptureString(struct _UNICODE_STRING *a1, struct AUTO_FREE_STRING *a2)
{
  size_t Length; // rbx
  _QWORD *v5; // rax
  struct _UNICODE_STRING Src; // [rsp+20h] [rbp-18h]

  Src = *a1;
  Length = a1->Length;
  v5 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
         gpLeakTrackingAllocator,
         0x104uLL,
         (unsigned int)a1->Length + 18,
         0x73726447u);
  *(_QWORD *)a2 = v5;
  if ( v5 )
  {
    v5[1] = v5 + 2;
    **(_WORD **)a2 = Length;
    *(_WORD *)(*(_QWORD *)a2 + 2LL) = Length + 2;
    if ( (_WORD)Length )
    {
      if ( (PWSTR)((char *)Src.Buffer + Length) > (PWSTR)MmUserProbeAddress
        || (char *)Src.Buffer + Length < (char *)Src.Buffer )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(*(void **)(*(_QWORD *)a2 + 8LL), Src.Buffer, Length);
    }
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)a2 + 8LL) + 2 * (Length >> 1)) = 0;
    return 0LL;
  }
  else
  {
    WdLogSingleEntry2(6LL, a1);
    return 3221225495LL;
  }
}
