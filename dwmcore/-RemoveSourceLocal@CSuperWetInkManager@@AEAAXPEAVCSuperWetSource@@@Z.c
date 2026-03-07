void __fastcall CSuperWetInkManager::RemoveSourceLocal(CSuperWetInkManager *this, struct CSuperWetSource *a2)
{
  char *v2; // rdi
  struct CSuperWetSource **i; // rbx
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)this + 40;
  for ( i = (struct CSuperWetSource **)*((_QWORD *)this + 5); i != *((struct CSuperWetSource ***)this + 6); i += 13 )
  {
    if ( *i == a2 )
    {
      if ( *i == *((struct CSuperWetSource **)this + 1) )
        CSuperWetInkManager::DeactivateCurrentSource((struct CSuperWetSource **)this);
      std::vector<CSuperWetInkManager::SuperWetStroke>::erase(v2, &v4, i);
      return;
    }
  }
}
