__int64 __fastcall CContainerVectorShape::NotifyListenerOfChange(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (((_DWORD)a3 - 2) & 0xFFFFFFFD) == 0 )
    a3 = 0LL;
  return CContent::NotifyListenerOfChange(a1, a2, a3);
}
