/*
 * XREFs of xxxCreateClassSmIcon @ 0x1C00A2E38
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     xxxRecreateSmallIcons @ 0x1C0158A28 (xxxRecreateSmallIcons.c)
 *     xxxSetClassIcon @ 0x1C0239060 (xxxSetClassIcon.c)
 * Callees:
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagCLS@@PEAX@Z @ 0x1C0061130 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagC.c)
 *     GetDpiDependentMetric @ 0x1C006718C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C006878C (GetDpiForSystem.c)
 *     xxxClientCopyImage @ 0x1C00A387C (xxxClientCopyImage.c)
 */

__int64 __fastcall xxxCreateClassSmIcon(__int64 a1, __int64 a2)
{
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // eax
  int v8; // r11d
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 result; // rax
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v13[3]; // [rsp+40h] [rbp-18h] BYREF

  DpiForSystem = GetDpiForSystem(a1, a2);
  DpiDependentMetric = GetDpiDependentMetric(21LL, DpiForSystem);
  v7 = GetDpiForSystem(v6, v5);
  v8 = GetDpiDependentMetric(20LL, v7);
  if ( *(_QWORD *)(**(_QWORD **)a1 + 80LL) )
    v9 = **(_QWORD **)(**(_QWORD **)a1 + 80LL);
  else
    LODWORD(v9) = 0;
  v10 = (_QWORD *)xxxClientCopyImage(
                    v9,
                    (unsigned int)(*(_WORD *)(*(_QWORD *)(**(_QWORD **)a1 + 80LL) + 74LL) != 3) + 1,
                    v8,
                    DpiDependentMetric,
                    0x4000);
  v12 = *(_OWORD *)LockPointer(v13, **(_QWORD **)a1 + 112LL, v10);
  HMAssignmentLock(&v12, 0LL);
  result = *(_QWORD *)a1;
  if ( *(_QWORD *)(**(_QWORD **)a1 + 112LL) )
  {
    result = *(_QWORD *)(**(_QWORD **)a1 + 8LL);
    *(_WORD *)(result + 6) |= 0x20u;
  }
  return result;
}
