/*
 * XREFs of NtGdiCreateClientObj @ 0x1C02A8370
 * Callers:
 *     <none>
 * Callees:
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z @ 0x1C007E7B4 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C02651D4 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 */

struct HOBJ__ *__fastcall NtGdiCreateClientObj(unsigned int a1)
{
  struct HOBJ__ *v1; // rbx
  __int64 v2; // rdi
  struct OBJECT *Object; // rsi
  struct HOBJ__ *v4; // rax
  __int64 v5; // rdx
  _BYTE v7[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]

  v1 = 0LL;
  v2 = a1;
  if ( (a1 & 0xFF00FFFF) != 0 || (a1 & 0x600000) == 0 || (a1 & 0x1F0000) != 0x60000 )
    return 0LL;
  Object = (struct OBJECT *)AllocateObject(24LL, 6LL, 0LL);
  if ( Object )
  {
    HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v7);
    v4 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v7, Object, 6u, 0);
    v1 = v4;
    if ( v4 )
    {
      v1 = (struct HOBJ__ *)(v2 | (unsigned __int64)v4);
      HmgModifyHandleType(v2 | (unsigned __int64)v4, v5);
    }
    else
    {
      FreeObject(Object, 6LL);
    }
    if ( v8 )
      _InterlockedDecrement((volatile signed __int32 *)(v8 + 12));
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v7);
  }
  return v1;
}
