/*
 * XREFs of CMouseSensor_Destroy @ 0x1C0095420
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCHidInput@@UEAAPEAXI@Z @ 0x1C0095370 (--_GCHidInput@@UEAAPEAXI@Z.c)
 */

__int64 __fastcall CMouseSensor_Destroy(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  CHidInput *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9

  result = SGDGetUserSessionState(a1, a2, a3, a4);
  if ( *(_QWORD *)(result + 3272) )
  {
    v10 = *(CHidInput **)(SGDGetUserSessionState(v6, v5, v7, v8) + 3272);
    if ( v10 )
      CHidInput::`scalar deleting destructor'(v10, 1);
    result = SGDGetUserSessionState(v10, v9, v11, v12);
    *(_QWORD *)(result + 3272) = 0LL;
  }
  return result;
}
