/*
 * XREFs of ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1C0148BAC
 * Callers:
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1C009EED4 (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 * Callees:
 *     AllocateHidData @ 0x1C0009078 (AllocateHidData.c)
 *     FreeHidData @ 0x1C000DC20 (FreeHidData.c)
 *     PostInputMessage @ 0x1C0037A48 (PostInputMessage.c)
 *     PtiKbdFromQ @ 0x1C009FA48 (PtiKbdFromQ.c)
 */

void __fastcall PostRawKeyboardInputToSinks(
        unsigned int a1,
        void *a2,
        struct _KEYBOARD_INPUT_DATA *a3,
        int a4,
        unsigned __int16 a5,
        int a6)
{
  __int64 v6; // rbp
  __int64 v10; // rcx
  __int64 *v11; // rbx
  __int64 v12; // rcx
  __int64 i; // rsi
  _QWORD *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 HidData; // rax
  char *v18; // rdi
  __int64 v19; // [rsp+80h] [rbp-38h] BYREF

  v6 = 0LL;
  v19 = 0LL;
  v10 = gpqForeground;
  if ( gpqForeground )
  {
    v6 = *(_QWORD *)(PtiKbdFromQ(gpqForeground) + 424);
    v19 = *(_QWORD *)(v10 + 432);
  }
  v11 = *(__int64 **)(SGDGetUserSessionState(v10) + 408);
  for ( i = SGDGetUserSessionState(v12) + 408; v11 != (__int64 *)i; v11 = (__int64 *)*v11 )
  {
    if ( (*((_DWORD *)v11 + 25) & 0x40) != 0 )
    {
      v14 = (_QWORD *)v11[9];
      if ( v14 )
      {
        v15 = v14[5];
        if ( *(char *)(v15 + 20) >= 0 && *(char *)(v15 + 19) >= 0 && v14[3] == grpdeskRitInput )
        {
          if ( !v6
            || (unsigned __int8)CheckAccess(*(_QWORD *)(v14[2] + 424LL) + 864LL, &v19)
            || (v16 = *(_QWORD *)(v11[9] + 16), *(int *)(*(_QWORD *)(v16 + 424) + 12LL) < 0) )
          {
            if ( *(_QWORD *)(*(_QWORD *)(v11[9] + 16) + 424LL) != v6 && ((*((_DWORD *)v11 + 25) & 0x80u) == 0 || !a6) )
            {
              HidData = AllocateHidData((__int64)a2, 1, 16LL, 1LL, v11[9]);
              v18 = (char *)HidData;
              if ( !HidData )
                return;
              *(_WORD *)(HidData + 56) = a3->MakeCode;
              *(_WORD *)(HidData + 58) = a3->Flags;
              *(_WORD *)(HidData + 60) = a3->Reserved;
              *(_DWORD *)(HidData + 64) = a4;
              *(_WORD *)(HidData + 62) = a5;
              *(_DWORD *)(HidData + 68) = a3->ExtraInformation;
              if ( !(unsigned int)PostInputMessage(
                                    *(struct tagQ **)(*(_QWORD *)(v11[9] + 16) + 432LL),
                                    (struct tagWND *)v11[9],
                                    0xFFu,
                                    1uLL,
                                    *(_QWORD *)HidData,
                                    a1,
                                    0LL,
                                    a3->ExtraInformation,
                                    0,
                                    0LL,
                                    a2,
                                    0LL,
                                    0,
                                    0,
                                    0LL) )
                FreeHidData(v18);
            }
          }
          else
          {
            EtwTraceUIPIInputError(v16, 0LL, gpqForeground, v19, 5);
          }
        }
      }
    }
  }
}
