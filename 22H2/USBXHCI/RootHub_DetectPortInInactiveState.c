/*
 * XREFs of RootHub_DetectPortInInactiveState @ 0x1C001A4D8
 * Callers:
 *     RootHub_DetectLinkErrorState @ 0x1C001A2AC (RootHub_DetectLinkErrorState.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     Etw_ReportControllerHealthWithPortInfo @ 0x1C004825C (Etw_ReportControllerHealthWithPortInfo.c)
 */

bool __fastcall RootHub_DetectPortInInactiveState(__int64 a1, int a2, int *a3)
{
  __int64 v3; // rsi
  __int64 v4; // r9
  char v6; // bl
  int v7; // edx
  int v8; // r15d
  __int64 v10; // rdi
  unsigned int v11; // ecx
  int v13; // [rsp+20h] [rbp-28h]
  char v14; // [rsp+20h] [rbp-28h]

  v3 = *(_QWORD *)(a1 + 48);
  v4 = (unsigned int)(a2 - 1);
  v6 = 0;
  v7 = *a3;
  v8 = (int)a3;
  v10 = 112 * v4;
  if ( (*a3 & 0x1E0) == 0xC0 && *(_DWORD *)(v10 + v3 + 108) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v7,
        11,
        261,
        (__int64)&WPP_f43a94b2b62e338aeb45278c2677cd1d_Traceguids,
        *a3);
    }
    v11 = ++*(_DWORD *)(v10 + v3 + 92);
    if ( !*(_BYTE *)(v10 + v3 + 96) )
    {
      LOBYTE(v13) = 0;
      Etw_ReportControllerHealthWithPortInfo(v11, *(_QWORD *)(a1 + 8), a2, v8, v13);
      v11 = *(_DWORD *)(v10 + v3 + 92);
      *(_BYTE *)(v10 + v3 + 96) = 1;
    }
    return v11 <= 3;
  }
  else if ( *(_DWORD *)(v10 + v3 + 92) )
  {
    v14 = 1;
    Etw_ReportControllerHealthWithPortInfo(a1, *(_QWORD *)(a1 + 8), a2, (_DWORD)a3, v14);
    *(_DWORD *)(v10 + v3 + 92) = 0;
    *(_BYTE *)(v10 + v3 + 96) = 0;
    *(_BYTE *)(v10 + v3 + 104) = 0;
  }
  return v6;
}
