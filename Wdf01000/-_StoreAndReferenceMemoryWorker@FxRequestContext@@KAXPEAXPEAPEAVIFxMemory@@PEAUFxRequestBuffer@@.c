void __fastcall FxRequestContext::_StoreAndReferenceMemoryWorker(
        void *Tag,
        IFxMemory **PPMemory,
        FxRequestBuffer *Buffer)
{
  IFxMemory *v6; // rax
  IFxMemory *Memory; // rcx
  __int64 v8; // r8

  if ( Buffer->DataType == FxRequestBufferMemory )
  {
    Memory = Buffer->u.Memory.Memory;
    v8 = 130LL;
LABEL_6:
    Memory->AddRef(Memory, Tag, v8, "minkernel\\wdf\\framework\\shared\\core\\fxrequestcontext.cpp");
    v6 = Buffer->u.Memory.Memory;
    goto LABEL_4;
  }
  if ( Buffer->DataType == FxRequestBufferReferencedMdl )
  {
    Memory = Buffer->u.Memory.Memory;
    v8 = 135LL;
    goto LABEL_6;
  }
  v6 = 0LL;
LABEL_4:
  *PPMemory = v6;
}
