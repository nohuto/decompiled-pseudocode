/*
 * XREFs of PnprAddProcessorResources @ 0x14096285C
 * Callers:
 *     PnprAddDeviceResources @ 0x1409625E0 (PnprAddDeviceResources.c)
 * Callees:
 *     KeGetProcessorNumberFromIndex @ 0x1403644D0 (KeGetProcessorNumberFromIndex.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnprAddProcessorResources(__int64 a1, ULONG a2, int a3, _DWORD **a4)
{
  _DWORD *v4; // rbx
  int v8; // eax
  int v9; // r15d
  unsigned int v10; // r12d
  _DWORD *Pool2; // rax
  _DWORD *v12; // rbp
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  __int64 result; // rax
  __int64 ProcNumber; // [rsp+50h] [rbp+8h] BYREF

  ProcNumber = a1;
  v4 = *a4;
  LODWORD(ProcNumber) = 0;
  v8 = v4[4];
  if ( v8 == v4[3] )
  {
    v9 = v8 + 4;
    v10 = 4 * v8 + 20;
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, (unsigned int)(4 * (v8 + 4) + 20), 1366322768LL);
    v12 = Pool2;
    if ( !Pool2 )
    {
      v13 = PnprContext;
      v14 = *(_DWORD *)(PnprContext + 33272);
      if ( !v14 )
        v14 = 815;
      *(_DWORD *)(PnprContext + 33272) = v14;
      v15 = *(_DWORD *)(v13 + 33276);
      if ( !v15 )
        v15 = 10;
      *(_DWORD *)(v13 + 33276) = v15;
      return 3221225626LL;
    }
    memmove(Pool2, v4, v10);
    ExFreePoolWithTag(v4, 0x51706E50u);
    v4 = v12;
    v12[3] = v9;
  }
  if ( a2 != -1 )
  {
    KeGetProcessorNumberFromIndex(a2, (PPROCESSOR_NUMBER)&ProcNumber);
    *(_QWORD *)(*(_QWORD *)v4 + 8LL * (unsigned __int16)ProcNumber) |= 1LL << SBYTE2(ProcNumber);
  }
  v4[v4[4]++ + 5] = a3;
  result = 0LL;
  *a4 = v4;
  return result;
}
