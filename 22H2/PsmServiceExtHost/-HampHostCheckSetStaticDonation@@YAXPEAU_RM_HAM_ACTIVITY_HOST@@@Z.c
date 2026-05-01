/*
 * XREFs of ?HampHostCheckSetStaticDonation@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001BB70
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001B1D0 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ?HampHostCanStaticallyDonateCommit@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18007DCDC (-HampHostCanStaticallyDonateCommit@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 */

void __fastcall HampHostCheckSetStaticDonation(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 *v1; // rax
  __int64 v3; // rax
  __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rdx
  int v9; // r9d
  int v10; // r10d
  int v11; // [rsp+30h] [rbp-98h] BYREF
  __int64 v12; // [rsp+38h] [rbp-90h] BYREF
  __int64 v13; // [rsp+40h] [rbp-88h] BYREF
  __int64 v14; // [rsp+48h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+50h] [rbp-78h] BYREF
  int *v16; // [rsp+70h] [rbp-58h]
  __int64 v17; // [rsp+78h] [rbp-50h]
  __int64 *v18; // [rsp+80h] [rbp-48h]
  __int64 v19; // [rsp+88h] [rbp-40h]
  __int64 *v20; // [rsp+90h] [rbp-38h]
  __int64 v21; // [rsp+98h] [rbp-30h]
  __int64 *v22; // [rsp+A0h] [rbp-28h]
  __int64 v23; // [rsp+A8h] [rbp-20h]

  v1 = (__int64 *)*((_QWORD *)a1 + 87);
  if ( v1 )
  {
    v3 = *v1;
    v4 = *(_QWORD *)(v3 + 80);
    v5 = *(_QWORD *)(v3 + 456);
    v6 = *(_QWORD *)(v4 + 1000);
    if ( v6 && *(_QWORD *)(v6 + 456) > v5 )
      v5 = *(_QWORD *)(v6 + 456);
    v7 = *(_QWORD *)(v4 + 944);
    if ( v7 )
    {
      if ( v7 > v5 && HampHostCanStaticallyDonateCommit(a1, v7) < 0 )
      {
        *(_QWORD *)(v4 + 944) = 0LL;
        if ( (unsigned int)dword_1800B3218 > 4 )
        {
          if ( tlgKeywordOn((__int64)&dword_1800B3218, 8LL) )
          {
            v12 = *((_QWORD *)a1 + 139);
            v13 = *((_QWORD *)a1 - 4);
            v14 = *(_QWORD *)(v4 - 32);
            v22 = &v12;
            v20 = &v13;
            v18 = &v14;
            v16 = &v11;
            v23 = v8;
            v21 = v8;
            v19 = v8;
            v11 = v10;
            v17 = 4LL;
            tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B3218, (int)&dword_1800A0FEA, 0, v9, 6u, &v15);
          }
        }
      }
    }
    if ( v5 <= *(_QWORD *)(v4 + 944) )
      v5 = *(_QWORD *)(v4 + 944);
    *((_QWORD *)a1 + 119) = v5;
  }
  else
  {
    *((_QWORD *)a1 + 119) = 0LL;
  }
}
