/*
 * XREFs of sub_1800F48E4 @ 0x1800F48E4
 * Callers:
 *     sub_1800F503C @ 0x1800F503C (sub_1800F503C.c)
 * Callees:
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     sub_1800B8CCC @ 0x1800B8CCC (sub_1800B8CCC.c)
 *     sub_1800B91A0 @ 0x1800B91A0 (sub_1800B91A0.c)
 *     sub_1800BC578 @ 0x1800BC578 (sub_1800BC578.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800F48E4(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  _OWORD *v4; // rax
  __int64 *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-4E8h] BYREF
  char v9; // [rsp+28h] [rbp-4E0h]
  __int64 v10; // [rsp+30h] [rbp-4D8h] BYREF
  _QWORD *v11; // [rsp+510h] [rbp+8h] BYREF

  sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 120));
  v3 = *(_QWORD **)(a1 + 160);
  v11 = v3;
  while ( v3 )
  {
    v4 = (_OWORD *)sub_1800B8CCC(v2, (__int64)v3);
    v5 = &v10;
    v6 = 9LL;
    do
    {
      *(_OWORD *)v5 = *v4;
      *((_OWORD *)v5 + 1) = v4[1];
      *((_OWORD *)v5 + 2) = v4[2];
      *((_OWORD *)v5 + 3) = v4[3];
      *((_OWORD *)v5 + 4) = v4[4];
      *((_OWORD *)v5 + 5) = v4[5];
      *((_OWORD *)v5 + 6) = v4[6];
      v5 += 16;
      *((_OWORD *)v5 - 1) = v4[7];
      v4 += 8;
      --v6;
    }
    while ( v6 );
    *(_OWORD *)v5 = *v4;
    *((_OWORD *)v5 + 1) = v4[1];
    *((_OWORD *)v5 + 2) = v4[2];
    *((_OWORD *)v5 + 3) = v4[3];
    *((_OWORD *)v5 + 4) = v4[4];
    RmReleaseResources(v10);
    sub_1800B91A0(v7, &v11);
    v3 = v11;
  }
  sub_1800BC578((__int64 *)(a1 + 160));
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
}
