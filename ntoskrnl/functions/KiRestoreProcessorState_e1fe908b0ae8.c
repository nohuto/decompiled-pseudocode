__int64 __fastcall KiRestoreProcessorState(int a1, int a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  _CONTEXT *Context; // r10
  unsigned int ContextFlags; // r9d
  char v7; // r11
  __int64 v8; // r8

  CurrentPrcb = KeGetCurrentPrcb();
  Context = CurrentPrcb->Context;
  ContextFlags = Context->ContextFlags;
  v7 = Context->SegCs & 1;
  if ( !v7 )
  {
    v8 = ContextFlags & 0x100040;
    if ( ((ContextFlags & 0x100008) == 1048584 || (_DWORD)v8 == 1048640)
      && (_DWORD)v8 == 1048640
      && (MEMORY[0xFFFFF780000003E0] & 0xFFFFFFFC) != 0 )
    {
      RtlXRestore((char *)&Context->1 + SLODWORD(Context[1].P3Home) + 464, MEMORY[0xFFFFF780000003E0] & 0xFFFFFFFC, v8);
    }
  }
  KeContextToKframes(a1, a2, (_DWORD)Context, ContextFlags, v7);
  return KiRestoreProcessorControlState(&CurrentPrcb->ProcessorState);
}
