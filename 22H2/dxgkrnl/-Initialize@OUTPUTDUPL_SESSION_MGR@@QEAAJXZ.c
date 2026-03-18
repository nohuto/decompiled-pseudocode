/*
 * XREFs of ?Initialize@OUTPUTDUPL_SESSION_MGR@@QEAAJXZ @ 0x1C01EB624
 * Callers:
 *     ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1C01EB010 (--0DXGSESSIONDATA@@QEAA@K@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C01E93B0 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_SESSION_MGR::Initialize(OUTPUTDUPL_SESSION_MGR *this)
{
  int v1; // edi
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v5; // rcx
  void **v6; // rbx
  unsigned int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // eax
  const wchar_t *v11; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v13; // rcx

  v1 = *(_DWORD *)this;
  *((_DWORD *)this + 1) = *(_DWORD *)this;
  v3 = 32 * v1;
  v4 = operator new[](0x10uLL, 0x674D444Fu, 256LL);
  v6 = (void **)v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = 0LL;
    *(_DWORD *)(v4 + 8) = 0;
    *(_DWORD *)(v4 + 12) = 0;
    AUTOEXPANDALLOCATION::GetBuffer((const void **)v4, v3, 0);
  }
  else
  {
    v6 = 0LL;
  }
  *((_QWORD *)this + 7) = v6;
  if ( v6 )
  {
    if ( *v6 )
    {
      memset(*v6, 0, v3);
      return 0LL;
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(0LL);
    WdLogSingleEntry2(6LL, *((unsigned int *)this + 1), CurrentProcessSessionId);
    v10 = PsGetCurrentProcessSessionId(v13);
    v11 = L"Failed to get session data buffer for output duplication with 0x%I64x apps in session 0x%I64x.";
  }
  else
  {
    v8 = PsGetCurrentProcessSessionId(v5);
    WdLogSingleEntry2(6LL, *((unsigned int *)this + 1), v8);
    v10 = PsGetCurrentProcessSessionId(v9);
    v11 = L"Failed to allocate session data for output duplication with 0x%I64x apps in session 0x%I64x.";
  }
  DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)v11, *((unsigned int *)this + 1), v10, 0LL, 0LL, 0LL);
  return 3221225495LL;
}
