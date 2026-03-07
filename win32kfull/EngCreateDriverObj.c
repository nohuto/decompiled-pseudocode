HDRVOBJ __stdcall EngCreateDriverObj(PVOID pvObj, FREEOBJPROC pFreeObjProc, HDEV hdev)
{
  struct HOBJ__ *v3; // rdi
  struct OBJECT *Object; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct OBJECT *v11; // rbx
  __int64 CurrentProcess; // rax
  HDEV v14[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0LL;
  Object = (struct OBJECT *)AllocateObject(64LL, 28LL);
  v11 = Object;
  if ( Object )
  {
    v14[0] = hdev;
    *((_QWORD *)Object + 3) = pvObj;
    *((_QWORD *)Object + 4) = pFreeObjProc;
    *((_QWORD *)Object + 5) = hdev;
    *((_QWORD *)Object + 6) = *((_QWORD *)hdev + 221);
    CurrentProcess = PsGetCurrentProcess(v9, v8, v10);
    v15 = 0LL;
    *((_QWORD *)v11 + 7) = CurrentProcess;
    v3 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v15, v11, 0x1Cu, 0);
    if ( v3 )
      PDEVOBJ::vReferencePdev((PDEVOBJ *)v14);
    else
      FreeObject(v11, 28LL);
    if ( v15 )
      _InterlockedDecrement((volatile signed __int32 *)(v15 + 12));
  }
  return (HDRVOBJ)v3;
}
