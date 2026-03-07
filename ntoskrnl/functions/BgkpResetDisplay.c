__int64 __fastcall BgkpResetDisplay(char a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v5; // rcx

  *a3 = 0LL;
  if ( !a1 || dword_140D12BA0 == 2 )
    return 3221225659LL;
  if ( !qword_140D18148 )
    return 3221225473LL;
  qword_140D18148(80LL);
  LOBYTE(v5) = 1;
  VidResetDisplay(v5);
  *(_WORD *)(a2 + 1) = 0;
  *(_BYTE *)(a2 + 3) = 0;
  *(_QWORD *)(a2 + 20) = 0LL;
  *(_DWORD *)(a2 + 28) = 0;
  *(_DWORD *)(a2 + 8) = 640;
  *(_DWORD *)(a2 + 12) = 640;
  *(_QWORD *)(a2 + 32) = BgkpVgaBltRoutine;
  result = 0LL;
  *(_BYTE *)a2 = 0;
  *(_DWORD *)(a2 + 4) = 480;
  *(_DWORD *)(a2 + 16) = 1;
  return result;
}
