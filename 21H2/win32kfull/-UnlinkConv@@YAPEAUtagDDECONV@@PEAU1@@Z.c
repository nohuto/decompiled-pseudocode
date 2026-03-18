/*
 * XREFs of ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C021553C
 * Callers:
 *     xxxDDETrackWindowDying @ 0x1C0218544 (xxxDDETrackWindowDying.c)
 *     xxxFreeDdeConv @ 0x1C0218788 (xxxFreeDdeConv.c)
 * Callees:
 *     InternalRemoveProp @ 0x1C0069510 (InternalRemoveProp.c)
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     InternalSetProp @ 0x1C0083110 (InternalSetProp.c)
 */

struct tagDDECONV *__fastcall UnlinkConv(struct tagDDECONV *a1)
{
  __int64 v2; // r9
  bool v3; // dl
  __int64 Prop; // rax
  __int64 v5; // rcx
  __int64 *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rbx
  _QWORD v10[3]; // [rsp+50h] [rbp-18h] BYREF

  *((_DWORD *)a1 + 20) |= 0x1000u;
  v2 = *((_QWORD *)a1 + 5);
  if ( !v2 )
    return 0LL;
  v3 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v3,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      11,
      4,
      14,
      11,
      (__int64)&WPP_b8232c44b11d3b42055fa312fd74cb4b_Traceguids,
      (char)a1);
    v2 = *((_QWORD *)a1 + 5);
  }
  Prop = GetProp(v2, (unsigned __int16)atomDDETrack, 1u);
  if ( !Prop )
    return 0LL;
  v5 = 0LL;
  while ( (struct tagDDECONV *)Prop != a1 )
  {
    v5 = Prop;
    Prop = *(_QWORD *)(Prop + 24);
    if ( !Prop )
      return 0LL;
  }
  v6 = (__int64 *)((char *)a1 + 24);
  if ( v5 )
  {
    v10[0] = v5 + 24;
    v10[1] = *v6;
    HMAssignmentLock(v10, 0LL);
  }
  else
  {
    v7 = *((_QWORD *)a1 + 5);
    if ( *v6 )
      InternalSetProp(v7, (unsigned __int16)atomDDETrack, *v6, 1u);
    else
      InternalRemoveProp(v7, (unsigned __int16)atomDDETrack, 1u);
  }
  v8 = HMAssignmentUnlock((char *)a1 + 24);
  HMUnlockObject(a1);
  return (struct tagDDECONV *)v8;
}
