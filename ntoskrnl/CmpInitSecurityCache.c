/*
 * XREFs of CmpInitSecurityCache @ 0x14072CC90
 * Callers:
 *     CmpValidateHiveSecurityDescriptors @ 0x14071C9C4 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpHiveInitialize @ 0x14072CBCC (CmpHiveInitialize.c)
 *     CmpGetSystemControlValues @ 0x140B33800 (CmpGetSystemControlValues.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpInitSecurityCache(__int64 a1)
{
  _QWORD *v1; // rcx
  __int64 result; // rax

  *(_DWORD *)(a1 + 1880) = -1;
  *(_QWORD *)(a1 + 1888) = 0LL;
  *(_QWORD *)(a1 + 1872) = 0LL;
  v1 = (_QWORD *)(a1 + 1896);
  result = 64LL;
  do
  {
    v1[1] = v1;
    *v1 = v1;
    v1 += 2;
    --result;
  }
  while ( result );
  return result;
}
