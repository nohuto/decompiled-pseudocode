/*
 * XREFs of ?DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z @ 0x1C01F2A80
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C0023C6C (HMValidateHandleNoRip.c)
 *     HMValidateHandleNoSecure @ 0x1C008C3F8 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01F2BE0 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01F3450 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 */

void __fastcall DrawIconCallBack(unsigned __int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  struct tagWND *v7; // rdi
  __int64 v8; // r14
  struct tagSwitchWndInfo *v9; // rax
  struct tagSwitchWndInfo *v10; // rsi
  int v11; // ebp
  unsigned __int64 *v12; // rbx
  __int64 i; // rax
  struct tagCURSOR *v14; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // rcx
  int v17; // [rsp+20h] [rbp-68h]
  __int128 v18; // [rsp+50h] [rbp-38h] BYREF
  __int64 v19; // [rsp+60h] [rbp-28h]

  v6 = HMValidateHandleNoSecure(a3, 1);
  v7 = (struct tagWND *)v6;
  if ( v6 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v6 + 40) + 31LL) & 0x10) != 0 )
    {
      v19 = 0LL;
      v18 = 0LL;
      v8 = HMValidateHandleNoSecure(a1, 1);
      if ( v8 )
      {
        v9 = Getpswi(v7);
        v10 = v9;
        if ( v9 )
        {
          v11 = 0;
          v12 = (unsigned __int64 *)(*((_QWORD *)v9 + 2) + 32LL);
LABEL_11:
          if ( *v12 != 1 )
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
              v14 = (struct tagCURSOR *)qword_1C03317D0;
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            *(_QWORD *)&v18 = *(_QWORD *)(ThreadWin32Thread + 416);
            *(_QWORD *)(ThreadWin32Thread + 416) = &v18;
            *((_QWORD *)&v18 + 1) = v7;
            HMLockObject(v7);
            xxxPaintIconsInSwitchWindow(v7, v10, 0LL, v11, v17, 1, 0, 0, v14);
            ThreadUnlock1(v16);
          }
        }
      }
    }
  }
}
