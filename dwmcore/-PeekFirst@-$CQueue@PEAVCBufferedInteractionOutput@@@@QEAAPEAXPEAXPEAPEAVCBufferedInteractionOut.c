/*
 * XREFs of ?PeekFirst@?$CQueue@PEAVCBufferedInteractionOutput@@@@QEAAPEAXPEAXPEAPEAVCBufferedInteractionOutput@@@Z @ 0x180281684
 * Callers:
 *     ?BoundBufferedOutput@CInteractionContextWrapper@@AEAAX_K@Z @ 0x180280744 (-BoundBufferedOutput@CInteractionContextWrapper@@AEAAX_K@Z.c)
 *     ?GetBufferedOutputRaw@CInteractionContextWrapper@@UEAAI_K0PEAUInteractionOutput@@@Z @ 0x180280E50 (-GetBufferedOutputRaw@CInteractionContextWrapper@@UEAAI_K0PEAUInteractionOutput@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall CQueue<CBufferedInteractionOutput *>::PeekFirst(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 *v5; // rdi

  *a3 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 3));
  v5 = (__int64 *)*a1;
  if ( (__int64 *)*a1 == a1 )
    v5 = 0LL;
  else
    *a3 = v5[2];
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 3));
  return v5;
}
