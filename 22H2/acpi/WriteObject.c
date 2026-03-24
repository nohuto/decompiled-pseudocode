/*
 * XREFs of WriteObject @ 0x1C000AC60
 * Callers:
 *     Store @ 0x1C000AAB0 (Store.c)
 *     Index @ 0x1C000B100 (Index.c)
 *     ToInteger @ 0x1C000C110 (ToInteger.c)
 *     ProcessIncDec @ 0x1C002A480 (ProcessIncDec.c)
 *     CondRefOf @ 0x1C002BED0 (CondRefOf.c)
 *     ExprOp1_64 @ 0x1C002FC60 (ExprOp1_64.c)
 *     Concat @ 0x1C0068C00 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C0068F10 (ConcatenateResTemplate.c)
 *     CopyObject @ 0x1C0069110 (CopyObject.c)
 *     ExprOp1_32 @ 0x1C00692E4 (ExprOp1_32.c)
 *     ExprOp2_32 @ 0x1C0069428 (ExprOp2_32.c)
 *     MidString @ 0x1C0069D60 (MidString.c)
 *     ProcessDivide @ 0x1C006A0A0 (ProcessDivide.c)
 *     ToBuffer @ 0x1C006A7D0 (ToBuffer.c)
 *     ToDecStr @ 0x1C006A850 (ToDecStr.c)
 *     ToHexStr @ 0x1C006AC20 (ToHexStr.c)
 * Callees:
 *     HeapAlloc @ 0x1C0008E30 (HeapAlloc.c)
 *     DupObjData @ 0x1C000A400 (DupObjData.c)
 *     WriteField @ 0x1C0022B30 (WriteField.c)
 *     CopyObjBuffer @ 0x1C0022C68 (CopyObjBuffer.c)
 *     LogError @ 0x1C002A2EC (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B810 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C540 (PrintDebugMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00321C0 (memmove.c)
 *     GetObjectTypeName @ 0x1C0065458 (GetObjectTypeName.c)
 *     DumpObject @ 0x1C0067738 (DumpObject.c)
 */

__int64 __fastcall WriteObject(struct _SLIST_ENTRY *a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  unsigned int v11; // edi
  bool v14; // di
  _QWORD *v15; // rcx
  int v16; // edx
  _QWORD *v17; // rdx
  unsigned int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // edx
  int v22; // edx
  int ObjectTypeName; // eax
  unsigned int v24; // [rsp+48h] [rbp+10h] BYREF

  while ( 1 )
  {
    while ( 1 )
    {
      v6 = *(unsigned __int16 *)(a2 + 2);
      if ( (_WORD)v6 != 128 )
        break;
      a2 = *(_QWORD *)(a2 + 16) + 64LL;
    }
    if ( (_WORD)v6 != 129 )
      break;
    a2 = *(_QWORD *)(a2 + 16);
  }
  if ( !*(_WORD *)(a2 + 2) )
    return (unsigned int)DupObjData((struct _SLIST_ENTRY *)gpheapGlobal, a2, a3);
  if ( v6 == 1 )
  {
    v14 = 0;
    v24 = 0;
    if ( ghGetAcpiTableVersion )
    {
      ghGetAcpiTableVersion(1413763908LL, &v24);
      v14 = v24 >= 2;
    }
    v15 = (_QWORD *)(a2 + 16);
    if ( !v14 )
      return (unsigned int)CopyObjBuffer(v15, 4uLL);
    v16 = *(unsigned __int16 *)(a3 + 2);
    v11 = 0;
    if ( v16 == 1 )
    {
      v17 = (_QWORD *)(a3 + 16);
      v18 = 8;
    }
    else
    {
      v22 = v16 - 2;
      if ( v22 )
      {
        if ( v22 != 1 )
        {
          v11 = -1072431095;
          LogError(3222536201LL);
          AcpiDiagTraceAmlError(0LL, 3222536201LL);
          ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a3 + 2));
          PrintDebugMessage(30, ObjectTypeName, 0, 0, 0LL);
          return v11;
        }
        v17 = *(_QWORD **)(a3 + 32);
        v18 = *(_DWORD *)(a3 + 24);
      }
      else
      {
        v17 = *(_QWORD **)(a3 + 32);
        v18 = *(_DWORD *)(a3 + 24) - 1;
      }
    }
    if ( v15 != v17 )
    {
      *v15 = 0LL;
      if ( v18 >= 8 )
        v18 = 8;
      memmove(v15, v17, v18);
    }
  }
  else
  {
    v7 = v6 - 2;
    if ( !v7 )
    {
      v21 = *(_DWORD *)(a2 + 24);
      if ( !v21 )
        return (unsigned int)-1073741811;
      return (unsigned int)CopyObjBuffer(*(void **)(a2 + 32), (unsigned int)(v21 - 1));
    }
    v8 = v7 - 1;
    if ( !v8 )
      return (unsigned int)CopyObjBuffer(*(void **)(a2 + 32), *(unsigned int *)(a2 + 24));
    v9 = v8 - 2;
    if ( !v9 )
    {
      v10 = HeapAlloc(a1 + 30, 1297237576, 0x30u);
      if ( v10 )
      {
        *(_QWORD *)(v10 + 8) = a1[26].Next;
        a1[26].Next = (_SLIST_ENTRY *)v10;
        *(_QWORD *)(v10 + 24) = AccFieldUnit;
        v11 = 0;
        *(_DWORD *)v10 = 1430668097;
        *(_QWORD *)(v10 + 32) = a2;
        *(_QWORD *)(v10 + 40) = a3;
      }
      else
      {
        v11 = -1072431102;
        LogError(3222536194LL);
        AcpiDiagTraceAmlError(a1, 3222536194LL);
        PrintDebugMessage(153, 0, 0, 0, 0LL);
      }
      return v11;
    }
    v19 = v9 - 9;
    if ( !v19 )
      return (unsigned int)WriteField(a1, a2, *(_QWORD *)(a2 + 32) + 12LL, a3);
    if ( v19 == 2 )
    {
      if ( (gDebugger & 0x20000) != 0 )
        DumpObject(a3, 129LL, 0LL);
      return 0;
    }
    else
    {
      v11 = -1072431095;
      LogError(3222536201LL);
      AcpiDiagTraceAmlError(a1, 3222536201LL);
      v20 = GetObjectTypeName(*(unsigned __int16 *)(a2 + 2));
      PrintDebugMessage(215, v20, 0, 0, 0LL);
    }
  }
  return v11;
}
