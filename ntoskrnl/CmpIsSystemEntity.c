/*
 * XREFs of CmpIsSystemEntity @ 0x140768CB8
 * Callers:
 *     CmDoVirtualTest @ 0x1402DD11C (CmDoVirtualTest.c)
 *     KCBNeedsVirtualImage @ 0x1402DD15C (KCBNeedsVirtualImage.c)
 *     KCBNeedsVirtualImage_0 @ 0x140614000 (KCBNeedsVirtualImage_0.c)
 *     CmpVEPerformOpenAccessCheck @ 0x140768B54 (CmpVEPerformOpenAccessCheck.c)
 *     CmpCreateChild @ 0x1407A7590 (CmpCreateChild.c)
 *     CmpVEExecuteOpenLogic @ 0x1407B6770 (CmpVEExecuteOpenLogic.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x1402C0BB0 (PsGetCurrentThreadProcess.c)
 *     CmpIsVirtEnabledForSubject @ 0x140768D48 (CmpIsVirtEnabledForSubject.c)
 *     SeCaptureSubjectContextEx @ 0x1407C9AF0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 */

bool __fastcall CmpIsSystemEntity(char a1, struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext, int *a3)
{
  char v3; // si
  bool v5; // bl
  int v7; // eax
  int v8; // eax
  struct _KPROCESS *CurrentThreadProcess; // rax
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v5 = 1;
  if ( CmpVEEnabled )
  {
    if ( a3 && (*a3 & 1) != 0 )
    {
      return (*a3 & 2) != 0;
    }
    else if ( a1 )
    {
      if ( !p_SubjectContext )
      {
        CurrentThreadProcess = PsGetCurrentThreadProcess();
        SeCaptureSubjectContextEx(KeGetCurrentThread(), CurrentThreadProcess, &SubjectContext);
        p_SubjectContext = &SubjectContext;
        v3 = 1;
      }
      v5 = (unsigned __int8)CmpIsVirtEnabledForSubject(p_SubjectContext) == 0;
      if ( a3 )
      {
        v7 = *a3;
        if ( v5 )
          v8 = v7 | 3;
        else
          v8 = v7 | 5;
        *a3 = v8;
      }
      if ( v3 )
        SeReleaseSubjectContext(&SubjectContext);
    }
  }
  return v5;
}
