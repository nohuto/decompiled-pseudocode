/*
 * XREFs of CmpCallbackFillObjectContext @ 0x1406E1220
 * Callers:
 *     CmpCallCallBacksEx @ 0x1406E0B20 (CmpCallCallBacksEx.c)
 * Callees:
 *     CmpGetCallbackObjectContext @ 0x140738A30 (CmpGetCallbackObjectContext.c)
 *     CmpUnlockContextList @ 0x140738DA0 (CmpUnlockContextList.c)
 *     CmpLockContextListShared @ 0x140738ED8 (CmpLockContextListShared.c)
 */

void __fastcall CmpCallbackFillObjectContext(int a1, _QWORD *a2, __int64 *a3)
{
  _DWORD *v5; // rax
  __int64 v6; // rbx
  _QWORD *v7; // r14
  _DWORD *v8; // rax
  __int64 v9; // rbx
  _QWORD *v10; // r14
  _DWORD *v11; // rax
  __int64 v12; // rbx
  _QWORD *v13; // r14
  _DWORD *v14; // rax
  __int64 v15; // rbx
  _QWORD *v16; // r14
  _DWORD *v17; // rax
  __int64 v18; // rbx
  _QWORD *v19; // r14
  _DWORD *v20; // rax
  _QWORD *v21; // r14
  _QWORD *v22; // rax
  __int64 v23; // rdx
  _DWORD *v24; // rax
  _QWORD *v25; // r14
  _QWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rdx
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rdx
  _QWORD *v32; // rax
  __int64 v33; // rdx
  _QWORD *v34; // rax
  __int64 v35; // rdx

  switch ( a1 )
  {
    case 28:
LABEL_11:
      v8 = (_DWORD *)a2[1];
      v9 = 0LL;
      if ( v8 )
      {
        if ( *v8 == 1803104306 )
        {
          v10 = v8 + 18;
          if ( (_QWORD *)*v10 != v10 )
          {
            CmpLockContextListShared();
            v29 = (_QWORD *)*v10;
            if ( (_QWORD *)*v10 != v10 )
            {
              v30 = *a3;
              while ( v29[4] != v30 )
              {
                if ( v29[4] >= v30 )
                {
                  v29 = (_QWORD *)*v29;
                  if ( v29 != v10 )
                    continue;
                }
                goto LABEL_62;
              }
              v9 = v29[7];
            }
LABEL_62:
            CmpUnlockContextList();
          }
        }
      }
      a2[11] = v9;
      break;
    case 29:
LABEL_10:
      a2[5] = 0LL;
      break;
    case 8:
      v11 = (_DWORD *)*a2;
      v12 = 0LL;
      if ( *a2 )
      {
        if ( *v11 == 1803104306 )
        {
          v13 = v11 + 18;
          if ( (_QWORD *)*v13 != v13 )
          {
            CmpLockContextListShared();
            v32 = (_QWORD *)*v13;
            if ( (_QWORD *)*v13 != v13 )
            {
              v33 = *a3;
              while ( v32[4] != v33 )
              {
                if ( v32[4] >= v33 )
                {
                  v32 = (_QWORD *)*v32;
                  if ( v32 != v13 )
                    continue;
                }
                goto LABEL_75;
              }
              v12 = v32[7];
            }
LABEL_75:
            CmpUnlockContextList();
          }
        }
      }
      a2[7] = v12;
      break;
    case 23:
LABEL_6:
      v5 = (_DWORD *)*a2;
      v6 = 0LL;
      if ( *a2 )
      {
        if ( *v5 == 1803104306 )
        {
          v7 = v5 + 18;
          if ( (_QWORD *)*v7 != v7 )
          {
            CmpLockContextListShared();
            v26 = (_QWORD *)*v7;
            if ( (_QWORD *)*v7 != v7 )
            {
              v28 = *a3;
              while ( v26[4] != v28 )
              {
                if ( v26[4] >= v28 )
                {
                  v26 = (_QWORD *)*v26;
                  if ( v26 != v7 )
                    continue;
                }
                goto LABEL_56;
              }
LABEL_82:
              v6 = v26[7];
            }
LABEL_56:
            CmpUnlockContextList();
          }
        }
      }
LABEL_9:
      a2[5] = v6;
      break;
    default:
      switch ( a1 )
      {
        case 0:
        case 30:
          a2[2] = CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 1:
        case 6:
          a2[6] = CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 2:
        case 4:
        case 34:
          a2[3] = CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 3:
          v24 = (_DWORD *)*a2;
          v6 = 0LL;
          if ( !*a2 )
            goto LABEL_9;
          if ( *v24 != 1803104306 )
            goto LABEL_9;
          v25 = v24 + 18;
          if ( (_QWORD *)*v25 == v25 )
            goto LABEL_9;
          CmpLockContextListShared();
          v26 = (_QWORD *)*v25;
          if ( (_QWORD *)*v25 == v25 )
            goto LABEL_56;
          v27 = *a3;
          while ( v26[4] != v27 )
          {
            if ( v26[4] >= v27 )
            {
              v26 = (_QWORD *)*v26;
              if ( v26 != v25 )
                continue;
            }
            goto LABEL_56;
          }
          goto LABEL_82;
        case 5:
          v20 = (_DWORD *)*a2;
          v15 = 0LL;
          if ( !*a2 )
            goto LABEL_22;
          if ( *v20 != 1803104306 )
            goto LABEL_22;
          v21 = v20 + 18;
          if ( (_QWORD *)*v21 == v21 )
            goto LABEL_22;
          CmpLockContextListShared();
          v22 = (_QWORD *)*v21;
          if ( (_QWORD *)*v21 == v21 )
            goto LABEL_68;
          v23 = *a3;
          while ( v22[4] != v23 )
          {
            if ( v22[4] >= v23 )
            {
              v22 = (_QWORD *)*v22;
              if ( v22 != v21 )
                continue;
            }
            goto LABEL_68;
          }
          goto LABEL_84;
        case 7:
          v14 = (_DWORD *)*a2;
          v15 = 0LL;
          if ( !*a2 )
            goto LABEL_22;
          if ( *v14 != 1803104306 )
            goto LABEL_22;
          v16 = v14 + 18;
          if ( (_QWORD *)*v16 == v16 )
            goto LABEL_22;
          CmpLockContextListShared();
          v22 = (_QWORD *)*v16;
          if ( (_QWORD *)*v16 == v16 )
            goto LABEL_68;
          v31 = *a3;
          while ( v22[4] != v31 )
          {
            if ( v22[4] >= v31 )
            {
              v22 = (_QWORD *)*v22;
              if ( v22 != v16 )
                continue;
            }
            goto LABEL_68;
          }
LABEL_84:
          v15 = v22[7];
LABEL_68:
          CmpUnlockContextList();
LABEL_22:
          a2[6] = v15;
          return;
        case 9:
          a2[7] = CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 14:
          v17 = (_DWORD *)*a2;
          v18 = 0LL;
          if ( !*a2 )
            goto LABEL_26;
          if ( *v17 != 1803104306 )
            goto LABEL_26;
          v19 = v17 + 18;
          if ( (_QWORD *)*v19 == v19 )
            goto LABEL_26;
          CmpLockContextListShared();
          v34 = (_QWORD *)*v19;
          if ( (_QWORD *)*v19 == v19 )
            goto LABEL_81;
          v35 = *a3;
          break;
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 24:
        case 31:
        case 33:
        case 35:
        case 37:
        case 39:
        case 42:
        case 44:
        case 46:
        case 48:
        case 50:
          goto LABEL_6;
        case 25:
        case 27:
          goto LABEL_10;
        case 26:
          goto LABEL_11;
        case 32:
          a2[9] = CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 36:
        case 47:
        case 49:
          a2[5] = CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 38:
        case 41:
        case 43:
        case 45:
          a2[4] = CmpGetCallbackObjectContext(*a2, a3);
          return;
        default:
          return;
      }
      while ( v34[4] != v35 )
      {
        if ( v34[4] >= v35 )
        {
          v34 = (_QWORD *)*v34;
          if ( v34 != v19 )
            continue;
        }
        goto LABEL_81;
      }
      v18 = v34[7];
LABEL_81:
      CmpUnlockContextList();
LABEL_26:
      a2[2] = v18;
      break;
  }
}
