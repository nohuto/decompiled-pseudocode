/*
 * XREFs of ?Remove@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA?AV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@_NPEAI@Z @ 0x18019D43C
 * Callers:
 *     ??1?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@QEAA@XZ @ 0x18010DFF4 (--1-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@QEAA@XZ.c)
 *     ?OnInput@CManipulationManager@@IEAAXXZ @ 0x18019B88C (-OnInput@CManipulationManager@@IEAAXXZ.c)
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x18019C918 (-ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F2FE0 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801290B0 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 (__fastcall ****__fastcall CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Remove(
        __int64 a1,
        __int64 (__fastcall ****a2)(_QWORD),
        char a3,
        _DWORD *a4))(_QWORD)
{
  __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 **v10; // rax

  *a2 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  if ( a3 )
  {
    v8 = *(__int64 **)a1;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) == a1 )
    {
      v9 = *v8;
      if ( *(__int64 **)(*v8 + 8) == v8 )
      {
        *(_QWORD *)a1 = v9;
        *(_QWORD *)(v9 + 8) = a1;
        goto LABEL_8;
      }
    }
LABEL_15:
    __fastfail(3u);
  }
  v8 = *(__int64 **)(a1 + 8);
  if ( *v8 != a1 )
    goto LABEL_15;
  v10 = (__int64 **)v8[1];
  if ( *v10 != v8 )
    goto LABEL_15;
  *(_QWORD *)(a1 + 8) = v10;
  *v10 = (__int64 *)a1;
LABEL_8:
  if ( v8 != (__int64 *)a1 )
  {
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=(a2, v8 + 2);
    if ( v8 )
    {
      Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(v8 + 2);
      operator delete(v8);
    }
    --*(_DWORD *)(a1 + 16);
  }
  if ( a4 )
    *a4 = *(_DWORD *)(a1 + 16);
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  return a2;
}
