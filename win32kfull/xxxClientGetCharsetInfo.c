/*
 * XREFs of xxxClientGetCharsetInfo @ 0x1C00EDCF8
 * Callers:
 *     EditionInitSystemCharsetInfoForLayout @ 0x1C00EDC40 (EditionInitSystemCharsetInfoForLayout.c)
 * Callees:
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00344F8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0034558 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientGetCharsetInfo(int a1, _OWORD *a2)
{
  int v3; // ebx
  __int64 *v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rcx
  _OWORD *v7; // rcx
  __int128 v8; // xmm1
  _BYTE v10[4]; // [rsp+30h] [rbp-68h] BYREF
  int v11; // [rsp+34h] [rbp-64h] BYREF
  _QWORD v12[4]; // [rsp+38h] [rbp-60h] BYREF
  int v13; // [rsp+58h] [rbp-40h] BYREF
  __int128 v14; // [rsp+5Ch] [rbp-3Ch]
  __int128 v15; // [rsp+6Ch] [rbp-2Ch]

  v12[0] = 0LL;
  v11 = 0;
  v14 = 0LL;
  v15 = 0LL;
  v13 = a1;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v10);
  EtwTraceBeginCallback(69LL);
  v3 = KeUserModeCallback(69LL, &v13, 36LL, v12, &v11);
  EtwTraceEndCallback(69LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v10);
  if ( v3 < 0 || v11 != 24 )
    return 0LL;
  v4 = (__int64 *)v12[0];
  if ( (unsigned __int64)(v12[0] + 8LL) < v12[0] || v12[0] + 8LL > MmUserProbeAddress )
    v4 = (__int64 *)MmUserProbeAddress;
  v5 = *v4;
  v12[1] = *v4;
  v6 = *((_QWORD *)PtiCurrentShared((__int64)v4) + 64);
  if ( v6 )
  {
    if ( (*(_DWORD *)(v6 + 84) & 1) != 0 && *(_OWORD **)(v6 + 96) == a2 )
      return 0LL;
  }
  v7 = *(_OWORD **)(v12[0] + 16LL);
  if ( v7 + 2 < v7 || (unsigned __int64)(v7 + 2) > MmUserProbeAddress )
    v7 = (_OWORD *)MmUserProbeAddress;
  v8 = v7[1];
  *a2 = *v7;
  a2[1] = v8;
  return (unsigned int)v5;
}
