/*
 * XREFs of PopProcessorNotifyLpiCoordinatedStatesNotification @ 0x14056E430
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopProcessorNotifyLpiCoordinatedStatesNotification(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r10
  __int64 v3; // rdi
  unsigned __int8 (__fastcall *v4)(__int64, __int64, _DWORD *); // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 i; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax

  v2 = *(_QWORD *)(a1 + 64);
  v3 = *(_QWORD *)(a1 + 72);
  if ( !v2 )
    return 3221225474LL;
  v4 = *(unsigned __int8 (__fastcall **)(__int64, __int64, _DWORD *))(v2 + 104);
  if ( !v4 )
    return 3221225474LL;
  v5 = 0LL;
  if ( *a2 )
  {
    do
    {
      v6 = 0LL;
      for ( i = 24 * v5; (unsigned int)v6 < a2[i + 22]; v6 = (unsigned int)(v6 + 1) )
      {
        v8 = *(_QWORD *)&a2[i + 24];
        v9 = *(_QWORD *)(v8 + 24 * v6);
        if ( v9 )
          *(_QWORD *)(v8 + 24 * v6) = *(_QWORD *)(v9 + 72);
      }
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < *a2 );
    v4 = *(unsigned __int8 (__fastcall **)(__int64, __int64, _DWORD *))(v2 + 104);
  }
  return v4(v3, 36LL, a2) == 0 ? 0xC00000BB : 0;
}
