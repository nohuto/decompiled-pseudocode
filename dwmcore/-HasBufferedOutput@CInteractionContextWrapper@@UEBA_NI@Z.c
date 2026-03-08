/*
 * XREFs of ?HasBufferedOutput@CInteractionContextWrapper@@UEBA_NI@Z @ 0x180281310
 * Callers:
 *     <none>
 * Callees:
 *     ?FindBufferedOutputPointer@CInteractionContextWrapper@@AEBAPEAVCBufferedOutputPointer@@I@Z @ 0x180280DF8 (-FindBufferedOutputPointer@CInteractionContextWrapper@@AEBAPEAVCBufferedOutputPointer@@I@Z.c)
 */

bool __fastcall CInteractionContextWrapper::HasBufferedOutput(CInteractionContextWrapper *this, int a2)
{
  if ( !*((_DWORD *)this + 138) )
    return 0;
  if ( a2 )
    return CInteractionContextWrapper::FindBufferedOutputPointer(this, a2) != 0LL;
  return 1;
}
