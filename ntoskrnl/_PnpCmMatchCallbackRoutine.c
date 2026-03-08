/*
 * XREFs of _PnpCmMatchCallbackRoutine @ 0x140A67690
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x1406CEAE4 (_CmMapCmObjectTypeToPnpObjectType.c)
 */

__int64 __fastcall PnpCmMatchCallbackRoutine(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 v6; // r10

  result = CmMapCmObjectTypeToPnpObjectType(a3);
  if ( (_DWORD)result )
    return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))v5)(
             v6,
             v4,
             (unsigned int)result,
             *(_QWORD *)(v5 + 8));
  return result;
}
