/*
 * XREFs of MouseMove @ 0x1C0218170
 * Callers:
 *     ?xxxMKMouseMove@@YAHG@Z @ 0x1C01E4C10 (-xxxMKMouseMove@@YAHG@Z.c)
 *     ?xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E5120 (-xxxMKMoveAccelCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E5610 (-xxxMKMoveConstCursorTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0079E3C (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z @ 0x1C022ADA8 (-AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z.c)
 */

void __fastcall MouseMove(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  int v5; // edi
  CMouseProcessor *MouseProcessor; // rax

  v4 = a2;
  v5 = a1;
  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor(a1, a2, a3, a4);
  if ( MouseProcessor )
    CMouseProcessor::AccessibilityMouseMove(MouseProcessor, v5, v4);
}
