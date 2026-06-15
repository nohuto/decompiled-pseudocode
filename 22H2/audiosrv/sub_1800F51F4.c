/*
 * XREFs of sub_1800F51F4 @ 0x1800F51F4
 * Callers:
 *     sub_1800F3680 @ 0x1800F3680 (sub_1800F3680.c)
 * Callees:
 *     sub_180057300 @ 0x180057300 (sub_180057300.c)
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_1800B8CCC @ 0x1800B8CCC (sub_1800B8CCC.c)
 *     sub_1800B91A0 @ 0x1800B91A0 (sub_1800B91A0.c)
 *     sub_1800F4F90 @ 0x1800F4F90 (sub_1800F4F90.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800F51F4(struct _RTL_CRITICAL_SECTION *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v9; // rcx
  _QWORD *p_Type; // rbx
  _OWORD *v11; // rax
  _OWORD *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *i; // [rsp+20h] [rbp-E0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-D8h] BYREF
  char v17; // [rsp+30h] [rbp-D0h]
  _OWORD v18[17]; // [rsp+40h] [rbp-C0h] BYREF
  int v19; // [rsp+15Ch] [rbp+5Ch]
  _WORD v20[201]; // [rsp+168h] [rbp+68h] BYREF
  _WORD v21[261]; // [rsp+2FAh] [rbp+1FAh] BYREF
  int v22; // [rsp+504h] [rbp+404h]

  sub_180066980((__int64)&lpCriticalSection, a1 + 3);
  p_Type = &a1[4].DebugInfo->Type;
  for ( i = p_Type; i; p_Type = i )
  {
    v11 = (_OWORD *)sub_1800B8CCC(v9, (__int64)p_Type);
    v12 = v18;
    v13 = 9LL;
    do
    {
      *v12 = *v11;
      v12[1] = v11[1];
      v12[2] = v11[2];
      v12[3] = v11[3];
      v12[4] = v11[4];
      v12[5] = v11[5];
      v12[6] = v11[6];
      v12 += 8;
      *(v12 - 1) = v11[7];
      v11 += 8;
      --v13;
    }
    while ( v13 );
    *v12 = *v11;
    v12[1] = v11[1];
    v12[2] = v11[2];
    v12[3] = v11[3];
    v12[4] = v11[4];
    if ( DWORD2(v18[0]) == 1 && v19 == a6 )
    {
      if ( a3 )
        sub_180057300(v20, 201LL, a3);
      else
        v20[0] = 0;
      sub_180057300(v21, 261LL, a4);
      v22 = a5;
      sub_1800F4F90(v14, (__int64)p_Type, v18);
    }
    sub_1800B91A0((__int64)v12, &i);
  }
  if ( v17 )
    LeaveCriticalSection(lpCriticalSection);
}
