/*
 * XREFs of WheapCompressErrorRecord @ 0x14060E978
 * Callers:
 *     WheaRecoveryBugCheck @ 0x14060E210 (WheaRecoveryBugCheck.c)
 *     WheaReportHwError @ 0x14060E280 (WheaReportHwError.c)
 *     WheapGenerateETWEvents @ 0x140610F18 (WheapGenerateETWEvents.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

void *__fastcall WheapCompressErrorRecord(char a1, __int64 a2)
{
  unsigned int *v2; // rsi
  unsigned __int16 *v3; // rdi
  unsigned __int16 v6; // cx
  _QWORD *v7; // rbx
  __int16 v8; // r15
  unsigned int i; // ebp
  __int64 v10; // rax
  int v11; // r12d
  unsigned int v12; // ebx
  unsigned int j; // r15d
  __int64 v14; // rax
  void *result; // rax

  v2 = (unsigned int *)(a2 + 128);
  v3 = (unsigned __int16 *)(a2 + 10);
  if ( (a1 & 2) != 0 )
  {
    v6 = *v3;
    v7 = (_QWORD *)(a2 + 128);
    v8 = 0;
    for ( i = 0; i < v6; ++i )
    {
      v10 = v7[2] - *(_QWORD *)&WHEA_ERROR_PACKET_SECTION_GUID.Data1;
      if ( !v10 )
        v10 = v7[3] - *(_QWORD *)WHEA_ERROR_PACKET_SECTION_GUID.Data4;
      if ( v10 )
      {
        v7 += 9;
      }
      else
      {
        if ( v6 - i != 1 )
        {
          memmove(v7, v7 + 9, 72 * (v6 - i - 1));
          v6 = *v3;
        }
        ++v8;
      }
    }
    *v3 = v6 - v8;
  }
  v11 = a1 & 1;
  if ( v11 )
    v12 = 72 * *v3 + 128;
  else
    v12 = *v2;
  for ( j = 0; j < *v3; v2 += 18 )
  {
    v14 = *v2;
    if ( v12 < (unsigned int)v14 )
    {
      memmove((void *)(a2 + v12), (const void *)(a2 + v14), v2[1]);
      *v2 = v12;
    }
    v12 += v2[1];
    ++j;
  }
  result = memset((void *)(a2 + v12), 0, *(_DWORD *)(a2 + 20) - v12);
  if ( v11 )
    *(_DWORD *)(a2 + 20) = v12;
  return result;
}
