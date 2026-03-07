_BOOL8 __fastcall EditionShowSystemCursor(CursorApiRouter *a1)
{
  return CursorApiRouter::HidePointer(a1, (_DWORD)a1 == 0);
}
