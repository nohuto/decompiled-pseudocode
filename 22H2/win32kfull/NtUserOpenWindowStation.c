/*
 * XREFs of NtUserOpenWindowStation @ 0x1C00B9C30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastStatus @ 0x1C00132A8 (UserSetLastStatus.c)
 *     _OpenWindowStation @ 0x1C0068374 (_OpenWindowStation.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C01CC690 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 */

__int64 __fastcall NtUserOpenWindowStation(unsigned __int64 a1, int a2)
{
  __int64 v4; // rbx
  __int128 *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  _BYTE *v9; // rdx
  ULONG64 v10; // rcx
  NTSTATUS ProcessLuid; // eax
  bool v13; // [rsp+30h] [rbp-A8h]
  volatile void *Address[2]; // [rsp+38h] [rbp-A0h]
  __int128 v15; // [rsp+90h] [rbp-48h]
  PUNICODE_STRING DestinationString[2]; // [rsp+A0h] [rbp-38h]
  __int64 v17; // [rsp+F0h] [rbp+18h] BYREF
  __int64 v18; // [rsp+F8h] [rbp+20h]

  v4 = 0LL;
  v17 = 0LL;
  v13 = 1;
  EnterCrit(0LL, 0LL);
  v5 = (__int128 *)a1;
  if ( a1 + 48 < a1 || a1 + 48 > MmUserProbeAddress )
    v5 = (__int128 *)MmUserProbeAddress;
  v15 = *v5;
  *(_OWORD *)DestinationString = v5[1];
  if ( PsGetCurrentProcessWow64Process() )
  {
    v18 = 1LL;
    v8 = 0LL;
  }
  else
  {
    v18 = 4LL;
    v8 = 3LL;
  }
  v9 = DestinationString[0];
  if ( ((unsigned __int64)DestinationString[0] & v8) != 0 )
    ExRaiseDatatypeMisalignment();
  v10 = MmUserProbeAddress;
  if ( DestinationString[0] >= (PUNICODE_STRING)MmUserProbeAddress )
    v9 = (_BYTE *)MmUserProbeAddress;
  *v9 = *v9;
  v9[15] = v9[15];
  *(struct _UNICODE_STRING *)Address = *DestinationString[0];
  if ( *((_QWORD *)&v15 + 1) )
  {
    if ( Address[1] )
    {
      if ( LODWORD(Address[0]) == 3801144 )
      {
        ProbeForWrite(Address[1], 0x3AuLL, 2u);
        if ( !_wcsicmp((const wchar_t *)Address[1], L"Service-0x00000000-00000000$") )
        {
          ProcessLuid = GetProcessLuid(0LL, &v17);
          v13 = ProcessLuid >= 0;
          if ( ProcessLuid < 0 )
          {
            UserSetLastStatus(ProcessLuid, 1);
          }
          else
          {
            RtlStringCbPrintfW((unsigned __int16 *)Address[1], 0x3AuLL, L"Service-0x%x-%x$", HIDWORD(v17), v17);
            RtlInitUnicodeString(DestinationString[0], (PCWSTR)Address[1]);
          }
        }
      }
    }
  }
  if ( v13 )
    v4 = OpenWindowStation(a1, a2, v6);
  UserSessionSwitchLeaveCrit(v10, v9, v6, v7);
  return v4;
}
