/*
 * XREFs of PopIdleWakeSystemImageCallback @ 0x1408F49C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x14036F14C (RtlUnicodeStringPrintf.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopIdleWakeSystemImageCallback(__int64 a1, unsigned __int64 *a2)
{
  _DWORD *v2; // r12
  unsigned int v3; // r8d
  unsigned int v4; // esi
  unsigned __int64 *v5; // rdi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  _DWORD *v9; // r15
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r14
  PVOID PoolWithTag; // rax

  v2 = (_DWORD *)a2[3];
  v3 = 0;
  v4 = 0;
  v5 = a2;
  do
  {
    v7 = *v5;
    if ( !*v5 )
      break;
    v8 = *(_QWORD *)(a1 + 48);
    if ( v7 >= v8 && v7 < v8 + *(unsigned int *)(a1 + 64) )
    {
      v9 = &v2[4 * (*v2)++];
      v10 = v7 - *(_QWORD *)(a1 + 48);
      v11 = *(unsigned __int16 *)(a1 + 88) + 24LL;
      if ( v11 > 0xFFFF )
        return (unsigned int)-2147483643;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, *(unsigned __int16 *)(a1 + 88) + 24LL, 0x67696450u);
      *((_QWORD *)v9 + 2) = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
      *((_WORD *)v9 + 4) = 0;
      *((_WORD *)v9 + 5) = v11;
      v3 = RtlUnicodeStringPrintf((PUNICODE_STRING)(v9 + 2), L"%s+0x%08X", *(_QWORD *)(a1 + 96), (unsigned int)v10);
    }
    ++v4;
    ++v5;
  }
  while ( v4 < 3 );
  return v3;
}
