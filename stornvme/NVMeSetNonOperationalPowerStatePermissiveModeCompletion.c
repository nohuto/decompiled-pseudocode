/*
 * XREFs of NVMeSetNonOperationalPowerStatePermissiveModeCompletion @ 0x1C0024080
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C0001D98 (GetSrbExtension.c)
 */

__int64 __fastcall NVMeSetNonOperationalPowerStatePermissiveModeCompletion(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r10
  __int64 v5; // rbx
  __int64 v6; // r8

  result = GetSrbExtension(a2);
  v5 = result;
  if ( v6 && *(_BYTE *)(v3 + 3) != 14 )
  {
    if ( *(_BYTE *)(v4 + 24) )
      result = StorPortExtendedFunction(85LL, v4, 0LL, 0LL);
    *(_BYTE *)(v5 + 4253) |= 8u;
  }
  return result;
}
