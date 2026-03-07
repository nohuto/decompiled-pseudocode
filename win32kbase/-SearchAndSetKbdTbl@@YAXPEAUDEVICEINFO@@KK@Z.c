void __fastcall SearchAndSetKbdTbl(struct DEVICEINFO *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  unsigned int v5; // r14d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 *v33[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a3;
  v5 = a2;
  v10 = *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 13896);
  v11 = *(__int64 **)(v10 + 56);
  if ( *(_QWORD *)(v11[4] + 96) != __PAIR64__(v4, v5) && (*((_DWORD *)a1 + 46) & 0x20) == 0 )
  {
    v12 = 0LL;
    v14 = *(_QWORD *)(SGDGetUserSessionState(v8, v7, v9, v10) + 13896);
    if ( *(_DWORD *)(v14 + 88) )
    {
      while ( 1 )
      {
        v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(SGDGetUserSessionState(v14, v13, v15, v16) + 13896) + 96LL) + 8 * v12);
        if ( *(_DWORD *)(*(_QWORD *)(v18 + 32) + 96LL) == v5 )
        {
          v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(SGDGetUserSessionState(v18, v17, v19, v20) + 13896) + 96LL) + 8 * v12);
          if ( *(_DWORD *)(*(_QWORD *)(v18 + 32) + 100LL) == v4 )
            break;
        }
        v12 = (unsigned int)(v12 + 1);
        v14 = *(_QWORD *)(SGDGetUserSessionState(v18, v17, v19, v20) + 13896);
        if ( (unsigned int)v12 >= *(_DWORD *)(v14 + 88) )
          goto LABEL_9;
      }
      v14 = *(_QWORD *)(SGDGetUserSessionState(v18, v17, v19, v20) + 13896);
      v11 = *(__int64 **)(*(_QWORD *)(v14 + 96) + 8 * v12);
    }
LABEL_9:
    SGDGetUserSessionState(v14, v13, v15, v16);
  }
  v22 = *(_QWORD *)(SGDGetUserSessionState(v8, v7, v9, v10) + 13896);
  if ( *(__int64 **)(v22 + 48) != v11 )
  {
    v33[1] = v11;
    v33[0] = (__int64 *)(*(_QWORD *)(SGDGetUserSessionState(v22, v21, v23, v24) + 13896) + 48LL);
    HMAssignmentLock(v33, 0);
    v29 = SGDGetUserSessionState(v26, v25, v27, v28);
    SetGlobalKeyboardTableInfo(*(_QWORD *)(v29 + 13896), v30, v31, v32);
  }
}
