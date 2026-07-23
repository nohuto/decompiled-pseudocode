/*
 * XREFs of SeSetSecurityAccessMask @ 0x1405F8788
 * Callers:
 *     NtSetSecurityObject @ 0x1405F8450 (NtSetSecurityObject.c)
 *     CmpSetKeySecurity @ 0x140662D2C (CmpSetKeySecurity.c)
 *     IoCheckFunctionAccess @ 0x140761870 (IoCheckFunctionAccess.c)
 * Callees:
 *     <none>
 */

int __fastcall SeSetSecurityAccessMask(int a1, int *a2)
{
  int result; // eax

  result = 0;
  *a2 = 0;
  if ( (a1 & 0x10000) != 0 )
  {
    result = 17563648;
    *a2 = 17563648;
  }
  if ( (a1 & 0x13) != 0 )
  {
    result |= 0x80000u;
    *a2 = result;
  }
  if ( (a1 & 4) != 0 )
  {
    result |= 0x40000u;
    *a2 = result;
  }
  if ( (a1 & 0x20) != 0 )
  {
    result |= 0x40000u;
    *a2 = result;
  }
  if ( (a1 & 0x80u) != 0 )
  {
    result |= 0x40000u;
    *a2 = result;
  }
  if ( (a1 & 0x100) != 0 )
  {
    result |= 0x40000u;
    *a2 = result;
  }
  if ( (a1 & 0x40) != 0 )
  {
    result |= 0x1000000u;
    *a2 = result;
  }
  if ( (a1 & 8) != 0 )
  {
    result |= 0x1000000u;
    *a2 = result;
  }
  if ( (a1 & 0x1F8) != 0 && (a1 & 0x50000000) != 0 )
  {
    result |= 0x1000000u;
    *a2 = result;
  }
  return result;
}
