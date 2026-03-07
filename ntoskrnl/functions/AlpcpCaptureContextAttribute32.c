__int64 __fastcall AlpcpCaptureContextAttribute32(__int64 a1, _DWORD *a2, __int64 a3, _QWORD *a4)
{
  __int64 v5; // rcx

  a2[3] = *(_DWORD *)(a3 + 264);
  a2[4] = *(_DWORD *)(a3 + 272);
  a2[2] = 0;
  *a2 = *(_DWORD *)(a1 + 56);
  v5 = (unsigned int)a2[1];
  if ( (*(_DWORD *)(a1 + 416) & 6) == 4 )
    *a4 = v5;
  else
    a4[1] = v5;
  return 0LL;
}
