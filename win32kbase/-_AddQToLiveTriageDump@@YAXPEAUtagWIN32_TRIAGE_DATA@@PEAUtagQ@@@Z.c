void __fastcall _AddQToLiveTriageDump(struct tagWIN32_TRIAGE_DATA *a1, struct tagQ *a2)
{
  if ( _AddMemoryBlockToList(a1, a2) && _AddMemoryBlockToLiveTriageDump(a1, a2) )
  {
    _AddMListToLiveTriageDump(a1, (struct tagQ *)((char *)a2 + 24));
    _AddThreadInfoToLiveTriageDump(a1, *((struct tagTHREADINFO **)a2 + 9));
    _AddThreadInfoToLiveTriageDump(a1, *((struct tagTHREADINFO **)a2 + 12));
    _AddThreadInfoToLiveTriageDump(a1, *((struct tagTHREADINFO **)a2 + 13));
    _AddMemoryBlockToLiveTriageDump(a1, *((void **)a2 + 14));
    _AddMemoryBlockToLiveTriageDump(a1, *((void **)a2 + 15));
    _AddMemoryBlockToLiveTriageDump(a1, *((void **)a2 + 16));
    _AddMemoryBlockToLiveTriageDump(a1, *((void **)a2 + 17));
  }
}
