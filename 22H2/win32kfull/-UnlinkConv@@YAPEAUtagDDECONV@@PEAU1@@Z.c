/*
 * XREFs of ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01F9CC8
 * Callers:
 *     xxxDDETrackWindowDying @ 0x1C01FB710 (xxxDDETrackWindowDying.c)
 *     xxxFreeDdeConv @ 0x1C01FB8A0 (xxxFreeDdeConv.c)
 * Callees:
 *     InternalSetProp @ 0x1C00C671C (InternalSetProp.c)
 *     InternalRemoveProp @ 0x1C00C94BC (InternalRemoveProp.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 */

struct tagDDECONV *__fastcall UnlinkConv(struct tagDDECONV *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 Prop; // rax
  __int64 v7; // rcx
  __int64 *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rbx
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  *((_DWORD *)a1 + 20) |= 0x1000u;
  v5 = *((_QWORD *)a1 + 5);
  if ( !v5 )
    return 0LL;
  Prop = GetProp(v5, (unsigned __int16)atomDDETrack, 1LL, a4);
  if ( !Prop )
    return 0LL;
  v7 = 0LL;
  while ( (struct tagDDECONV *)Prop != a1 )
  {
    v7 = Prop;
    Prop = *(_QWORD *)(Prop + 24);
    if ( !Prop )
      return 0LL;
  }
  v8 = (__int64 *)((char *)a1 + 24);
  if ( v7 )
  {
    v12[0] = v7 + 24;
    v12[1] = *v8;
    HMAssignmentLock(v12, 0LL);
  }
  else
  {
    v9 = *((_QWORD *)a1 + 5);
    if ( *v8 )
      InternalSetProp(v9, (unsigned __int16)atomDDETrack, *v8, 1u);
    else
      InternalRemoveProp(v9, (unsigned __int16)atomDDETrack, 1u);
  }
  v10 = HMAssignmentUnlock((char *)a1 + 24);
  HMUnlockObject(a1);
  return (struct tagDDECONV *)v10;
}
