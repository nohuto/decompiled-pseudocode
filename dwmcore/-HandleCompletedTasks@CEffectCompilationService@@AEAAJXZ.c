/*
 * XREFs of ?HandleCompletedTasks@CEffectCompilationService@@AEAAJXZ @ 0x1800EA81C
 * Callers:
 *     _lambda_85e973520dc2ca0a0fec8750a81f8fb9_::_lambda_invoker_cdecl_ @ 0x180103220 (_lambda_85e973520dc2ca0a0fec8750a81f8fb9_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180034BB4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D4A28 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z @ 0x1800EA8C0 (-RemoveAt@-$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z.c)
 *     ?OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ @ 0x1800EAA00 (-OnCompilationCompleted@CCompiledEffectTemplate@@QEAAJXZ.c)
 */

__int64 __fastcall CEffectCompilationService::HandleCompletedTasks(CEffectCompilationService *this)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  _QWORD *v4; // rsi
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  if ( *((_DWORD *)this + 19) )
  {
    do
    {
      v2 = 0LL;
      v3 = **((_QWORD **)this + 10);
      v4 = (_QWORD *)(v3 + 16);
      *(_BYTE *)(v3 + 92) = 1;
      if ( *(_DWORD *)(v3 + 40) )
      {
        do
        {
          CCompiledEffectTemplate::OnCompilationCompleted(*(CCompiledEffectTemplate **)(*v4 + 8 * v2));
          v2 = (unsigned int)(v2 + 1);
        }
        while ( (unsigned int)v2 < *(_DWORD *)(v3 + 40) );
      }
      *(_DWORD *)(v3 + 40) = 0;
      DynArrayImpl<0>::ShrinkToSize((__int64)v4, 8u);
      DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt((char *)this + 80, 0LL);
    }
    while ( (*((_DWORD *)this + 19))-- != 1 );
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v7);
  return 0LL;
}
