__int64 __fastcall OUTPUTDUPL_SESSION_MGR::Initialize(OUTPUTDUPL_SESSION_MGR *this)
{
  int v1; // edi
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  void **v9; // rbx
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // eax
  const wchar_t *v17; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9

  v1 = *(_DWORD *)this;
  *((_DWORD *)this + 1) = *(_DWORD *)this;
  v3 = 32 * v1;
  v4 = operator new[](0x10uLL, 0x674D444Fu, 256LL);
  v9 = (void **)v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = 0LL;
    *(_DWORD *)(v4 + 8) = 0;
    *(_DWORD *)(v4 + 12) = 0;
    AUTOEXPANDALLOCATION::GetBuffer((const void **)v4, v3, 0);
  }
  else
  {
    v9 = 0LL;
  }
  *((_QWORD *)this + 7) = v9;
  if ( v9 )
  {
    if ( *v9 )
    {
      memset(*v9, 0, v3);
      return 0LL;
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(0LL, v5, v7, v8);
    WdLogSingleEntry2(6LL, *((unsigned int *)this + 1), CurrentProcessSessionId);
    v16 = PsGetCurrentProcessSessionId(v20, v19, v21, v22);
    v17 = L"Failed to get session data buffer for output duplication with 0x%I64x apps in session 0x%I64x.";
  }
  else
  {
    v11 = PsGetCurrentProcessSessionId(v6, v5, v7, v8);
    WdLogSingleEntry2(6LL, *((unsigned int *)this + 1), v11);
    v16 = PsGetCurrentProcessSessionId(v13, v12, v14, v15);
    v17 = L"Failed to allocate session data for output duplication with 0x%I64x apps in session 0x%I64x.";
  }
  DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)v17, *((unsigned int *)this + 1), v16, 0LL, 0LL, 0LL);
  return 3221225495LL;
}
