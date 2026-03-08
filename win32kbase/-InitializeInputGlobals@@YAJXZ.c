/*
 * XREFs of ?InitializeInputGlobals@@YAJXZ @ 0x1C0096E3C
 * Callers:
 *     InputInitialize @ 0x1C0096C0C (InputInitialize.c)
 * Callees:
 *     ?InitializeMouseGlobals@@YAJXZ @ 0x1C009704C (-InitializeMouseGlobals@@YAJXZ.c)
 *     ?InitializeKeyboardGlobals@@YAJXZ @ 0x1C009737C (-InitializeKeyboardGlobals@@YAJXZ.c)
 *     ?InitializeSensorGlobals@@YAJXZ @ 0x1C0097460 (-InitializeSensorGlobals@@YAJXZ.c)
 */

__int64 __fastcall InitializeInputGlobals(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9

  *(_DWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 3456) = 0;
  result = InitializeSensorGlobals();
  if ( (int)result >= 0 )
  {
    result = InitializeKeyboardGlobals();
    if ( (int)result >= 0 )
    {
      result = InitializeMouseGlobals();
      if ( (int)result >= 0 )
      {
        v9 = SGDGetUserSessionState(v6, v5, v7, v8);
        *(_QWORD *)(v9 + 16880) = v9 + 16880;
        *(_QWORD *)(v9 + 16888) = v9 + 16880;
        v13 = SGDGetUserSessionState(v9 + 16880, v10, v11, v12);
        *(_WORD *)(v13 + 17152) = 1;
        *(_DWORD *)(v13 + 17156) = 1;
        *(_DWORD *)(SGDGetUserSessionState(1LL, v14, v15, v16) + 17368) = 0;
        return 0LL;
      }
    }
  }
  return result;
}
