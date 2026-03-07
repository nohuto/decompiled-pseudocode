__int64 __fastcall _GetWindowCompositionInfo(const struct tagWND *a1, struct WINDOWCOMPOSITIONINFO *a2)
{
  __int64 v3; // rcx
  unsigned int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // r12
  __int64 v10; // rax
  _OWORD *Prop; // rsi
  unsigned int v12; // eax
  struct tagTHREADINFO *v13; // rcx
  int v15; // r15d
  tagObjLock **v16; // rsi
  __int128 v17; // [rsp+48h] [rbp-28h] BYREF
  char v18; // [rsp+58h] [rbp-18h]
  char v19; // [rsp+60h] [rbp-10h]

  v3 = *((_QWORD *)a1 + 13);
  v5 = 0;
  if ( (!v3 || (v6 = *((_QWORD *)a1 + 3)) == 0 || (v7 = *(_QWORD *)(v6 + 8)) == 0 || v3 != *(_QWORD *)(v7 + 24))
    && ((*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) == 0 || !GetTopLevelWindow((__int64)a1)) )
  {
    goto LABEL_8;
  }
  v8 = *((_QWORD *)a1 + 18);
  v9 = *(unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Busy;
  v17 = 0LL;
  v18 = 0;
  v19 = 0;
  v10 = SGDGetUserSessionState(v3);
  v5 = 1;
  if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v10 + 8)) != 1 && IS_USERCRIT_OWNED_AT_ALL() )
  {
    v19 = 1;
    if ( v8 == gObjDummyLock )
      v8 = 0LL;
    *(_QWORD *)&v17 = v8;
    v15 = 0;
    v16 = (tagObjLock **)&v17;
    do
    {
      if ( *v16 )
        tagObjLock::LockExclusive(*v16);
      ++v15;
      ++v16;
    }
    while ( !v15 );
    v18 = 1;
  }
  Prop = (_OWORD *)RealGetProp(*((_QWORD *)a1 + 18), v9, 1LL);
  if ( v19 && v18 )
  {
    if ( (_QWORD)v17 )
      tagObjLock::UnLockExclusive((tagObjLock *)v17);
    v18 = 0;
  }
  if ( Prop )
  {
    *(_OWORD *)a2 = *Prop;
    *((_OWORD *)a2 + 1) = Prop[1];
    *((_OWORD *)a2 + 2) = Prop[2];
    *((_OWORD *)a2 + 3) = Prop[3];
  }
  else
  {
LABEL_8:
    v12 = *(_DWORD *)a2 & 0xFFFD0000;
    *(_QWORD *)a2 = v12;
    *((_QWORD *)a2 + 3) = 0LL;
    *(_OWORD *)((char *)a2 + 8) = 0LL;
    *((_QWORD *)a2 + 4) = 0LL;
    v13 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 2);
    if ( !v13 )
    {
      v13 = PtiCurrentShared();
      v12 = *(_DWORD *)a2;
    }
    *(_DWORD *)a2 = v12 ^ (v12 ^ (*((_DWORD *)v13 + 162) >> 3)) & 0x40000;
    *((_DWORD *)a2 + 10) = g_defaultFrameStyle;
    *(_QWORD *)((char *)a2 + 44) = 0LL;
    *(_QWORD *)((char *)a2 + 52) = 0LL;
  }
  *(_DWORD *)a2 &= 0x7FFFFu;
  return v5;
}
