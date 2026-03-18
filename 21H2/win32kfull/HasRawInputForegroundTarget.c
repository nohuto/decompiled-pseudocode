/*
 * XREFs of HasRawInputForegroundTarget @ 0x1C00AA6E8
 * Callers:
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1C00AA5A8 (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 *     xxxDoHotKeyStuff @ 0x1C00F6330 (xxxDoHotKeyStuff.c)
 * Callees:
 *     HasHidTable @ 0x1C00ABFD0 (HasHidTable.c)
 *     PtiKbdFromQ @ 0x1C00AC810 (PtiKbdFromQ.c)
 */

__int64 __fastcall HasRawInputForegroundTarget(_QWORD *a1)
{
  unsigned int v1; // esi
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v12; // rax

  v1 = 0;
  a1[2] = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( gpqForeground )
  {
    if ( (*(_DWORD *)(gpqForeground + 388LL) & 0x2000000) != 0 )
    {
      v3 = *(_QWORD *)(gpqForeground + 120LL);
      if ( v3 )
      {
        v4 = *(_QWORD *)(v3 + 16);
        if ( v4 )
        {
          v5 = *(_DWORD *)(v4 + 1256);
          if ( (v5 & 0x40000) != 0 && (v5 & 0x80000) == 0 && (v5 & 0x100000) == 0 )
          {
            v6 = *(_QWORD *)(v4 + 1400);
            if ( v6 )
            {
              v7 = *(_QWORD *)(gpqForeground + 112LL);
              if ( v7 )
              {
                v8 = *(_QWORD *)(v7 + 16);
                if ( v8 )
                {
                  if ( (*(_DWORD *)(v8 + 1256) & 0x200000) != 0 && v8 == *(_QWORD *)(v6 + 16) )
                  {
                    a1[1] = v8;
                    v1 = 1;
                    a1[2] = v6;
LABEL_20:
                    *a1 = gpqForeground;
                    return v1;
                  }
                }
              }
            }
          }
        }
      }
    }
    v9 = PtiKbdFromQ(gpqForeground);
    if ( (unsigned int)HasHidTable(v9) )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(v9 + 424) + 832LL);
      if ( (*(_DWORD *)(v10 + 100) & 0x10) != 0 )
      {
        v12 = *(_QWORD *)(v10 + 72);
        v1 = 1;
        a1[1] = v9;
        a1[2] = v12;
        if ( !v12 )
        {
          a1[2] = *(_QWORD *)(gpqForeground + 112LL);
          goto LABEL_20;
        }
        *a1 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 432LL);
      }
    }
  }
  return v1;
}
