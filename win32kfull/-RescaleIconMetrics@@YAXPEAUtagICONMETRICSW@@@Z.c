void __fastcall RescaleIconMetrics(struct tagICONMETRICSW *a1)
{
  INT DpiForSystem; // eax
  INT v3; // ebx
  INT v4; // edx

  DpiForSystem = GetDpiForSystem((__int64)a1);
  v3 = DpiForSystem;
  v4 = *(unsigned __int16 *)(gpsi + 6998LL);
  if ( DpiForSystem != v4 )
  {
    *((_DWORD *)a1 + 1) = EngMulDiv(*((_DWORD *)a1 + 1), v4, DpiForSystem);
    *((_DWORD *)a1 + 2) = EngMulDiv(*((_DWORD *)a1 + 2), *(unsigned __int16 *)(gpsi + 6998LL), v3);
    *((_DWORD *)a1 + 5) = EngMulDiv(*((_DWORD *)a1 + 5), *(unsigned __int16 *)(gpsi + 6998LL), v3);
    *((_DWORD *)a1 + 4) = EngMulDiv(*((_DWORD *)a1 + 4), *(unsigned __int16 *)(gpsi + 6998LL), v3);
  }
}
