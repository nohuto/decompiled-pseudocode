/*
 * XREFs of PoEnergyContextUpdateComponentPower @ 0x1406FF3F8
 * Callers:
 *     PsUpdateComponentPower @ 0x140294B40 (PsUpdateComponentPower.c)
 *     PopPowerRequestCallbackDisplayRequired @ 0x14073A470 (PopPowerRequestCallbackDisplayRequired.c)
 *     NtSetThreadExecutionState @ 0x14073A9D0 (NtSetThreadExecutionState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     KeQueryTimelineBitmapTime @ 0x1402384D0 (KeQueryTimelineBitmapTime.c)
 *     RtlTimelineBitmapUpdate @ 0x140250EE0 (RtlTimelineBitmapUpdate.c)
 *     RtlStateDurationUpdate @ 0x140294E3C (RtlStateDurationUpdate.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     RtlTimelineBitmapUpdateRange @ 0x1402EA814 (RtlTimelineBitmapUpdateRange.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PopEtEnergyContextSetState @ 0x140700F30 (PopEtEnergyContextSetState.c)
 *     PopEtEnergyContextProcessStateUpdate @ 0x140703944 (PopEtEnergyContextProcessStateUpdate.c)
 */

void __fastcall PoEnergyContextUpdateComponentPower(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rdi
  int v4; // esi
  ULONG_PTR v7; // r14
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  unsigned int v11; // eax
  int v12; // r9d
  unsigned int v13; // edx
  unsigned int v14; // r8d
  int v15; // eax
  unsigned int v16; // r8d
  unsigned int *v17; // rcx
  unsigned int v18; // r8d
  int v19; // eax
  int v20; // ebx
  int v21; // r9d
  int v22; // r9d
  unsigned int TimelineBitmapTime; // eax
  unsigned int v24; // eax
  unsigned int v25; // r9d
  __int16 v26; // r8
  unsigned int *v27; // rcx
  unsigned int v28; // edx
  unsigned int v29; // eax
  __int16 v30; // dx
  unsigned int v31; // r8d
  unsigned int v32; // edx
  __int64 *v33; // r10
  unsigned int v34; // ebx
  unsigned int v35; // eax
  unsigned int v36; // ecx
  unsigned __int8 v37; // si
  unsigned int *v38; // rbx
  unsigned __int64 *v39; // rdi
  unsigned int v40; // ecx
  unsigned int v41; // edx
  __int64 *v42; // rcx
  int v43; // r9d
  int v44; // r9d
  __int64 v45; // [rsp+20h] [rbp-D8h]
  __int64 v46; // [rsp+20h] [rbp-D8h]
  __int64 v47; // [rsp+20h] [rbp-D8h]
  __int64 v48; // [rsp+20h] [rbp-D8h]
  _DWORD v50[36]; // [rsp+30h] [rbp-C8h] BYREF

  v3 = *(_QWORD *)(a1 + 2280);
  v4 = a3;
  memset(v50, 0, sizeof(v50));
  if ( v3 )
  {
    v7 = v3 + 432;
    PopAcquireRwLockExclusive(v3 + 432);
    if ( a2 > 10 )
    {
      if ( a2 != 11 )
      {
        if ( a2 != 12 )
        {
          if ( a2 != 13 )
          {
            if ( a2 == 14 )
              ++*(_DWORD *)(v3 + 428);
            goto LABEL_17;
          }
          ++*(_DWORD *)(v3 + 424);
          TimelineBitmapTime = KeQueryTimelineBitmapTime();
          v17 = (unsigned int *)(v3 + 376);
LABEL_29:
          v13 = TimelineBitmapTime;
LABEL_16:
          RtlTimelineBitmapUpdate(v17, v13);
          goto LABEL_17;
        }
        v33 = (__int64 *)(v3 + 408);
        if ( v4 == 3 )
        {
          if ( *(int *)(v3 + 412) < 0 )
            goto LABEL_17;
          v47 = *v33;
          v43 = 4096;
          if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
             - (unsigned int)*v33 <= 0x1000 )
            v43 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - *v33;
          if ( ~v43 < (HIDWORD(v47) & 0x7FFFFFFFu) )
            v44 = -1;
          else
            v44 = (HIDWORD(v47) & 0x7FFFFFFF) + v43;
          HIDWORD(v48) = (HIDWORD(v47) ^ v44) & 0x7FFFFFFF ^ HIDWORD(v47);
          LODWORD(v48) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          *v33 = v48;
          v13 = KeQueryTimelineBitmapTime();
        }
        else
        {
          if ( (unsigned int)(v4 - 1) > 1 )
            goto LABEL_17;
          v34 = *(_DWORD *)(v3 + 472);
          if ( v4 == 1 )
          {
            *(_DWORD *)(v3 + 472) = ++v34;
            if ( v34 > 1 )
              goto LABEL_17;
          }
          else if ( v34 )
          {
            *(_DWORD *)(v3 + 472) = --v34;
            if ( v34 )
              goto LABEL_17;
          }
          RtlStateDurationUpdate(
            (unsigned __int64 *)(v3 + 408),
            v34 != 0,
            (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
          v35 = KeQueryTimelineBitmapTime();
          v13 = v35;
          if ( !v34 )
          {
            v41 = v35 - (v36 >> 12);
            v42 = (__int64 *)(v3 + 368);
            goto LABEL_55;
          }
        }
        v17 = (unsigned int *)(v3 + 368);
        goto LABEL_16;
      }
    }
    else if ( a2 != 10 )
    {
      v8 = a2 - 4;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 2;
          if ( !v10 )
          {
            v11 = KeQueryTimelineBitmapTime();
            v12 = -1;
            v13 = v11;
            if ( (_WORD)v4 )
            {
              v14 = *(_DWORD *)(v3 + 128);
              if ( ~(unsigned __int16)v4 < v14 )
                v15 = -1;
              else
                v15 = v14 + (unsigned __int16)v4;
              *(_DWORD *)(v3 + 128) = v15;
              RtlTimelineBitmapUpdate((unsigned int *)(v3 + 320), v13);
            }
            if ( WORD1(a3) )
            {
              v18 = *(_DWORD *)(v3 + 132);
              v19 = v18 + WORD1(a3);
              if ( ~WORD1(a3) < v18 )
                v19 = v12;
              *(_DWORD *)(v3 + 132) = v19;
              RtlTimelineBitmapUpdate((unsigned int *)(v3 + 328), v13);
            }
            if ( !WORD2(a3) )
              goto LABEL_17;
            v16 = *(_DWORD *)(v3 + 136);
            if ( ~WORD2(a3) >= v16 )
              v12 = v16 + WORD2(a3);
            *(_DWORD *)(v3 + 136) = v12;
            v17 = (unsigned int *)(v3 + 336);
            goto LABEL_16;
          }
          v20 = v10 - 1;
          if ( !v20 )
          {
            v50[1] = HIDWORD(a3);
            v50[0] = v4;
            PopEtEnergyContextSetState(a1, v50);
            goto LABEL_17;
          }
          if ( v20 != 1 )
          {
LABEL_17:
            PopReleaseRwLock(v7);
            return;
          }
          v45 = *(_QWORD *)(v3 + 384);
          v21 = 1000;
          if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
             - (unsigned int)v45 <= 0x3E8 )
            v21 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v45;
          if ( ~v21 < (HIDWORD(v45) & 0x7FFFFFFFu) )
            v22 = -1;
          else
            v22 = (HIDWORD(v45) & 0x7FFFFFFF) + v21;
          HIDWORD(v46) = (HIDWORD(v45) ^ v22) & 0x7FFFFFFF ^ HIDWORD(v45);
          LODWORD(v46) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          *(_QWORD *)(v3 + 384) = v46;
          TimelineBitmapTime = KeQueryTimelineBitmapTime();
          v17 = (unsigned int *)(v3 + 344);
          goto LABEL_29;
        }
        RtlStateDurationUpdate(
          (unsigned __int64 *)(v3 + 112),
          v4 != 0,
          (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        v29 = KeQueryTimelineBitmapTime();
        v30 = *(_WORD *)(v3 + 464);
        v31 = v29;
        v27 = (unsigned int *)(v3 + 312);
        if ( v4 )
        {
          *(_WORD *)(v3 + 464) = v30 | 2;
          v28 = v29;
          goto LABEL_33;
        }
        *(_WORD *)(v3 + 464) = v30 & 0xFFFD;
        v32 = v29;
      }
      else
      {
        RtlStateDurationUpdate(
          (unsigned __int64 *)(v3 + 104),
          v4 != 0,
          (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        v24 = KeQueryTimelineBitmapTime();
        v26 = *(_WORD *)(v3 + 464);
        v27 = (unsigned int *)(v3 + 304);
        if ( v4 )
        {
          v28 = v24;
          *(_WORD *)(v3 + 464) = v26 | 1;
LABEL_33:
          RtlTimelineBitmapUpdate(v27, v28);
LABEL_34:
          PopEtEnergyContextProcessStateUpdate(a1);
          goto LABEL_17;
        }
        v32 = v24;
        *(_WORD *)(v3 + 464) = v26 & 0xFFFE;
        v31 = v24;
      }
      RtlTimelineBitmapUpdateRange((__int64 *)v27, v32 - (v25 >> 12), v31);
      goto LABEL_34;
    }
    v37 = v4 != 0;
    if ( a2 == 11 )
    {
      v38 = (unsigned int *)(v3 + 360);
      v39 = (unsigned __int64 *)(v3 + 400);
    }
    else
    {
      v38 = (unsigned int *)(v3 + 352);
      v39 = (unsigned __int64 *)(v3 + 392);
    }
    RtlStateDurationUpdate(v39, v37, (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
    v35 = KeQueryTimelineBitmapTime();
    v13 = v35;
    if ( v37 )
    {
      v17 = v38;
      goto LABEL_16;
    }
    v41 = v35 - (v40 >> 12);
    v42 = (__int64 *)v38;
LABEL_55:
    RtlTimelineBitmapUpdateRange(v42, v41, v35);
    goto LABEL_17;
  }
}
