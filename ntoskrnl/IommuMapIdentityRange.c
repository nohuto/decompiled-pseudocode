/*
 * XREFs of IommuMapIdentityRange @ 0x140523A70
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuDomainMapIdentityRange @ 0x140515774 (HalpIommuDomainMapIdentityRange.c)
 *     IommupValidateMdl @ 0x140524838 (IommupValidateMdl.c)
 */

__int64 __fastcall IommuMapIdentityRange(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v5; // r8
  ULONG_PTR v6; // r10
  unsigned int v7; // r11d

  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 == 1 )
    return 0LL;
  if ( v3 )
    return 3221225711LL;
  if ( (unsigned __int8)IommupValidateMdl(a3) )
    return HalpIommuDomainMapIdentityRange(
             v6,
             v7,
             v5 + 8 * ((unsigned __int64)*(unsigned int *)(v5 + 44) >> 12) + 48,
             (unsigned __int64)*(unsigned int *)(v5 + 40) >> 12);
  return 3221225713LL;
}
