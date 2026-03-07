// attributes: thunk
void __fastcall CD3DResourceManager::UnusableNotification(CD3DResourceManager *this, struct CD3DResource *a2)
{
  CD3DResourceManager::DestroyResource(this, a2);
}
