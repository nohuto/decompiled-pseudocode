void __fastcall zzzUpdateFade(
        struct tagPOINT *a1,
        struct tagSIZE *a2,
        HDC a3,
        struct tagPOINT *a4,
        struct _BLENDFUNCTION *a5)
{
  unsigned int v7; // eax
  __int64 v8; // rax
  struct tagWND *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int128 v13; // [rsp+80h] [rbp-28h] BYREF
  __int64 v14; // [rsp+90h] [rbp-18h]

  v13 = 0LL;
  v14 = 0LL;
  v7 = gfade[12];
  if ( (v7 & 8) != 0 )
  {
    v8 = HMValidateHandleNoSecure(gfade[0], 1);
    v9 = (struct tagWND *)v8;
    if ( v8 )
    {
      ThreadLock(v8, &v13);
      zzzUpdateLayeredWindow(v9, (__int64)a3, (__int64)a4, 0, (__int64)a5, 2, 0LL);
      ThreadUnlock1(v11, v10, v12);
    }
  }
  else
  {
    GreUpdateSprite(
      *(HDEV *)(gpDispInfo + 40LL),
      0LL,
      *(void **)gfade,
      0LL,
      a1,
      a2,
      a3,
      a4,
      gfade[13],
      a5,
      2 - ((v7 & 0x40) != 0),
      0LL,
      0LL,
      1,
      0,
      0);
  }
}
