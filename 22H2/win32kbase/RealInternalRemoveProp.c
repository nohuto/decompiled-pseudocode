/*
 * XREFs of RealInternalRemoveProp @ 0x1C0025CF0
 * Callers:
 *     <none>
 * Callees:
 *     _FindProp @ 0x1C0025D88 (_FindProp.c)
 *     UserGlobalAtomTableCallout @ 0x1C008705C (UserGlobalAtomTableCallout.c)
 *     ??0?$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ @ 0x1C0087174 (--0-$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ.c)
 *     UserDeleteAtomFromAtomTable @ 0x1C00871C0 (UserDeleteAtomFromAtomTable.c)
 */

__int64 __fastcall RealInternalRemoveProp(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // r8d
  __int16 v6; // r10d^2
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  result = FindProp(a1, a2, a3);
  v7 = result;
  if ( result )
  {
    v8 = *(_QWORD *)result;
    if ( !v5 && ((*(_BYTE *)(result + 10) & 2) != 0 || v6 == 1) )
    {
      CLockDomainExclusive<DLT_JOB>::CLockDomainExclusive<DLT_JOB>(v11);
      v10 = UserGlobalAtomTableCallout();
      if ( v10 )
        UserDeleteAtomFromAtomTable(v10, *(unsigned __int16 *)(v7 + 8));
    }
    --*(_DWORD *)(a1 + 4);
    result = v8;
    v9 = 2LL * *(unsigned int *)(a1 + 4);
    *(_OWORD *)v7 = *(_OWORD *)(a1 + 16LL * *(unsigned int *)(a1 + 4) + 8);
    *(_OWORD *)(a1 + 8 * v9 + 8) = 0LL;
  }
  return result;
}
