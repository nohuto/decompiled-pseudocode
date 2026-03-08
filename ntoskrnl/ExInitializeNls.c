/*
 * XREFs of ExInitializeNls @ 0x14080F164
 * Callers:
 *     ExpNlsInitSiloState @ 0x1409F877C (ExpNlsInitSiloState.c)
 *     Phase1InitializationIoReady @ 0x140B42D0C (Phase1InitializationIoReady.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwCreateDirectoryObject @ 0x140413850 (ZwCreateDirectoryObject.c)
 *     RtlpQueryNlsSystemCodePages @ 0x14080E878 (RtlpQueryNlsSystemCodePages.c)
 *     RtlpInitCodePageTables @ 0x14080EA38 (RtlpInitCodePageTables.c)
 *     RtlpInitUppercaseTables @ 0x14080F214 (RtlpInitUppercaseTables.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

NTSTATUS ExInitializeNls()
{
  unsigned __int16 v0; // bx
  NTSTATUS result; // eax
  _QWORD *Pool2; // rax
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  struct _LIST_ENTRY *v4; // rdx
  unsigned __int16 v5; // ax
  ULONG Value; // [rsp+30h] [rbp+8h] BYREF
  ULONG v7; // [rsp+38h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp+18h] BYREF

  Handle = 0LL;
  v0 = -535;
  Value = 65001;
  v7 = 65001;
  result = ZwCreateDirectoryObject(&Handle, 0xF000Fu, (POBJECT_ATTRIBUTES)&NlsDirectoryAttributes);
  if ( result >= 0 )
  {
    ZwClose(Handle);
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 16LL, 1483959374LL);
    if ( Pool2 )
    {
      *Pool2 = 0LL;
      CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
      CurrentServerSiloGlobals[66].Flink = v4;
      if ( (int)RtlpQueryNlsSystemCodePages(&Value, &v7) < 0 )
      {
        v5 = -535;
      }
      else
      {
        v0 = Value;
        v5 = v7;
      }
      RtlpInitCodePageTables(v0, v5);
      RtlpInitUppercaseTables();
      return 0;
    }
    else
    {
      return -1073741801;
    }
  }
  return result;
}
