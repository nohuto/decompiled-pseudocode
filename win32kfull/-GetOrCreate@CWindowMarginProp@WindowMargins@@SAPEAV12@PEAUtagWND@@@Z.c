struct WindowMargins::CWindowMarginProp *__fastcall WindowMargins::CWindowMarginProp::GetOrCreate(struct tagWND *a1)
{
  __int128 *v1; // rbx
  __int64 v2; // r15
  __int64 v4; // xmm1_8
  __int64 v5; // rax
  __int64 v6; // rcx
  char v7; // di
  CWindowProp *Prop; // rbx
  __int64 v9; // r9
  int v11; // esi
  tagObjLock **v12; // rbx
  CWindowProp *v13; // [rsp+50h] [rbp-29h] BYREF
  __int128 v14; // [rsp+58h] [rbp-21h]
  __int64 v15; // [rsp+68h] [rbp-11h]
  __int64 v16; // [rsp+70h] [rbp-9h]
  char v17; // [rsp+78h] [rbp-1h]
  __int128 v18; // [rsp+80h] [rbp+7h] BYREF
  char v19; // [rsp+90h] [rbp+17h]
  char v20; // [rsp+98h] [rbp+1Fh]

  v1 = (__int128 *)*((_QWORD *)a1 + 18);
  v2 = WindowMargins::CWindowMarginProp::s_atom;
  v16 = gDomainDummyLock;
  v17 = 0;
  v18 = 0LL;
  v19 = 0;
  v4 = *((_QWORD *)v1 + 2);
  v14 = *v1;
  v20 = 0;
  v15 = v4;
  v5 = SGDGetUserSessionState(a1);
  v7 = 1;
  if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v5 + 8)) != 1 && IS_USERCRIT_OWNED_AT_ALL(v6) )
  {
    v20 = 1;
    if ( v1 == (__int128 *)gObjDummyLock )
      v1 = 0LL;
    *(_QWORD *)&v18 = v1;
    v11 = 0;
    v12 = (tagObjLock **)&v18;
    do
    {
      if ( *v12 )
        tagObjLock::LockExclusive(*v12);
      ++v11;
      ++v12;
    }
    while ( !v11 );
    v19 = 1;
  }
  Prop = (CWindowProp *)RealGetProp(*((_QWORD *)a1 + 18), v2, 1LL);
  if ( v20 && v19 && (_QWORD)v18 )
    tagObjLock::UnLockExclusive((tagObjLock *)v18);
  v13 = Prop;
  if ( !Prop )
  {
    if ( (int)CWindowProp::CreateWindowProp<WindowMargins::CWindowMarginProp>(&v13) < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v7 = 0;
      }
      if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_q(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v7,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          v9,
          2u,
          0x1Au,
          0xAu,
          (__int64)&WPP_fec10b4efb753a3a4f7ec6de1c5c9c7a_Traceguids,
          *(_QWORD *)a1);
      return v13;
    }
    else
    {
      Prop = v13;
      if ( !(unsigned int)CWindowProp::SetProp(v13, (unsigned __int64)a1) )
      {
        (**(void (__fastcall ***)(CWindowProp *))Prop)(Prop);
        return 0LL;
      }
    }
  }
  return Prop;
}
