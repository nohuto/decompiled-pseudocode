/*
 * XREFs of NtGdiScaleValues @ 0x1C02C70B0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     GreScaleValues @ 0x1C02AA82C (GreScaleValues.c)
 */

__int64 __fastcall NtGdiScaleValues(HDC a1, char *a2, unsigned int a3)
{
  unsigned __int64 v6; // rdi
  void *v7; // rbx
  char *v8; // rcx
  SIZE_T v9; // r14
  __int64 v10; // rdx
  unsigned int v11; // edi
  __int64 v12; // r8

  v6 = 4LL * a3;
  if ( v6 > 0xFFFFFFFF )
    return 0LL;
  v7 = (void *)AllocFreeTmpBuffer((unsigned int)v6);
  if ( !v7 )
    return 0LL;
  if ( (_DWORD)v6 )
  {
    if ( ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = &a2[(unsigned int)v6];
    if ( (unsigned __int64)v8 > MmUserProbeAddress || v8 < a2 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v9 = (unsigned int)v6;
  memmove(v7, a2, (unsigned int)v6);
  v11 = GreScaleValues(a1, (int *)v7, a3);
  if ( v11 )
  {
    ProbeForWrite(a2, v9, 4u);
    memmove(a2, v7, v9);
  }
  FreeTmpBuffer(v7, v10, v12);
  return v11;
}
