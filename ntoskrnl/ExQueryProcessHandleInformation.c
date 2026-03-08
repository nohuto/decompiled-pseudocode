/*
 * XREFs of ExQueryProcessHandleInformation @ 0x1409F60F4
 * Callers:
 *     NtQueryInformationProcess @ 0x1407215F0 (NtQueryInformationProcess.c)
 * Callees:
 *     ExGetHandlePointer @ 0x1403120A0 (ExGetHandlePointer.c)
 *     ExLockHandleTableEntry @ 0x140352148 (ExLockHandleTableEntry.c)
 *     ExfUnblockPushLock @ 0x14040CCE0 (ExfUnblockPushLock.c)
 *     ExpGetNextHandleTableEntry @ 0x14070F78C (ExpGetNextHandleTableEntry.c)
 */

__int64 __fastcall ExQueryProcessHandleInformation(__int64 a1, _QWORD *a2, int a3, int *a4)
{
  _QWORD *v5; // rdi
  unsigned int v6; // r13d
  int v7; // esi
  unsigned int v8; // r15d
  __int64 v9; // rdx
  __int64 *NextHandleTableEntry; // rax
  unsigned int v11; // r11d
  __int64 *v12; // r14
  unsigned __int64 HandlePointer; // rax
  unsigned int v14; // r9d
  int v15; // r8d
  int v16; // r8d
  int v17; // r10d
  __int64 v18; // r11
  __int64 v19; // rdx
  int v20; // r9d
  signed __int32 v23[8]; // [rsp+0h] [rbp-88h] BYREF
  int v24; // [rsp+20h] [rbp-68h]
  int v25; // [rsp+24h] [rbp-64h]
  __int64 v26[2]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v27; // [rsp+38h] [rbp-50h]
  __int64 v28; // [rsp+40h] [rbp-48h]
  __int64 v29; // [rsp+90h] [rbp+8h]
  int v31; // [rsp+A0h] [rbp+18h]

  v29 = a1;
  v26[0] = 0LL;
  v5 = a2 + 2;
  v26[1] = (unsigned int)(a3 - 16) / 0x28uLL;
  v6 = 0;
  v7 = 16;
  v8 = 0;
  v9 = 0LL;
  while ( 1 )
  {
    NextHandleTableEntry = (__int64 *)ExpGetNextHandleTableEntry(a1, v9, v26);
    v12 = NextHandleTableEntry;
    if ( !NextHandleTableEntry )
      break;
    if ( v6 >= v11 )
    {
      if ( (v26[0] & 0x3FC) != 0 && *NextHandleTableEntry )
      {
        v7 += 40;
        v8 = -1073741820;
      }
    }
    else if ( ExLockHandleTableEntry(v29, NextHandleTableEntry) )
    {
      HandlePointer = ExGetHandlePointer(v12);
      v14 = *((_DWORD *)v12 + 2);
      v15 = ((__int64)*(unsigned int *)v12 >> 17) & 7 | 8;
      if ( (v14 & 0x2000000) == 0 )
        LOBYTE(v15) = ((__int64)*(unsigned int *)v12 >> 17) & 7;
      v16 = v15 & 7;
      v31 = v16;
      v17 = *(unsigned __int8 *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer)]
                               + 40);
      v25 = v17;
      v18 = *(_QWORD *)HandlePointer;
      v27 = *(_QWORD *)HandlePointer;
      v19 = *(_QWORD *)(HandlePointer + 8);
      v28 = v19;
      v20 = v14 & 0x1FFFFFF;
      v24 = v20;
      _InterlockedExchangeAdd64(v12, 1uLL);
      _InterlockedOr(v23, 0);
      if ( *(_QWORD *)(v29 + 48) )
      {
        ExfUnblockPushLock((volatile __int64 *)(v29 + 48), 0LL);
        v16 = v31;
        v20 = v24;
        v17 = v25;
        v18 = v27;
        v19 = v28;
      }
      v7 += 40;
      ++v6;
      *v5 = v26[0];
      v5[1] = v19;
      v5[2] = v18;
      *((_DWORD *)v5 + 6) = v20;
      *((_DWORD *)v5 + 7) = v17;
      *((_DWORD *)v5 + 8) = v16;
      *((_DWORD *)v5 + 9) = 0;
      *a2 = v6;
      v5 += 5;
    }
    v9 = (__int64)v12;
    a1 = v29;
  }
  if ( a4 )
    *a4 = v7;
  return v8;
}
