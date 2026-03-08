/*
 * XREFs of ?_FindShellHandwritingDelegationQMsgFromMsg@@YAHQEAUtagTHREADINFO@@QEAUtagMSG@@PEAPEAUtagQMSG@@@Z @ 0x1C01B734C
 * Callers:
 *     ?_HandleShellHandwritingDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1C01B7454 (-_HandleShellHandwritingDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qDqq @ 0x1C01B80D4 (WPP_RECORDER_AND_TRACE_SF_qDqq.c)
 */

__int64 __fastcall _FindShellHandwritingDelegationQMsgFromMsg(
        struct tagTHREADINFO *const a1,
        struct tagMSG *const a2,
        struct tagQMSG **a3)
{
  const signed __int32 *v3; // r9
  bool v4; // cl

  v3 = *(const signed __int32 **)(*((_QWORD *)a1 + 54) + 24LL);
  if ( v3 )
  {
    while ( v3[4] != (unsigned __int64)(unsigned int)*(_QWORD *)a2
         || v3[6] != *((_DWORD *)a2 + 2)
         || *((_QWORD *)v3 + 4) != *((_QWORD *)a2 + 2)
         || *((_QWORD *)v3 + 8) != *((_QWORD *)a2 + 3)
         || v3[12] != *((_DWORD *)a2 + 8)
         || v3[13] != *((_DWORD *)a2 + 9)
         || v3[14] != *((_DWORD *)a2 + 10) )
    {
      if ( !_bittest(v3 + 25, 8u) )
      {
        v3 = *(const signed __int32 **)v3;
        if ( v3 )
          continue;
      }
      goto LABEL_11;
    }
    if ( !_bittest(v3 + 25, 8u) )
      v3 = *(const signed __int32 **)v3;
    *a3 = (struct tagQMSG *)v3;
    return 1LL;
  }
  else
  {
LABEL_11:
    v4 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = v4;
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qDqq(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        (_DWORD)a3,
        (_DWORD)WPP_GLOBAL_Control);
    }
    return 0LL;
  }
}
