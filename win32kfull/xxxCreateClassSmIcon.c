__int64 __fastcall xxxCreateClassSmIcon(__int64 a1)
{
  int DpiForSystem; // eax
  int DpiDependentMetric; // edi
  __int64 v4; // rcx
  int v5; // eax
  int v6; // r11d
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 result; // rax
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v11[24]; // [rsp+40h] [rbp-18h] BYREF

  DpiForSystem = GetDpiForSystem(a1);
  DpiDependentMetric = GetDpiDependentMetric(21, DpiForSystem);
  v5 = GetDpiForSystem(v4);
  v6 = GetDpiDependentMetric(20, v5);
  if ( *(_QWORD *)(**(_QWORD **)a1 + 80LL) )
    v7 = **(_QWORD **)(**(_QWORD **)a1 + 80LL);
  else
    LODWORD(v7) = 0;
  v8 = xxxClientCopyImage(
         v7,
         (unsigned int)(*(_WORD *)(*(_QWORD *)(**(_QWORD **)a1 + 80LL) + 74LL) != 3) + 1,
         v6,
         DpiDependentMetric,
         0x4000);
  v10 = *(_OWORD *)LockPointer(v11, **(_QWORD **)a1 + 112LL, v8);
  HMAssignmentLock(&v10, 0LL);
  result = *(_QWORD *)a1;
  if ( *(_QWORD *)(**(_QWORD **)a1 + 112LL) )
  {
    result = *(_QWORD *)(**(_QWORD **)a1 + 8LL);
    *(_WORD *)(result + 6) |= 0x20u;
  }
  return result;
}
