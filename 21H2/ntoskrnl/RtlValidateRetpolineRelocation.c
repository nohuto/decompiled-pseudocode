/*
 * XREFs of RtlValidateRetpolineRelocation @ 0x1402A3BBC
 * Callers:
 *     MiCaptureRetpolineRelocationTables @ 0x1406C12A0 (MiCaptureRetpolineRelocationTables.c)
 * Callees:
 *     RtlSizeOfRetpolineRelocationEntry @ 0x1402A3FBC (RtlSizeOfRetpolineRelocationEntry.c)
 */

__int64 __fastcall RtlValidateRetpolineRelocation(_QWORD *a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v6; // eax
  unsigned int v7; // r10d
  unsigned int v8; // r11d
  unsigned int v9; // r9d
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rsi
  int v12; // edi
  unsigned __int64 v13; // r8
  __int64 v14; // r8
  unsigned int v15; // ecx
  unsigned __int64 v16; // rax

  v6 = RtlSizeOfRetpolineRelocationEntry(*a1);
  v9 = 0;
  v10 = v6;
  v11 = 0LL;
  v12 = 0;
  if ( v8 <= v7 )
  {
LABEL_12:
    *a3 = v12;
  }
  else
  {
    while ( 1 )
    {
      v13 = v7 + 8LL;
      if ( v13 < v7 )
        break;
      if ( v13 > v8 )
        break;
      v14 = *(unsigned int *)((char *)a1 + v7 + 4);
      if ( (unsigned int)v14 < 8 )
        break;
      v15 = v14 + v7;
      if ( (unsigned int)v14 + v7 < v7 )
        break;
      if ( v15 > v8 )
        break;
      v16 = *(unsigned int *)((char *)a1 + v7);
      if ( (unsigned int)v16 >= a2 || (v16 & 0xFFF) != 0 || v16 <= v11 || (v14 - 8) % v10 )
        break;
      v11 = (unsigned int)v16;
      v7 += v14;
      v12 += (v14 - 8) / v10;
      if ( v15 >= v8 )
        goto LABEL_12;
    }
    return (unsigned int)-1073741701;
  }
  return v9;
}
