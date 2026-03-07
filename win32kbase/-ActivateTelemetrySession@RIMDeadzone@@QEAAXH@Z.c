void __fastcall RIMDeadzone::ActivateTelemetrySession(RIMDeadzone *this, int a2)
{
  __int64 v2; // rdi
  unsigned __int64 v5; // rcx
  DeadzonePalmTelemetry *v6; // rcx

  v2 = *((_QWORD *)this + 7);
  if ( v2 && a2 && *((_DWORD *)this + 4) == 2 )
  {
    *(_DWORD *)(v2 + 4) = 0;
    memset((void *)(v2 + 2060), 0, 0x2800uLL);
    memset((void *)(v2 + 13), 0, 0x7FFuLL);
    *(_BYTE *)(v2 + 12) = 0;
    v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    *(_DWORD *)v2 = v5;
    *(_DWORD *)(v2 + 8) = v5;
  }
  v6 = (DeadzonePalmTelemetry *)*((_QWORD *)this + 7);
  if ( v6 && !a2 && *((_DWORD *)this + 4) == 2 )
    DeadzonePalmTelemetry::ClearSession(v6);
}
