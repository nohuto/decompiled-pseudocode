void __fastcall _AddThreadInfoToLiveTriageDump(struct tagWIN32_TRIAGE_DATA *a1, struct tagTHREADINFO *a2)
{
  if ( _AddMemoryBlockToList(a1, a2) && _AddMemoryBlockToLiveTriageDump(a1, a2) )
  {
    _AddMemoryBlockToLiveTriageDump(a1, *((void **)a2 + 56));
    _AddQToLiveTriageDump(a1, *((struct tagQ **)a2 + 54));
    _AddMemoryBlockToLiveTriageDump(a1, *((void **)a2 + 92));
    _AddMListToLiveTriageDump(a1, (struct tagTHREADINFO *)((char *)a2 + 808));
  }
}
