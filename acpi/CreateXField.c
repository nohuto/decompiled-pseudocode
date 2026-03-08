/*
 * XREFs of CreateXField @ 0x1C0050374
 * Callers:
 *     CreateBitField @ 0x1C00500D0 (CreateBitField.c)
 *     CreateByteField @ 0x1C0050140 (CreateByteField.c)
 *     CreateDWordField @ 0x1C00501A0 (CreateDWordField.c)
 *     CreateField @ 0x1C0050200 (CreateField.c)
 *     CreateQWordField @ 0x1C00502C0 (CreateQWordField.c)
 *     CreateWordField @ 0x1C0050320 (CreateWordField.c)
 * Callees:
 *     memset @ 0x1C0002180 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     ValidateArgTypes @ 0x1C004CEEC (ValidateArgTypes.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1C004EC38 (HeapAlloc.c)
 *     CreateNameSpaceObject @ 0x1C004F10C (CreateNameSpaceObject.c)
 */

__int64 __fastcall CreateXField(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int NameSpaceObject; // ebx
  __int64 v9; // rbp
  void *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx

  NameSpaceObject = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "BI");
  if ( !NameSpaceObject )
  {
    NameSpaceObject = CreateNameSpaceObject(
                        *(_QWORD *)(a1 + 320),
                        *(unsigned __int8 **)(a3 + 32),
                        *(_QWORD *)(a1 + 80),
                        *(struct _EX_RUNDOWN_REF **)(a1 + 88),
                        (__int64 *)(a2 + 64),
                        0);
    if ( !NameSpaceObject )
    {
      v9 = *(_QWORD *)(a2 + 64);
      *(_WORD *)(v9 + 66) = 14;
      *(_DWORD *)(v9 + 88) = 48;
      v10 = (void *)HeapAlloc(*(_QWORD *)(a1 + 320), 1145455176, 0x30u);
      *(_QWORD *)(v9 + 96) = v10;
      if ( v10 )
      {
        memset(v10, 0, *(unsigned int *)(v9 + 88));
        v11 = *(_QWORD *)(a2 + 80);
        v12 = *(_QWORD *)(v9 + 96);
        *a4 = v12;
        *(_QWORD *)v12 = *(_QWORD *)(v11 + 32);
        *(_DWORD *)(v12 + 8) = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 24LL);
      }
      else
      {
        NameSpaceObject = -1073741670;
        LogError(-1073741670);
        AcpiDiagTraceAmlError(a1, -1073741670);
        PrintDebugMessage(38, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  return NameSpaceObject;
}
