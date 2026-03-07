struct _LUID __fastcall CHolographicManager::GetRenderingAdapterLuid(CHolographicManager *this, _QWORD *a2)
{
  *a2 = *(_QWORD *)((char *)this + 68);
  return (struct _LUID)a2;
}
