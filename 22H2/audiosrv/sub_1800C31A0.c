/*
 * XREFs of sub_1800C31A0 @ 0x1800C31A0
 * Callers:
 *     sub_1800C37C0 @ 0x1800C37C0 (sub_1800C37C0.c)
 * Callees:
 *     sub_180048790 @ 0x180048790 (sub_180048790.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800C2904 @ 0x1800C2904 (sub_1800C2904.c)
 *     sub_1800C2D44 @ 0x1800C2D44 (sub_1800C2D44.c)
 *     sub_1800C2E6C @ 0x1800C2E6C (sub_1800C2E6C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800C31A0(LPCRITICAL_SECTION lpCriticalSection, void (__fastcall ***a2)(_QWORD, __int64 *))
{
  void (__fastcall ***v2)(_QWORD, __int64 *); // r15
  LPCRITICAL_SECTION v3; // r14
  unsigned int v4; // ebx
  unsigned __int64 v5; // rdi
  unsigned int i; // esi
  __int64 *v7; // rax
  __int64 *v8; // rax
  ATL::CAtlException *v10; // [rsp+20h] [rbp-68h] BYREF
  ATL::CAtlException *v11; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v12[3]; // [rsp+38h] [rbp-50h] BYREF
  int v13; // [rsp+50h] [rbp-38h]
  __int64 v16; // [rsp+A0h] [rbp+18h] BYREF
  unsigned __int64 v17; // [rsp+A8h] [rbp+20h]

  v2 = a2;
  v3 = lpCriticalSection;
  v4 = 0;
  memset(v12, 0, sizeof(v12));
  v13 = 0;
  v5 = 0LL;
  v17 = 0LL;
  EnterCriticalSection(lpCriticalSection);
  for ( i = 0; ; ++i )
  {
    LODWORD(v16) = i;
    if ( (unsigned __int64)i >= *(_QWORD *)&v3[1].LockCount )
      break;
    try
    {
      v7 = (__int64 *)sub_1800C2D44(&v3[1].DebugInfo, i);
      sub_1800C2E6C(v12, v7);
      v17 = ++v5;
    }
    catch ( ATL::CAtlException *v10 )
    {
      if ( *(_DWORD *)v10 == -1073741571 )
        o__resetstkoflw();
      v4 = 0;
      v3 = lpCriticalSection;
      v2 = a2;
      v5 = v17;
      i = v16;
      continue;
    }
  }
  LeaveCriticalSection(v3);
  while ( v4 < v5 )
  {
    try
    {
      v8 = (__int64 *)sub_1800C2D44(v12, v4);
      sub_180048790(&v16, *v8);
      (**v2)(v2, &v16);
    }
    catch ( ATL::CAtlException *v11 )
    {
      if ( *(_DWORD *)v11 == -1073741571 )
        o__resetstkoflw();
      v2 = a2;
      v5 = v17;
    }
    ++v4;
  }
  sub_1800C2904(v12);
  return 0LL;
}
