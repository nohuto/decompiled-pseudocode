void __fastcall CTouchProcessor::CheckFreeOnDeparture(struct _KTHREAD **this, unsigned __int16 a2)
{
  struct CInputPointerNode *NodeById; // rax

  NodeById = CTouchProcessor::FindNodeById(this, a2, 0, 0);
  if ( NodeById
    && *((_DWORD *)NodeById + 14) == 3
    && *((struct CInputPointerNode **)NodeById + 32) == (struct CInputPointerNode *)((char *)NodeById + 256)
    && !*((_DWORD *)NodeById + 9) )
  {
    CTouchProcessor::FreeNode((CTouchProcessor *)this, NodeById);
  }
}
