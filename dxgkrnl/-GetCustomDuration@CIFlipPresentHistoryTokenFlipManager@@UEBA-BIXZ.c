__int64 __fastcall CIFlipPresentHistoryTokenFlipManager::GetCustomDuration(CIFlipPresentHistoryTokenFlipManager *this)
{
  unsigned int v1; // edx
  unsigned int *v2; // rax

  v1 = 0;
  v2 = *(unsigned int **)(*(_QWORD *)(*((_QWORD *)this + 1) + 64LL) + 8LL);
  if ( v2 )
    return *v2;
  return v1;
}
