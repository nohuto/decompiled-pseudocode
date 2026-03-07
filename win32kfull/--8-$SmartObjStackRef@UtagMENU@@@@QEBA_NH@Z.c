bool __fastcall SmartObjStackRef<tagMENU>::operator==(__int64 a1)
{
  return !*(_QWORD *)(a1 + 16) && **(_QWORD **)a1 == 0LL;
}
