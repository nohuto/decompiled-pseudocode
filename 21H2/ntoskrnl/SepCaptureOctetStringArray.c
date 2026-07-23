/*
 * XREFs of SepCaptureOctetStringArray @ 0x140920F4C
 * Callers:
 *     SepCaptureTokenSecurityAttributesInformation @ 0x140600F9C (SepCaptureTokenSecurityAttributesInformation.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepCaptureOctetStringArray(char *Src, unsigned int a2, __int64 a3, _QWORD *a4)
{
  size_t v6; // r14
  unsigned int v7; // ebx
  unsigned int *PoolWithTag; // rdi
  unsigned int i; // ecx
  unsigned int v11; // ebx
  _QWORD *v12; // rax
  _QWORD *v13; // rsi
  char *v14; // r15
  unsigned int j; // ebx
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx

  v6 = 16LL * a2;
  if ( v6 > 0xFFFFFFFF )
    return 3221225621LL;
  v7 = 16 * a2;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v6, 0x74416553u);
  if ( !PoolWithTag )
    return 3221225626LL;
  if ( (_DWORD)v6 )
  {
    if ( ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&Src[(unsigned int)v6] > 0x7FFFFFFF0000LL || &Src[(unsigned int)v6] < Src )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  memmove(PoolWithTag, Src, (unsigned int)v6);
  for ( i = 0; i < a2; ++i )
  {
    if ( v7 + PoolWithTag[4 * i + 2] < v7 )
    {
      v11 = -1073741675;
LABEL_17:
      ExFreePoolWithTag(PoolWithTag, 0);
      return v11;
    }
    v7 += PoolWithTag[4 * i + 2];
  }
  v12 = ExAllocatePoolWithTag(PagedPool, v7, 0x74416553u);
  v13 = v12;
  if ( !v12 )
  {
    v11 = -1073741670;
    goto LABEL_17;
  }
  memmove(v12, PoolWithTag, v6);
  v14 = (char *)&v13[v6 / 8];
  for ( j = 0; j < a2; ++j )
  {
    v16 = PoolWithTag[4 * j + 2];
    if ( (_DWORD)v16 )
    {
      v17 = *(_QWORD *)&PoolWithTag[4 * j];
      if ( v17 + v16 > 0x7FFFFFFF0000LL || v17 + v16 < v17 )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        LODWORD(v16) = PoolWithTag[4 * j + 2];
      }
    }
    memmove(v14, *(const void **)&PoolWithTag[4 * j], (unsigned int)v16);
    v13[2 * j] = v14;
    v14 += PoolWithTag[4 * j + 2];
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  *a4 = v13;
  return 0LL;
}
