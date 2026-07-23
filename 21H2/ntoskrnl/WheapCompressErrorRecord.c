/*
 * XREFs of WheapCompressErrorRecord @ 0x1405BBB20
 * Callers:
 *     WheapReportBootError @ 0x1405BB0F4 (WheapReportBootError.c)
 *     WheaReportHwError @ 0x1405BB360 (WheaReportHwError.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 */

void *__fastcall WheapCompressErrorRecord(char a1, __int64 a2)
{
  unsigned __int16 v2; // r8
  _QWORD *v5; // rbx
  __int16 v6; // bp
  unsigned int i; // esi
  __int64 v8; // rax
  unsigned int *v9; // rsi
  int v10; // r14d
  unsigned int v11; // ebx
  unsigned int v12; // ebp
  __int64 v13; // rax
  void *result; // rax

  v2 = *(_WORD *)(a2 + 10);
  if ( (a1 & 2) != 0 )
  {
    v5 = (_QWORD *)(a2 + 128);
    v6 = 0;
    for ( i = 0; i < v2; ++i )
    {
      v8 = v5[2] - *(_QWORD *)&WHEA_ERROR_PACKET_SECTION_GUID.Data1;
      if ( !v8 )
        v8 = v5[3] - *(_QWORD *)WHEA_ERROR_PACKET_SECTION_GUID.Data4;
      if ( v8 )
      {
        v5 += 9;
      }
      else
      {
        if ( v2 - i != 1 )
        {
          memmove(v5, v5 + 9, 72 * (v2 - i - 1));
          v2 = *(_WORD *)(a2 + 10);
        }
        ++v6;
      }
    }
    v2 -= v6;
    *(_WORD *)(a2 + 10) = v2;
  }
  v9 = (unsigned int *)(a2 + 128);
  v10 = a1 & 1;
  if ( v10 )
    v11 = 72 * v2 + 128;
  else
    v11 = *v9;
  v12 = 0;
  if ( v2 )
  {
    do
    {
      v13 = *v9;
      if ( v11 < (unsigned int)v13 )
      {
        memmove((void *)(a2 + v11), (const void *)(a2 + v13), v9[1]);
        *v9 = v11;
      }
      v11 += v9[1];
      ++v12;
      v9 += 18;
    }
    while ( v12 < *(unsigned __int16 *)(a2 + 10) );
  }
  result = memset((void *)(a2 + v11), 0, *(_DWORD *)(a2 + 20) - v11);
  if ( v10 )
    *(_DWORD *)(a2 + 20) = v11;
  return result;
}
