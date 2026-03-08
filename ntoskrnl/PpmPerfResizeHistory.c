/*
 * XREFs of PpmPerfResizeHistory @ 0x140983A10
 * Callers:
 *     PpmRegisterPerfStates @ 0x14082802C (PpmRegisterPerfStates.c)
 *     PpmPerfResizeHistoryAll @ 0x140983ACC (PpmPerfResizeHistoryAll.c)
 * Callees:
 *     PpmGetPerfPolicyClass @ 0x140235B9C (PpmGetPerfPolicyClass.c)
 *     PpmPerfResetHistory @ 0x14038F778 (PpmPerfResetHistory.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmPerfResizeHistory(__int64 a1)
{
  unsigned int v2; // edi
  unsigned __int8 PerfPolicyClass; // al
  __int64 v4; // rcx
  _DWORD *v5; // rcx
  int v6; // ebp
  _DWORD *Pool2; // rax

  v2 = 0;
  PerfPolicyClass = PpmGetPerfPolicyClass((_BYTE *)a1);
  v5 = *(_DWORD **)(v4 + 32);
  v6 = *((unsigned __int8 *)&PpmCurrentProfile[55 * dword_140C3D48C + 8] + PerfPolicyClass);
  if ( v5 )
  {
    if ( *v5 == v6 )
      return v2;
    ExFreePoolWithTag(v5, 0x704D5050u);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  if ( (unsigned __int8)v6 > 1u )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, (unsigned int)(12 * v6 + 44), 1884115024LL);
    if ( Pool2 )
    {
      *Pool2 = v6;
      *(_QWORD *)(a1 + 32) = Pool2;
      PpmPerfResetHistory(a1);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v2;
}
