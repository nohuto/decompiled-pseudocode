__int64 __fastcall DMMVideoSignalInfoToDisplayConfigVideoSignalInfo(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_WORD *)(a2 + 40) = *(_WORD *)a1;
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a2 + 24) = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a2 + 28) = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a2 + 20) = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 28);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 32);
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a2 + 44) = (int)(*(_DWORD *)(a1 + 48) << 29) >> 29;
  result = *(unsigned int *)(a2 + 40);
  *(_DWORD *)(a2 + 40) = (unsigned __int16)result | ((*(_DWORD *)(a1 + 48) & 0x1F8) << 13);
  return result;
}
