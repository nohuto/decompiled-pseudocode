/*
 * XREFs of ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x1C0012468
 * Callers:
 *     NtUserIsClipboardFormatAvailable @ 0x1C00123E0 (NtUserIsClipboardFormatAvailable.c)
 *     ?InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z @ 0x1C01FECA4 (-InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C01FEEDC (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01FFA0C (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01FFB98 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01FFD30 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01FFEE0 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z @ 0x1C01FFFBC (-xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C02000C8 (-xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     InternalGetClipboardMetadata @ 0x1C02004BC (InternalGetClipboardMetadata.c)
 *     _EnumClipboardFormats @ 0x1C0200608 (_EnumClipboardFormats.c)
 *     xxxGetClipboardData @ 0x1C02009E4 (xxxGetClipboardData.c)
 * Callees:
 *     ?CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z @ 0x1C014972C (-CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z.c)
 *     ?IsFmtBlocked@@YAHI@Z @ 0x1C01FEEA4 (-IsFmtBlocked@@YAHI@Z.c)
 */

struct tagCLIP *__fastcall FindClipFormat(struct tagWINDOWSTATION *a1, unsigned int a2, char a3)
{
  __int64 v4; // rbx
  int i; // eax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx

  if ( a2 )
  {
    v4 = *((_QWORD *)a1 + 16);
    if ( v4 )
    {
      for ( i = *((_DWORD *)a1 + 34); i; --i )
      {
        if ( *(_DWORD *)v4 == a2 )
        {
          if ( (a3 & 1) == 0 )
            return (struct tagCLIP *)v4;
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
          v8 = CurrentProcessWin32Process;
          if ( CurrentProcessWin32Process )
            v8 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
          if ( (unsigned int)CheckClipboardAccessForIntegrityLevel(*(_QWORD *)(v4 + 20), *(_QWORD *)(v8 + 864))
            || !(unsigned int)IsFmtBlocked(a2) )
          {
            return (struct tagCLIP *)v4;
          }
          v10 = *(_QWORD *)(v4 + 20);
          v11 = PsGetCurrentProcessWin32Process(v9);
          v12 = v11;
          if ( v11 )
            v12 = -(__int64)(*(_QWORD *)v11 != 0LL) & v11;
          EtwTraceUIPIClipboardError(0LL, v12, a2, v10);
          return 0LL;
        }
        v4 += 32LL;
      }
    }
  }
  return 0LL;
}
