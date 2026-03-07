__int64 __fastcall PopCoalescingCallback(__int64 a1, __int64 a2, __int64 a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 24))(
           *(unsigned int *)(a2 + 4),
           a3,
           *(_QWORD *)(a1 + 40));
}
