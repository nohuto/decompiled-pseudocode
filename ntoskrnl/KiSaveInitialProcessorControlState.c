/*
 * XREFs of KiSaveInitialProcessorControlState @ 0x140416230
 * Callers:
 *     KiInitializeBootStructures @ 0x140A887E0 (KiInitializeBootStructures.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSaveInitialProcessorControlState(__int64 _RCX)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  __int64 result; // rax

  v1 = __readcr0();
  *(_QWORD *)_RCX = v1;
  v2 = __readcr2();
  *(_QWORD *)(_RCX + 8) = v2;
  v3 = __readcr3();
  *(_QWORD *)(_RCX + 16) = v3;
  v4 = __readcr4();
  *(_QWORD *)(_RCX + 24) = v4;
  result = KeGetCurrentIrql();
  *(_QWORD *)(_RCX + 160) = result;
  __sgdt((void *)(_RCX + 86));
  __sidt((void *)(_RCX + 102));
  __asm
  {
    str     word ptr [rcx+70h]
    sldt    word ptr [rcx+72h]
  }
  *(_DWORD *)(_RCX + 116) = _mm_getcsr();
  return result;
}
