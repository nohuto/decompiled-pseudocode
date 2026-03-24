/*
 * XREFs of HasRawInputForegroundTarget @ 0x1C0105BA4
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C01052A0 (xxxDoHotKeyStuff.c)
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1C0105A68 (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 * Callees:
 *     PtiKbdFromQ @ 0x1C004FC28 (PtiKbdFromQ.c)
 *     HasHidTable @ 0x1C0052630 (HasHidTable.c)
 */

__int64 __fastcall HasRawInputForegroundTarget(_QWORD *a1)
{
  unsigned int v1; // esi
  __int64 v3; // rbp
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rcx

  v1 = 0;
  a1[2] = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( gpqForeground )
  {
    if ( (*(_DWORD *)(gpqForeground + 388LL) & 0x2000000) != 0 )
    {
      v7 = *(_QWORD *)(gpqForeground + 120LL);
      if ( v7 )
        v7 = *(_QWORD *)(v7 + 16);
      if ( v7 )
      {
        v8 = *(_DWORD *)(v7 + 1232);
        if ( (v8 & 0x40000) != 0 && (v8 & 0x80000) == 0 && (v8 & 0x100000) == 0 )
        {
          v9 = *(_QWORD *)(v7 + 1400);
          if ( v9 )
          {
            v10 = *(_QWORD *)(gpqForeground + 112LL);
            if ( v10 )
              v10 = *(_QWORD *)(v10 + 16);
            if ( v10 && (*(_DWORD *)(v10 + 1232) & 0x200000) != 0 && v10 == *(_QWORD *)(v9 + 16) )
            {
              a1[1] = v10;
              v1 = 1;
              a1[2] = v9;
LABEL_22:
              *a1 = gpqForeground;
              return v1;
            }
          }
        }
      }
    }
    v3 = PtiKbdFromQ(gpqForeground);
    if ( (unsigned int)HasHidTable(v3) )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(v3 + 424) + 832LL);
      if ( (*(_DWORD *)(v5 + 100) & 0x10) != 0 )
      {
        v6 = *(_QWORD *)(v5 + 72);
        v1 = 1;
        a1[1] = v3;
        a1[2] = v6;
        if ( !v6 )
        {
          a1[2] = *(_QWORD *)(gpqForeground + 112LL);
          goto LABEL_22;
        }
        *a1 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 432LL);
      }
    }
  }
  return v1;
}
