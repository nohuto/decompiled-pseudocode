__int64 __fastcall CGeometry::NotifyOnChanged(__int64 a1, __int64 a2, __int64 a3)
{
  *(_DWORD *)(a1 + 32) |= 1u;
  return CResource::NotifyOnChanged(a1, a2, a3);
}
