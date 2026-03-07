void __fastcall DestroyEmptyCursorObject(struct tagCURSOR *a1)
{
  if ( (*((_DWORD *)a1 + 20) & 0x100) != 0 && !gbInDestroyHandleTableObjects )
    UnlinkCursor(a1);
  HMFreeObject(a1);
}
