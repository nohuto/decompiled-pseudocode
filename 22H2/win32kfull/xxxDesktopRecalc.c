/*
 * XREFs of xxxDesktopRecalc @ 0x1C00FFA1C
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00DCFE8 (xxxSystemParametersInfoWorker.c)
 *     xxxDesktopsRecalc @ 0x1C00FF9A0 (xxxDesktopsRecalc.c)
 * Callees:
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C004B590 (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 *     BuildHwndList @ 0x1C006CAC0 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006DA20 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 *     ?PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z @ 0x1C00FFC08 (-PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z.c)
 *     DesktopWindowFromDesktop @ 0x1C00FFD10 (DesktopWindowFromDesktop.c)
 */

void __fastcall xxxDesktopRecalc(ShellWindowManagement *this, struct tagMONITORRECTS *a2, __int64 a3)
{
  int v5; // edi
  char v6; // al
  struct tagWND *v7; // r9
  struct tagBWL *v8; // rax
  struct tagBWL *v9; // r15
  unsigned __int64 *v10; // rdi
  int v11; // esi
  unsigned __int64 v12; // rcx
  _QWORD *v13; // rbx
  _QWORD *v14; // r14
  __int64 v15; // rbx
  struct tagWINDOWANDRECT *v16; // rbp
  __int64 v17; // rsi
  int v18; // r13d
  struct tagTHREADINFO *v19; // rax
  struct tagWINDOWANDRECT *v20; // r12
  __int64 v21; // r15
  unsigned __int64 *v22; // r14
  struct tagTHREADINFO *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // [rsp+30h] [rbp-48h]
  struct tagBWL *v26; // [rsp+38h] [rbp-40h]
  unsigned int v28; // [rsp+90h] [rbp+18h]
  struct tagTHREADINFO *v29; // [rsp+98h] [rbp+20h]

  v5 = 20;
  if ( PsGetCurrentProcess(this, a2, a3) == gpepCSRSS )
    v5 = 16404;
  v28 = v5;
  DesktopWindowFromDesktop(this);
  v6 = ShellWindowManagement::BehaviorEnabled(this, (const struct tagDESKTOP *)0x20);
  v8 = BuildHwndList(v7, (v6 << 6) + 2, 0LL);
  v26 = v8;
  v9 = v8;
  if ( v8 )
  {
    v10 = (unsigned __int64 *)((char *)v8 + 32);
    v11 = 0;
    v12 = *((_QWORD *)v8 + 4);
    v13 = (_QWORD *)((char *)v8 + 32);
    if ( v12 != 1 )
    {
      v14 = (_QWORD *)((char *)v8 + 32);
      do
      {
        if ( HMValidateHandleNoSecure(v12, 1) )
        {
          ++v11;
          *v14++ = *v13;
        }
        v12 = *++v13;
      }
      while ( *v13 != 1LL );
      if ( v11 )
      {
        if ( *(_DWORD *)a2 )
        {
          v15 = v11;
          v25 = v11;
          v16 = (struct tagWINDOWANDRECT *)Win32AllocPool(24LL * v11, 2004054869LL);
          if ( v16 )
          {
            if ( v11 > 0 )
            {
              v17 = 0LL;
              do
              {
                if ( *v10 )
                {
                  v18 = 0;
                  v19 = *(struct tagTHREADINFO **)(HMValidateHandleNoSecure(*v10, 1) + 16);
                  v29 = v19;
                  if ( v17 < v15 )
                  {
                    v20 = v16;
                    v21 = v15 - v17;
                    v22 = v10;
                    v23 = v19;
                    do
                    {
                      if ( *v22 )
                      {
                        v24 = HMValidateHandleNoSecure(*v22, 1);
                        if ( *(struct tagTHREADINFO **)(v24 + 16) == v23 )
                        {
                          ++v18;
                          *(_QWORD *)v20 = *v22;
                          *(_OWORD *)((char *)v20 + 8) = *(_OWORD *)(*(_QWORD *)(v24 + 40) + 88LL);
                          *v22 = 0LL;
                          v20 = (struct tagWINDOWANDRECT *)((char *)v20 + 24);
                        }
                      }
                      ++v22;
                      --v21;
                    }
                    while ( v21 );
                    v15 = v25;
                    v19 = v29;
                  }
                  PostThreadRecalc(v19, a2, v16, v18, v28);
                }
                ++v17;
                ++v10;
              }
              while ( v17 < v15 );
              v9 = v26;
            }
            Win32FreePool(v16);
          }
        }
      }
    }
    FreeHwndList(v9);
  }
}
