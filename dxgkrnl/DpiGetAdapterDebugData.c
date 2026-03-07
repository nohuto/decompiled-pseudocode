__int64 __fastcall DpiGetAdapterDebugData(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 64);
  *(_DWORD *)a2 = *(_DWORD *)(*(_QWORD *)(v2 + 40) + 28LL);
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(v2 + 504);
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(v2 + 3680);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(v2 + 3656);
  *(_BYTE *)(a2 + 16) = *(_BYTE *)(v2 + 1156);
  *(_BYTE *)(a2 + 17) = *(_QWORD *)(v2 + 680) != 0LL;
  *(_BYTE *)(a2 + 18) = *(_BYTE *)(v2 + 1157);
  *(_BYTE *)(a2 + 19) = *(_DWORD *)(v2 + 1360) == 3;
  *(_DWORD *)(a2 + 20) = *(_DWORD *)(v2 + 236);
  *(_DWORD *)(a2 + 24) = *(_DWORD *)(v2 + 284);
  *(_DWORD *)(a2 + 28) = *(_DWORD *)(v2 + 280);
  return 0LL;
}
