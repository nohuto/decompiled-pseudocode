/*
 * XREFs of WbHeapExecuteCall @ 0x140642458
 * Callers:
 *     WbDispatchOperation @ 0x140643C44 (WbDispatchOperation.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     sub_140641DB4 @ 0x140641DB4 (sub_140641DB4.c)
 *     WbGetTrapFrame @ 0x140642100 (WbGetTrapFrame.c)
 *     sub_14064218C @ 0x14064218C (sub_14064218C.c)
 *     sub_140642290 @ 0x140642290 (sub_140642290.c)
 *     WbSetTrapFrame @ 0x14064262C (WbSetTrapFrame.c)
 *     WbGetHeapExecutedBlock @ 0x1406427A4 (WbGetHeapExecutedBlock.c)
 *     sub_14064290C @ 0x14064290C (sub_14064290C.c)
 *     WbGetWarbirdThread @ 0x1406438F0 (WbGetWarbirdThread.c)
 *     sub_140643AE0 @ 0x140643AE0 (sub_140643AE0.c)
 */

__int64 __fastcall WbHeapExecuteCall(__int64 a1, _QWORD *a2, char *a3, unsigned int a4)
{
  int HeapExecutedBlock; // ebx
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int16 v13; // ax
  unsigned __int64 v14; // rax
  __int16 v15; // ax
  __int16 v16; // ax
  unsigned __int64 v17; // rax
  __int64 v18; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v20; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h]
  int v22[84]; // [rsp+60h] [rbp-A0h] BYREF

  v19 = 0LL;
  v18 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  memset(v22, 0, sizeof(v22));
  HeapExecutedBlock = sub_140641DB4((__int64)a2, a4, v22);
  if ( HeapExecutedBlock >= 0 )
  {
    HeapExecutedBlock = WbGetHeapExecutedBlock(a1, v22, &v19);
    if ( HeapExecutedBlock >= 0 )
    {
      HeapExecutedBlock = WbGetWarbirdThread(a1, v9, &v18);
      if ( HeapExecutedBlock >= 0 )
      {
        HeapExecutedBlock = WbGetTrapFrame(v18, (__int64)&v20);
        if ( HeapExecutedBlock >= 0 )
        {
          HeapExecutedBlock = sub_14064218C(v18, v19, *((__int64 *)&v20 + 1), v20, v21);
          if ( HeapExecutedBlock >= 0 )
          {
            HeapExecutedBlock = sub_140642290((__int64)v22, v19, (__int64 *)&v20, a2, a3, a4);
            if ( HeapExecutedBlock >= 0 )
            {
              v10 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10];
              if ( !v10 )
                goto LABEL_8;
              v13 = *(_WORD *)(v10 + 8);
              if ( v13 != 332 && v13 != 452 )
                goto LABEL_8;
              v14 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10];
              if ( !v14 )
                goto LABEL_18;
              v15 = *(_WORD *)(v14 + 8);
              if ( !v15 )
                goto LABEL_18;
              if ( v15 != 332 )
              {
                if ( v15 != 452 )
                {
LABEL_18:
                  HeapExecutedBlock = -1073741637;
                  goto LABEL_11;
                }
              }
              else
              {
LABEL_8:
                LODWORD(v21) = v21 & 0xFFFFFEFF;
              }
              *((_QWORD *)&v20 + 1) = *(_QWORD *)(v19 + 24);
              HeapExecutedBlock = WbSetTrapFrame(v18, &v20);
              if ( HeapExecutedBlock >= 0 )
              {
                v11 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10];
                if ( v11 )
                {
                  v16 = *(_WORD *)(v11 + 8);
                  if ( v16 == 332 || v16 == 452 )
                  {
                    v17 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10];
                    if ( v17 && *(_WORD *)(v17 + 8) == 332 )
                      HeapExecutedBlock = DWORD2(v20);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_11:
  sub_140643AE0(a1, v18);
  sub_14064290C(a1, v19);
  return (unsigned int)HeapExecutedBlock;
}
