/*
 * XREFs of NtUserGetPointerInputTransform @ 0x1C0170B70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C005040C (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01FA4B0 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ApiSetGetMiPInputTransform @ 0x1C02445D8 (ApiSetGetMiPInputTransform.c)
 */

__int64 __fastcall NtUserGetPointerInputTransform(__int64 a1, __int64 a2, volatile void *a3, __int64 a4)
{
  __int64 v5; // r14
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagTHREADINFO *v9; // r15
  int v10; // ebx
  __int64 v11; // r8
  __int64 CurrentProcessWow64Process; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int MiPInputTransform; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax

  v5 = (unsigned int)a2;
  v6 = a1;
  v9 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, a2, a3, a4);
  v10 = 0;
  if ( v6
    && !HIWORD(v6)
    && (v11 = (unsigned int)(v5 - 1), (unsigned int)v11 <= 0x63)
    && a3
    && (v6 != 1 || (_DWORD)v5 == 1) )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v8, v7, v11, HIWORD(v6));
    ProbeForWrite(a3, v5 << 6, CurrentProcessWow64Process != 0 ? 1 : 4);
    if ( v6 == 1 )
    {
      MiPInputTransform = ApiSetGetMiPInputTransform(v9, a3);
    }
    else
    {
      v22 = SGDGetUserSessionState(v14, v13, v15, v16);
      MiPInputTransform = CTouchProcessor::GetPointerTransform(
                            *(CTouchProcessor **)(v22 + 3424),
                            v9,
                            v6,
                            v5,
                            (struct tagINPUT_TRANSFORM *)a3);
    }
    v10 = MiPInputTransform;
  }
  else
  {
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v19, v18, v20, v21);
  return v10;
}
