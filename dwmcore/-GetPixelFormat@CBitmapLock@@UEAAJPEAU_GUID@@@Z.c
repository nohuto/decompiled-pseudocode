__int64 __fastcall CBitmapLock::GetPixelFormat(CBitmapLock *this, struct _GUID *a2)
{
  int v4; // eax
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  v4 = DXGIFormatToPixelFormat(*((_DWORD *)this + 19), *((_DWORD *)this + 20) == 1);
  v5 = MilPfToWic(v4, a2);
  v7 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xC6u, 0LL);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v9);
  return v7;
}
