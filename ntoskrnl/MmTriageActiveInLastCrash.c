/*
 * XREFs of MmTriageActiveInLastCrash @ 0x140B96664
 * Callers:
 *     VfTriageSystem @ 0x140B49FDC (VfTriageSystem.c)
 * Callees:
 *     TriageGetBugcheckData @ 0x140B98DCC (TriageGetBugcheckData.c)
 *     TriagepVerifyDump @ 0x140B98EC0 (TriagepVerifyDump.c)
 */

__int64 __fastcall MmTriageActiveInLastCrash(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+38h] [rbp-30h] BYREF
  __int64 v9; // [rsp+40h] [rbp-28h] BYREF
  __int64 v10; // [rsp+48h] [rbp-20h] BYREF
  __int64 v11; // [rsp+50h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 240);
  v2 = 0;
  if ( !v1 )
    return 0LL;
  if ( *(_DWORD *)v1 < 0xF20u )
    return 0LL;
  v3 = *(_QWORD *)(v1 + 40);
  if ( (int)TriageGetBugcheckData(
              v3,
              (unsigned int)&v7,
              (unsigned int)&v8,
              (unsigned int)&v9,
              (__int64)&v10,
              (__int64)&v11) < 0 )
    return 0LL;
  if ( !(unsigned __int8)TriagepVerifyDump(v3) )
    return 0LL;
  v4 = v3 + (unsigned int)TriageImagePageSize;
  if ( !v4 )
    return 0LL;
  v5 = v3 + *(unsigned int *)(v4 + 20);
  if ( !v5 )
    return 0LL;
  LOBYTE(v2) = *(_DWORD *)(v5 + 12) != 0;
  return v2;
}
