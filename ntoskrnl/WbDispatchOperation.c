/*
 * XREFs of WbDispatchOperation @ 0x1406AECD0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     PsGetProcessId @ 0x140236D10 (PsGetProcessId.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     WbGetWarbirdProcess @ 0x1406AEEB8 (WbGetWarbirdProcess.c)
 *     sub_1406AF0D8 @ 0x1406AF0D8 (sub_1406AF0D8.c)
 *     WbAlloc @ 0x1406AF510 (WbAlloc.c)
 *     WbHeapExecuteCall @ 0x1406AF56C (WbHeapExecuteCall.c)
 *     sub_1406AFFB4 @ 0x1406AFFB4 (sub_1406AFFB4.c)
 *     WbRemoveWarbirdProcess @ 0x14070546C (WbRemoveWarbirdProcess.c)
 *     WbReEncryptEncryptionSegment @ 0x1407552F8 (WbReEncryptEncryptionSegment.c)
 *     WbDecryptEncryptionSegment @ 0x1407553D8 (WbDecryptEncryptionSegment.c)
 *     WbProcessModuleUnload @ 0x140770A30 (WbProcessModuleUnload.c)
 *     WbProcessStartup @ 0x140798900 (WbProcessStartup.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WbDispatchOperation(char *Src, size_t Size)
{
  size_t v2; // rsi
  char *v4; // rax
  int WarbirdProcess; // ebx
  int *v6; // rbx
  int v7; // eax
  BOOL v8; // ebx
  HANDLE ProcessId; // rax
  int v10; // eax
  int v12; // [rsp+28h] [rbp-30h]
  _QWORD *v13; // [rsp+60h] [rbp+8h] BYREF
  PVOID P; // [rsp+70h] [rbp+18h] BYREF

  v2 = (unsigned int)Size;
  v13 = 0LL;
  P = 0LL;
  if ( Src )
  {
    if ( (unsigned int)Size < 8 )
    {
      WarbirdProcess = -1073741811;
      goto LABEL_19;
    }
    v4 = &Src[(unsigned int)Size];
    if ( (unsigned __int64)v4 > 0x7FFFFFFF0000LL || v4 < Src )
      MEMORY[0x7FFFFFFF0000] = 0;
    WarbirdProcess = WbAlloc((unsigned int)Size, &P);
    if ( WarbirdProcess < 0 )
      goto LABEL_19;
    v6 = (int *)P;
    memmove(P, Src, v2);
    v7 = *v6;
    v12 = *v6;
  }
  else
  {
    v7 = 4;
    v12 = 4;
  }
  v8 = v7 != 7;
  ProcessId = PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
  WarbirdProcess = WbGetWarbirdProcess(ProcessId, v8, &v13);
  if ( WarbirdProcess < 0 )
    goto LABEL_19;
  switch ( v12 )
  {
    case 1:
      v10 = WbDecryptEncryptionSegment(v13, P, (unsigned int)v2);
      goto LABEL_18;
    case 2:
      v10 = WbReEncryptEncryptionSegment(v13, P, (unsigned int)v2);
      goto LABEL_18;
    case 3:
      v10 = WbHeapExecuteCall(v13, P, Src, (unsigned int)v2);
      goto LABEL_18;
    case 4:
      if ( !P )
      {
        v10 = sub_1406AFFB4(v13);
LABEL_18:
        WarbirdProcess = v10;
        goto LABEL_19;
      }
      break;
    case 5:
    case 6:
      WarbirdProcess = Src != 0LL ? -1073741822 : -1073741811;
      goto LABEL_19;
    case 7:
      v10 = WbRemoveWarbirdProcess(*v13);
      goto LABEL_18;
    case 8:
      v10 = WbProcessStartup(v13, P, (unsigned int)v2);
      goto LABEL_18;
    case 9:
      v10 = WbProcessModuleUnload(v13, P, (unsigned int)v2);
      goto LABEL_18;
  }
  WarbirdProcess = -1073741811;
LABEL_19:
  sub_1406AF0D8(v13);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)WarbirdProcess;
}
