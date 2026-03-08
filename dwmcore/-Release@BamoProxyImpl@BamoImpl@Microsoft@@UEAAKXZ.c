/*
 * XREFs of ?Release@BamoProxyImpl@BamoImpl@Microsoft@@UEAAKXZ @ 0x1801E2ED0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800ACA2C (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800ACA60 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800AD490 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoProxyImpl::Release(
        Microsoft::BamoImpl::BamoProxyImpl *this,
        struct Microsoft::BamoImpl::ConnectionIndirector *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  const char *v9; // r9
  Microsoft::BamoImpl::BamoImplObject *v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 2);
  if ( v4
    && (a2 = *(struct Microsoft::BamoImpl::ConnectionIndirector **)(v4 + 24), *(int *)(*((_QWORD *)a2 + 4) + 8LL) > 0) )
  {
    Microsoft::BamoImpl::InternalLock::InternalLock((Microsoft::BamoImpl::InternalLock *)&v11, a2);
    v6 = Microsoft::BamoImpl::BamoImplObject::Release(this, v7, v8, v9);
    Microsoft::BamoImpl::InternalLock::~InternalLock(&v11);
  }
  else
  {
    return (unsigned int)Microsoft::BamoImpl::BamoImplObject::Release(this, (__int64)a2, a3, a4);
  }
  return v6;
}
