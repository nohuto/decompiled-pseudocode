/*
 * XREFs of PpmFireWmiEvent @ 0x140596908
 * Callers:
 *     PpmEventDomainPerfStateChange @ 0x1402E5E8C (PpmEventDomainPerfStateChange.c)
 *     PpmEventLegacyProcessorPerfStateChange @ 0x1402ED898 (PpmEventLegacyProcessorPerfStateChange.c)
 *     PopFireThermalWmiEvent @ 0x14058D2A4 (PopFireThermalWmiEvent.c)
 *     PpmEventThermalCapChange @ 0x140599200 (PpmEventThermalCapChange.c)
 * Callees:
 *     IoWMIWriteEvent @ 0x1403A2D60 (IoWMIWriteEvent.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     PpmAllocWmiEvent @ 0x14059686C (PpmAllocWmiEvent.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmFireWmiEvent(__int64 a1, __int128 *a2, unsigned int a3, const void *a4)
{
  size_t v5; // rsi
  NTSTATUS v6; // ebx
  __int64 v7; // rax
  void *v8; // rdi

  v5 = a3;
  if ( *(_DWORD *)(a1 + 8) )
  {
    v7 = PpmAllocWmiEvent((PDEVICE_OBJECT)a1, a2, a3);
    v8 = (void *)v7;
    if ( v7 )
    {
      if ( a4 )
        memmove((void *)(v7 + *(unsigned int *)(v7 + 56)), a4, v5);
      v6 = IoWMIWriteEvent(v8);
      if ( v6 >= 0 )
        return 0;
      else
        ExFreePoolWithTag(v8, 0x774D5050u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v6;
}
