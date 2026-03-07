void EtwWmitraceWorker()
{
  __int64 v0; // rdi
  int SiloBySessionId; // ebx
  __int64 v2; // r8
  int Trace; // eax
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r9
  int updated; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  int started; // eax
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING v16[11]; // [rsp+60h] [rbp-A0h] BYREF

  memset(v16, 0, sizeof(v16));
  v14 = 0LL;
  DestinationString = 0LL;
  if ( dword_140C31F04 )
  {
    SiloBySessionId = PsGetSiloBySessionId((unsigned int)dword_140C31F04, &v14);
    if ( SiloBySessionId < 0 || !v14 )
      goto LABEL_34;
    v0 = *(_QWORD *)(*(_QWORD *)(v14 + 1488) + 864LL);
  }
  else
  {
    v0 = EtwpHostSiloState;
  }
  switch ( EtwWmitraceWork )
  {
    case 1:
      EtwpPrepareWmitraceLoggerInfo(v16);
      RtlInitAnsiString(&DestinationString, qword_140C31F08);
      RtlAnsiStringToUnicodeString(&v16[9], &DestinationString, 1u);
      *(_DWORD *)(&v16[3].MaximumLength + 1) = dword_140C31FD0;
      v16[3].Buffer = (wchar_t *)__PAIR64__(dword_140C31FCC, dword_140C31FD4);
      *(_DWORD *)&v16[3].Length = dword_140C31FD8;
      *(_DWORD *)&v16[4].Length = dword_140C31FDC;
      *(_DWORD *)(&v16[4].MaximumLength + 1) = dword_140C31FE0;
      if ( byte_140C31F49 )
      {
        RtlInitAnsiString(&DestinationString, &byte_140C31F49);
        RtlAnsiStringToUnicodeString(&v16[8], &DestinationString, 1u);
      }
      started = EtwpStartTrace(v0, (__int64)v16);
      SiloBySessionId = started;
      if ( started >= 0 )
        EtwpWmitraceParams = LOWORD(v16[0].Buffer);
      else
        DbgPrintEx(0x17u, 3u, "wmitrace: EtwpStartTrace failed: 0x%x\n", started);
      RtlFreeUnicodeString(&v16[9]);
      if ( byte_140C31F49 )
        RtlFreeUnicodeString(&v16[8]);
      break;
    case 2:
      EtwpPrepareWmitraceLoggerInfo(v16);
      Trace = EtwpQueryTrace(v0, (__int64)v16, v10);
      SiloBySessionId = Trace;
      if ( Trace < 0 )
        goto LABEL_24;
      v12 = EtwpStopTrace(v0, (__int64)v16, 0LL, v11);
      SiloBySessionId = v12;
      if ( v12 < 0 )
        DbgPrintEx(0x17u, 3u, "wmitrace: EtwpStopTrace failed: 0x%x\n", (unsigned int)v12);
      break;
    case 3:
      EtwpPrepareWmitraceLoggerInfo(v16);
      Trace = EtwpQueryTrace(v0, (__int64)v16, v6);
      SiloBySessionId = Trace;
      if ( Trace < 0 )
        goto LABEL_24;
      *(_DWORD *)&v16[4].Length |= 0x80000u;
      updated = EtwpUpdateTrace(v0, (__int64)v16, v7, v8);
      SiloBySessionId = updated;
      if ( updated < 0 )
        DbgPrintEx(0x17u, 3u, "wmitrace: failed to enable KD_FILTER 0x%x\n", (unsigned int)updated);
      break;
    default:
      if ( EtwWmitraceWork != 4 && (unsigned int)(unsigned __int8)EtwWmitraceWork - 5 >= 2 )
      {
        SiloBySessionId = -1073741637;
        DbgPrintEx(0x17u, 3u, "Unknown command passed to EtwWmitraceWorker.\n");
        break;
      }
      EtwpPrepareWmitraceLoggerInfo(v16);
      Trace = EtwpQueryTrace(v0, (__int64)v16, v2);
      SiloBySessionId = Trace;
      if ( Trace >= 0 )
      {
        if ( EtwWmitraceWork == 4 )
        {
          v4 = 1;
        }
        else if ( EtwWmitraceWork == 5 )
        {
          v4 = 0;
        }
        else
        {
          v4 = 2;
        }
        v5 = EtwEnableTrace(
               (__int64)&unk_140C31F1C,
               0LL,
               (unsigned int)EtwpWmitraceParams,
               v4,
               byte_140C31F2C,
               *(__int64 *)qword_140C31F08,
               qword_140C31F10,
               dword_140C31F18);
        SiloBySessionId = v5;
        if ( v5 < 0 )
          DbgPrintEx(0x17u, 3u, "wmitrace: EtwpEnableTraceEx failed: 0x%x\n", (unsigned int)v5);
        break;
      }
LABEL_24:
      DbgPrintEx(0x17u, 3u, "wmitrace: EtwpQueryTrace failed: 0x%x\n", (unsigned int)Trace);
      break;
  }
LABEL_34:
  dword_140C31FE8 = SiloBySessionId;
  EtwWmitraceWork = 0;
}
