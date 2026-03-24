/*
 * XREFs of ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C021B138
 * Callers:
 *     xxxDDETrackWindowDying @ 0x1C021D538 (xxxDDETrackWindowDying.c)
 *     xxxFreeDdeConv @ 0x1C021D748 (xxxFreeDdeConv.c)
 * Callees:
 *     InternalSetProp @ 0x1C00384A8 (InternalSetProp.c)
 *     WPP_RECORDER_SF_q @ 0x1C004F430 (WPP_RECORDER_SF_q.c)
 *     _GetProp @ 0x1C006B990 (_GetProp.c)
 */

struct tagDDECONV *__fastcall UnlinkConv(struct tagDDECONV *a1, __int16 a2)
{
  __int64 v3; // rcx
  __int64 Prop; // rax
  __int64 v5; // rcx
  __int64 *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rbx
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF

  *((_DWORD *)a1 + 20) |= 0x1000u;
  v3 = *((_QWORD *)a1 + 5);
  if ( !v3 )
    return 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(v3, a2, 14, 11, (__int64)&WPP_f1cc8f74ab813689ed40e0048036585e_Traceguids, (char)a1);
    v3 = *((_QWORD *)a1 + 5);
  }
  Prop = GetProp(v3, (unsigned __int16)atomDDETrack, 1LL);
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
    v12[0] = v5 + 24;
    v12[1] = *v6;
    HMAssignmentLock(v12);
  }
  else
  {
    v7 = *((_QWORD *)a1 + 5);
    v8 = (unsigned __int16)atomDDETrack;
    if ( *v6 )
    {
      InternalSetProp(v7, (unsigned __int16)atomDDETrack, *v6, 1u);
    }
    else
    {
      v9 = *(_QWORD *)(v7 + 144);
      if ( atomDDETrack == word_1C033AF44 )
        *(_QWORD *)(*(_QWORD *)(v7 + 40) + 312LL) = 0LL;
      RealInternalRemoveProp(v9, v8, 1LL);
    }
  }
  v10 = HMAssignmentUnlock((char *)a1 + 24);
  HMUnlockObject(a1);
  return (struct tagDDECONV *)v10;
}
