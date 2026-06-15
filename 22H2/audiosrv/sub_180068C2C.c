/*
 * XREFs of sub_180068C2C @ 0x180068C2C
 * Callers:
 *     sub_180068C10 @ 0x180068C10 (sub_180068C10.c)
 * Callees:
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18013DDD8 @ 0x18013DDD8 (sub_18013DDD8.c)
 */

// Hidden C++ exception states: #wind=2
DWORD __fastcall sub_180068C2C(__int64 a1)
{
  DWORD result; // eax
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 *v5; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-20h] BYREF
  char v7; // [rsp+28h] [rbp-18h]
  HANDLE Handles[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+20h] BYREF
  __int64 v10; // [rsp+68h] [rbp+28h]

  Handles[0] = *(HANDLE *)(a1 + 216);
  Handles[1] = *(HANDLE *)(a1 + 208);
  while ( 1 )
  {
    result = WaitForMultipleObjects(2u, Handles, 0, 0xFFFFFFFF);
    if ( !result )
      break;
    if ( result == 1 )
    {
      do
      {
        v3 = 0LL;
        v10 = 0LL;
        sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 168));
        v4 = *(_QWORD *)(a1 + 136);
        if ( v4 )
        {
          v5 = (__int64 *)sub_18013DDD8(a1 + 120, &v9);
          v3 = *v5;
          *v5 = 0LL;
          v10 = v3;
          if ( v9 )
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 8LL))(v9, 1LL);
          v9 = 0LL;
        }
        if ( v7 )
        {
          LeaveCriticalSection(lpCriticalSection);
          v7 = 0;
        }
        if ( v4 )
          (**(void (__fastcall ***)(__int64, __int64))v3)(v3, a1);
        if ( v3 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 8LL))(v3, 1LL);
      }
      while ( v4 );
    }
  }
  return result;
}
