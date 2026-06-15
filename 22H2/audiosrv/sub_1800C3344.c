/*
 * XREFs of sub_1800C3344 @ 0x1800C3344
 * Callers:
 *     sub_1800C37C0 @ 0x1800C37C0 (sub_1800C37C0.c)
 * Callees:
 *     sub_180053770 @ 0x180053770 (sub_180053770.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800C28E0 @ 0x1800C28E0 (sub_1800C28E0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800C3344(LPCRITICAL_SECTION lpCriticalSection, void (__fastcall ***a2)(_QWORD, _QWORD))
{
  void (__fastcall ***v2)(_QWORD, _QWORD); // r15
  LPCRITICAL_SECTION v3; // r14
  unsigned int v4; // ebx
  unsigned __int64 v5; // rdi
  unsigned int i; // esi
  ATL::CAtlException *v8; // [rsp+20h] [rbp-58h] BYREF
  ATL::CAtlException *v9; // [rsp+28h] [rbp-50h] BYREF
  __int64 v10; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-40h]
  __int64 v12; // [rsp+40h] [rbp-38h]
  int v13; // [rsp+48h] [rbp-30h]
  unsigned __int64 v19; // [rsp+98h] [rbp+20h]

  v2 = a2;
  v3 = lpCriticalSection;
  v4 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v5 = 0LL;
  v19 = 0LL;
  EnterCriticalSection(lpCriticalSection);
  for ( i = 0; (unsigned __int64)i < *(_QWORD *)&v3[1].LockCount; ++i )
  {
    try
    {
      if ( (unsigned __int64)i >= *(_QWORD *)&v3[1].LockCount )
        sub_1800B8610(-2147024809);
      sub_180053770(&v10, (_DWORD *)&v3[1].DebugInfo->Type + i);
      v19 = ++v5;
    }
    catch ( ATL::CAtlException *v8 )
    {
      if ( *(_DWORD *)v8 == -1073741571 )
        o__resetstkoflw();
      v4 = 0;
      v3 = lpCriticalSection;
      v2 = a2;
      v5 = v19;
      continue;
    }
  }
  LeaveCriticalSection(v3);
  while ( v4 < v5 )
  {
    try
    {
      if ( v4 >= v11 )
        sub_1800B8610(-2147024809);
      (**v2)(v2, *(unsigned int *)(v10 + 4LL * v4));
    }
    catch ( ATL::CAtlException *v9 )
    {
      if ( *(_DWORD *)v9 == -1073741571 )
        o__resetstkoflw();
      v2 = a2;
      v5 = v19;
    }
    ++v4;
  }
  sub_1800C28E0(&v10);
  return 0LL;
}
