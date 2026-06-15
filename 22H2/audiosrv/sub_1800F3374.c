/*
 * XREFs of sub_1800F3374 @ 0x1800F3374
 * Callers:
 *     sub_1800F3680 @ 0x1800F3680 (sub_1800F3680.c)
 * Callees:
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_1800B8CCC @ 0x1800B8CCC (sub_1800B8CCC.c)
 *     sub_1800B91A0 @ 0x1800B91A0 (sub_1800B91A0.c)
 *     sub_1800F22A4 @ 0x1800F22A4 (sub_1800F22A4.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800F3374(struct _RTL_CRITICAL_SECTION *a1, __int64 a2, int a3, _DWORD *a4, unsigned int *a5)
{
  __int64 v9; // rcx
  unsigned int v10; // edi
  _QWORD *p_Type; // rax
  _OWORD *v12; // rax
  __int16 *v13; // rcx
  __int64 v14; // rdx
  _QWORD *i; // [rsp+20h] [rbp-528h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-520h] BYREF
  char v17; // [rsp+30h] [rbp-518h]
  __int16 v18; // [rsp+40h] [rbp-508h] BYREF
  int v19; // [rsp+48h] [rbp-500h]
  unsigned int v20; // [rsp+508h] [rbp-40h]

  sub_180066980((__int64)&lpCriticalSection, a1 + 3);
  v10 = -1;
  p_Type = &a1[4].DebugInfo->Type;
  for ( i = p_Type; i; p_Type = i )
  {
    v12 = (_OWORD *)sub_1800B8CCC(v9, (__int64)p_Type);
    v13 = &v18;
    v14 = 9LL;
    do
    {
      *(_OWORD *)v13 = *v12;
      *((_OWORD *)v13 + 1) = v12[1];
      *((_OWORD *)v13 + 2) = v12[2];
      *((_OWORD *)v13 + 3) = v12[3];
      *((_OWORD *)v13 + 4) = v12[4];
      *((_OWORD *)v13 + 5) = v12[5];
      *((_OWORD *)v13 + 6) = v12[6];
      v13 += 64;
      *((_OWORD *)v13 - 1) = v12[7];
      v12 += 8;
      --v14;
    }
    while ( v14 );
    *(_OWORD *)v13 = *v12;
    *((_OWORD *)v13 + 1) = v12[1];
    *((_OWORD *)v13 + 2) = v12[2];
    *((_OWORD *)v13 + 3) = v12[3];
    *((_OWORD *)v13 + 4) = v12[4];
    if ( (!a3 || v19 != 1) && sub_1800F22A4(a2, &v18) && v20 < v10 )
      v10 = v20;
    sub_1800B91A0((__int64)v13, &i);
  }
  *a4 = v10 != -1;
  *a5 = v10;
  if ( v17 )
    LeaveCriticalSection(lpCriticalSection);
}
