/*
 * XREFs of WbHeapExecuteCall @ 0x1406AF56C
 * Callers:
 *     WbDispatchOperation @ 0x1406AECD0 (WbDispatchOperation.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     WbGetWarbirdThread @ 0x1406AF248 (WbGetWarbirdThread.c)
 *     sub_1406AF488 @ 0x1406AF488 (sub_1406AF488.c)
 *     WbGetTrapFrame @ 0x1406AF738 (WbGetTrapFrame.c)
 *     sub_1406AF7C4 @ 0x1406AF7C4 (sub_1406AF7C4.c)
 *     sub_1406AF8A4 @ 0x1406AF8A4 (sub_1406AF8A4.c)
 *     WbSetTrapFrame @ 0x1406AF9A4 (WbSetTrapFrame.c)
 *     WbGetHeapExecutedBlock @ 0x1406AFAAC (WbGetHeapExecutedBlock.c)
 *     sub_1406AFC38 @ 0x1406AFC38 (sub_1406AFC38.c)
 *     WbValidateHeapExecuteCallArguments @ 0x1406AFDA4 (WbValidateHeapExecuteCallArguments.c)
 */

__int64 __fastcall WbHeapExecuteCall(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int HeapExecutedBlock; // ebx
  __int64 v9; // rdx
  _KPROCESS *Process; // rcx
  _KPROCESS *v11; // rcx
  __int16 v13; // ax
  _KPROCESS *v14; // rcx
  __int16 v15; // ax
  __int16 v16; // ax
  _KPROCESS *v17; // rdx
  __int64 v18; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v20; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h]
  _BYTE v22[336]; // [rsp+60h] [rbp-A0h] BYREF

  v19 = 0LL;
  v18 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  memset(v22, 0, sizeof(v22));
  HeapExecutedBlock = WbValidateHeapExecuteCallArguments(a2, a4, v22);
  if ( HeapExecutedBlock >= 0 )
  {
    HeapExecutedBlock = WbGetHeapExecutedBlock(a1, v22, &v19);
    if ( HeapExecutedBlock >= 0 )
    {
      HeapExecutedBlock = WbGetWarbirdThread(a1, v9, &v18);
      if ( HeapExecutedBlock >= 0 )
      {
        HeapExecutedBlock = WbGetTrapFrame(v18, &v20);
        if ( HeapExecutedBlock >= 0 )
        {
          HeapExecutedBlock = sub_1406AF8A4(v18, v19, DWORD2(v20), v20, v21);
          if ( HeapExecutedBlock >= 0 )
          {
            HeapExecutedBlock = sub_1406AF7C4(v22, v19, &v20, a2, a3, a4);
            if ( HeapExecutedBlock >= 0 )
            {
              Process = KeGetCurrentThread()->ApcState.Process;
              if ( !Process[1].Affinity.StaticBitmap[30] )
                goto LABEL_8;
              v13 = WORD2(Process[2].Affinity.StaticBitmap[20]);
              if ( v13 != 332 && v13 != 452 )
                goto LABEL_8;
              v14 = KeGetCurrentThread()->ApcState.Process;
              if ( !v14[1].Affinity.StaticBitmap[30] )
                goto LABEL_18;
              v15 = WORD2(v14[2].Affinity.StaticBitmap[20]);
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
                v11 = KeGetCurrentThread()->ApcState.Process;
                if ( v11[1].Affinity.StaticBitmap[30] )
                {
                  v16 = WORD2(v11[2].Affinity.StaticBitmap[20]);
                  if ( v16 == 332 || v16 == 452 )
                  {
                    v17 = KeGetCurrentThread()->ApcState.Process;
                    if ( v17[1].Affinity.StaticBitmap[30] && WORD2(v17[2].Affinity.StaticBitmap[20]) == 332 )
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
  sub_1406AF488(a1, v18);
  sub_1406AFC38(a1, v19);
  return (unsigned int)HeapExecutedBlock;
}
