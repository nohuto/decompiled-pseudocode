__int64 __fastcall ScreenToClient(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 40);
  result = *(_WORD *)(v2 + 42) & 0x2FFF;
  if ( (_DWORD)result != 669 )
  {
    if ( (*(_BYTE *)(v2 + 26) & 0x40) != 0 )
      *a2 = *(_DWORD *)(v2 + 112) - *a2;
    else
      *a2 -= *(_DWORD *)(v2 + 104);
    result = *(_QWORD *)(a1 + 40);
    a2[1] -= *(_DWORD *)(result + 108);
  }
  return result;
}
