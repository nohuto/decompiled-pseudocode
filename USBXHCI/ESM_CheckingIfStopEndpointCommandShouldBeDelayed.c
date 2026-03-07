__int64 __fastcall ESM_CheckingIfStopEndpointCommandShouldBeDelayed(__int64 a1)
{
  _DWORD *v1; // rdx
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 960);
  result = (*(_QWORD *)(*(_QWORD *)v1 + 336LL) & 0x4000LL) != 0 ? 33 : 21;
  v1[39] = 0;
  return result;
}
