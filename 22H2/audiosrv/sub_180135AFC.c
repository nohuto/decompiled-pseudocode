/*
 * XREFs of sub_180135AFC @ 0x180135AFC
 * Callers:
 *     sub_1800087F4 @ 0x1800087F4 (sub_1800087F4.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_180135AFC(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rsi
  unsigned __int64 v3; // rdi
  _QWORD *v4; // r9
  _QWORD *i; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx

  v1 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
  v3 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  v4 = *(_QWORD **)(a1 + 472);
  for ( i = (_QWORD *)*v4; i != v4; i = (_QWORD *)*i )
  {
    v6 = 6LL;
    v7 = i[6] + 4LL;
    do
    {
      v8 = *(_QWORD *)(v7 + 12);
      if ( v8 && *(int *)v7 >= 0 )
      {
        if ( v3 )
        {
          if ( v8 < v3 )
            v3 = *(_QWORD *)(v7 + 12);
        }
        else
        {
          v3 = *(_QWORD *)(v7 + 12);
        }
      }
      v7 += 24LL;
      --v6;
    }
    while ( v6 );
  }
  if ( v1 )
    LeaveCriticalSection(v1);
  return v3;
}
