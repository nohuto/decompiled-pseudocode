__int64 __fastcall GreGetBrushColor(HBRUSH a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = -1;
  GreAcquireHmgrSemaphore((__int64)a1);
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v5, a1);
  if ( v5[0] && (unsigned int)(*(_DWORD *)(v5[0] + 80LL) - 6) <= 1 )
    v2 = *(_DWORD *)(v5[0] + 76LL);
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v5);
  GreReleaseHmgrSemaphore(v3);
  return v2;
}
