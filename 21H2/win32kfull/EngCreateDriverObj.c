/*
 * XREFs of EngCreateDriverObj @ 0x1C0286520
 * Callers:
 *     VerifierEngCreateDriverObj @ 0x1C029E490 (VerifierEngCreateDriverObj.c)
 * Callees:
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z @ 0x1C00BCF78 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C026D3F8 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 */

HDRVOBJ __stdcall EngCreateDriverObj(PVOID pvObj, FREEOBJPROC pFreeObjProc, HDEV hdev)
{
  struct HOBJ__ *v3; // rdi
  struct OBJECT *Object; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct OBJECT *v11; // rbx
  _BYTE v13[32]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v14; // [rsp+40h] [rbp-28h]
  HDEV v15; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0LL;
  Object = (struct OBJECT *)AllocateObject(64LL, 28LL, 0LL);
  v11 = Object;
  if ( Object )
  {
    v15 = hdev;
    *((_QWORD *)Object + 3) = pvObj;
    *((_QWORD *)Object + 4) = pFreeObjProc;
    *((_QWORD *)Object + 5) = hdev;
    *((_QWORD *)Object + 6) = *((_QWORD *)hdev + 225);
    *((_QWORD *)Object + 7) = PsGetCurrentProcess(v9, v8, v10);
    HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v13);
    v3 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v13, v11, 0x1Cu, 0);
    if ( v3 )
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v15);
    else
      FreeObject(v11, 28LL);
    if ( v14 )
      _InterlockedDecrement((volatile signed __int32 *)(v14 + 12));
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v13);
  }
  return (HDRVOBJ)v3;
}
