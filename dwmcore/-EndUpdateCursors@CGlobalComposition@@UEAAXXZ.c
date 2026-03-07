void __fastcall CGlobalComposition::EndUpdateCursors(CGlobalComposition *this)
{
  CCursorVisual **v1; // rdi
  CCursorVisual **i; // rbx

  v1 = (CCursorVisual **)*((_QWORD *)this + 171);
  for ( i = (CCursorVisual **)*((_QWORD *)this + 170); i != v1; ++i )
    CCursorVisual::SetNotificationMode(*i);
}
