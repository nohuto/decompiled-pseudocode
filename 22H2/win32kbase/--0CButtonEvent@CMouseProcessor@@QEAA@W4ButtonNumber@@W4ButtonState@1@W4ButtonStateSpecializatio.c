/*
 * XREFs of ??0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecialization@1@PEBVCMouseEvent@1@@Z @ 0x1C009CDA0
 * Callers:
 *     ?ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C009CC80 (-ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     _anonymous_namespace_::IsMouseButtonSwapped @ 0x1C009CE78 (_anonymous_namespace_--IsMouseButtonSwapped.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::CButtonEvent::CButtonEvent(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  __int64 v6; // r10
  void *v7; // rax

  v6 = *(_QWORD *)(a5 + 8);
  *(_QWORD *)a1 = &CMouseProcessor::CButtonEvent::`vftable';
  *(_QWORD *)(a1 + 8) = v6;
  *(_DWORD *)(a1 + 24) = a2;
  *(_DWORD *)(a1 + 28) = a2;
  *(_DWORD *)(a1 + 32) = a3;
  *(_DWORD *)(a1 + 36) = a4;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 16) = 2;
  if ( !(_DWORD)a2 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6985LL);
    a2 = *(unsigned int *)(a1 + 24);
  }
  if ( (((_DWORD)a2 - 1) & (unsigned int)a2) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6988LL);
  if ( (unsigned int)(*(_DWORD *)(a1 + 32) - 1) > 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6990LL);
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 112LL) & 0x400) == 0 )
  {
    LOBYTE(a2) = *(_DWORD *)(a1 + 32) == 2;
    if ( (unsigned __int8)anonymous_namespace_::IsMouseButtonSwapped(*(unsigned int *)(a1 + 24), a2) )
      *(_DWORD *)(a1 + 24) ^= 3u;
  }
  if ( *(_QWORD *)(a1 + 40) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6997LL);
  switch ( *(_DWORD *)(a1 + 24) )
  {
    case 1:
      v7 = &CMouseProcessor::CButtonEvent::_dependentInfo;
      break;
    case 2:
      v7 = &unk_1C020EA48;
      break;
    case 4:
      v7 = &unk_1C020EA60;
      break;
    case 8:
      v7 = &unk_1C020EA78;
      break;
    case 0x10:
      v7 = &unk_1C020EA90;
      break;
    default:
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7027LL);
      return a1;
  }
  *(_QWORD *)(a1 + 40) = v7;
  return a1;
}
