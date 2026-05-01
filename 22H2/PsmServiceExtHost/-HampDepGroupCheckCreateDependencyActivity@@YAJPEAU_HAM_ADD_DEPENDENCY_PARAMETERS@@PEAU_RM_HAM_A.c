/*
 * XREFs of ?HampDepGroupCheckCreateDependencyActivity@@YAJPEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAU_RM_HAM_ACTIVITY_HOST@@KPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18000B07C
 * Callers:
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000B1C8 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 * Callees:
 *     ?HampHostDepStart@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x1800091EC (-HampHostDepStart@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x1800119D0 (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180020E20 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     CemRcObjectDereference @ 0x1800273B0 (CemRcObjectDereference.c)
 */

__int64 __fastcall HampDepGroupCheckCreateDependencyActivity(
        struct _HAM_CLIENT_CONTEXT **a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        unsigned int a3,
        struct _HAM_HOST_DEPENDENCY *a4)
{
  struct _HAM_ACTIVITY *v4; // rbx
  __int64 v6; // r9
  _OWORD *v7; // rax
  _OWORD *v8; // r10
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  bool v16; // zf
  int v17; // eax
  int v18; // edi
  _DWORD v20[100]; // [rsp+30h] [rbp-198h] BYREF
  struct _HAM_ACTIVITY *v21; // [rsp+1E8h] [rbp+20h] BYREF

  v4 = 0LL;
  v21 = 0LL;
  v6 = 3LL;
  if ( *((_BYTE *)a4 + 40) == 3 )
    goto LABEL_8;
  v7 = a1 + 1;
  v8 = v20;
  do
  {
    v9 = v7[1];
    *v8 = *v7;
    v10 = v7[2];
    v8[1] = v9;
    v11 = v7[3];
    v8[2] = v10;
    v12 = v7[4];
    v8[3] = v11;
    v13 = v7[5];
    v8[4] = v12;
    v14 = v7[6];
    v8[5] = v13;
    v15 = v7[7];
    v7 += 8;
    v8[6] = v14;
    v8 += 8;
    *(v8 - 1) = v15;
    --v6;
  }
  while ( v6 );
  v16 = *((_DWORD *)a2 + 140) == 2;
  *(_QWORD *)v8 = *(_QWORD *)v7;
  if ( !v16 )
    v20[0] &= ~0x400u;
  v17 = HampActCreate(
          a1[50],
          (struct _HOST_ACTIVITY_MANAGER *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 97) + 88LL)
                                                                                + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                                                   + 120)
                                                       + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                          - 168),
          a2,
          (struct _HAM_ACTIVITY_PROPERTIES *)v20,
          a3,
          &v21);
  v4 = v21;
  v18 = v17;
  if ( v17 >= 0 )
  {
    *((_QWORD *)v21 + 9) = a4;
    *(_QWORD *)a4 = v4;
    HampHostDepStart(a4);
LABEL_8:
    v18 = 0;
  }
  if ( v4 )
  {
    if ( v18 < 0 )
      HampActClose(v4);
    CemRcObjectDereference(v4);
  }
  return (unsigned int)v18;
}
