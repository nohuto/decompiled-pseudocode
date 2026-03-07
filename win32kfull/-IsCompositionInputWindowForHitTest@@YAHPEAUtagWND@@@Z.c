__int64 __fastcall IsCompositionInputWindowForHitTest(struct tagWND *a1)
{
  unsigned int v2; // edi
  __int64 v4; // rsi
  __int64 v5; // r15
  __int64 v6; // rcx
  __int64 Prop; // rsi
  int v8; // r14d
  tagObjLock **v9; // rsi
  __int128 v10; // [rsp+48h] [rbp-28h] BYREF
  char v11; // [rsp+58h] [rbp-18h]
  char v12; // [rsp+60h] [rbp-10h]

  v2 = IsCompositionInputWindow(a1);
  if ( !(unsigned int)IsWindowHolographicForHitTest(a1) )
  {
    if ( !v2 )
      return v2;
    if ( a1 )
    {
      if ( (*((_DWORD *)a1 + 80) & 0x1000) == 0 )
        goto LABEL_11;
      v4 = *((_QWORD *)a1 + 18);
      v5 = CoreWindowProp::s_atom;
      v10 = 0LL;
      v11 = 0;
      v12 = 0;
      if ( !IS_USERCRIT_OWNED_EXCLUSIVE() && IS_USERCRIT_OWNED_AT_ALL(v6) )
      {
        v12 = 1;
        if ( v4 == gObjDummyLock )
          v4 = 0LL;
        *(_QWORD *)&v10 = v4;
        v8 = 0;
        v9 = (tagObjLock **)&v10;
        do
        {
          if ( *v9 )
            tagObjLock::LockExclusive(*v9);
          ++v8;
          ++v9;
        }
        while ( !v8 );
        v11 = 1;
      }
      Prop = RealGetProp(*((_QWORD *)a1 + 18), v5, 1LL);
      if ( v12 && v11 )
      {
        if ( (_QWORD)v10 )
          tagObjLock::UnLockExclusive((tagObjLock *)v10);
        v11 = 0;
      }
      if ( Prop && *(_DWORD *)(Prop + 28) )
        return 1LL;
    }
    if ( (*((_DWORD *)a1 + 80) & 0x1000) != 0 )
      return 0LL;
LABEL_11:
    if ( (unsigned int)HasFallbackInteractionSink(a1) )
      return 0;
    return v2;
  }
  return 1LL;
}
