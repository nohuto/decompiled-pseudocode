/*
 * XREFs of EtwpUpdateUmLogger @ 0x180111380
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x180049AF0 (EtwProcessPrivateLoggerRequest.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x180016760 (RtlFreeAnsiString.c)
 *     EtwpAddInstanceIdToLogFileName @ 0x1800498BC (EtwpAddInstanceIdToLogFileName.c)
 *     EtwpGetPrivateLoggerContext @ 0x18004C054 (EtwpGetPrivateLoggerContext.c)
 *     EtwpSynchronizeWithLogger @ 0x18004F868 (EtwpSynchronizeWithLogger.c)
 *     EtwpQueryUmLogger @ 0x18004F944 (EtwpQueryUmLogger.c)
 *     RtlNtStatusToDosError @ 0x180051950 (RtlNtStatusToDosError.c)
 */

__int64 __fastcall EtwpUpdateUmLogger(unsigned int a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v9; // ebx
  __int64 v10; // rsi
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  int v15; // edx
  _UNICODE_STRING v16; // xmm6
  NTSTATUS v17; // eax
  _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-48h] BYREF
  __int64 v19; // [rsp+78h] [rbp+10h] BYREF

  v19 = 0LL;
  *a2 = 0;
  *a3 = 176;
  if ( a1 < 0xB0 )
    return 234LL;
  result = EtwpGetPrivateLoggerContext(a4, &v19);
  v9 = result;
  if ( !(_DWORD)result )
  {
    v10 = v19;
    if ( (*(_BYTE *)(a4 + 64) & 2) != 0 && (*(_BYTE *)(v19 + 324) & 1) != 0
      || (*(_BYTE *)(a4 + 64) & 1) != 0 && (*(_BYTE *)(v19 + 324) & 2) != 0
      || (*(_DWORD *)(a4 + 64) & 0x100) != 0
      || (v11 = *(_DWORD *)(v19 + 324), (v11 & 0x400) != 0)
      || (v11 & 0x10000) != 0
      || (v12 = *(_DWORD *)(a4 + 76)) != 0 && *(_DWORD *)(a4 + 68) )
    {
      v9 = 87;
      goto LABEL_29;
    }
    *(_QWORD *)(a4 + 152) = a4 + 176;
    *(_QWORD *)(a4 + 136) = *(unsigned __int16 *)(a4 + 146) + a4 + 176;
    if ( *(_DWORD *)(a4 + 68) )
    {
      *(_QWORD *)(v10 + 344) = EtwpOneSecond * *(unsigned int *)(a4 + 68);
      v12 = *(_DWORD *)(a4 + 76);
    }
    if ( v12 )
    {
      v13 = v12;
      v14 = *(_DWORD *)(v10 + 216) - *(_DWORD *)(v10 + 204) - 1;
      if ( v12 > v14 )
      {
        *(_DWORD *)(a4 + 76) = v14;
        v13 = v14;
      }
      v12 = v13;
      if ( v13 < 0 )
      {
        *(_DWORD *)(a4 + 76) = 0;
        v12 = 0;
      }
    }
    *(_DWORD *)(v10 + 368) = v12;
    if ( !*(_WORD *)(a4 + 128) )
      goto LABEL_28;
    v15 = *(_DWORD *)(v10 + 72);
    v16 = *(_UNICODE_STRING *)(v10 + 168);
    UnicodeString = v16;
    v9 = EtwpAddInstanceIdToLogFileName(a4, v15, (_UNICODE_STRING *)(v10 + 168));
    if ( v9 )
      goto LABEL_23;
    EtwpSynchronizeWithLogger(v10, 2);
    v17 = EtwpSynchronizeWithLogger(v10, 4);
    if ( v17 )
    {
      v9 = RtlNtStatusToDosError(v17);
      if ( v9 )
      {
        RtlFreeAnsiString((PUNICODE_STRING)(v10 + 168));
LABEL_23:
        *(_UNICODE_STRING *)(v10 + 168) = v16;
        goto LABEL_27;
      }
    }
    else
    {
      v9 = 0;
    }
    RtlFreeAnsiString(&UnicodeString);
LABEL_27:
    if ( !v9 )
LABEL_28:
      EtwpQueryUmLogger(a1, a2, a3, a4);
LABEL_29:
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(v10 + 20) + 8));
    return v9;
  }
  return result;
}
