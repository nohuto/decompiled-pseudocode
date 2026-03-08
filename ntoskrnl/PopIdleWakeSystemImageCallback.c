/*
 * XREFs of PopIdleWakeSystemImageCallback @ 0x140998320
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x1403BEBCC (RtlUnicodeStringPrintf.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
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
  __int64 Pool2; // rax

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
      Pool2 = ExAllocatePool2(256LL, *(unsigned __int16 *)(a1 + 88) + 24LL, 1734960208LL);
      *((_QWORD *)v9 + 2) = Pool2;
      if ( !Pool2 )
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
