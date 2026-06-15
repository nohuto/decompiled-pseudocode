/*
 * XREFs of sub_1800C3DF0 @ 0x1800C3DF0
 * Callers:
 *     sub_1800C3170 @ 0x1800C3170 (sub_1800C3170.c)
 * Callees:
 *     sub_18005284C @ 0x18005284C (sub_18005284C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800C2D44 @ 0x1800C2D44 (sub_1800C2D44.c)
 *     sub_1800C3D30 @ 0x1800C3D30 (sub_1800C3D30.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800C3DF0(LPCRITICAL_SECTION lpCriticalSection, _QWORD **a2)
{
  _QWORD **v2; // rsi
  LPCRITICAL_SECTION v3; // rbx
  unsigned int v4; // r12d
  __int64 i; // r14
  __int64 v6; // r15
  _QWORD *v7; // rax
  ULONG_PTR *p_SpinCount; // r15
  ATL::CAtlException *v10; // [rsp+20h] [rbp-48h] BYREF

  v2 = a2;
  v3 = lpCriticalSection;
  v4 = 0;
  EnterCriticalSection(lpCriticalSection);
  for ( i = 0LL; (unsigned __int64)(unsigned int)i < *(_QWORD *)&v3[1].LockCount; i = (unsigned int)(i + 1) )
  {
    try
    {
      v6 = (__int64)*v2;
      v7 = (_QWORD *)sub_1800C2D44(&v3[1].DebugInfo, (unsigned int)i);
    }
    catch ( ATL::CAtlException *v10 )
    {
      v3 = lpCriticalSection;
      v2 = a2;
      v4 = *(_DWORD *)v10;
      break;
    }
    if ( *v7 == v6 )
    {
      p_SpinCount = &v3[1].SpinCount;
      if ( (PRTL_CRITICAL_SECTION_DEBUG)(unsigned int)i >= v3[2].DebugInfo )
        sub_1800B8610(-2147024809);
      --*(_DWORD *)(*p_SpinCount + 4 * i);
      if ( (PRTL_CRITICAL_SECTION_DEBUG)(unsigned int)i >= v3[2].DebugInfo )
        sub_1800B8610(-2147024809);
      if ( !*(_DWORD *)(*p_SpinCount + 4 * i) )
      {
        sub_1800C3D30((__int64 *)&v3[1], (unsigned int)i);
        sub_18005284C(&v3[1].SpinCount, (unsigned int)i);
        break;
      }
    }
  }
  LeaveCriticalSection(v3);
  if ( *v2 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**v2 + 16LL))(*v2, **v2);
  return v4;
}
