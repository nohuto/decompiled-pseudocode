/*
 * XREFs of ?cjSize@EPATHOBJ@@QEAAKXZ @ 0x1C0181180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EPATHOBJ::cjSize(EPATHOBJ *this)
{
  __int64 result; // rax
  __int64 *v2; // rdx
  int v3; // ecx

  result = 0LL;
  v2 = *(__int64 **)(*((_QWORD *)this + 1) + 32LL);
  while ( v2 )
  {
    v3 = *((_DWORD *)v2 + 5);
    v2 = (__int64 *)*v2;
    result = (unsigned int)(result + 8 * v3 + 24);
  }
  return result;
}
