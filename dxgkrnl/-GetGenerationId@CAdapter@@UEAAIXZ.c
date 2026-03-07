__int64 __fastcall CAdapter::GetGenerationId(CAdapter *this)
{
  return *((unsigned int *)this + 24);
}
