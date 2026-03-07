char __fastcall CInertiaManager::AddInertiaInfo(
        CInertiaManager *this,
        struct tagTHREADINFO *a2,
        __int64 a3,
        struct CInputDest *a4,
        struct tagInputRoutingInfo *a5,
        char a6,
        int a7,
        const struct INERTIA_INFO *a8,
        double a9,
        const struct tagRECT *a10,
        const struct _D3DMATRIX *a11)
{
  __int64 v11; // rbp
  LARGE_INTEGER PerformanceCounter; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  LONGLONG v25; // rbx
  unsigned int v27; // r9d
  CInputDest *v28; // rcx
  struct tagTHREADINFO *DelegateThreadInfo; // rax
  int v30; // r9d
  int v31; // ecx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  int IsEnabledDeviceUsage; // eax
  const struct INERTIA_INFO_INTERNAL *v35; // rcx

  v11 = *((_QWORD *)a2 + 53);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( !*(_QWORD *)(SGDGetUserSessionState(v18, v17, v19, v20) + 17144) )
  {
    v25 = 100 * gliQpcFreq.QuadPart / 1000;
    *(_QWORD *)(SGDGetUserSessionState(
                  (unsigned __int64)((unsigned __int128)(100 * gliQpcFreq.QuadPart * (__int128)0x20C49BA5E353F7CFLL) >> 64) >> 63,
                  (unsigned __int128)(100 * gliQpcFreq.QuadPart * (__int128)0x20C49BA5E353F7CFLL) >> 64,
                  100 * gliQpcFreq.QuadPart,
                  v24)
              + 17144) = v25;
  }
  if ( (*((_DWORD *)this + 48) & 1) != 0
    && *((_QWORD *)this + 1) == v11
    && PerformanceCounter.QuadPart - *((_QWORD *)this + 23) <= *(_QWORD *)(SGDGetUserSessionState(v22, v21, v23, v24)
                                                                         + 17144)
    && a9 <= *((double *)this + 5) )
  {
    return 0;
  }
  *((_QWORD *)this + 1) = v11;
  *((_QWORD *)this + 2) = a3;
  *((_QWORD *)this + 3) = *(_QWORD *)a8;
  *((_DWORD *)this + 8) = *((_DWORD *)a8 + 2);
  *((double *)this + 5) = a9;
  *((LARGE_INTEGER *)this + 23) = PerformanceCounter;
  v27 = *((_DWORD *)this + 48) & 0xFFFFFFE7 | (8 * (a6 & 1 | (2 * (a7 & 1))));
  *((_DWORD *)this + 48) = v27;
  if ( a7 || !a4 )
  {
    *((_QWORD *)this + 16) = 0LL;
    v32 = v27 & 0xFFFFFFFD;
  }
  else
  {
    *((_QWORD *)this + 16) = CInputDest::GetWindowHandle(a4);
    DelegateThreadInfo = CInputDest::GetDelegateThreadInfo(v28);
    v31 = 2;
    if ( a2 != DelegateThreadInfo )
      v31 = 0;
    v32 = v30 & 0xFFFFFFFD | v31;
  }
  *((_DWORD *)this + 48) = v32;
  if ( a10 )
  {
    v33 = v32 | 4;
    *((struct tagRECT *)this + 3) = *a10;
    *((struct _D3DMATRIX *)this + 1) = *a11;
  }
  else
  {
    v33 = v32 & 0xFFFFFFFB;
  }
  *((_DWORD *)this + 48) = v33;
  if ( a5 )
  {
    v33 |= 0x20u;
    *(_OWORD *)((char *)this + 136) = *(_OWORD *)a5;
    *(_OWORD *)((char *)this + 152) = *((_OWORD *)a5 + 1);
    *(_OWORD *)((char *)this + 168) = *((_OWORD *)a5 + 2);
  }
  *((_DWORD *)this + 48) = v33 | 1;
  IsEnabledDeviceUsage = Feature_Servicing_ListViewScrollingFix__private_IsEnabledDeviceUsage();
  v35 = (CInertiaManager *)((char *)this + 8);
  if ( IsEnabledDeviceUsage )
    InputTraceLogging::Inertia::AddInertiaInfo(v35);
  else
    InputTraceLogging::Win32k::AddInertiaInfo(v35);
  ApiSetEditionEdgyProcessInertia((char *)this + 8);
  return 1;
}
