/*
 * XREFs of ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x1C001F804
 * Callers:
 *     DrvEnumDisplaySettings @ 0x1C001F9E0 (DrvEnumDisplaySettings.c)
 *     DrvEnumDisplayDevices @ 0x1C0027520 (DrvEnumDisplayDevices.c)
 *     ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00B0224 (-DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVI.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C002AE08 (PALLOCMEM2.c)
 *     memmove @ 0x1C00CF880 (memmove.c)
 */

__int64 __fastcall DrvProbeAndCaptureString(struct _UNICODE_STRING *a1, struct AUTO_FREE_STRING *a2)
{
  unsigned __int64 Length; // rbx
  __int64 v5; // rax
  __int64 v7; // rax
  struct _UNICODE_STRING Src; // [rsp+20h] [rbp-18h]

  Src = *a1;
  Length = a1->Length;
  v5 = PALLOCMEM2((unsigned int)a1->Length + 18);
  *(_QWORD *)a2 = v5;
  if ( v5 )
  {
    *(_QWORD *)(v5 + 8) = v5 + 16;
    **(_WORD **)a2 = Length;
    *(_WORD *)(*(_QWORD *)a2 + 2LL) = Length + 2;
    if ( (_WORD)Length )
    {
      if ( (PWSTR)((char *)Src.Buffer + Length) > (PWSTR)MmUserProbeAddress
        || (char *)Src.Buffer + Length < (char *)Src.Buffer )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(*(void **)(*(_QWORD *)a2 + 8LL), Src.Buffer, (unsigned int)Length);
    }
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)a2 + 8LL) + 2 * (Length >> 1)) = 0;
    return 0LL;
  }
  else
  {
    v7 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v7 + 24) = a1;
    *(_QWORD *)(v7 + 32) = Length;
    WdLogEvent5_WdLowResource(v7);
    return 3221225495LL;
  }
}
