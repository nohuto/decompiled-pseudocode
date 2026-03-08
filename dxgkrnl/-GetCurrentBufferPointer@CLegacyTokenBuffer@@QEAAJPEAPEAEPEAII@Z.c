/*
 * XREFs of ?GetCurrentBufferPointer@CLegacyTokenBuffer@@QEAAJPEAPEAEPEAII@Z @ 0x1C001BB44
 * Callers:
 *     ?ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ @ 0x1C001B9FC (-ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ.c)
 * Callees:
 *     ?Grow@CLegacyTokenBuffer@@IEAAJXZ @ 0x1C0077B74 (-Grow@CLegacyTokenBuffer@@IEAAJXZ.c)
 */

__int64 __fastcall CLegacyTokenBuffer::GetCurrentBufferPointer(
        CLegacyTokenBuffer *this,
        unsigned __int8 **a2,
        unsigned int *a3,
        unsigned int a4)
{
  __int64 result; // rax
  unsigned int v8; // ecx

  result = 0LL;
  if ( a4 > *((_DWORD *)this + 526) )
    result = CLegacyTokenBuffer::Grow(this);
  v8 = *((_DWORD *)this + 526);
  *a2 = (unsigned __int8 *)*((_QWORD *)this + 262);
  *a3 = v8;
  return result;
}
