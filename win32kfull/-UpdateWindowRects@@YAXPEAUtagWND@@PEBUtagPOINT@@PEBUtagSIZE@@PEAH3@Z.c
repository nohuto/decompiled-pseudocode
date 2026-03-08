/*
 * XREFs of ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1C01454BA
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1C01BE8C0 (zzzUpdateLayeredWindow.c)
 * Callees:
 *     ?GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ @ 0x1C002772C (-GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ.c)
 *     CalcWindowFullScreen @ 0x1C006789C (CalcWindowFullScreen.c)
 *     PostShellHookMessagesEx @ 0x1C0109A90 (PostShellHookMessagesEx.c)
 */

void __fastcall UpdateWindowRects(
        struct tagWND *a1,
        const struct tagPOINT *a2,
        const struct tagSIZE *a3,
        int *a4,
        int *a5)
{
  char *v5; // rbx
  int v6; // r12d
  int v7; // r14d
  unsigned int v11; // ebp
  unsigned int v12; // esi
  int v13; // eax
  int v14; // r8d
  int v15; // edx
  _DWORD *v16; // rcx
  _DWORD *v17; // rcx
  int v18; // ecx
  int v19; // ecx
  HRGN ExplicitClipRgn; // rax

  v5 = (char *)a1 + 40;
  v6 = 0;
  v7 = 0;
  *a4 = 0;
  *a5 = 0;
  if ( a2 )
  {
    v11 = a2->x - *(_DWORD *)(*(_QWORD *)v5 + 88LL);
    v12 = a2->y - *(_DWORD *)(*(_QWORD *)v5 + 92LL);
    if ( a2->x != *(_DWORD *)(*(_QWORD *)v5 + 88LL) || v12 )
    {
      v13 = *((_DWORD *)a1 + 80);
      v6 = 1;
      if ( (v13 & 0x400) != 0 )
      {
        *((_DWORD *)a1 + 80) = v13 & 0xFFFFFBFF;
        PostShellHookMessagesEx(0x36u, *(_QWORD *)a1, 0LL);
      }
    }
  }
  else
  {
    v11 = 0;
    v12 = 0;
  }
  if ( a3 )
  {
    v14 = a3->cx + *(_DWORD *)(*(_QWORD *)v5 + 88LL) - *(_DWORD *)(*(_QWORD *)v5 + 96LL);
    v15 = a3->cy + *(_DWORD *)(*(_QWORD *)v5 + 92LL) - *(_DWORD *)(*(_QWORD *)v5 + 100LL);
    if ( v14 || v15 )
      v7 = 1;
  }
  else
  {
    v14 = 0;
    v15 = 0;
  }
  if ( v6 || v7 )
  {
    v16 = *(_DWORD **)v5;
    v16[24] += v14 + v11;
    v16[25] += v15 + v12;
    v16[22] += v11;
    v16[23] += v12;
    v17 = *(_DWORD **)v5;
    v17[28] += v14 + v11;
    v17[29] += v15 + v12;
    v17[26] += v11;
    v17[27] += v12;
    if ( v14 < 0 )
    {
      v18 = *(_DWORD *)(*(_QWORD *)v5 + 88LL);
      if ( *(_DWORD *)(*(_QWORD *)v5 + 104LL) < v18 )
      {
        *(_DWORD *)(*(_QWORD *)v5 + 104LL) = v18;
        *(_DWORD *)(*(_QWORD *)v5 + 112LL) = *(_DWORD *)(*(_QWORD *)v5 + 88LL);
      }
    }
    if ( v15 < 0 )
    {
      v19 = *(_DWORD *)(*(_QWORD *)v5 + 92LL);
      if ( *(_DWORD *)(*(_QWORD *)v5 + 108LL) < v19 )
      {
        *(_DWORD *)(*(_QWORD *)v5 + 108LL) = v19;
        *(_DWORD *)(*(_QWORD *)v5 + 116LL) = *(_DWORD *)(*(_QWORD *)v5 + 92LL);
      }
    }
    ExplicitClipRgn = tagWND::GetExplicitClipRgn(a1);
    if ( ExplicitClipRgn )
      GreOffsetRgn(ExplicitClipRgn, v11, v12);
    CalcWindowFullScreen(a1);
  }
  *a5 = v6;
  *a4 = v7;
}
