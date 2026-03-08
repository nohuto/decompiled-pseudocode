/*
 * XREFs of ObAssignObjectSecurityDescriptor @ 0x14076BE14
 * Callers:
 *     WmipSecurityMethod @ 0x14076BC30 (WmipSecurityMethod.c)
 *     CmpAssignKeySecurity @ 0x140854E7C (CmpAssignKeySecurity.c)
 * Callees:
 *     ObLogSecurityDescriptor @ 0x1406965B0 (ObLogSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObAssignObjectSecurityDescriptor(__int64 a1, __int16 *a2)
{
  int v4; // esi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  if ( a2 )
  {
    v4 = ObLogSecurityDescriptor(a2, &v6, 0x10u);
    if ( v4 >= 0 )
    {
      ExFreePoolWithTag(a2, 0);
      if ( v6 )
        *(_QWORD *)(a1 - 8) = v6 + 15;
      else
        *(_QWORD *)(a1 - 8) = 0LL;
    }
    return (unsigned int)v4;
  }
  else
  {
    *(_QWORD *)(a1 - 8) = 0LL;
    return 0LL;
  }
}
