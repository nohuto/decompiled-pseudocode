/*
 * XREFs of sub_1800CE248 @ 0x1800CE248
 * Callers:
 *     sub_1800CE190 @ 0x1800CE190 (sub_1800CE190.c)
 * Callees:
 *     sub_180053724 @ 0x180053724 (sub_180053724.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800C2D44 @ 0x1800C2D44 (sub_1800C2D44.c)
 *     sub_1800CDF74 @ 0x1800CDF74 (sub_1800CDF74.c)
 *     sub_1800CDFA4 @ 0x1800CDFA4 (sub_1800CDFA4.c)
 *     sub_1800CE11C @ 0x1800CE11C (sub_1800CE11C.c)
 *     sub_1800CFD1C @ 0x1800CFD1C (sub_1800CFD1C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800CE248(struct _RTL_CRITICAL_SECTION *a1, __int64 *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v3; // edi
  __int64 v4; // r14
  bool v5; // zf
  _QWORD *v6; // rax
  ATL::CAtlException *v8; // rbx
  ATL::CAtlException *v9; // rbx
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+20h] [rbp-48h]
  ATL::CAtlException *v11; // [rsp+28h] [rbp-40h] BYREF
  ATL::CAtlException *v12; // [rsp+30h] [rbp-38h] BYREF
  ATL::CAtlException *v13; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int64 v17; // [rsp+88h] [rbp+20h]

  v2 = a1;
  v3 = 0;
  EnterCriticalSection(a1);
  v4 = 0LL;
  try
  {
    while ( 1 )
    {
      v5 = (unsigned int)v4 == *(_QWORD *)&v2[1].LockCount;
      if ( (unsigned __int64)(unsigned int)v4 >= *(_QWORD *)&v2[1].LockCount )
        break;
      v6 = (_QWORD *)sub_1800C2D44(&v2[1].DebugInfo, (unsigned int)v4);
      if ( sub_1800CDFA4(v6, a2) )
      {
        v5 = (unsigned int)v4 == *(_QWORD *)&v2[1].LockCount;
        break;
      }
      v4 = (unsigned int)(v4 + 1);
    }
    if ( v5 )
    {
      try
      {
        v10 = v2 + 1;
        v17 = sub_1800CE11C(&v2[1].DebugInfo, a2);
      }
      catch ( ATL::CAtlException *v11 )
      {
        v8 = v11;
        if ( *(_DWORD *)v11 == -1073741571 )
          o__resetstkoflw();
        v3 = *(_DWORD *)v8;
        if ( *(int *)v8 < 0 )
        {
          v2 = a1;
          goto LABEL_26;
        }
        v2 = a1;
      }
      try
      {
        v3 = 0;
        sub_180053724(&v2[1].SpinCount);
      }
      catch ( ATL::CAtlException *v12 )
      {
        v9 = v12;
        if ( *(_DWORD *)v12 == -1073741571 )
          o__resetstkoflw();
        v3 = *(_DWORD *)v9;
        if ( *(int *)v9 >= 0 )
        {
          v2 = a1;
        }
        else
        {
          sub_1800CFD1C(v10, v17);
          v2 = a1;
        }
      }
    }
    else
    {
      if ( (PRTL_CRITICAL_SECTION_DEBUG)(unsigned int)v4 >= v2[2].DebugInfo )
        sub_1800B8610(-2147024809);
      ++*(_DWORD *)(v2[1].SpinCount + 4 * v4);
    }
  }
  catch ( ATL::CAtlException *v13 )
  {
    v2 = a1;
    v3 = *(_DWORD *)v13;
  }
LABEL_26:
  LeaveCriticalSection(v2);
  sub_1800CDF74(a2);
  return v3;
}
