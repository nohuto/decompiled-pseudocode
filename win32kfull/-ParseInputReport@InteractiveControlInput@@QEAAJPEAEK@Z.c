/*
 * XREFs of ?ParseInputReport@InteractiveControlInput@@QEAAJPEAEK@Z @ 0x1C0249C3C
 * Callers:
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x1C0248B64 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     ?ParseInputReport@InteractiveControlParser@@SAJPEAVInteractiveControlDevice@@PEAEKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C024DB00 (-ParseInputReport@InteractiveControlParser@@SAJPEAVInteractiveControlDevice@@PEAEKPEAUtagINTERAC.c)
 */

__int64 __fastcall InteractiveControlInput::ParseInputReport(
        struct InteractiveControlDevice **this,
        CHAR *a2,
        ULONG a3)
{
  size_t v4; // rbx
  unsigned __int64 v6; // rsi
  int v7; // ebp
  struct InteractiveControlDevice *v8; // rcx
  struct InteractiveControlDevice *v9; // rax

  v4 = a3;
  v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v7 = InteractiveControlParser::ParseInputReport(
         this[5],
         a2,
         a3,
         (struct tagINTERACTIVECTRL_INFO *)((char *)this + 52));
  if ( v7 >= 0 )
  {
    if ( *((_DWORD *)this[5] + 57) )
    {
      v8 = this[10];
      if ( v8 )
        Win32FreePool(v8);
      v9 = (struct InteractiveControlDevice *)Win32AllocPoolZInit(v4, 1819440195LL);
      this[10] = v9;
      memmove(v9, a2, v4);
    }
    *((_DWORD *)this + 7) = v6;
  }
  return (unsigned int)v7;
}
