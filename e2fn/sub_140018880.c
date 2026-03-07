__int64 __fastcall sub_140018880(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax

  *(_OWORD *)(*(_QWORD *)(a1 + 56) + 16LL * *(unsigned int *)(a1 - 16)) = a2;
  result = *(_DWORD *)(a1 - 24) & (unsigned int)(*(_DWORD *)(a1 - 16) + 1);
  *(_DWORD *)(a1 - 16) = result;
  return result;
}
