char __fastcall KiUpdatePriorityMatrixForRunningTransition(__int64 a1, __int64 a2)
{
  int v2; // eax

  *(_QWORD *)(a1 + 8) = a2;
  LOBYTE(v2) = *(_BYTE *)(a2 + 388);
  if ( (_BYTE)v2 == 1 )
  {
    v2 = *(_DWORD *)(a2 + 132) - *(_DWORD *)(a2 + 436) + MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(a2 + 132) = v2;
  }
  *(_BYTE *)(a2 + 388) = 2;
  return v2;
}
