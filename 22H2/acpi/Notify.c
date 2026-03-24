/*
 * XREFs of Notify @ 0x1C00250D0
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C0009F50 (ValidateArgTypes.c)
 *     LogError @ 0x1C002A2EC (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B810 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C540 (PrintDebugMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Notify(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  char v7; // al
  unsigned int v8; // eax

  v4 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "OI");
  if ( !v4 )
  {
    v5 = *(_QWORD *)(a2 + 80);
    if ( *(_QWORD *)(v5 + 56) > 0xFFuLL )
    {
      v4 = -1072431089;
      LogError(3222536207LL);
      AcpiDiagTraceAmlError(a1, 3222536207LL);
      PrintDebugMessage(115, *(_QWORD *)(*(_QWORD *)(a2 + 80) + 56LL), 0, 0, 0LL);
    }
    else if ( ghNotify )
    {
      v6 = *(_QWORD *)(v5 + 16);
      v7 = gdwfAMLI;
      *(_QWORD *)(a2 + 64) = v6;
      if ( (v7 & 4) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 112));
        v6 = *(_QWORD *)(a2 + 64);
        v5 = *(_QWORD *)(a2 + 80);
      }
      v8 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64 (__fastcall *)(__int64), __int64))ghNotify)(
             2LL,
             *(unsigned int *)(v5 + 56),
             v6 + 120,
             qword_1C00831C8,
             RestartCtxtCallback,
             a1 + 328);
      v4 = v8;
      if ( v8 == 259 )
      {
        return 32772;
      }
      else if ( v8 )
      {
        LogError(3222536198LL);
        AcpiDiagTraceAmlError(a1, 3222536198LL);
        PrintDebugMessage(114, v4, 0, 0, 0LL);
        return (unsigned int)-1072431098;
      }
    }
  }
  return v4;
}
