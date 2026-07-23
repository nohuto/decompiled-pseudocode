/*
 * XREFs of SepCaptureFqbnArray @ 0x140920D14
 * Callers:
 *     SepCaptureTokenSecurityAttributesInformation @ 0x140600F9C (SepCaptureTokenSecurityAttributesInformation.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepCaptureFqbnArray(char *Src, unsigned int a2, __int64 a3, _QWORD *a4)
{
  size_t v6; // rbx
  unsigned __int16 *PoolWithTag; // rdi
  SIZE_T v9; // rdx
  unsigned int i; // r8d
  unsigned int v11; // ecx
  _QWORD *v12; // rax
  _QWORD *v13; // r14
  unsigned int v14; // ebx
  char *v15; // rsi
  unsigned int j; // ebx
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx

  v6 = 24LL * a2;
  if ( v6 > 0xFFFFFFFF )
    return 3221225621LL;
  PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v6, 0x74416553u);
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
  if ( (((unsigned int)v6 + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) < (unsigned int)v6 )
  {
LABEL_27:
    v14 = -1073741675;
    goto LABEL_28;
  }
  v9 = ((_DWORD)v6 + 1) & 0xFFFFFFFE;
  for ( i = 0; i < a2; ++i )
  {
    v11 = v9 + PoolWithTag[12 * i + 4];
    if ( v11 < (unsigned int)v9 )
      goto LABEL_27;
    v9 = v11;
  }
  v12 = ExAllocatePoolWithTag(PagedPool, v9, 0x74416553u);
  v13 = v12;
  if ( !v12 )
  {
    v14 = -1073741670;
LABEL_28:
    ExFreePoolWithTag(PoolWithTag, 0);
    return v14;
  }
  memmove(v12, PoolWithTag, v6);
  v15 = (char *)(((unsigned __int64)&v13[v6 / 8] + 1) & 0xFFFFFFFFFFFFFFFEuLL);
  for ( j = 0; j < a2; ++j )
  {
    v17 = PoolWithTag[12 * j + 4];
    if ( (_WORD)v17 )
    {
      v18 = *(_QWORD *)&PoolWithTag[12 * j + 8];
      if ( (v18 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v18 + v17 > 0x7FFFFFFF0000LL || v18 + v17 < v18 )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        LOWORD(v17) = PoolWithTag[12 * j + 4];
      }
    }
    memmove(v15, *(const void **)&PoolWithTag[12 * j + 8], (unsigned __int16)v17);
    v13[3 * j + 2] = v15;
    v15 += PoolWithTag[12 * j + 4];
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  *a4 = v13;
  return 0LL;
}
