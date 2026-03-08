/*
 * XREFs of ?PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x1C0008F6C
 * Callers:
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1C009EED4 (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 * Callees:
 *     AllocateHidData @ 0x1C0009078 (AllocateHidData.c)
 *     FreeHidData @ 0x1C000DC20 (FreeHidData.c)
 *     PostInputMessage @ 0x1C0037A48 (PostInputMessage.c)
 */

__int64 __fastcall PostRawKeyboardInputToForeground(
        struct _RAW_INPUT_FOREGROUND_TARGET *a1,
        unsigned int a2,
        void *a3,
        struct _KEYBOARD_INPUT_DATA *a4,
        unsigned int a5,
        unsigned __int16 a6)
{
  __int64 result; // rax
  void *v11; // rbx
  struct tagWND *v12; // rdx
  struct tagQ *v13; // rcx
  unsigned int v14; // edi

  result = AllocateHidData((_DWORD)a3, 1, 16, 0, *((_QWORD *)a1 + 2));
  v11 = (void *)result;
  if ( result )
  {
    v12 = (struct tagWND *)*((_QWORD *)a1 + 2);
    v13 = *(struct tagQ **)a1;
    *(_WORD *)(result + 56) = a4->MakeCode;
    *(_WORD *)(result + 58) = a4->Flags;
    *(_WORD *)(result + 60) = a4->Reserved;
    *(_DWORD *)(result + 64) = a5;
    *(_WORD *)(result + 62) = a6;
    *(_DWORD *)(result + 68) = a4->ExtraInformation;
    v14 = PostInputMessage(
            v13,
            v12,
            0xFFu,
            *(_QWORD *)result,
            a2,
            0LL,
            a4->ExtraInformation,
            0,
            0LL,
            a3,
            0LL,
            0,
            0,
            0LL);
    if ( !v14 )
      FreeHidData(v11);
    return v14;
  }
  return result;
}
