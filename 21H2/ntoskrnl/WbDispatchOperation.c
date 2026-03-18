/*
 * XREFs of WbDispatchOperation @ 0x1407E2B70
 * Callers:
 *     ExpQuerySystemInformation @ 0x14073B5A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     PsGetProcessId @ 0x140361530 (PsGetProcessId.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     WbProcessModuleUnload @ 0x1406D5B38 (WbProcessModuleUnload.c)
 *     WbProcessStartup @ 0x1406E158C (WbProcessStartup.c)
 *     WbRemoveWarbirdProcess @ 0x1407E15B4 (WbRemoveWarbirdProcess.c)
 *     WbFreeWarbirdProcess @ 0x1407E17A4 (WbFreeWarbirdProcess.c)
 *     WbGetWarbirdProcess @ 0x1407E2D60 (WbGetWarbirdProcess.c)
 *     WbAlloc @ 0x1407E3010 (WbAlloc.c)
 *     WbHeapExecuteCall @ 0x1407E3070 (WbHeapExecuteCall.c)
 *     sub_1407E3F30 @ 0x1407E3F30 (sub_1407E3F30.c)
 *     sub_140A0F208 @ 0x140A0F208 (sub_140A0F208.c)
 *     sub_140A100D4 @ 0x140A100D4 (sub_140A100D4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WbDispatchOperation(char *Src, size_t Size)
{
  size_t v2; // r14
  unsigned int v4; // ebx
  char *v5; // rax
  int WarbirdProcess; // edi
  int *v7; // rdi
  HANDLE ProcessId; // rax
  int v9; // eax
  int v11; // [rsp+24h] [rbp-44h]
  int v12; // [rsp+28h] [rbp-40h]
  PVOID v13; // [rsp+70h] [rbp+8h] BYREF
  PVOID P; // [rsp+80h] [rbp+18h] BYREF

  v2 = (unsigned int)Size;
  v4 = 0;
  v13 = 0LL;
  P = 0LL;
  if ( !Src )
  {
    v12 = 4;
LABEL_11:
    v4 = 1;
    goto LABEL_12;
  }
  if ( (unsigned int)Size < 8 )
  {
    WarbirdProcess = -1073741811;
    v11 = -1073741811;
    goto LABEL_19;
  }
  v5 = &Src[(unsigned int)Size];
  if ( (unsigned __int64)v5 > 0x7FFFFFFF0000LL || v5 < Src )
    MEMORY[0x7FFFFFFF0000] = 0;
  WarbirdProcess = WbAlloc((unsigned int)Size, &P);
  v11 = WarbirdProcess;
  if ( WarbirdProcess < 0 )
    goto LABEL_19;
  v7 = (int *)P;
  memmove(P, Src, v2);
  v12 = *v7;
  if ( *v7 != 7 )
    goto LABEL_11;
LABEL_12:
  ProcessId = PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
  WarbirdProcess = WbGetWarbirdProcess(ProcessId, v4, &v13);
  v11 = WarbirdProcess;
  if ( WarbirdProcess < 0 )
    goto LABEL_19;
  if ( v12 == 3 )
  {
    v9 = WbHeapExecuteCall(v13, P, Src, (unsigned int)v2);
    goto LABEL_18;
  }
  if ( v12 == 4 )
  {
    if ( !P )
    {
      v9 = sub_1407E3F30(v13);
LABEL_18:
      WarbirdProcess = v9;
      v11 = v9;
      goto LABEL_19;
    }
LABEL_30:
    WarbirdProcess = -1073741811;
    v11 = -1073741811;
  }
  else
  {
    switch ( v12 )
    {
      case 1:
        v9 = sub_140A0F208(v13, P, (unsigned int)v2);
        goto LABEL_18;
      case 2:
        v9 = sub_140A100D4(v13, P, (unsigned int)v2);
        goto LABEL_18;
      case 5:
      case 6:
        WarbirdProcess = -1073741811;
        if ( Src )
          WarbirdProcess = -1073741822;
        v11 = WarbirdProcess;
        break;
      case 7:
        v9 = WbRemoveWarbirdProcess(*(_QWORD *)v13);
        goto LABEL_18;
      case 8:
        v9 = WbProcessStartup((__int64)v13, P, v2);
        goto LABEL_18;
      case 9:
        v9 = WbProcessModuleUnload((__int64)v13, P, v2);
        goto LABEL_18;
      default:
        goto LABEL_30;
    }
  }
LABEL_19:
  if ( v13 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v13 + 29, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      WbFreeWarbirdProcess(v13);
    WarbirdProcess = v11;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)WarbirdProcess;
}
