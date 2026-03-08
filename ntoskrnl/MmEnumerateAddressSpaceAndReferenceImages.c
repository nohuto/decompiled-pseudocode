/*
 * XREFs of MmEnumerateAddressSpaceAndReferenceImages @ 0x140727330
 * Callers:
 *     EtwpEnumerateAddressSpace @ 0x1407EC24C (EtwpEnumerateAddressSpace.c)
 *     EtwpCovSampEnumerateProcess @ 0x1409EF5D0 (EtwpCovSampEnumerateProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     MiLocateVadEvent @ 0x14020DC50 (MiLocateVadEvent.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     MiUnlockVadShared @ 0x1402A5B30 (MiUnlockVadShared.c)
 *     KeStackAttachProcess @ 0x14030DF10 (KeStackAttachProcess.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14031F590 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14031F600 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadDeleted @ 0x14031F750 (MiVadDeleted.c)
 *     MiLockVadShared @ 0x14031F870 (MiLockVadShared.c)
 *     MiVadMapsLargeImage @ 0x140327280 (MiVadMapsLargeImage.c)
 *     MiReferenceControlAreaFile @ 0x140344094 (MiReferenceControlAreaFile.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     MiFillMapFileInfo @ 0x1408A749A (MiFillMapFileInfo.c)
 */

