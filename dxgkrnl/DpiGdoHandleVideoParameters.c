__int64 __fastcall DpiGdoHandleVideoParameters(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  unsigned int v5; // ebx
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0LL;
  if ( *(_DWORD *)(v2 + 16) < 0x164u || *(_DWORD *)(v2 + 8) < 0x164u )
  {
    v5 = -1073741306;
    WdLogSingleEntry1(2LL, -1073741306LL);
  }
  else
  {
    v5 = DxgkHandleVideoParameters(
           *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 32LL) + 64LL) + 3912LL),
           *(_DWORD *)(*(_QWORD *)(a1 + 64) + 156LL),
           *(char **)(a2 + 24));
    v3 = 356LL;
  }
  *(_DWORD *)(a2 + 48) = v5;
  result = v5;
  *(_QWORD *)(a2 + 56) = v3;
  return result;
}
