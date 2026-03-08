/*
 * XREFs of sub_1406AF7C4 @ 0x1406AF7C4
 * Callers:
 *     WbHeapExecuteCall @ 0x1406AF56C (WbHeapExecuteCall.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 */

__int64 __fastcall sub_1406AF7C4(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4, char *a5, unsigned int Size)
{
  unsigned int v9; // ebx
  unsigned int i; // edi
  __int64 v11; // rdx
  __int64 v12; // rax
  _QWORD *v13; // rdx

  v9 = 0;
  if ( *(_QWORD *)(a1 + 296) )
  {
    if ( Size < 0x20 )
      return (unsigned int)-2147483643;
    a4[3] = *(_QWORD *)(a2 + 32);
  }
  for ( i = 0; i < (*(_DWORD *)(a1 + 324) >> 10) + 1; ++i )
    ProbeForWrite((volatile void *)(*a3 - (i << 10)), 8uLL, 1u);
  v11 = *a3;
  v12 = *a3 - 32;
  *a3 = v12;
  if ( (v12 & 0xF) != 0 )
    v13 = (_QWORD *)(v11 - 48);
  else
    v13 = (_QWORD *)(v11 - 40);
  *a3 = (__int64)v13;
  *v13 = a5 + 16;
  memmove(a5, a4, Size);
  return v9;
}
