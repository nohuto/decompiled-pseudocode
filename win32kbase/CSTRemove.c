/*
 * XREFs of CSTRemove @ 0x1C015CEA0
 * Callers:
 *     VideoPortCallout @ 0x1C00D9A60 (VideoPortCallout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSTRemove(int a1, __int64 a2)
{
  __int64 v2; // r8
  _DWORD *i; // rax
  __int64 result; // rax
  __int64 v5; // rdx

  v2 = 0LL;
  for ( i = &unk_1C02D4A40; *((_QWORD *)i - 2) != a2 || *i != a1; i += 6 )
  {
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= 0x1E )
      return 0LL;
  }
  v5 = 3 * v2;
  result = 1LL;
  *((_QWORD *)&gCSTParam + v5) = 0LL;
  *((_DWORD *)&gCSTParam + 2 * v5 + 4) = 0;
  return result;
}
