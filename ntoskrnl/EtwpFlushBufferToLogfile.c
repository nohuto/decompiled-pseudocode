/*
 * XREFs of EtwpFlushBufferToLogfile @ 0x140691270
 * Callers:
 *     EtwpFlushBuffer @ 0x140692C18 (EtwpFlushBuffer.c)
 *     EtwpBufferingModeFlush @ 0x1408A3088 (EtwpBufferingModeFlush.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     ZwWriteFile @ 0x140412410 (ZwWriteFile.c)
 *     EtwpGenerateFileName @ 0x14079A7F0 (EtwpGenerateFileName.c)
 *     EtwpEventWriteTemplateAdmin @ 0x1409E0BD0 (EtwpEventWriteTemplateAdmin.c)
 *     EtwpEventWriteTemplateMaxFileSize @ 0x1409E0D34 (EtwpEventWriteTemplateMaxFileSize.c)
 */

__int64 __fastcall EtwpFlushBufferToLogfile(__int64 a1, unsigned int *a2)
{
  __int64 v2; // r8
  unsigned __int64 Length; // rbp
  NTSTATUS v6; // edi
  __int64 v7; // rcx
  int v9; // ecx
  unsigned __int64 v10; // rdx
  int v11; // edx
  int v12; // r8d
  int v13; // r8d
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  v2 = *(unsigned int *)(a1 + 292);
  Length = *a2;
  IoStatusBlock = 0LL;
  if ( (_DWORD)v2 )
  {
    v9 = *(_DWORD *)(a1 + 12);
    if ( (v9 & 1) != 0 && (v9 & 0x4000000) != 0 )
      v10 = *(_QWORD *)(a1 + 216) + Length;
    else
      v10 = *(unsigned int *)(a1 + 204) * Length;
    if ( v10 >= v2 * ((-(__int64)((v9 & 0x2000) != 0) & 0xFFFFFFFFFFF00400uLL) + 0x100000) )
    {
      if ( (v9 & 2) != 0 )
      {
        *(_QWORD *)(a1 + 216) = *(unsigned int *)(a1 + 4);
        *(_DWORD *)(a1 + 204) = 1;
      }
      else
      {
        if ( (v9 & 8) == 0 )
        {
          v6 = -1073741432;
          if ( (*(_DWORD *)(a1 + 816) & 0x100) == 0 )
          {
            _InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x100u);
            if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_MAX_FILE_SIZE_REACHED) )
              EtwpEventWriteTemplateMaxFileSize(a1 + 152, v11, v12, a1 + 136, a1 + 152);
          }
          goto LABEL_20;
        }
        if ( (*(_DWORD *)(a1 + 824) & 1) == 0 )
        {
          EtwpGenerateFileName(a1 + 168, a1 + 296, a1 + 184);
          _InterlockedOr((volatile signed __int32 *)(a1 + 824), 1u);
        }
      }
    }
  }
  v6 = ZwWriteFile(*(HANDLE *)(a1 + 800), 0LL, 0LL, 0LL, &IoStatusBlock, a2, Length, (PLARGE_INTEGER)(a1 + 216), 0LL);
  if ( v6 >= 0 )
  {
    v7 = *(_QWORD *)(a1 + 1096);
    *(_QWORD *)(a1 + 216) += Length;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 4136), Length);
    ++*(_DWORD *)(a1 + 248);
    ++*(_DWORD *)(a1 + 204);
    return (unsigned int)v6;
  }
  if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_WRITE_FAILED) )
    EtwpEventWriteTemplateAdmin(
      a1 + 152,
      (unsigned int)&ETW_EVENT_WRITE_FAILED,
      v13,
      a1 + 136,
      a1 + 152,
      v6,
      *(_DWORD *)(a1 + 12));
LABEL_20:
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 252));
  if ( v6 == -1073741670 )
    return 0;
  return (unsigned int)v6;
}
