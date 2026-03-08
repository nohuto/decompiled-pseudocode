/*
 * XREFs of LinkNodepAddLinkNodeWorker @ 0x1C0099720
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C0047B9C (AMLIEvalNameSpaceObject.c)
 *     AMLIGetNamedChild @ 0x1C0048698 (AMLIGetNamedChild.c)
 *     IrqLibAcquireArbiterLock @ 0x1C005CC88 (IrqLibAcquireArbiterLock.c)
 *     IrqLibReleaseArbiterLock @ 0x1C005CD28 (IrqLibReleaseArbiterLock.c)
 */

void __fastcall LinkNodepAddLinkNodeWorker(PDEVICE_OBJECT DeviceObject, char *Context)
{
  _QWORD *v3; // rcx
  __int64 *v4; // rax
  volatile signed __int32 *v5; // rdi
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  _QWORD *v8; // rax

  *((_DWORD *)Context + 46) = 0;
  *((_DWORD *)Context + 47) = 0;
  *((_DWORD *)Context + 48) = 0;
  *((_DWORD *)Context + 49) = 0;
  *((_DWORD *)Context + 50) = -1;
  *((_QWORD *)Context + 26) = 0LL;
  v3 = (_QWORD *)*((_QWORD *)Context + 95);
  *((_QWORD *)Context + 30) = Context + 232;
  *((_QWORD *)Context + 29) = Context + 232;
  v4 = AMLIGetNamedChild(v3, 1397310559);
  v5 = (volatile signed __int32 *)v4;
  if ( v4 )
  {
    AMLIEvalNameSpaceObject(v4, 0LL, 0, 0LL);
    AMLIDereferenceHandleEx(v5, v6);
  }
  IrqLibAcquireArbiterLock(0);
  v7 = (_QWORD *)qword_1C006E6B8;
  v8 = Context + 216;
  if ( *(__int64 **)qword_1C006E6B8 != &LinkNodeListHead )
    __fastfail(3u);
  *v8 = &LinkNodeListHead;
  *((_QWORD *)Context + 28) = v7;
  *v7 = v8;
  qword_1C006E6B8 = (__int64)(Context + 216);
  IrqLibReleaseArbiterLock();
  IoFreeWorkItem(*((PIO_WORKITEM *)Context + 31));
  *((_QWORD *)Context + 31) = 0LL;
}
