/*
 * XREFs of AMLIEvalPackageElement @ 0x1C0012380
 * Callers:
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00BDF8C (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     FreeDataBuffs @ 0x1C0003350 (FreeDataBuffs.c)
 *     DereferenceObjectEx @ 0x1C0003DA4 (DereferenceObjectEx.c)
 *     SyncEvalObject @ 0x1C0004490 (SyncEvalObject.c)
 *     EvalPackageElement @ 0x1C001246C (EvalPackageElement.c)
 *     GetBaseObject @ 0x1C001477C (GetBaseObject.c)
 *     GetObjectPath @ 0x1C0023A98 (GetObjectPath.c)
 *     LogError @ 0x1C002A2EC (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B810 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C540 (PrintDebugMessage.c)
 *     GetObjectTypeName @ 0x1C0065458 (GetObjectTypeName.c)
 *     AMLIDebugger @ 0x1C0065C80 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C0065D60 (ConPrintf.c)
 */

__int64 __fastcall AMLIEvalPackageElement(__int64 *a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 BaseObject; // rdi
  __int16 v8; // ax
  __int64 *v9; // rcx
  unsigned int v10; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 ObjectPath; // rax
  unsigned int CurrentThread; // edx
  void *v18; // r8
  void *v19; // rbx
  int ObjectTypeName; // eax
  int v21; // ecx
  _OWORD v22[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v23; // [rsp+50h] [rbp-18h] BYREF

  dword_1C0082908 = 0;
  pszDest = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger(v13, v12, v14, v15);
  }
  v6 = *a1;
  if ( (*(_BYTE *)(*a1 + 64) & 4) != 0 )
    return (unsigned int)-1073741738;
  *(_OWORD *)a3 = 0LL;
  v23 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 32) = 0LL;
  memset(v22, 0, sizeof(v22));
  BaseObject = GetBaseObject(v6);
  if ( (gDebugger & 8) != 0 )
  {
    ObjectPath = GetObjectPath(BaseObject);
    CurrentThread = (unsigned int)KeGetCurrentThread();
    v18 = &unk_1C00701BA;
    v19 = (void *)ObjectPath;
    if ( ObjectPath )
      LODWORD(v18) = ObjectPath;
    PrintDebugMessage(46, CurrentThread, (_DWORD)v18, a2, 0LL);
    if ( v19 )
      ExFreePoolWithTag(v19, 0);
  }
  v8 = *(_WORD *)(BaseObject + 66);
  if ( v8 == 8 )
  {
    v10 = SyncEvalObject(BaseObject, (int)v22, 0, 0);
    if ( v10 )
      goto LABEL_9;
    if ( WORD1(v22[0]) == 4 )
    {
      v9 = &v23;
      goto LABEL_8;
    }
    v10 = -1072431095;
    LogError(3222536201LL);
    AcpiDiagTraceAmlError(0LL, 3222536201LL);
    ObjectTypeName = GetObjectTypeName(WORD1(v22[0]));
    v21 = 48;
LABEL_23:
    PrintDebugMessage(v21, ObjectTypeName, 0, 0, 0LL);
    goto LABEL_9;
  }
  if ( v8 != 4 )
  {
    v10 = -1072431095;
    LogError(3222536201LL);
    AcpiDiagTraceAmlError(0LL, 3222536201LL);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(BaseObject + 66));
    v21 = 47;
    goto LABEL_23;
  }
  v9 = (__int64 *)(BaseObject + 96);
LABEL_8:
  v10 = EvalPackageElement(*v9, a2, a3);
LABEL_9:
  FreeDataBuffs((__int64)v22, 1u);
  if ( v10 == 32772 )
    v10 = 259;
  DereferenceObjectEx(BaseObject);
  return v10;
}
