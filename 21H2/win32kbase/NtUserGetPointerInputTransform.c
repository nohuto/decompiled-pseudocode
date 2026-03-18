/*
 * XREFs of NtUserGetPointerInputTransform @ 0x1C015A440
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01CCE84 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ApiSetGetMiPInputTransform @ 0x1C020D214 (ApiSetGetMiPInputTransform.c)
 */

__int64 __fastcall NtUserGetPointerInputTransform(unsigned int a1, unsigned int a2, volatile void *a3)
{
  __int64 v4; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct tagTHREADINFO *v10; // r15
  int v11; // ebx
  __int64 CurrentProcessWow64Process; // rax
  CTouchProcessor *v13; // rcx
  int MiPInputTransform; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9

  v4 = a2;
  v10 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal();
  v11 = 0;
  if ( a1
    && (v9 = HIWORD(a1), !HIWORD(a1))
    && (v8 = (unsigned int)(v4 - 1), (unsigned int)v8 <= 0x63)
    && a3
    && (a1 != 1 || (_DWORD)v4 == 1) )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v7, v6, v8);
    ProbeForWrite(a3, v4 << 6, CurrentProcessWow64Process != 0 ? 1 : 4);
    if ( a1 == 1 )
      MiPInputTransform = ApiSetGetMiPInputTransform(v10, a3);
    else
      MiPInputTransform = CTouchProcessor::GetPointerTransform(v13, v10, a1, v4, (struct tagINPUT_TRANSFORM *)a3);
    v11 = MiPInputTransform;
  }
  else
  {
    UserSetLastError(87LL, v6, v8, v9);
  }
  UserSessionSwitchLeaveCrit(v16, v15, v17, v18);
  return v11;
}
