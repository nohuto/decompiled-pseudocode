/*
 * XREFs of sub_180134D8C @ 0x180134D8C
 * Callers:
 *     sub_180072E48 @ 0x180072E48 (sub_180072E48.c)
 *     sub_180072EA8 @ 0x180072EA8 (sub_180072EA8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180134D8C(__int64 a1)
{
  _DWORD *v2; // rdx
  unsigned __int64 v3; // r8
  _DWORD *v4; // rcx
  __int64 v5; // rax
  unsigned __int64 v6; // r9
  DWORD CurrentThreadId; // [rsp+30h] [rbp+8h]

  CurrentThreadId = GetCurrentThreadId();
  CoDisableCallCancellation(0LL);
  v2 = *(_DWORD **)(a1 + 528);
  v3 = *(_QWORD *)(a1 + 536);
  while ( v2 != (_DWORD *)v3 && CurrentThreadId != *v2 )
    ++v2;
  if ( v2 != (_DWORD *)v3 )
  {
    v4 = v2 + 1;
    v5 = 0LL;
    v6 = (v3 - (unsigned __int64)(v2 + 1) + 3) >> 2;
    if ( (unsigned __int64)(v2 + 1) > v3 )
      v6 = 0LL;
    if ( v6 )
    {
      do
      {
        if ( CurrentThreadId != *v4 )
          *v2++ = *v4;
        ++v4;
        ++v5;
      }
      while ( v5 != v6 );
    }
  }
  *(_QWORD *)(a1 + 536) = v2;
  return 0LL;
}
