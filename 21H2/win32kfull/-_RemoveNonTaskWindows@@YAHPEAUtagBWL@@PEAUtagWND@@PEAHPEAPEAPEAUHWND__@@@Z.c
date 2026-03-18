/*
 * XREFs of ?_RemoveNonTaskWindows@@YAHPEAUtagBWL@@PEAUtagWND@@PEAHPEAPEAPEAUHWND__@@@Z @ 0x1C01ED94C
 * Callers:
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01ED4B8 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     ?_IsTaskWindow@@YAHPEAUtagWND@@0@Z @ 0x1C01ED8C8 (-_IsTaskWindow@@YAHPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall _RemoveNonTaskWindows(struct tagBWL *a1, struct tagWND *a2, unsigned int *a3, HWND **a4)
{
  unsigned int v4; // ebp
  HWND *v5; // r14
  HWND *v6; // rdi
  struct tagWND *v10; // rax
  struct tagWND *v11; // rsi
  struct tagWND *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  struct tagWND *v15; // r8
  struct tagWND *v16; // rbx
  __int64 result; // rax

  v4 = 0;
  v5 = (HWND *)((char *)a1 + 32);
  *a3 = -1;
  v6 = (HWND *)((char *)a1 + 32);
  while ( *v5 != (HWND)1 )
  {
    v10 = (struct tagWND *)HMValidateHandleNoSecure((int)*v5, 1);
    v11 = v10;
    if ( v10 && (unsigned int)_IsTaskWindow(v10, a2) )
    {
      v12 = v11;
      if ( (*(_BYTE *)(*((_QWORD *)v11 + 5) + 26LL) & 4) == 0 )
      {
        while ( 1 )
        {
          v13 = *((_QWORD *)v12 + 15);
          if ( !v13 )
            break;
          v14 = *(_QWORD *)(v13 + 40);
          v15 = v12;
          v12 = (struct tagWND *)*((_QWORD *)v12 + 15);
          if ( *(char *)(v14 + 24) < 0 )
          {
            if ( (*(_BYTE *)(*((_QWORD *)v15 + 5) + 26LL) & 1) != 0 && !*(_QWORD *)(v13 + 120) )
            {
              v12 = v11;
              goto LABEL_13;
            }
            goto LABEL_23;
          }
          if ( (*(_BYTE *)(v14 + 26) & 4) != 0 )
            goto LABEL_13;
        }
        if ( !v12 )
          goto LABEL_23;
      }
LABEL_13:
      v16 = (struct tagWND *)*((_QWORD *)v12 + 25);
      if ( v16 )
      {
        while ( !(unsigned int)_IsTaskWindow(v16, a2) )
        {
          v16 = (struct tagWND *)*((_QWORD *)v16 + 15);
          if ( !v16 )
            goto LABEL_18;
        }
        if ( v16 != v11 )
          goto LABEL_23;
LABEL_18:
        if ( v6 < v5 )
          *v6 = *v5;
        if ( a2 == v11 )
          *a3 = v4;
        ++v4;
        ++v6;
      }
    }
LABEL_23:
    ++v5;
  }
  *v6 = (HWND)1;
  result = v4;
  *a4 = v6;
  return result;
}
