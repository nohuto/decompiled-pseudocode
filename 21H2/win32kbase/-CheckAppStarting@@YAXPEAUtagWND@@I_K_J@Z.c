/*
 * XREFs of ?CheckAppStarting@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0047C80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C0047360 (WPP_RECORDER_SF_q.c)
 */

void __fastcall CheckAppStarting(struct tagWND *a1)
{
  __int64 *v1; // rdi
  PEPROCESS *v2; // rax
  __int64 v3; // rbx
  LONGLONG TimeQuadPart; // rax
  int v5; // edx
  __int64 v6; // rcx

  v1 = &gppiStarting;
  v2 = (PEPROCESS *)gppiStarting;
  v3 = MEMORY[0xFFFFF78000000014] - 300000000LL;
  while ( v2 )
  {
    TimeQuadPart = PsGetProcessCreateTimeQuadPart(*v2);
    v6 = *v1;
    if ( v3 <= TimeQuadPart )
    {
      v1 = (__int64 *)(v6 + 368);
      v2 = *(PEPROCESS **)(v6 + 368);
    }
    else
    {
      *(_DWORD *)(v6 + 12) &= 0xFFFFFEBF;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 4;
        WPP_RECORDER_SF_q((_DWORD)gBaseLog, v5, 13, 14, (__int64)&WPP_fd8c6326b31137ef50dc3f85fe1c9044_Traceguids, *v1);
      }
      v2 = *(PEPROCESS **)(*v1 + 368);
      *v1 = (__int64)v2;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gBaseLog, 4, 13, 15, (__int64)&WPP_fd8c6326b31137ef50dc3f85fe1c9044_Traceguids);
  xmmword_1C0251750 = 0LL;
  qword_1C0251770 = 0LL;
  xmmword_1C0251760 = 0LL;
}
