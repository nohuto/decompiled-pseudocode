/*
 * XREFs of PowerRes @ 0x1C0050E80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002180 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1C004EC38 (HeapAlloc.c)
 *     CreateNameSpaceObject @ 0x1C004F10C (CreateNameSpaceObject.c)
 *     PushScope @ 0x1C0053D40 (PushScope.c)
 */

__int64 __fastcall PowerRes(__int64 a1, _QWORD *a2)
{
  __int64 *v2; // rdi
  unsigned int NameSpaceObject; // ebx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r9
  char v10; // cl

  v2 = a2 + 8;
  NameSpaceObject = CreateNameSpaceObject(
                      *(_QWORD *)(a1 + 320),
                      *(unsigned __int8 **)(a2[10] + 32LL),
                      *(_QWORD *)(a1 + 80),
                      *(struct _EX_RUNDOWN_REF **)(a1 + 88),
                      a2 + 8,
                      0);
  if ( !NameSpaceObject )
  {
    *(_WORD *)(*v2 + 66) = 11;
    *(_DWORD *)(*v2 + 88) = 2;
    *(_WORD *)(*v2 + 64) |= 0x40u;
    v6 = HeapAlloc(*(_QWORD *)(a1 + 320), 1397903432, *(_DWORD *)(*v2 + 88));
    *(_QWORD *)(*v2 + 96) = v6;
    if ( v6 )
    {
      memset(*(void **)(*v2 + 96), 0, *(unsigned int *)(*v2 + 88));
      v7 = 0LL;
      v8 = 0LL;
      v9 = *(_QWORD *)(*v2 + 96);
      do
      {
        v10 = *(_BYTE *)(a2[10] + v8 + 56);
        v8 += 40LL;
        *(_BYTE *)(v7 + v9) = v10;
        ++v7;
      }
      while ( v8 < 80 );
      if ( ghCreate )
        ghCreate(11LL, *v2 + 120);
      return (unsigned int)PushScope(
                             a1,
                             *(_QWORD *)(a1 + 120),
                             a2[5],
                             0,
                             *v2,
                             *(_QWORD *)(a1 + 88),
                             *(_QWORD *)(a1 + 320),
                             a2[11]);
    }
    else
    {
      NameSpaceObject = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError(a1, -1073741670);
      PrintDebugMessage(146, 0LL, 0LL, 0LL, 0LL);
    }
  }
  return NameSpaceObject;
}