_QWORD *__fastcall MmEnumerateAddressSpaceAndReferenceImages(PRKPROCESS PROCESS, char a2)
{
  int v4; // ecx
  int v5; // edx
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v7; // ebp
  _QWORD *v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  _QWORD *v11; // rcx
  _QWORD *i; // rdi
  _QWORD **v13; // rax
  __int64 v14; // rsi
  _QWORD *v15; // rcx
  _QWORD *v16; // rcx
  int v17; // edx
  __int64 v18; // rcx
  int v19; // r8d
  __int64 v20; // r13
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // rbp
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  int v29; // r8d
  int v30; // eax
  int v31; // ecx
  unsigned __int64 v32; // rax
  __int64 VadEvent; // rax
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // [rsp+20h] [rbp-78h]
  unsigned int v37; // [rsp+24h] [rbp-74h]
  _QWORD *Pool; // [rsp+28h] [rbp-70h]
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-68h] BYREF

  v4 = a2 & 1;
  memset(&ApcState, 0, 32);
  v5 = v4 | 2;
  if ( (a2 & 2) == 0 )
    v5 = v4;
  *(_OWORD *)&ApcState.Process = 0LL;
  CurrentThread = KeGetCurrentThread();
  v7 = v5 | 4;
  if ( (a2 & 4) == 0 )
    v7 = v5;
  v8 = 0LL;
  v37 = v7;
  if ( CurrentThread->ApcState.Process == PROCESS )
  {
    v36 = 0;
  }
  else
  {
    KeStackAttachProcess(PROCESS, &ApcState);
    v36 = 1;
  }
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)PROCESS);
  v9 = *(_QWORD *)&PROCESS[1].Spare2[31];
  if ( v9 )
  {
    v10 = v9 + 1;
    if ( v10 <= 0x555555555555555LL )
    {
      Pool = MiAllocatePool(256, 48 * v10, 0x3031704Du);
      v8 = Pool;
      if ( Pool )
      {
        v11 = *(_QWORD **)&PROCESS[1].Spare2[15];
        i = 0LL;
        while ( v11 )
        {
          i = v11;
          v11 = (_QWORD *)*v11;
        }
        while ( 1 )
        {
          while ( 1 )
          {
            if ( !i )
            {
              *v8 = 0LL;
              v8 = Pool;
              goto LABEL_39;
            }
            v13 = (_QWORD **)i[1];
            v14 = (__int64)i;
            v15 = i;
            if ( v13 )
            {
              v16 = *v13;
              for ( i = (_QWORD *)i[1]; v16; v16 = (_QWORD *)*v16 )
                i = v16;
            }
            else
            {
              while ( 1 )
              {
                i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
                if ( !i || (_QWORD *)*i == v15 )
                  break;
                v15 = i;
              }
            }
            MiLockVadShared((__int64)CurrentThread, v14);
            if ( (unsigned int)MiVadDeleted(v14) || v19 == 1 )
              goto LABEL_15;
            if ( (v17 & 0x200000) == 0 )
              break;
            if ( v7 >= 4 )
            {
              *v8 = (*(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32)) << 12;
              v8[1] = ((*(unsigned int *)(v14 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 33) << 32))
                     - (*(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32))
                     + 1) << 12;
              v27 = *(unsigned int *)(v14 + 52);
              LODWORD(v27) = v27 & 0x7FFFFFFF;
              if ( (v27 | ((unsigned __int64)*(unsigned __int8 *)(v14 + 34) << 31)) < 0x7FFFFFFFDLL )
                v28 = (v27 | ((unsigned __int64)*(unsigned __int8 *)(v14 + 34) << 31)) << 12;
              else
                v28 = 0LL;
              v8[3] = v28;
              *((_DWORD *)v8 + 4) = PROCESS[1].Header.WaitListHead.Flink;
              *((_DWORD *)v8 + 5) = 0x2000;
              v29 = v19 - 3;
              if ( v29 )
              {
                if ( v29 == 1 )
                {
                  *((_DWORD *)v8 + 5) = 8396800;
                  v31 = 8396800;
                }
                else
                {
                  v30 = *(_DWORD *)(v14 + 48);
                  v31 = 0x2000;
                  if ( (v30 & 0x200000) != 0 && ((v30 & 0x800000) != 0 || (v30 & 0x180000u) >= 0x100000) )
                  {
                    *((_DWORD *)v8 + 5) = 536879104;
                    v31 = 536879104;
                  }
                }
              }
              else if ( (*(_DWORD *)(v14 + 48) & 0x6200000) == 0x4200000 )
              {
                v31 = 0x2000;
              }
              else
              {
                *((_DWORD *)v8 + 5) = 4202496;
                v31 = 4202496;
              }
              if ( (*(_DWORD *)(v14 + 48) & 0x600000) == 0x600000 )
                *((_DWORD *)v8 + 5) = v31 | 0x200000;
              v32 = *v8 & 0xFFFFFFFFFFFFFFFCuLL | 2;
              goto LABEL_61;
            }
LABEL_15:
            MiUnlockVadShared((__int64)CurrentThread, v14);
          }
          if ( v19 != 2 || (v17 & 0xF80) != 0x380 || (v7 & 1) == 0 )
          {
            if ( (v7 & 2) != 0 )
            {
              MiFillMapFileInfo(v18, v8);
              v32 = *v8 & 0xFFFFFFFFFFFFFFFCuLL | 1;
LABEL_61:
              *v8 = v32;
              goto LABEL_35;
            }
            goto LABEL_15;
          }
          v20 = **(_QWORD **)(v14 + 72);
          v21 = *(unsigned int *)(v14 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32);
          v22 = v21 << 12;
          v23 = ((*(unsigned int *)(v14 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 33) << 32)) - v21 + 1) << 12;
          if ( (unsigned int)MiVadMapsLargeImage(v14) )
          {
            VadEvent = MiLocateVadEvent();
            v22 += (unsigned __int64)*(unsigned __int8 *)(VadEvent + 8) << 16;
            v23 = *(_QWORD *)(VadEvent + 16) << 12;
          }
          *v8 = MiReferenceControlAreaFile(v20);
          v8[1] = v22;
          v8[2] = *(_QWORD *)(*(_QWORD *)v20 + 32LL);
          v8[3] = v23;
          *((_DWORD *)v8 + 10) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v20 + 56LL) + 60LL);
          if ( (*(_DWORD *)(v14 + 64) & 0x8000000) != 0 )
          {
            v25 = v8[1] & 0xFFFFFFFFFFFFE03FuLL;
          }
          else
          {
            v24 = v8[1] & 0xFFFFFFFFFFFFFC3FuLL | (4LL * (*(_BYTE *)(*(_QWORD *)v20 + 15LL) & 0xF0));
            v8[1] = v24;
            v25 = v24 ^ ((unsigned __int16)v24 ^ (unsigned __int16)(*(unsigned __int8 *)(*(_QWORD *)v20 + 15LL) << 9)) & 0x1C00;
          }
          v7 = v37;
          v8[1] = v25;
          if ( (v37 & 2) != 0 )
          {
            v34 = HIBYTE(*(_DWORD *)(v14 + 64)) & 1 | v8[1] & 0xFFFFFFFFFFFFFFFEuLL;
            v8[1] = v34;
            v8[1] = v34 ^ ((unsigned __int8)v34 ^ (unsigned __int8)((unsigned __int64)*(unsigned int *)(v14 + 48) >> 6)) & 0x3E;
            v35 = *(unsigned int *)(v14 + 52);
            LODWORD(v35) = v35 & 0x7FFFFFFF;
            v8[4] = (v35 | ((unsigned __int64)*(unsigned __int8 *)(v14 + 34) << 31)) << 12;
          }
LABEL_35:
          MiUnlockVadShared((__int64)CurrentThread, v14);
          v8 += 6;
        }
      }
    }
  }
LABEL_39:
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)PROCESS);
  if ( v36 )
    KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
  return v8;
}
