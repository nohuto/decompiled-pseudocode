/*
 * XREFs of ?OnAnimationStart@CAppArrangementDelayed@@EEAAJXZ @ 0x1800AFB90
 * Callers:
 *     <none>
 * Callees:
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x180008088 (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ?AbandonTransition@CAnimationScheduler@@QEAAJH@Z @ 0x180008F04 (-AbandonTransition@CAnimationScheduler@@QEAAJH@Z.c)
 *     McTemplateU0tttt_EtwEventWriteTransfer @ 0x1800B55F0 (McTemplateU0tttt_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CAppArrangementDelayed::OnAnimationStart(CAppArrangementDelayed *this)
{
  unsigned __int8 v2; // si
  unsigned __int8 v3; // bp
  unsigned __int8 v4; // r12
  char v5; // r15
  unsigned int v6; // r14d
  __int64 v7; // rdx
  HANDLE PropW; // rax
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  int v14; // edx

  v2 = 0;
  v3 = 1;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( !*((_DWORD *)this + 28) )
    goto LABEL_23;
  v7 = *((_QWORD *)this + 11);
  do
  {
    PropW = GetPropW(*(HWND *)(*(_QWORD *)(v7 + 8LL * v6) + 16LL), L"ImmersiveGhostWindowProp");
    v7 = *((_QWORD *)this + 11);
    if ( PropW )
      v3 = 0;
    v9 = *(_DWORD *)(*(_QWORD *)(v7 + 8LL * v6) + 24LL) & 0xFFF;
    if ( v9 <= 0x1E )
    {
      if ( v9 != 30 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 2;
          if ( v11 )
          {
            v12 = v11 - 3;
            if ( v12 )
            {
              v13 = v12 - 15;
              if ( v13 )
              {
                if ( v13 != 2 )
                  goto LABEL_14;
LABEL_12:
                v5 = 1;
              }
            }
          }
        }
      }
LABEL_13:
      v2 = 1;
      v4 = 1;
      goto LABEL_14;
    }
    switch ( v9 )
    {
      case '"':
        goto LABEL_13;
      case '\'':
        goto LABEL_12;
      case '/':
      case 'S':
        goto LABEL_13;
    }
LABEL_14:
    ++v6;
  }
  while ( v6 < *((_DWORD *)this + 28) );
  if ( !v2 )
  {
LABEL_23:
    CStoryboard::Abandon(this);
    goto LABEL_24;
  }
  if ( v3 )
    CAnimationScheduler::AbandonTransition(
      *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 30),
      75);
LABEL_24:
  CAnimationScheduler::AbandonTransition(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 30), 67);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0tttt_EtwEventWriteTransfer(v4, v14, v2, v3, v4, v5);
  return 0LL;
}
