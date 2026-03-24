/*
 * XREFs of RIMIDEValidateKeybdInputStruct @ 0x1C0169EE0
 * Callers:
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C01693F0 (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0047F78 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C013732C (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_i @ 0x1C0158410 (WPP_RECORDER_SF_i.c)
 */

__int64 __fastcall RIMIDEValidateKeybdInputStruct(__int16 *a1)
{
  __int16 *v1; // rdx
  int v2; // ecx
  unsigned __int16 v3; // cx
  __int64 v4; // rcx
  int v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+30h] [rbp-18h]

  v1 = a1;
  v2 = *((_DWORD *)a1 + 1);
  if ( (v2 & 4) != 0 && (*v1 || (v2 & 0xFFFF7FC9) != 0) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v1) = 2;
      WPP_RECORDER_SF_d(
        (_DWORD)gRimLog,
        (_DWORD)v1,
        1,
        28,
        (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids,
        v2);
    }
    return 0LL;
  }
  if ( (v2 & 8) == 0 )
  {
    v3 = *v1;
    if ( (unsigned __int16)*v1 > 0xFEu )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v1) = 2;
        WPP_RECORDER_SF_d(
          (_DWORD)gRimLog,
          (_DWORD)v1,
          1,
          29,
          (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids,
          v3);
      }
      return 0LL;
    }
  }
  if ( *((_DWORD *)v1 + 2)
    && *((_DWORD *)v1 + 2) > (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      v6 = *((_DWORD *)v1 + 2);
      WPP_RECORDER_SF_Dd(
        (__int64)gRimLog,
        2u,
        1u,
        0x1Eu,
        (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids,
        v6,
        v8);
    }
    return 0LL;
  }
  v4 = *((_QWORD *)v1 + 2);
  if ( v4 && (*((_DWORD *)v1 + 1) & 0x8000) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = *((_QWORD *)v1 + 2);
      LOBYTE(v1) = 2;
      WPP_RECORDER_SF_i(v4, (_DWORD)v1, 0, 31, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids, v7);
    }
    return 0LL;
  }
  return 1LL;
}
