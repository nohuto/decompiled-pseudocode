/*
 * XREFs of ?TemplateWindow@CWindow@@QEAA_NPEAUtagWND@@W4TemplateWindowOptions@@@Z @ 0x1C0240518
 * Callers:
 *     ?_TemplateWindow@CWindowGroup@@AEAA_NPEAVCWindow@@0W4TemplateWindowOptions@@@Z @ 0x1C024081C (-_TemplateWindow@CWindowGroup@@AEAA_NPEAVCWindow@@0W4TemplateWindowOptions@@@Z.c)
 * Callees:
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0035260 (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 *     ?CloneWindowPosAndArrangementAsync@@YA_NPEAUtagWND@@PEBU1@1W4CloneWindowPosOptions@@@Z @ 0x1C01CF5C8 (-CloneWindowPosAndArrangementAsync@@YA_NPEAUtagWND@@PEBU1@1W4CloneWindowPosOptions@@@Z.c)
 */

char __fastcall CWindow::TemplateWindow(__int64 a1, __int64 a2, char a3)
{
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // r11
  __int64 *v8; // r10
  __int64 v9; // rcx
  __int64 v10; // rdx
  char v11; // si
  int v12; // r14d
  struct tagWND *i; // r9
  struct tagWND *RootOwner; // rax
  __int64 v15; // r9
  __int64 *v16; // r10
  __int64 *v17; // rax
  __int64 v18; // rcx

  v5 = 0;
  v6 = HMValidateHandleNoSecure(*(_QWORD *)(a1 + 16), 1);
  v7 = v6;
  if ( v6 )
  {
    if ( v6 == a2 )
    {
      return 1;
    }
    else
    {
      v8 = 0LL;
      if ( (a3 & 1) != 0 )
      {
        v9 = *(_QWORD *)(v6 + 40);
        v10 = *(_QWORD *)(a2 + 40);
        v11 = *(_BYTE *)(v9 + 24) & 8;
        if ( v11 == (*(_BYTE *)(v10 + 24) & 8) )
        {
          v12 = *(_DWORD *)(v9 + 236);
          if ( v12 == *(_DWORD *)(v10 + 236) )
          {
            if ( *(char *)(v9 + 20) >= 0 )
            {
              v8 = (__int64 *)v6;
            }
            else
            {
              for ( i = *(struct tagWND **)(v6 + 96); i; i = *(struct tagWND **)(v15 + 96) )
              {
                RootOwner = GetRootOwner(i);
                if ( RootOwner == (struct tagWND *)v7 )
                {
                  v8 = 0LL;
                }
                else
                {
                  v17 = (__int64 *)v15;
                  if ( v16 )
                    v17 = v16;
                  v8 = v17;
                }
                v18 = *(_QWORD *)(v15 + 40);
                if ( v11 != (*(_BYTE *)(v18 + 24) & 8) || v12 != *(_DWORD *)(v18 + 236) )
                {
                  if ( !v8 )
                    v8 = (__int64 *)v15;
                  return CloneWindowPosAndArrangementAsync(a2, v7, v8, (a3 & 2) != 0);
                }
              }
            }
          }
        }
      }
      return CloneWindowPosAndArrangementAsync(a2, v7, v8, (a3 & 2) != 0);
    }
  }
  return v5;
}
