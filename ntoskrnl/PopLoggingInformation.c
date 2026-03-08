/*
 * XREFs of PopLoggingInformation @ 0x14097DDE4
 * Callers:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 *     PopDiagTraceControlCallback @ 0x14085EC40 (PopDiagTraceControlCallback.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopLoggingInformation(unsigned int **a1, unsigned int *a2)
{
  __int64 v2; // r9
  unsigned int v3; // edi
  int v6; // esi
  unsigned int v7; // r8d
  unsigned int v8; // edx
  unsigned int v9; // eax
  unsigned int v10; // ebx
  unsigned int *Pool2; // rax
  _OWORD *v12; // rbp
  __int64 v13; // r14
  size_t v14; // rbx

  v2 = PowerStateDisableReasonListHead;
  v3 = 0;
  v6 = 0;
  v7 = 4;
  while ( (__int64 *)v2 != &PowerStateDisableReasonListHead )
  {
    ++v6;
    v8 = v7 + 16;
    if ( v7 + 16 < v7 )
      return (unsigned int)-1073741675;
    v7 = v8 + *(_DWORD *)(v2 + 28);
    if ( v7 < v8 )
      return (unsigned int)-1073741675;
    v2 = *(_QWORD *)v2;
  }
  v9 = v7 + 16;
  if ( v6 )
    v9 = v7;
  v10 = v9;
  Pool2 = (unsigned int *)ExAllocatePool2(256LL, v9, 1718968931LL);
  if ( Pool2 )
  {
    *a2 = v10;
    v12 = Pool2 + 1;
    *a1 = Pool2;
    *Pool2 = v10;
    if ( v6 )
    {
      v13 = PowerStateDisableReasonListHead;
      while ( (__int64 *)v13 != &PowerStateDisableReasonListHead && v6 )
      {
        v14 = (unsigned int)(*(_DWORD *)(v13 + 28) + 16);
        memmove(v12, (const void *)(v13 + 16), v14);
        v13 = *(_QWORD *)v13;
        v12 = (_OWORD *)((char *)v12 + v14);
        --v6;
      }
    }
    else
    {
      *v12 = 0LL;
      Pool2[3] = 0;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
