__int64 DrvDbOpenObjectRegKey(__int64 *a1, __int64 *a2, unsigned int a3, ...)
{
  int ObjectDatabaseNode; // eax
  __int64 v7; // r8
  __int64 *v8; // rdi
  int Tree; // ebx
  int v10; // eax
  __int64 v11; // rcx
  __int64 *v12; // r14
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  bool v16; // sf
  int v18; // eax
  __int64 *v19; // [rsp+40h] [rbp-10h] BYREF
  __int64 v20; // [rsp+48h] [rbp-8h] BYREF
  __int64 v22; // [rsp+98h] [rbp+48h] BYREF
  va_list va; // [rsp+98h] [rbp+48h]
  __int64 v24; // [rsp+A0h] [rbp+50h]
  __int64 v25; // [rsp+A8h] [rbp+58h]
  __int64 v26; // [rsp+B0h] [rbp+60h]
  _DWORD *v27; // [rsp+B8h] [rbp+68h]
  __int64 **v28; // [rsp+C0h] [rbp+70h]
  va_list va1; // [rsp+C8h] [rbp+78h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v22 = va_arg(va1, _QWORD);
  v24 = va_arg(va1, _QWORD);
  v25 = va_arg(va1, _QWORD);
  v26 = va_arg(va1, _QWORD);
  v27 = va_arg(va1, _DWORD *);
  v28 = va_arg(va1, __int64 **);
  v20 = 0LL;
  v19 = 0LL;
  ObjectDatabaseNode = DrvDbGetObjectDatabaseNode(a1, v22, (__int64 *)va, &v19);
  v8 = v19;
  Tree = ObjectDatabaseNode;
  if ( ObjectDatabaseNode < 0 )
    goto LABEL_21;
  if ( v19 || (v8 = a2) != 0LL )
  {
    v10 = DrvDbAcquireDatabaseNodeBaseKey(a1, v8, a3, &v20);
    Tree = v10;
    if ( v10 < 0 )
    {
      if ( v10 == -1073740697 )
        Tree = -1073741772;
    }
    else
    {
      v11 = *a1;
      if ( (_BYTE)v25 )
      {
        Tree = PnpCtxRegCreateTree(v11);
        v16 = Tree < 0;
LABEL_18:
        if ( !v16 )
          goto LABEL_19;
      }
      else
      {
        if ( v11 )
          v11 = *(_QWORD *)(v11 + 224);
        Tree = SysCtxRegOpenKey(v11, v20, v22, 0, v24, v26);
        if ( Tree >= 0 )
        {
          if ( v27 )
            *v27 = 2;
          goto LABEL_19;
        }
      }
    }
  }
  else
  {
    v12 = (__int64 *)a1[2];
    if ( v12 == a1 + 2 )
    {
LABEL_19:
      if ( v28 )
        *v28 = v8;
      goto LABEL_21;
    }
    do
    {
      v8 = v12;
      v13 = DrvDbAcquireDatabaseNodeBaseKey(a1, v12, a3, &v20);
      Tree = v13;
      if ( v13 == -1073740697 )
      {
        Tree = -1073741772;
      }
      else
      {
        if ( v13 < 0 )
          break;
        if ( *a1 )
          v14 = *(_QWORD *)(*a1 + 224);
        else
          v14 = 0LL;
        Tree = SysCtxRegOpenKey(v14, v20, v22, 0, v24, v26);
        DrvDbReleaseDatabaseNodeBaseKey(a1, v12, v15, v20);
        v20 = 0LL;
        if ( Tree != -1073741772 )
          goto LABEL_17;
      }
      v12 = (__int64 *)*v12;
    }
    while ( v12 != a1 + 2 );
    if ( Tree == -1073741772 && (_BYTE)v25 )
    {
      v8 = (__int64 *)a1[5];
      v18 = DrvDbAcquireDatabaseNodeBaseKey(a1, v8, a3, &v20);
      Tree = v18;
      if ( v18 >= 0 )
      {
        Tree = PnpCtxRegCreateTree(*a1);
        if ( Tree >= 0 )
        {
LABEL_17:
          v16 = Tree < 0;
          goto LABEL_18;
        }
      }
      else if ( v18 == -1073740697 )
      {
        Tree = -1073741662;
      }
    }
  }
LABEL_21:
  if ( v20 )
    DrvDbReleaseDatabaseNodeBaseKey(a1, v8, v7, v20);
  return (unsigned int)Tree;
}
