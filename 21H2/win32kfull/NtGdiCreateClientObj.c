/*
 * XREFs of NtGdiCreateClientObj @ 0x1C01191E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z @ 0x1C00BCF78 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C026D3F8 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 */

struct HOBJ__ *__fastcall NtGdiCreateClientObj(unsigned int a1)
{
  struct HOBJ__ *v1; // rbx
  __int64 v2; // rdi
  struct OBJECT *Object; // rsi
  struct HOBJ__ *v4; // rax
  _BYTE v6[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  v1 = 0LL;
  v2 = a1;
  if ( (a1 & 0xFF00FFFF) != 0 || (a1 & 0x600000) == 0 || (a1 & 0x1F0000) != 0x60000 )
    return 0LL;
  Object = (struct OBJECT *)AllocateObject(24LL, 6LL, 0LL);
  if ( Object )
  {
    HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v6);
    v4 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v6, Object, 6u, 0);
    v1 = v4;
    if ( v4 )
    {
      v1 = (struct HOBJ__ *)(v2 | (unsigned __int64)v4);
      HmgModifyHandleType(v2 | (unsigned __int64)v4);
    }
    else
    {
      FreeObject(Object, 6LL);
    }
    if ( v7 )
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 12));
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v6);
  }
  return v1;
}
