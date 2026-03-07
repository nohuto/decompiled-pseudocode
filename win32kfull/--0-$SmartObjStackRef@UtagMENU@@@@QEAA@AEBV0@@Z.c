__int64 __fastcall SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(__int64 a1, __int64 a2)
{
  SmartObjStackRefBase<tagMENU>::Init(a1, **(_QWORD **)a2);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  return a1;
}
