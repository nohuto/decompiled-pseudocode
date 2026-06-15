/*
 * XREFs of sub_1800F3EAC @ 0x1800F3EAC
 * Callers:
 *     sub_1800F26E0 @ 0x1800F26E0 (sub_1800F26E0.c)
 *     sub_1800F4D90 @ 0x1800F4D90 (sub_1800F4D90.c)
 * Callees:
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8CCC @ 0x1800B8CCC (sub_1800B8CCC.c)
 *     sub_1800B91A0 @ 0x1800B91A0 (sub_1800B91A0.c)
 *     sub_1800F29A4 @ 0x1800F29A4 (sub_1800F29A4.c)
 *     sub_1800F4CBC @ 0x1800F4CBC (sub_1800F4CBC.c)
 *     sub_1800F4F90 @ 0x1800F4F90 (sub_1800F4F90.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800F3EAC(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rbx
  _OWORD *v4; // rax
  __int64 *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rcx
  char v10; // di
  _QWORD *v11; // rbx
  __int64 v12; // rdx
  __int64 result; // rax
  _QWORD *v14; // [rsp+20h] [rbp-E0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-D8h] BYREF
  char v16; // [rsp+30h] [rbp-D0h]
  __int128 v17; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+48h] [rbp-B8h]
  __int128 v19; // [rsp+50h] [rbp-B0h]
  int v20; // [rsp+60h] [rbp-A0h]
  __int64 v21[36]; // [rsp+70h] [rbp-90h] BYREF
  int v22; // [rsp+194h] [rbp+94h]
  __int128 v23; // [rsp+540h] [rbp+440h] BYREF

  do
  {
    v17 = 0LL;
    v18 = 0LL;
    v19 = 0LL;
    v20 = 10;
    sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 120));
    v3 = *(_QWORD **)(a1 + 160);
    v14 = v3;
    while ( v3 )
    {
      v4 = (_OWORD *)sub_1800B8CCC(v2, (__int64)v3);
      v5 = v21;
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
      v23 = 0LL;
      if ( v22 == 1 )
      {
        sub_1800F29A4((__int64 *)&v17, v21[0]);
      }
      else
      {
        v8 = v21[0];
        while ( (int)RmGetNotification(v8, &v23) >= 0 )
        {
          if ( (_DWORD)v23 == 1 )
          {
            sub_1800F29A4((__int64 *)&v17, v8);
            v22 = 1;
            sub_1800F4F90(v9, v3, v21);
          }
        }
      }
      sub_1800B91A0(v7, &v14);
      v3 = v14;
    }
    if ( v16 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v16 = 0;
    }
    if ( v18 )
    {
      v10 = 0;
      v11 = (_QWORD *)v17;
      while ( v11 )
      {
        v12 = v11[2];
        v11 = (_QWORD *)*v11;
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 208) + 24LL))(*(_QWORD *)(a1 + 208), v12);
      }
    }
    else
    {
      v10 = 1;
    }
    result = sub_1800F4CBC(&v17);
  }
  while ( !v10 );
  return result;
}
