/*
 * XREFs of Field @ 0x1C00505B0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0002180 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1C004EC38 (HeapAlloc.c)
 *     CreateNameSpaceObject @ 0x1C004F10C (CreateNameSpaceObject.c)
 *     DereferenceObjectEx @ 0x1C004F6A8 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C004F728 (GetNameSpaceObject.c)
 *     ParseFieldList @ 0x1C005B230 (ParseFieldList.c)
 */

__int64 __fastcall Field(__int64 a1, _QWORD *a2)
{
  unsigned int NameSpaceObject; // eax
  __int64 v5; // rdi
  unsigned int v6; // ebx
  _QWORD *v7; // r14
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = 0LL;
  NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(a2[10] + 32LL), *(_QWORD *)(a1 + 80), (__int64)&v11, 0x80000000);
  v5 = v11;
  v6 = NameSpaceObject;
  if ( !NameSpaceObject )
  {
    if ( *(_WORD *)(v11 + 66) == 10 )
    {
      v7 = a2 + 8;
      v6 = CreateNameSpaceObject(
             *(_QWORD *)(a1 + 320),
             0LL,
             *(_QWORD *)(a1 + 80),
             *(struct _EX_RUNDOWN_REF **)(a1 + 88),
             a2 + 8,
             0);
      if ( !v6 )
      {
        *(_WORD *)(*v7 + 66LL) = 131;
        *(_DWORD *)(*v7 + 88LL) = 8;
        v8 = HeapAlloc(*(_QWORD *)(a1 + 320), 1329874504, *(_DWORD *)(*v7 + 88LL));
        *(_QWORD *)(*v7 + 96LL) = v8;
        if ( v8 )
        {
          memset(*(void **)(*v7 + 96LL), 0, *(unsigned int *)(*v7 + 88LL));
          **(_QWORD **)(*v7 + 96LL) = v5;
          v9 = *(_QWORD *)(v5 + 96);
          v5 = 0LL;
          v6 = ParseFieldList(a1, a2[5], *v7, *(_DWORD *)(a2[10] + 56LL), *(_DWORD *)(v9 + 8));
        }
        else
        {
          v6 = -1073741670;
          LogError(-1073741670);
          AcpiDiagTraceAmlError(a1, -1073741670);
          PrintDebugMessage(51, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    else
    {
      v6 = -1072431095;
      LogError(-1072431095);
      AcpiDiagTraceAmlError(a1, -1072431095);
      PrintDebugMessage(52, *(const void **)(a2[10] + 32LL), 0LL, 0LL, 0LL);
    }
  }
  if ( v5 )
    DereferenceObjectEx(v5);
  return v6;
}
