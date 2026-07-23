/*
 * XREFs of TtmpPublishDisplayRequiredPowerRequestEvents @ 0x140900018
 * Callers:
 *     TtmiWriteEnumerationEventsToQueue @ 0x1408FF63C (TtmiWriteEnumerationEventsToQueue.c)
 * Callees:
 *     TtmpWriteDisplayRequiredPowerRequestUpdatedEvent @ 0x140900748 (TtmpWriteDisplayRequiredPowerRequestUpdatedEvent.c)
 */

unsigned __int64 __fastcall TtmpPublishDisplayRequiredPowerRequestEvents(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rsi
  unsigned __int64 *v4; // rbx
  unsigned __int64 v6; // r8
  unsigned __int64 result; // rax
  unsigned __int64 *v8; // rdx
  unsigned __int64 v9; // r8

  v2 = *(unsigned __int64 **)(a1 + 280);
  v4 = v2;
  while ( 1 )
  {
    if ( !v4 )
      goto LABEL_7;
    v6 = *v4;
    result = *v4 & 0x8000000000000002uLL;
    if ( result == 0x8000000000000002uLL )
    {
      result = MEMORY[0];
      v6 = *v4;
    }
    if ( (v6 & 1) != 0 )
    {
LABEL_7:
      v8 = v2 + 1;
      result = *(_QWORD *)(a1 + 280);
      v9 = result + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 276) >> 5);
      while ( 1 )
      {
        if ( (unsigned __int64)v8 >= v9 )
        {
          v6 = 0LL;
          goto LABEL_12;
        }
        result = *v8;
        if ( (*v8 & 1) == 0 )
          break;
        ++v8;
      }
      v4 = (unsigned __int64 *)*v8;
      v2 = v8;
      v6 = *v8;
    }
    else
    {
      v4 = (unsigned __int64 *)v6;
    }
LABEL_12:
    if ( !v6 )
      return result;
    if ( *(_DWORD *)(v6 + 40) )
      TtmpWriteDisplayRequiredPowerRequestUpdatedEvent(a1, a2);
  }
}
