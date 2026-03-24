/*
 * XREFs of DrvDbOpenObjectRegKey @ 0x1406B91F0
 * Callers:
 *     DrvDbOpenDriverInfFileRegKey @ 0x1406B3DF4 (DrvDbOpenDriverInfFileRegKey.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406B469C (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbOpenDriverPackageRegKey @ 0x1406B797C (DrvDbOpenDriverPackageRegKey.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x1406F9718 (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140727CD0 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbOpenDeviceIdRegKey @ 0x140728850 (DrvDbOpenDeviceIdRegKey.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140735700 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbCreateDatabaseNode @ 0x1407A4698 (DrvDbCreateDatabaseNode.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x14097D3F4 (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbGetObjectDatabaseNodeName @ 0x14097DEB0 (DrvDbGetObjectDatabaseNodeName.c)
 *     DrvDbOpenDriverFileRegKey @ 0x14097E5A8 (DrvDbOpenDriverFileRegKey.c)
 * Callees:
 *     _PnpCtxRegCreateTree @ 0x1406B7058 (_PnpCtxRegCreateTree.c)
 *     DrvDbGetObjectDatabaseNode @ 0x1406B7ADC (DrvDbGetObjectDatabaseNode.c)
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x1406B93DC (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1406B9478 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     _PnpCtxRegOpenKey @ 0x1406B95FC (_PnpCtxRegOpenKey.c)
 */

__int64 DrvDbOpenObjectRegKey(__int64 *a1, const UNICODE_STRING *a2, unsigned int a3, ...)
{
  int ObjectDatabaseNode; // eax
  __int64 v7; // r8
  const UNICODE_STRING *v8; // rdi
  int Tree; // ebx
  const UNICODE_STRING *i; // r14
  int v11; // eax
  __int64 v12; // r8
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // [rsp+40h] [rbp-10h] BYREF
  const UNICODE_STRING *v18; // [rsp+48h] [rbp-8h] BYREF
  wchar_t *v20; // [rsp+98h] [rbp+48h] BYREF
  va_list va; // [rsp+98h] [rbp+48h]
  __int64 v22; // [rsp+A0h] [rbp+50h]
  __int64 v23; // [rsp+A8h] [rbp+58h]
  __int64 v24; // [rsp+B0h] [rbp+60h]
  _DWORD *v25; // [rsp+B8h] [rbp+68h]
  const UNICODE_STRING **v26; // [rsp+C0h] [rbp+70h]
  va_list va1; // [rsp+C8h] [rbp+78h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v20 = va_arg(va1, wchar_t *);
  v22 = va_arg(va1, _QWORD);
  v23 = va_arg(va1, _QWORD);
  v24 = va_arg(va1, _QWORD);
  v25 = va_arg(va1, _DWORD *);
  v26 = va_arg(va1, const UNICODE_STRING **);
  v17 = 0LL;
  v18 = 0LL;
  ObjectDatabaseNode = DrvDbGetObjectDatabaseNode((__int64)a1, v20, (wchar_t **)va, &v18);
  v8 = v18;
  Tree = ObjectDatabaseNode;
  if ( ObjectDatabaseNode < 0 )
    goto LABEL_12;
  if ( !v18 )
  {
    v8 = a2;
    if ( !a2 )
    {
      for ( i = (const UNICODE_STRING *)a1[2];
            i != (const UNICODE_STRING *)(a1 + 2);
            i = *(const UNICODE_STRING **)&i->Length )
      {
        v8 = i;
        v11 = DrvDbAcquireDatabaseNodeBaseKey(a1, i, a3, &v17);
        Tree = v11;
        if ( v11 == -1073740697 )
        {
          Tree = -1073741772;
        }
        else
        {
          if ( v11 < 0 )
            break;
          Tree = PnpCtxRegOpenKey(*a1, v17, (_DWORD)v20, 0, v22, v24);
          DrvDbReleaseDatabaseNodeBaseKey(a1, i, v12, v17);
          v17 = 0LL;
          if ( Tree != -1073741772 )
            goto LABEL_9;
        }
      }
      if ( Tree == -1073741772 )
      {
        if ( !(_BYTE)v23 )
          goto LABEL_12;
        v8 = (const UNICODE_STRING *)a1[4];
        v16 = DrvDbAcquireDatabaseNodeBaseKey(a1, v8, a3, &v17);
        Tree = v16;
        if ( v16 < 0 )
        {
          if ( v16 == -1073740697 )
            Tree = -1073741662;
          goto LABEL_12;
        }
        Tree = PnpCtxRegCreateTree(*a1);
        if ( Tree < 0 )
          goto LABEL_12;
      }
LABEL_9:
      if ( Tree >= 0 && v26 )
        *v26 = v8;
      goto LABEL_12;
    }
  }
  v14 = DrvDbAcquireDatabaseNodeBaseKey(a1, v8, a3, &v17);
  Tree = v14;
  if ( v14 >= 0 )
  {
    v15 = *a1;
    if ( (_BYTE)v23 )
    {
      Tree = PnpCtxRegCreateTree(v15);
    }
    else
    {
      Tree = PnpCtxRegOpenKey(v15, v17, (_DWORD)v20, 0, v22, v24);
      if ( Tree < 0 )
        goto LABEL_12;
      if ( v25 )
        *v25 = 2;
    }
    goto LABEL_9;
  }
  if ( v14 == -1073740697 )
    Tree = -1073741772;
LABEL_12:
  if ( v17 )
    DrvDbReleaseDatabaseNodeBaseKey(a1, v8, v7, v17);
  return (unsigned int)Tree;
}
