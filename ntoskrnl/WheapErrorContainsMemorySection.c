/*
 * XREFs of WheapErrorContainsMemorySection @ 0x14060FE88
 * Callers:
 *     WheapPersistPageForMemoryError @ 0x14060EC18 (WheapPersistPageForMemoryError.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WheapErrorContainsMemorySection(__int64 a1)
{
  unsigned int v1; // eax
  char v2; // r10
  unsigned int v3; // r8d
  unsigned int *v4; // rdx
  unsigned int *v5; // r11
  unsigned int *v6; // rdx
  __int64 v7; // rax

  v1 = *(unsigned __int16 *)(a1 + 10);
  if ( !(_WORD)v1 )
    return 0LL;
  v2 = 0;
  v3 = 0;
  v4 = (unsigned int *)(a1 + 128);
  while ( 1 )
  {
    v5 = v4;
    if ( (v4[3] & 1) != 0 )
      break;
    ++v3;
    v4 += 18;
    if ( v3 >= v1 )
      goto LABEL_8;
  }
  v2 = 1;
LABEL_8:
  v6 = (unsigned int *)(a1 + 128);
  if ( v2 )
    v6 = v5;
  v7 = *((_QWORD *)v6 + 2) - *(_QWORD *)&MEMORY_ERROR_SECTION_GUID.Data1;
  if ( !v7 )
    v7 = *((_QWORD *)v6 + 3) - *(_QWORD *)MEMORY_ERROR_SECTION_GUID.Data4;
  if ( v7 )
    return 0LL;
  else
    return a1 + *v6;
}
