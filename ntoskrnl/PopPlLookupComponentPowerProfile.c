/*
 * XREFs of PopPlLookupComponentPowerProfile @ 0x14059EE60
 * Callers:
 *     PopPlRegisterComponent @ 0x140393310 (PopPlRegisterComponent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPlLookupComponentPowerProfile(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 i; // r10
  __int64 v6; // rcx

  v2 = *(_QWORD *)(a1 + 72);
  v3 = 0LL;
  v4 = 0LL;
  if ( v2 )
  {
    for ( i = *(_QWORD *)(a1 + 80); ; i += 8LL )
    {
      v6 = *a2 - **(_QWORD **)i;
      if ( *a2 == **(_QWORD **)i )
        v6 = a2[1] - *(_QWORD *)(*(_QWORD *)i + 8LL);
      if ( !v6 )
        break;
      if ( ++v4 >= v2 )
        return v3;
    }
    return *(_QWORD *)i;
  }
  return v3;
}
