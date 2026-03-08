/*
 * XREFs of PnpFindBestConfigurationWorker @ 0x14080375C
 * Callers:
 *     PnpFindBestConfiguration @ 0x140803704 (PnpFindBestConfiguration.c)
 * Callees:
 *     IopSaveRestoreConfiguration @ 0x14080290C (IopSaveRestoreConfiguration.c)
 *     IopRetestConfiguration @ 0x1408035A0 (IopRetestConfiguration.c)
 *     IopSelectNextConfiguration @ 0x140803664 (IopSelectNextConfiguration.c)
 *     IopTestConfiguration @ 0x1408038E0 (IopTestConfiguration.c)
 *     PnpSelectFirstConfiguration @ 0x140803F50 (PnpSelectFirstConfiguration.c)
 *     IopAddRemoveReqDescs @ 0x1408061D8 (IopAddRemoveReqDescs.c)
 */

__int64 __fastcall PnpFindBestConfigurationWorker(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned int v6; // r15d
  __int64 v7; // rbx
  unsigned int v8; // r12d
  int v9; // esi
  __int64 v10; // r9
  __int128 v11; // xmm0
  unsigned int v13; // edx
  __int64 *v14; // r8
  __int64 v15; // rax
  _QWORD **v16; // r8
  __int64 v17; // rbx
  __int64 v18; // r15
  _OWORD v19[3]; // [rsp+20h] [rbp-38h] BYREF

  v3 = a2;
  *((_QWORD *)&v19[0] + 1) = v19;
  *(_QWORD *)(a3 + 8) = a3;
  *(_QWORD *)&v19[0] = v19;
  *(_QWORD *)a3 = a3;
  PnpSelectFirstConfiguration();
  v6 = -1;
  v7 = MEMORY[0xFFFFF78000000014];
  v8 = PnpFindBestConfigurationTimeout;
  while ( 1 )
  {
    v9 = IopTestConfiguration(a1, (unsigned int)v3, a3);
    if ( v9 >= 0 )
    {
      v11 = *(_OWORD *)a3;
      v19[0] = *(_OWORD *)a3;
      if ( (_DWORD)v3 == 1 )
        goto LABEL_4;
      v13 = 0;
      if ( (_DWORD)v3 )
      {
        v14 = (__int64 *)(a1 + 32);
        v10 = v3;
        do
        {
          v15 = *v14;
          v14 += 8;
          v13 += ***(_DWORD ***)(v15 + 16);
          --v10;
        }
        while ( v10 );
      }
      if ( v13 < v6 )
      {
        v6 = v13;
        IopSaveRestoreConfiguration(a1, v3, (_QWORD **)a3, 1);
      }
    }
    if ( (unsigned int)((MEMORY[0xFFFFF78000000014] - v7) / 10000) >= v8 )
      break;
    if ( !IopSelectNextConfiguration(a1, v3, a3, v10) )
      goto LABEL_15;
  }
  if ( (_DWORD)v3 )
  {
    v17 = a1 + 32;
    v18 = v3;
    do
    {
      IopAddRemoveReqDescs(
        **(_QWORD **)(*(_QWORD *)v17 + 16LL) + 24LL,
        *(unsigned int *)(**(_QWORD **)(*(_QWORD *)v17 + 16LL) + 20LL),
        0LL,
        0LL);
      v17 += 64LL;
      --v18;
    }
    while ( v18 );
  }
LABEL_15:
  v11 = v19[0];
LABEL_4:
  if ( (_OWORD *)v11 == v19 )
  {
    if ( v9 != -1073739512 )
      return (unsigned int)-1073741823;
  }
  else
  {
    v9 = 0;
    if ( (_DWORD)v3 != 1 )
    {
      *(_OWORD *)a3 = v11;
      IopSaveRestoreConfiguration(a1, v3, (_QWORD **)a3, 0);
      return (unsigned int)IopRetestConfiguration(a1, v3, v16);
    }
  }
  return (unsigned int)v9;
}
