/*
 * XREFs of ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x1C00CD1F0
 * Callers:
 *     NtUserIsClipboardFormatAvailable @ 0x1C00CD160 (NtUserIsClipboardFormatAvailable.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0145C84 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z @ 0x1C01461D0 (-InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z.c)
 *     xxxGetClipboardData @ 0x1C014AE38 (xxxGetClipboardData.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C0219D30 (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C0219EB8 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C021A050 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C021A200 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z @ 0x1C021A2DC (-xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C021A3E8 (-xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     _EnumClipboardFormats @ 0x1C021A690 (_EnumClipboardFormats.c)
 * Callees:
 *     ?CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z @ 0x1C0140C58 (-CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z.c)
 *     ?IsFmtBlocked@@YAHI@Z @ 0x1C0219760 (-IsFmtBlocked@@YAHI@Z.c)
 */

struct tagCLIP *__fastcall FindClipFormat(struct tagWINDOWSTATION *a1, unsigned int a2, char a3)
{
  __int64 v4; // rbx
  int i; // eax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax

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
          if ( (unsigned int)CheckClipboardAccessForIntegrityLevel(
                               *(_QWORD *)(v4 + 20),
                               *(_QWORD *)(CurrentProcessWin32Process + 880))
            || !(unsigned int)IsFmtBlocked(a2) )
          {
            return (struct tagCLIP *)v4;
          }
          v9 = *(_QWORD *)(v4 + 20);
          v10 = PsGetCurrentProcessWin32Process(v8);
          EtwTraceUIPIClipboardError(0LL, v10, a2, v9);
          return 0LL;
        }
        v4 += 32LL;
      }
    }
  }
  return 0LL;
}
