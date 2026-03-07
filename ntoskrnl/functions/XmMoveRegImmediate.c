__int64 __fastcall XmMoveRegImmediate(__int64 a1)
{
  __int64 v2; // rdx

  v2 = *(_DWORD *)(a1 + 112) & 7;
  if ( (*(_DWORD *)(a1 + 112) & 8) != 0 )
    *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  else
    *(_DWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 88) = XmGetRegisterAddress(a1, v2);
  *(_DWORD *)(a1 + 108) = XmGetImmediateSourceValue(a1, 0LL);
  return 1LL;
}
