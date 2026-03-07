void __fastcall CitDisplayPowerChange(__int64 a1)
{
  struct _CIT_IMPACT_CONTEXT *v1; // rbx
  int v3; // ecx
  unsigned __int64 v4; // rdi
  struct _CIT_IMPACT_CONTEXT *v5; // rcx
  struct tagPROCESSINFO *v6; // r8

  v1 = xmmword_1C02D4DA0;
  if ( xmmword_1C02D4DA0 )
  {
    v3 = *(_DWORD *)(a1 + 64);
    if ( (*((_DWORD *)xmmword_1C02D4DA0 + 50) == 0) == (v3 == 0) )
    {
      *((_DWORD *)xmmword_1C02D4DA0 + 50) = v3;
    }
    else
    {
      v4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      if ( !*(_DWORD *)(a1 + 64) )
      {
        CitpSetForegroundProcess(xmmword_1C02D4DA0, v4, 0LL, 0LL, 0LL);
        CitpContextFlush(v1, v4);
      }
      *((_DWORD *)v1 + 50) = *(_DWORD *)(a1 + 64);
      if ( *(_DWORD *)(a1 + 64) && (unsigned int)CitpAllowForegroundProcess(v1) )
      {
        v6 = (struct tagPROCESSINFO *)*((_QWORD *)v1 + 16);
        if ( v6 )
          CitpSetForegroundProcess(v5, v4, v6, 0LL, 0LL);
      }
    }
  }
}
