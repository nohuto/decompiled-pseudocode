__int64 __fastcall DrvDbDeleteObjectRegKey(__int64 *a1, int a2, wchar_t *a3, unsigned int a4)
{
  int v5; // edi
  char v7; // r13
  int ObjectDatabaseNode; // eax
  __int64 v9; // r8
  __int64 v10; // r15
  unsigned int v11; // ebx
  int v12; // eax
  __int64 *v13; // r14
  int v14; // eax
  int v15; // edi
  __int64 v16; // r8
  void *v18; // [rsp+20h] [rbp-10h] BYREF
  __int64 v19; // [rsp+28h] [rbp-8h] BYREF
  wchar_t *v21; // [rsp+80h] [rbp+50h] BYREF
  unsigned int v22; // [rsp+88h] [rbp+58h]

  v22 = a4;
  v21 = a3;
  v18 = 0LL;
  v5 = a2;
  v19 = 0LL;
  v7 = 0;
  ObjectDatabaseNode = DrvDbGetObjectDatabaseNode((__int64)a1, a3, &v21, &v19);
  v10 = v19;
  v11 = ObjectDatabaseNode;
  if ( ObjectDatabaseNode >= 0 )
  {
    if ( v19 )
    {
      v12 = DrvDbAcquireDatabaseNodeBaseKey(a1, v19, v5, &v18);
      v11 = v12;
      if ( v12 >= 0 )
      {
        v11 = DrvDbDeleteObjectSubKey(a1, v18, v21, a4);
      }
      else if ( v12 == -1073740697 )
      {
        v11 = -1073741662;
      }
    }
    else
    {
      v13 = (__int64 *)a1[2];
      if ( v13 != a1 + 2 )
      {
        while ( 1 )
        {
          v10 = (__int64)v13;
          v14 = DrvDbAcquireDatabaseNodeBaseKey(a1, (__int64)v13, v5, &v18);
          v15 = v14;
          if ( v14 == -1073740697 )
          {
            v15 = -1073741662;
          }
          else
          {
            if ( v14 < 0 )
              break;
            v15 = DrvDbDeleteObjectSubKey(a1, v18, v21, v22);
            DrvDbReleaseDatabaseNodeBaseKey((__int64)a1, (__int64)v13, v16, v18);
            v18 = 0LL;
            if ( v15 < 0 )
            {
              if ( v15 != -1073741772 )
                goto LABEL_18;
            }
            else
            {
              v7 = 1;
            }
          }
          v13 = (__int64 *)*v13;
          if ( v13 == a1 + 2 )
            break;
          v5 = a2;
        }
        if ( v15 == -1073741772 )
          goto LABEL_20;
LABEL_18:
        if ( v15 != -1073741662 )
        {
          v11 = v15;
          goto LABEL_22;
        }
LABEL_20:
        v11 = v15;
        if ( v7 )
          v11 = 0;
      }
    }
  }
LABEL_22:
  if ( v18 )
    DrvDbReleaseDatabaseNodeBaseKey((__int64)a1, v10, v9, v18);
  return v11;
}
