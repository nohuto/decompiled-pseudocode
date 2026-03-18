/*
 * XREFs of ?DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z @ 0x1C01ED300
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoRip @ 0x1C00A3A40 (HMValidateHandleNoRip.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01ED460 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01EDC90 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 */

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
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // [rsp+20h] [rbp-68h]
  __int128 v20; // [rsp+50h] [rbp-38h] BYREF
  __int64 v21; // [rsp+60h] [rbp-28h]

  v4 = (int)a1;
  v6 = HMValidateHandleNoSecure(a3, 1);
  v7 = (struct tagWND *)v6;
  if ( v6 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v6 + 40) + 31LL) & 0x10) != 0 )
    {
      v21 = 0LL;
      v20 = 0LL;
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
              v14 = (struct tagCURSOR *)qword_1C032CB00;
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            *(_QWORD *)&v20 = *(_QWORD *)(ThreadWin32Thread + 416);
            *(_QWORD *)(ThreadWin32Thread + 416) = &v20;
            *((_QWORD *)&v20 + 1) = v7;
            HMLockObject(v7);
            xxxPaintIconsInSwitchWindow(v7, v10, 0LL, v11, v19, 1, 0, 0, v14);
            ThreadUnlock1(v17, v16, v18);
          }
        }
      }
    }
  }
}
