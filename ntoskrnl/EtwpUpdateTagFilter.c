/*
 * XREFs of EtwpUpdateTagFilter @ 0x1408589E8
 * Callers:
 *     EtwpEnableMetaProviderGuid @ 0x140204F18 (EtwpEnableMetaProviderGuid.c)
 *     EtwpCheckForPoolTagFilterExtension @ 0x140858980 (EtwpCheckForPoolTagFilterExtension.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409DF094 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpUpdateTagFilter(_DWORD *a1, unsigned __int16 a2, __int64 a3)
{
  __int64 result; // rax
  int v4; // edx
  _DWORD *v5; // r9

  result = a2;
  v4 = 0;
  if ( (_WORD)result )
  {
    v5 = (_DWORD *)(a3 + 4);
    while ( *(_BYTE *)a1 != 42 && *a1 != 1061109567 )
    {
      *v5++ = *a1++;
      if ( ++v4 >= (unsigned int)result )
        goto LABEL_3;
    }
  }
  *(_DWORD *)(a3 + 4) = 42;
  result = 1LL;
LABEL_3:
  *(_WORD *)a3 = result;
  return result;
}
