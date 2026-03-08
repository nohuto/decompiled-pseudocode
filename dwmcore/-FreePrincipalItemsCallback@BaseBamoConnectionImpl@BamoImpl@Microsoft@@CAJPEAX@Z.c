/*
 * XREFs of ?FreePrincipalItemsCallback@BaseBamoConnectionImpl@BamoImpl@Microsoft@@CAJPEAX@Z @ 0x1801B68C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800ACA2C (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800ACA60 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800AD490 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?RemoveItemIdFromConversation@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXI@Z @ 0x1801B77AC (-RemoveItemIdFromConversation@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXI@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::FreePrincipalItemsCallback(
        struct Microsoft::BamoImpl::ConnectionIndirector **this)
{
  unsigned int *v2; // rsi
  unsigned int *i; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  const char *v6; // r9
  Microsoft::BamoImpl::BamoImplObject *v8; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock((Microsoft::BamoImpl::InternalLock *)&v8, this[12]);
  if ( this[8] )
  {
    v2 = (unsigned int *)this[25];
    for ( i = (unsigned int *)this[24]; i != v2; ++i )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::RemoveItemIdFromConversation(
        (Microsoft::BamoImpl::BaseBamoConnectionImpl *)this,
        *i);
  }
  this[25] = this[24];
  *((_BYTE *)this + 219) = 0;
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v8);
  Microsoft::BamoImpl::BamoImplObject::Release(this[12], v4, v5, v6);
  return 0LL;
}
