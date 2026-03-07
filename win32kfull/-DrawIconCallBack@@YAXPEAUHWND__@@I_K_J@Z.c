void __fastcall DrawIconCallBack(HWND a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // ebx
  __int64 v6; // rax
  struct tagWND *v7; // rdi
  __int64 v8; // r14
  struct tagSwitchWndInfo *v9; // rax
  struct tagSwitchWndInfo *v10; // rsi
  int v11; // ebp
  _QWORD *v12; // rbx
  __int64 i; // rax
  struct tagCURSOR *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // [rsp+20h] [rbp-68h]
  __int128 v19; // [rsp+50h] [rbp-38h] BYREF
  __int64 v20; // [rsp+60h] [rbp-28h]

  v4 = (int)a1;
  v6 = HMValidateHandleNoSecure(a3, 1);
  v7 = (struct tagWND *)v6;
  if ( v6 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v6 + 40) + 31LL) & 0x10) != 0 )
    {
      v20 = 0LL;
      v19 = 0LL;
      v8 = HMValidateHandleNoSecure(v4, 1);
      if ( v8 )
      {
        v9 = Getpswi(v7);
        v10 = v9;
        if ( v9 )
        {
          v11 = 0;
          v12 = (_QWORD *)(*((_QWORD *)v9 + 2) + 32LL);
LABEL_11:
          if ( *v12 != 1LL )
          {
            for ( i = HMValidateHandleNoSecure(*v12, 1); ; i = *(_QWORD *)(i + 120) )
            {
              if ( !i )
              {
                ++v12;
                ++v11;
                goto LABEL_11;
              }
              if ( v8 == i )
                break;
            }
            if ( !a4 || (v14 = (struct tagCURSOR *)HMValidateHandleNoRip(a4, 3)) == 0LL )
              v14 = (struct tagCURSOR *)qword_1C035CCF0;
            ThreadLockAlways(v7, &v19);
            xxxPaintIconsInSwitchWindow(v7, v10, 0LL, v11, v18, 1, 0, 0, v14);
            ThreadUnlock1(v16, v15, v17);
          }
        }
      }
    }
  }
}
