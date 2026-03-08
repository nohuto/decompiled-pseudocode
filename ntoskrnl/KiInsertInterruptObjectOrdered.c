/*
 * XREFs of KiInsertInterruptObjectOrdered @ 0x1403A1A2C
 * Callers:
 *     KiConnectInterrupt @ 0x14028FC8C (KiConnectInterrupt.c)
 *     KiConnectSecondaryInterrupt @ 0x14039DF6C (KiConnectSecondaryInterrupt.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall KiInsertInterruptObjectOrdered(__int64 a1, __int64 a2)
{
  __int64 *v2; // r8
  __int64 **v3; // rcx
  __int64 *result; // rax
  __int64 *v5; // rax
  __int64 *v6; // rcx
  __int64 **v7; // rdx

  if ( *(_BYTE *)(a2 + 93) && *(_BYTE *)(a1 + 93) )
  {
    v2 = (__int64 *)(a1 + 8);
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 16) + 85LL) )
    {
      v3 = *(__int64 ***)(a1 + 16);
      result = (__int64 *)(a2 + 8);
      if ( *v3 == v2 )
      {
        *result = (__int64)v2;
        *(_QWORD *)(a2 + 16) = v3;
        *v3 = result;
        v2[1] = (__int64)result;
        return result;
      }
FatalListEntryError_49:
      __fastfail(3u);
    }
    v5 = (__int64 *)(a1 + 8);
    do
    {
      v6 = v5;
      if ( !*((_BYTE *)v5 + 85) )
        break;
      v5 = (__int64 *)*v5;
    }
    while ( v5 != v2 );
  }
  else
  {
    v6 = (__int64 *)(a1 + 8);
  }
  result = (__int64 *)(a2 + 8);
  v7 = (__int64 **)v6[1];
  if ( *v7 != v6 )
    goto FatalListEntryError_49;
  *result = (__int64)v6;
  result[1] = (__int64)v7;
  *v7 = result;
  v6[1] = (__int64)result;
  return result;
}
