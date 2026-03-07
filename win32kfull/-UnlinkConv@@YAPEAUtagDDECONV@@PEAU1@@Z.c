struct tagDDECONV *__fastcall UnlinkConv(struct tagDDECONV *a1)
{
  char v2; // dl
  __int64 Prop; // rax
  __int64 v4; // rcx
  __int64 *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rbx
  _QWORD v9[3]; // [rsp+50h] [rbp-18h] BYREF

  *((_DWORD *)a1 + 20) |= 0x1000u;
  if ( !*((_QWORD *)a1 + 5) )
    return 0LL;
  v2 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      11LL,
      4u,
      0xEu,
      0xBu,
      (__int64)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids,
      a1);
  Prop = GetProp(*((_QWORD *)a1 + 5), (unsigned __int16)atomDDETrack, 1u);
  if ( !Prop )
    return 0LL;
  v4 = 0LL;
  while ( (struct tagDDECONV *)Prop != a1 )
  {
    v4 = Prop;
    Prop = *(_QWORD *)(Prop + 24);
    if ( !Prop )
      return 0LL;
  }
  v5 = (__int64 *)((char *)a1 + 24);
  if ( v4 )
  {
    v9[0] = v4 + 24;
    v9[1] = *v5;
    HMAssignmentLock(v9, 0LL);
  }
  else
  {
    v6 = *((_QWORD *)a1 + 5);
    if ( *v5 )
      InternalSetProp(v6, (unsigned __int16)atomDDETrack, *v5, 1u);
    else
      InternalRemoveProp(v6, (unsigned __int16)atomDDETrack, 1u);
  }
  v7 = HMAssignmentUnlock((char *)a1 + 24);
  HMUnlockObject(a1);
  return (struct tagDDECONV *)v7;
}
