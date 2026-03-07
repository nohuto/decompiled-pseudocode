__int64 __fastcall AMLIEvalPackageElement(__int64 *a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 BaseObject; // rdi
  __int64 ObjectPath; // rax
  unsigned int CurrentThread; // edx
  void *v11; // r8
  void *v12; // rbx
  __int16 v13; // ax
  __int64 *v14; // rcx
  int ObjectTypeName; // eax
  int v16; // ecx
  __int64 v17; // rdx
  _OWORD v19[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v20; // [rsp+50h] [rbp-18h] BYREF

  dword_1C006F938 = 0;
  pszDest = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
  }
  v6 = *a1;
  if ( (*(_BYTE *)(*a1 + 64) & 4) != 0 )
    return (unsigned int)-1073741738;
  *(_OWORD *)a3 = 0LL;
  v20 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 32) = 0LL;
  memset(v19, 0, sizeof(v19));
  BaseObject = GetBaseObject(v6);
  if ( (gDebugger & 8) != 0 )
  {
    ObjectPath = GetObjectPath(BaseObject);
    CurrentThread = (unsigned int)KeGetCurrentThread();
    v11 = &unk_1C00622D0;
    v12 = (void *)ObjectPath;
    if ( ObjectPath )
      LODWORD(v11) = ObjectPath;
    PrintDebugMessage(46, CurrentThread, (_DWORD)v11, a2, 0LL);
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
  }
  v13 = *(_WORD *)(BaseObject + 66);
  if ( v13 != 8 )
  {
    if ( v13 == 4 )
    {
      v14 = (__int64 *)(BaseObject + 96);
      goto LABEL_17;
    }
    v7 = -1072431095;
    LogError(3222536201LL);
    AcpiDiagTraceAmlError(0LL, -1072431095);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(BaseObject + 66));
    v16 = 47;
LABEL_19:
    PrintDebugMessage(v16, ObjectTypeName, 0, 0, 0LL);
    goto LABEL_20;
  }
  v7 = SyncEvalObject(BaseObject, v19, 0LL, 0LL);
  if ( !v7 )
  {
    if ( WORD1(v19[0]) == 4 )
    {
      v14 = &v20;
LABEL_17:
      v7 = EvalPackageElement(*v14, a2, a3);
      goto LABEL_20;
    }
    v7 = -1072431095;
    LogError(3222536201LL);
    AcpiDiagTraceAmlError(0LL, -1072431095);
    ObjectTypeName = GetObjectTypeName(WORD1(v19[0]));
    v16 = 48;
    goto LABEL_19;
  }
LABEL_20:
  FreeDataBuffs(v19, 1LL);
  if ( v7 == 32772 )
    v7 = 259;
  DereferenceObjectEx(BaseObject, v17);
  return v7;
}
