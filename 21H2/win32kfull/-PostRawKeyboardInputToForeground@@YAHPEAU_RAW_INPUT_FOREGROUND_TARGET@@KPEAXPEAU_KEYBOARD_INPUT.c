/*
 * XREFs of ?PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x1C00026F8
 * Callers:
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1C0105A68 (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 * Callees:
 *     AllocateHidData @ 0x1C0002BC4 (AllocateHidData.c)
 *     FreeHidData @ 0x1C00065B0 (FreeHidData.c)
 *     PostInputMessage @ 0x1C0050880 (PostInputMessage.c)
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
  __int64 v11; // rbx
  struct tagWND *v12; // rdx
  unsigned int v13; // edi

  result = AllocateHidData((_DWORD)a3, 1, 16, 0, *((_QWORD *)a1 + 2));
  v11 = result;
  if ( result )
  {
    v12 = (struct tagWND *)*((_QWORD *)a1 + 2);
    *(_WORD *)(result + 56) = a4->MakeCode;
    *(_WORD *)(result + 58) = a4->Flags;
    *(_WORD *)(result + 60) = a4->Reserved;
    *(_DWORD *)(result + 64) = a5;
    *(_WORD *)(result + 62) = a6;
    *(_DWORD *)(result + 68) = a4->ExtraInformation;
    v13 = PostInputMessage(
            *(struct tagQ **)a1,
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
            0LL);
    if ( !v13 )
      FreeHidData(v11);
    return v13;
  }
  return result;
}
