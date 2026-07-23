/*
 * XREFs of PpmResetPerfEngineForProcessorEx @ 0x1403F81B0
 * Callers:
 *     PopHandleNextState @ 0x1409940D0 (PopHandleNextState.c)
 * Callees:
 *     PpmResetPerfTimes @ 0x1403C2720 (PpmResetPerfTimes.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PpmResetPerfEngineForProcessorEx(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v3; // bp
  __int64 i; // rbx
  unsigned int j; // edi
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned int k; // esi
  __int64 v12; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v3 = a2;
  if ( !*(_DWORD *)(a1 + 36) )
  {
    for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
    {
      if ( *(_DWORD *)(i + 208) )
      {
        for ( j = 0; j < *(_DWORD *)(i + 200); ++j )
        {
          result = j;
          v7 = *(_QWORD *)(i + 216) + 136LL * j;
          if ( v3 )
          {
            if ( *(_DWORD *)(v7 + 16) == 1 )
              result = PpmResetPerfTimes(*(_QWORD *)v7, a2);
          }
          else
          {
            result = *(_QWORD *)(i + 272);
            if ( result )
              result = ((__int64 (__fastcall *)(_QWORD))result)(*(_QWORD *)(v7 + 8));
          }
        }
      }
    }
  }
  v8 = a1 + 33128;
  v9 = *(_QWORD *)(a1 + 33128);
  if ( v9 )
  {
    v10 = *(_QWORD *)(a1 + 33136);
    if ( v10 )
    {
      if ( !v3 )
      {
        result = *(_QWORD *)(v9 + 272);
        if ( result )
          result = ((__int64 (__fastcall *)(_QWORD))result)(*(_QWORD *)(v10 + 8));
      }
      if ( v8 == *(_QWORD *)(v9 + 16) )
      {
        for ( k = 0; k < *(_DWORD *)(v9 + 200); ++k )
        {
          v12 = *(_QWORD *)(v9 + 216) + 136LL * k;
          result = *(unsigned int *)(v12 + 16);
          if ( (_DWORD)result )
          {
            if ( v3 )
            {
              if ( (_DWORD)result == 1 )
                result = PpmResetPerfTimes(*(_QWORD *)v12, a2);
            }
            else
            {
              result = *(_QWORD *)(v9 + 272);
              if ( result )
                result = ((__int64 (__fastcall *)(_QWORD))result)(*(_QWORD *)(v12 + 8));
            }
          }
        }
      }
    }
  }
  if ( v3 )
    return PpmResetPerfTimes(v8, a2);
  return result;
}
