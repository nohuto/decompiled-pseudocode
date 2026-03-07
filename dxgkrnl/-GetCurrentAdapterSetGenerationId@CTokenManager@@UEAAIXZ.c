__int64 __fastcall CTokenManager::GetCurrentAdapterSetGenerationId(CTokenManager *this)
{
  return *((unsigned int *)this + 30);
}
