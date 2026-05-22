/*
 * XREFs of ?DestroyCustomCursorShapeAnimation@BamoSystemCursorControllerProxy@@UEAAJ_K@Z @ 0x1800E51C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180005450 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800115C4 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?DestroyCustomCursorShapeAnimation@BamoSystemCursorControllerProxyImpl@BamoImpl@@QEAAJ_K@Z @ 0x1800E521C (-DestroyCustomCursorShapeAnimation@BamoSystemCursorControllerProxyImpl@BamoImpl@@QEAAJ_K@Z.c)
 */

__int64 __fastcall BamoSystemCursorControllerProxy::DestroyCustomCursorShapeAnimation(
        BamoSystemCursorControllerProxy *this,
        unsigned __int64 a2)
{
  BamoSystemCursorControllerProxy *v3; // rbx
  Microsoft::BamoImpl::BamoImplObject *v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v5,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v3) = BamoImpl::BamoSystemCursorControllerProxyImpl::DestroyCustomCursorShapeAnimation(
                  (BamoSystemCursorControllerProxy *)((char *)v3 + 8),
                  a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v5);
  return (unsigned int)v3;
}
