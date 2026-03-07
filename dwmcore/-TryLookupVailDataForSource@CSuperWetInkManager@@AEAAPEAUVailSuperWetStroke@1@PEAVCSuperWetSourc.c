struct CSuperWetInkManager::VailSuperWetStroke *__fastcall CSuperWetInkManager::TryLookupVailDataForSource(
        CSuperWetInkManager *this,
        struct CSuperWetSource *a2)
{
  struct CSuperWetInkManager::VailSuperWetStroke *result; // rax

  for ( result = (struct CSuperWetInkManager::VailSuperWetStroke *)*((_QWORD *)this + 8);
        result != *((struct CSuperWetInkManager::VailSuperWetStroke **)this + 9);
        result = (struct CSuperWetInkManager::VailSuperWetStroke *)((char *)result + 120) )
  {
    if ( *(struct CSuperWetSource **)result == a2 )
      return result;
  }
  return 0LL;
}
