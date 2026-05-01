/*
 * XREFs of ?RmpCommitThresholdsScaleToTarget@@YAJPEAU_RM_COMMIT_THRESHOLDS@@_K0@Z @ 0x180064A38
 * Callers:
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x18001D460 (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 * Callees:
 *     ?RmpCommitThresholdsMultiplyByValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K0@Z @ 0x1800649E0 (-RmpCommitThresholdsMultiplyByValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K0@Z.c)
 *     ?RmpCommitValuesDivide@@YAX_K0PEA_K@Z @ 0x180064AD8 (-RmpCommitValuesDivide@@YAX_K0PEA_K@Z.c)
 */

__int64 __fastcall RmpCommitThresholdsScaleToTarget(
        struct _RM_COMMIT_THRESHOLDS *a1,
        unsigned __int64 a2,
        struct _RM_COMMIT_THRESHOLDS *a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int128 v4; // rax
  unsigned int v6; // ebx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  unsigned __int64 *v12; // r9
  bool v13; // cc
  unsigned __int64 *v14; // rdx

  v3 = a2;
  v4 = a2 * (unsigned __int128)0x400uLL;
  v6 = 0;
  if ( is_mul_ok(a2, 0x400uLL) )
  {
    v8 = v4 / *((unsigned __int64 *)a1 + 2);
    if ( v8 )
    {
      RmpCommitThresholdsMultiplyByValue(a1, v8, a3);
      RmpCommitValuesDivide(*((_QWORD *)a3 + 3), v9, (unsigned __int64 *)a3 + 3);
      RmpCommitValuesDivide(*((_QWORD *)a3 + 2), (unsigned __int64)a3 + 16, (unsigned __int64 *)a3 + 2);
      RmpCommitValuesDivide(*((_QWORD *)a3 + 1), v10, (unsigned __int64 *)a3 + 1);
      RmpCommitValuesDivide(*(_QWORD *)a3, v11, (unsigned __int64 *)a3);
      v13 = *v12 <= v3;
      *v14 = v3;
      if ( !v13 )
        v3 = *v12;
      *v12 = v3;
    }
    else
    {
      return (unsigned int)-1073741676;
    }
  }
  else
  {
    return (unsigned int)-1073741675;
  }
  return v6;
}
