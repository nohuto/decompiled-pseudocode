/*
 * XREFs of ParseSuperName @ 0x1C005C56C
 * Callers:
 *     ParseArg @ 0x1C005A46C (ParseArg.c)
 * Callees:
 *     GetBaseData @ 0x1C00055CA (GetBaseData.c)
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     GetBaseObject @ 0x1C004B918 (GetBaseObject.c)
 *     ConPrintf @ 0x1C004D7B8 (ConPrintf.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     DereferenceObjectEx @ 0x1C004F6A8 (DereferenceObjectEx.c)
 *     PushTerm @ 0x1C0053E18 (PushTerm.c)
 *     ParseAndGetNameSpaceObject @ 0x1C005A3B4 (ParseAndGetNameSpaceObject.c)
 */

__int64 __fastcall ParseSuperName(__int64 *a1, __int64 a2, char a3, __int64 a4)
{
  const void **v4; // rdi
  unsigned int NameSpaceObject; // ebx
  unsigned __int8 *v6; // r11
  __int64 v10; // r10
  _BYTE *v11; // rcx
  __int64 v12; // r9
  int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r14
  unsigned __int64 v17; // rdx
  const void *v18; // r8
  int v19; // ecx
  __int64 v20; // r14
  unsigned int v21; // eax
  __int64 v23; // [rsp+50h] [rbp+8h] BYREF

  v4 = (const void **)(a1 + 15);
  NameSpaceObject = 0;
  v6 = (unsigned __int8 *)a1[15];
  v23 = 0LL;
  v10 = *v6;
  v11 = v6 + 1;
  if ( !(_BYTE)v10 )
  {
    *v4 = v11;
    return NameSpaceObject;
  }
  if ( (_BYTE)v10 == 91 && *v11 == 49 )
  {
    *v4 = v6 + 2;
    *(_WORD *)(a2 + 2) = 16;
    if ( (gDebugger & 0xD0) != 0 )
      ConPrintf("Debug");
    return NameSpaceObject;
  }
  v12 = (__int64)*(&OpcodeTable + v10);
  if ( !v12 )
    goto LABEL_24;
  v13 = *(_DWORD *)(v12 + 28);
  if ( (v13 & 0x20) != 0 )
  {
    NameSpaceObject = ParseAndGetNameSpaceObject((__int64)a1, (__int64)v4, a1[10], &v23, a3);
    if ( !NameSpaceObject && v23 )
    {
      v14 = v23;
      *(_WORD *)(a2 + 2) = 128;
      *(_QWORD *)(a2 + 16) = GetBaseObject(v14);
      DereferenceObjectEx(v15);
      DereferenceObjectEx(*(_QWORD *)(a2 + 16));
    }
    return NameSpaceObject;
  }
  if ( (v13 & 2) != 0 )
  {
    *v4 = v11;
    v16 = (unsigned int)(v10 - 104);
    if ( (unsigned int)v16 < *(_DWORD *)(a1[12] + 60) )
    {
      if ( (gDebugger & 0xD0) != 0 )
        ConPrintf("Arg%d", v16);
      *(_WORD *)(a2 + 2) = 129;
      *(_QWORD *)(a2 + 16) = GetBaseData(*(_QWORD *)(a1[12] + 64) + 40 * v16);
      return NameSpaceObject;
    }
    NameSpaceObject = -1072431099;
    LogError(-1072431099);
    AcpiDiagTraceAmlError((__int64)a1, -1072431099);
    v17 = (unsigned int)v16;
    v18 = 0LL;
    v19 = 142;
LABEL_25:
    PrintDebugMessage(v19, (const void *)v17, v18, 0LL, 0LL);
    return NameSpaceObject;
  }
  if ( (v13 & 4) == 0 )
  {
    if ( (v13 & 0x80u) != 0 )
    {
      v21 = PushTerm((__int64)a1, (__int64)v6, a4, v12, a2);
      *v4 = (char *)*v4 + 1;
      return v21;
    }
LABEL_24:
    NameSpaceObject = -1072431097;
    LogError(-1072431097);
    AcpiDiagTraceAmlError((__int64)a1, -1072431097);
    v18 = *v4;
    v19 = 141;
    v17 = *(unsigned __int8 *)*v4;
    goto LABEL_25;
  }
  *v4 = v11;
  v20 = (unsigned int)(v10 - 96);
  if ( (gDebugger & 0xD0) != 0 )
    ConPrintf("Local%d", v20);
  *(_WORD *)(a2 + 2) = 129;
  *(_QWORD *)(a2 + 16) = a1[12] + 8 * (v20 + 4 * v20 + 9);
  return NameSpaceObject;
}
