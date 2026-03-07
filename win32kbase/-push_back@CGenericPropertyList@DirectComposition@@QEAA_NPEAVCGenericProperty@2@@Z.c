bool __fastcall DirectComposition::CGenericPropertyList::push_back(
        DirectComposition::CGenericPropertyList *this,
        struct DirectComposition::CGenericProperty *a2)
{
  bool result; // al

  if ( (int)DirectComposition::CGenericPropertyList::EnsureSpace(this) < 0 )
    return 0;
  *(_QWORD *)(*(_QWORD *)this + 8LL * *((_QWORD *)this + 1)) = a2;
  result = 1;
  ++*((_QWORD *)this + 1);
  return result;
}
