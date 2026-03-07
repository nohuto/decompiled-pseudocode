__int64 __fastcall CBitmap::GetResolution(CBitmap *this, double *a2, double *a3)
{
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  if ( a2 && a3 )
  {
    *a2 = *((float *)this + 28);
    *a3 = *((float *)this + 29);
    CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v7);
    return 0LL;
  }
  else
  {
    CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v7);
    return 2147942487LL;
  }
}
