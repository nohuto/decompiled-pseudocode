/*
 * XREFs of TtmiOpenDefaultTerminal @ 0x1409A80CC
 * Callers:
 *     TtmpDispatchOpenTerminal @ 0x1409A37F4 (TtmpDispatchOpenTerminal.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByPointer @ 0x1407C93D0 (ObOpenObjectByPointer.c)
 *     TtmiLogError @ 0x1409A536C (TtmiLogError.c)
 */

__int64 __fastcall TtmiOpenDefaultTerminal(__int64 a1, ACCESS_MASK a2, KPROCESSOR_MODE a3, HANDLE *a4)
{
  void *v4; // rcx
  NTSTATUS v8; // eax
  PVOID v9; // rsi
  NTSTATUS v10; // ebx
  int v11; // r9d
  int v12; // r8d
  int v13; // edx
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF

  v4 = *(void **)(a1 + 24);
  Object = 0LL;
  v8 = ObReferenceObjectByHandle(v4, a2, TtmpTerminalObjectType, 0, &Object, 0LL);
  v9 = Object;
  v10 = v8;
  if ( v8 < 0 )
  {
    v11 = v8;
    v12 = v8;
    v13 = 926;
LABEL_5:
    TtmiLogError("TtmiOpenDefaultTerminal", v13, v12, v11);
    return (unsigned int)v10;
  }
  v10 = ObOpenObjectByPointer(Object, a3 == 0 ? 0x200 : 0, 0LL, a2, TtmpTerminalObjectType, a3, a4);
  ObfDereferenceObject(v9);
  if ( v10 < 0 )
  {
    v11 = v10;
    v12 = v10;
    v13 = 951;
    goto LABEL_5;
  }
  return (unsigned int)v10;
}
