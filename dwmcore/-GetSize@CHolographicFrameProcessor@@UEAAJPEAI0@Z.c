/*
 * XREFs of ?GetSize@CHolographicFrameProcessor@@UEAAJPEAI0@Z @ 0x180107FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicFrameProcessor::GetSize(
        CHolographicFrameProcessor *this,
        unsigned int *a2,
        unsigned int *a3)
{
  *a2 = *((_DWORD *)this + 7);
  *a3 = *((_DWORD *)this + 8);
  return 0LL;
}
