__int64 __fastcall CmpMachineHiveLoadedWorkItem(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 result; // rax

  v2 = (_QWORD *)(a2 + 96);
  *(_QWORD *)(a2 + 96) = KeGetCurrentThread();
  result = (*(__int64 (__fastcall **)(_QWORD))(a2 + 80))(*(_QWORD *)(a2 + 88));
  *v2 = 0LL;
  return result;
}
