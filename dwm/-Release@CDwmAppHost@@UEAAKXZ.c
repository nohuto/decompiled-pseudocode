/*
 * XREFs of ?Release@CDwmAppHost@@UEAAKXZ @ 0x140003050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDwmAppHost::Release(CDwmAppHost *this)
{
  __int64 result; // rax

  result = (unsigned int)(*((_DWORD *)this + 2) - 1);
  *((_DWORD *)this + 2) = result;
  return result;
}
