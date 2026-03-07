__int64 __fastcall DISPLAY_CALLOUT_ENTRY::DISPLAY_CALLOUT_ENTRY(
        __int64 a1,
        _QWORD *a2,
        int a3,
        int a4,
        __int64 a5,
        char a6,
        __int64 a7)
{
  *(_BYTE *)(a1 + 21) = a6;
  *(_DWORD *)(a1 + 16) = 1;
  *(_BYTE *)(a1 + 20) = 0;
  *(_QWORD *)(a1 + 24) = *a2;
  *(_QWORD *)(a1 + 40) = a5;
  *(_DWORD *)(a1 + 32) = a3;
  *(_DWORD *)(a1 + 36) = a4;
  *(_OWORD *)(a1 + 64) = *(_OWORD *)a7;
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a7 + 16);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a7 + 32);
  *(_OWORD *)(a1 + 112) = *(_OWORD *)(a7 + 48);
  *(_QWORD *)(a1 + 128) = *(_QWORD *)(a7 + 64);
  if ( a6 )
    _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 478);
  return a1;
}
