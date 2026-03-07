__int64 __fastcall BLTQUEUE::UpdateVsyncCount(BLTQUEUE *this, union _LARGE_INTEGER *a2)
{
  LARGE_INTEGER v4; // rax
  __int64 v5; // r10
  __int64 v6; // r9
  union _LARGE_INTEGER v7; // rcx
  LONGLONG v8; // rax
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  v4 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v5 = *((unsigned int *)this + 92);
  v6 = *((unsigned int *)this + 93);
  v7 = PerformanceFrequency;
  v8 = v5 * v4.QuadPart / v6 / PerformanceFrequency.QuadPart;
  *((_QWORD *)this + 56) = v8;
  *((_QWORD *)this + 57) = v7.QuadPart * v6 * (unsigned int)v8 / v5;
  if ( a2 )
    *a2 = v7;
  return *((unsigned int *)this + 112);
}
