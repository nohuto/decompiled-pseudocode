/*
 * XREFs of HotKeyToWindow @ 0x1C022B44C
 * Callers:
 *     DWP_SetHotKey @ 0x1C0012040 (DWP_SetHotKey.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HotKeyToWindow(__int64 a1)
{
  int v1; // ebx
  __int64 i; // rdx

  v1 = a1;
  for ( i = *(_QWORD *)(SGDGetUserSessionState(a1) + 12720); ; i = *(_QWORD *)(i + 16) )
  {
    if ( !i )
      return 0LL;
    if ( *(_DWORD *)(i + 8) == v1 )
      break;
  }
  return *(_QWORD *)i & -(__int64)((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)i + 40LL) + 31LL) & 0x10) != 0);
}
