/*
 * XREFs of ?SetTitle@CWindowData@@QEAAJPEAGH@Z @ 0x1800164A0
 * Callers:
 *     ?TextChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYTEXTCHANGE@@@Z @ 0x18001629C (-TextChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYTEXTCHANGE@@@Z.c)
 *     ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1800453D0 (-OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowData::SetTitle(CWindowData *this, char *a2, int a3)
{
  CWindowData *v3; // rax
  CWindowData **v4; // rsi
  CWindowData *v5; // rbp
  int v7; // edi
  __int64 v8; // rdx
  int v9; // edi
  __int64 v10; // r8
  char *v11; // rbx
  __int16 v12; // cx
  int v14; // eax
  unsigned int v15; // ebp

  v3 = (CWindowData *)*((_QWORD *)this + 2);
  v4 = (CWindowData **)((char *)this + 16);
  v5 = (CWindowData *)((char *)this + 702);
  v7 = a3 + 1;
  if ( v3 == (CWindowData *)((char *)this + 702) )
  {
    if ( v7 > 26 )
    {
      v3 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                            WPF::g_pProcessHeap,
                            2LL * v7);
      *v4 = v3;
      if ( !v3 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x1FE8u);
        return 2147942414LL;
      }
    }
  }
  else if ( v7 <= 26 )
  {
    (*(void (__fastcall **)(WPF::HeapBase *, CWindowData *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v3);
    v3 = v5;
    *v4 = v5;
  }
  else
  {
    v14 = (*(__int64 (__fastcall **)(WPF::HeapBase *, CWindowData **, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 24LL))(
            WPF::g_pProcessHeap,
            v4,
            2LL * v7);
    v15 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x1FF9u);
      return v15;
    }
    v3 = *v4;
    if ( !*v4 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x1FFAu);
      return 2147942414LL;
    }
  }
  v8 = v7;
  v9 = 0;
  if ( (unsigned __int64)(v8 - 1) > 0x7FFFFFFE )
    v9 = -2147024809;
  if ( v9 < 0 )
  {
    if ( !v8 )
      goto LABEL_13;
  }
  else
  {
    v9 = 0;
    if ( v8 )
    {
      v10 = 2147483646 - v8;
      v11 = (char *)(a2 - (char *)v3);
      while ( v10 + v8 )
      {
        v12 = *(_WORD *)((char *)v3 + (_QWORD)v11);
        if ( !v12 )
          break;
        *(_WORD *)v3 = v12;
        v3 = (CWindowData *)((char *)v3 + 2);
        if ( !--v8 )
          goto LABEL_25;
      }
    }
    else
    {
LABEL_25:
      v3 = (CWindowData *)((char *)v3 - 2);
      v9 = -2147024774;
    }
  }
  *(_WORD *)v3 = 0;
LABEL_13:
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x1FFEu);
  return (unsigned int)v9;
}
