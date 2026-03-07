__int64 __fastcall sub_1400507D0(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 192LL);
  _InterlockedExchange((volatile __int32 *)(a1 + 32), *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 192LL));
  return result;
}
