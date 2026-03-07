__int64 __fastcall CFormatConverter::GetSize(CFormatConverter *this, unsigned int *a2, unsigned int *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rcx
  unsigned int v9; // [rsp+20h] [rbp-18h]
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  v6 = -2003292404;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  if ( !a2 )
  {
    v9 = 483;
LABEL_3:
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024809, v9, 0LL);
    goto LABEL_8;
  }
  if ( !a3 )
  {
    v9 = 484;
    goto LABEL_3;
  }
  if ( *((_QWORD *)this + 8) )
  {
    v6 = 0;
    *a2 = *((_DWORD *)this + 24);
    *a3 = *((_DWORD *)this + 25);
  }
LABEL_8:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v10);
  return v6;
}
