/*
 * XREFs of PopEtEnergyTrackerQuery @ 0x140767578
 * Callers:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     KeQueryTimelineBitmapTime @ 0x1402384D0 (KeQueryTimelineBitmapTime.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14034A074 (KiQueryUnbiasedInterruptTime.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1406D8E50 (ObReferenceObjectByHandleWithTag.c)
 *     PopEtDataSectionCopyData @ 0x140768274 (PopEtDataSectionCopyData.c)
 *     PopEtDataSectionReserve @ 0x1407682C0 (PopEtDataSectionReserve.c)
 *     PopEtDataSectionStart @ 0x140768310 (PopEtDataSectionStart.c)
 *     PopEtEnergyTrackerCleanupAggregates @ 0x140768330 (PopEtEnergyTrackerCleanupAggregates.c)
 *     PsEnumProcesses @ 0x1407809CC (PsEnumProcesses.c)
 */

__int64 __fastcall PopEtEnergyTrackerQuery(void *a1, __int64 a2, unsigned int a3)
{
  char v5; // r14
  NTSTATUS v6; // ebx
  unsigned int v7; // r13d
  unsigned int v8; // ebx
  unsigned int v9; // r15d
  _QWORD *v10; // r10
  int v11; // r9d
  __int64 v12; // rdx
  _QWORD *i; // rdx
  unsigned __int16 *v14; // rdx
  __int64 v15; // rax
  int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __m128i v20; // xmm0
  __int64 v21; // rsi
  __int64 v22; // r14
  int v23; // ebx
  char *v24; // r10
  unsigned __int8 *v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rax
  int v29; // r13d
  int v30; // r12d
  int v31; // r15d
  int v32; // ecx
  __int64 v33; // rdx
  __int64 *v34; // rdx
  unsigned __int64 v35; // r8
  __int64 v36; // rbx
  __int64 v37; // rax
  int v38; // edx
  __int64 v39; // r8
  int TimelineBitmapTime; // eax
  __int64 v41; // r8
  int v42; // r9d
  int v43; // r9d
  int v44; // r9d
  int v45; // r9d
  int v46; // r9d
  int v47; // r9d
  int v48; // eax
  __int64 j; // r10
  PVOID v50; // r11
  _DWORD *v51; // rbx
  _QWORD *v52; // r8
  __int64 v53; // rdx
  __int64 *v54; // rdx
  unsigned __int64 v55; // r8
  int v57; // [rsp+40h] [rbp-158h]
  __int64 v58; // [rsp+40h] [rbp-158h]
  PVOID Object; // [rsp+48h] [rbp-150h] BYREF
  size_t Size; // [rsp+50h] [rbp-148h] BYREF
  unsigned __int8 *v61; // [rsp+58h] [rbp-140h]
  int v62; // [rsp+60h] [rbp-138h]
  int v63; // [rsp+64h] [rbp-134h]
  __m128i v64; // [rsp+68h] [rbp-130h] BYREF
  __int128 v65; // [rsp+78h] [rbp-120h] BYREF
  __int128 v66; // [rsp+88h] [rbp-110h]
  char *v67; // [rsp+98h] [rbp-100h]
  __int64 v68; // [rsp+A0h] [rbp-F8h]
  _QWORD *v69; // [rsp+A8h] [rbp-F0h]
  __int128 v70; // [rsp+B0h] [rbp-E8h] BYREF
  __int128 v71; // [rsp+C0h] [rbp-D8h]
  __int128 v72; // [rsp+D0h] [rbp-C8h] BYREF
  __int128 v73; // [rsp+E0h] [rbp-B8h]
  __int64 v74; // [rsp+F0h] [rbp-A8h]
  __int64 v75; // [rsp+F8h] [rbp-A0h]
  __int64 *v76; // [rsp+100h] [rbp-98h]
  __int128 v77; // [rsp+108h] [rbp-90h] BYREF
  __int128 v78; // [rsp+118h] [rbp-80h]
  __int64 v79; // [rsp+128h] [rbp-70h]
  __int64 v80; // [rsp+138h] [rbp-60h] BYREF
  __int64 v81; // [rsp+140h] [rbp-58h]
  __int128 v82; // [rsp+148h] [rbp-50h] BYREF
  __int128 v83; // [rsp+158h] [rbp-40h]

  Object = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v5 = 0;
  v70 = 0LL;
  v71 = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  if ( !PopEtGlobals )
  {
    v6 = -1073741637;
    goto LABEL_82;
  }
  v6 = ObReferenceObjectByHandleWithTag(
         a1,
         1u,
         *(POBJECT_TYPE *)(PopEtGlobals + 32),
         KeGetCurrentThread()->PreviousMode,
         0x74456F50u,
         &Object,
         0LL);
  if ( v6 >= 0 )
  {
    v82 = 2uLL;
    v83 = (unsigned __int64)Object;
    v6 = PsEnumProcesses(PopEtProcessEnumSnapshotCallback, &v82);
    if ( v6 >= 0 )
    {
      PopAcquireRwLockExclusive((ULONG_PTR)Object + 16);
      v7 = *((_DWORD *)Object + 12);
      v8 = 0;
      v9 = 44;
      v10 = 0LL;
      while ( 1 )
      {
        if ( v10 )
        {
          v11 = *((_DWORD *)Object + 13) >> 5;
          v79 = v10[1] & (-1LL << (*((_DWORD *)Object + 13) & 0x1F));
          v12 = *((_QWORD *)Object + 7)
              + 8LL
              * ((37
                * (BYTE6(v79)
                 + 37
                 * (BYTE5(v79)
                  + 37
                  * (BYTE4(v79)
                   + 37 * (BYTE3(v79) + 37 * (BYTE2(v79) + 37 * (BYTE1(v79) + 37 * ((unsigned __int8)v79 + 11623883)))))))
                + HIBYTE(v79)) & (unsigned int)(v11 - 1));
        }
        else
        {
          v10 = (_QWORD *)*((_QWORD *)Object + 7);
          v12 = (__int64)v10;
        }
        if ( !v10 || (v10 = (_QWORD *)*v10, ((unsigned __int8)v10 & 1) != 0) )
        {
          for ( i = (_QWORD *)(v12 + 8);
                (unsigned __int64)i < *((_QWORD *)Object + 7)
                                    + 8 * ((unsigned __int64)*((unsigned int *)Object + 13) >> 5);
                ++i )
          {
            v10 = (_QWORD *)*i;
            if ( (*i & 1) == 0 )
              goto LABEL_13;
          }
          v10 = 0LL;
        }
LABEL_13:
        if ( !v10 )
          break;
        v14 = (unsigned __int16 *)v10[2];
        if ( v8 >= 0x10000000 )
        {
          v6 = -1073741619;
          goto LABEL_81;
        }
        v9 += v14[43];
        v8 += v14[41] + v14[42] + v14[40];
        v15 = v10[3];
        if ( v15 )
          v8 += ((unsigned int)(*(_QWORD *)(v15 + 24) >> 16) >> 1) & 0x1FFFFFFF;
      }
      LODWORD(Size) = 72;
      v72 = 0LL;
      v73 = 0LL;
      HIDWORD(v72) = 104;
      LODWORD(v73) = 8;
      PopEtDataSectionReserve(&v72, v7, &Size);
      v77 = 0LL;
      v78 = 0LL;
      HIDWORD(v77) = 432;
      LODWORD(v78) = 8;
      PopEtDataSectionReserve(&v77, v7, &Size);
      v70 = 0LL;
      v71 = 0LL;
      HIDWORD(v70) = 1;
      LODWORD(v71) = 4;
      PopEtDataSectionReserve(&v70, v9, &Size);
      v65 = 0LL;
      v66 = 0LL;
      HIDWORD(v65) = 2;
      LODWORD(v66) = 2;
      PopEtDataSectionReserve(&v65, v8, &Size);
      v16 = Size;
      if ( (unsigned int)Size > a3 || (unsigned int)Size >= 0x7FFFFFFF )
      {
        if ( a3 >= 0xC )
        {
          *(_QWORD *)a2 = 0LL;
          *(_DWORD *)a2 = 2097171;
          *(_DWORD *)(a2 + 8) = v16;
        }
        v6 = -1073741789;
        goto LABEL_81;
      }
      memset((void *)a2, 0, (unsigned int)Size);
      PopEtDataSectionStart(&v72, a2);
      PopEtDataSectionStart(&v77, v17);
      PopEtDataSectionStart(&v70, v18);
      PopEtDataSectionStart(&v65, v19);
      v79 = a2;
      *(_DWORD *)a2 = 2097171;
      *(_DWORD *)(a2 + 4) = 72;
      *(_DWORD *)(a2 + 8) = v16;
      *(_DWORD *)(a2 + 12) = *((_DWORD *)Object + 150);
      *(_DWORD *)(a2 + 24) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      *(_DWORD *)(a2 + 36) = v72;
      *(_DWORD *)(a2 + 40) = v7;
      *(_DWORD *)(a2 + 56) = 1048680;
      *(_DWORD *)(a2 + 52) = DWORD1(v71);
      *(_WORD *)(a2 + 60) = 12;
      PopEtDataSectionCopyData(&v70, (char *)Object + 32, 12LL);
      *(_DWORD *)(a2 + 44) = DWORD1(v71);
      PopEtDataSectionCopyData(&v70, (char *)Object + 604, 16LL);
      v20 = *(__m128i *)((char *)Object + 620);
      v64 = v20;
      v64.m128i_i32[0] = *((_DWORD *)Object + 151) + _mm_cvtsi128_si32(v20);
      v64.m128i_i32[1] = *((_DWORD *)Object + 152) + v20.m128i_i32[1];
      v64.m128i_i32[2] = *((_DWORD *)Object + 153) + v20.m128i_i32[2];
      v64.m128i_i32[3] = *((_DWORD *)Object + 154) + v20.m128i_i32[3];
      *(_DWORD *)(a2 + 48) = DWORD1(v71);
      PopEtDataSectionCopyData(&v70, &v64, 16LL);
      v21 = 0LL;
      v22 = *((_QWORD *)&v73 + 1);
      while ( 1 )
      {
        v23 = 314159;
        v24 = (char *)Object + 48;
        v67 = (char *)Object + 48;
        if ( !v21 )
        {
          v33 = *((_QWORD *)Object + 7);
          v69 = (_QWORD *)v33;
          v21 = v33;
          v68 = v33;
          goto LABEL_28;
        }
        v68 = v21;
        v27 = *(_QWORD *)(v21 + 8) & (-1LL << (*((_DWORD *)Object + 13) & 0x1F));
        LODWORD(Size) = *((_DWORD *)Object + 13) >> 5;
        v80 = v27;
        v25 = (unsigned __int8 *)&v80;
        v61 = (unsigned __int8 *)&v80;
        v26 = 8LL;
        v74 = 8LL;
        LODWORD(v27) = 314159;
        v28 = 314159LL;
        v57 = 314159;
        v75 = 314159LL;
        v29 = 314159;
        v30 = 314159;
        v31 = 314159;
        v32 = 314159;
        while ( v26 >= 8 )
        {
          v27 = v25[7]
              + 37
              * (v25[6]
               + 37 * (v25[5] + 37 * (v25[4] + 37 * (v25[3] + 37 * (v25[2] + 37 * (v25[1] + 37 * (*v25 + 37 * v28)))))));
          v28 = v27;
          v25 += 8;
          v61 = v25;
          v26 -= 8LL;
          v74 = v26;
          v57 = v27;
          v75 = v27;
          v29 = v27;
          v30 = v27;
          v31 = v27;
          v23 = v27;
          v32 = v27;
        }
        if ( v26 >= 1 )
        {
          v42 = v26 - 1;
          if ( !v42 )
            goto LABEL_64;
          v43 = v42 - 1;
          if ( !v43 )
            goto LABEL_63;
          v44 = v43 - 1;
          if ( !v44 )
            goto LABEL_62;
          v45 = v44 - 1;
          if ( !v45 )
            goto LABEL_61;
          v46 = v45 - 1;
          if ( !v46 )
            goto LABEL_60;
          v47 = v46 - 1;
          if ( !v47 )
          {
            v48 = v75;
LABEL_59:
            v29 = *v25++ + 37 * v48;
            v61 = v25;
LABEL_60:
            v30 = *v25++ + 37 * v29;
            v61 = v25;
LABEL_61:
            v31 = *v25++ + 37 * v30;
            v61 = v25;
LABEL_62:
            v23 = *v25++ + 37 * v31;
            v61 = v25;
LABEL_63:
            v32 = *v25++ + 37 * v23;
            v61 = v25;
LABEL_64:
            LODWORD(v27) = *v25 + 37 * v32;
            v61 = v25 + 1;
            goto LABEL_27;
          }
          if ( v47 == 1 )
          {
            v48 = 37 * v57 + *v25++;
            v61 = v25;
            goto LABEL_59;
          }
        }
LABEL_27:
        v33 = *((_QWORD *)Object + 7) + 8LL * ((unsigned int)v27 & ((_DWORD)Size - 1));
        v69 = (_QWORD *)v33;
LABEL_28:
        v76 = 0LL;
        if ( !v21 )
          goto LABEL_29;
        if ( (*(_QWORD *)v21 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        {
          v22 = *((_QWORD *)&v73 + 1);
          v33 = (__int64)v69;
          v21 = v68;
          v24 = v67;
        }
        if ( v21 && (v21 = *(_QWORD *)v21, (v21 & 1) == 0) )
        {
LABEL_33:
          v68 = v21;
        }
        else
        {
LABEL_29:
          v34 = (__int64 *)(v33 + 8);
          v35 = *((_QWORD *)v24 + 1) + 8 * ((unsigned __int64)*((unsigned int *)v24 + 1) >> 5);
          while ( 1 )
          {
            v76 = v34;
            if ( (unsigned __int64)v34 >= v35 )
              break;
            v21 = *v34;
            if ( (*v34 & 1) == 0 )
            {
              v69 = v34;
              goto LABEL_33;
            }
            ++v34;
          }
          v21 = 0LL;
        }
        if ( !v21 )
        {
          v62 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          v63 = KiQueryUnbiasedInterruptTime() / 0x2710uLL;
          v81 = MEMORY[0xFFFFF78000000014];
          v38 = v62;
          v39 = v79;
          *(_DWORD *)(v79 + 16) = v62 - *((_DWORD *)Object + 148);
          *(_DWORD *)(v39 + 20) = v63 - *((_DWORD *)Object + 149);
          *(_DWORD *)(v39 + 28) = v38;
          TimelineBitmapTime = KeQueryTimelineBitmapTime();
          *(_DWORD *)(v41 + 32) = TimelineBitmapTime;
          *(_QWORD *)(v41 + 64) = v81;
          for ( j = 0LL; ; *(_DWORD *)(j + 484) &= ~0x80000000 )
          {
            v50 = Object;
            v51 = (char *)Object + 68;
            if ( j )
            {
              v58 = *(_QWORD *)(j + 8) & (-1LL << (*v51 & 0x1F));
              v52 = (char *)Object + 72;
              v53 = *((_QWORD *)Object + 9)
                  + 8LL
                  * ((37
                    * (BYTE6(v58)
                     + 37
                     * (BYTE5(v58)
                      + 37
                      * (BYTE4(v58)
                       + 37
                       * (BYTE3(v58) + 37 * (BYTE2(v58) + 37 * (BYTE1(v58) + 37 * ((unsigned __int8)v58 + 11623883)))))))
                    + HIBYTE(v58)) & (unsigned int)((*v51 >> 5) - 1));
            }
            else
            {
              v52 = (char *)Object + 72;
              j = *((_QWORD *)Object + 9);
              v53 = j;
            }
            if ( !j )
              goto LABEL_68;
            if ( (*(_QWORD *)j & 0x8000000000000002uLL) == 0x8000000000000002uLL )
              v50 = Object;
            j = *(_QWORD *)j;
            if ( (j & 1) != 0 )
            {
LABEL_68:
              v54 = (__int64 *)(v53 + 8);
              v55 = *v52 + 8 * ((unsigned __int64)(unsigned int)*v51 >> 5);
              while ( (unsigned __int64)v54 < v55 )
              {
                j = *v54;
                if ( (*v54 & 1) == 0 )
                  goto LABEL_73;
                ++v54;
              }
              j = 0LL;
            }
LABEL_73:
            if ( !j )
              break;
          }
          PopEtEnergyTrackerCleanupAggregates(v50);
          ++*((_DWORD *)Object + 150);
          *((_DWORD *)Object + 148) = v62;
          *((_DWORD *)Object + 149) = v63;
          *(_OWORD *)((char *)Object + 604) = 0LL;
          *(__m128i *)((char *)Object + 620) = v64;
          v6 = 0;
LABEL_81:
          v5 = 1;
          break;
        }
        v36 = *(_QWORD *)(v21 + 16);
        *(_QWORD *)v22 = *(_QWORD *)(v21 + 32);
        *(_DWORD *)(v22 + 8) = *(_DWORD *)(v21 + 40);
        *(_DWORD *)(v22 + 12) = (unsigned __int16)*(_DWORD *)(v21 + 44);
        *(_DWORD *)(v22 + 72) = *(_DWORD *)(v21 + 504);
        *(_DWORD *)(v22 + 76) = *(_DWORD *)(v21 + 508);
        *(_OWORD *)(v22 + 80) = *(_OWORD *)(v21 + 480);
        *(_QWORD *)(v22 + 96) = *(_QWORD *)(v21 + 496);
        *(_DWORD *)(v22 + 20) = **(_DWORD **)(v36 + 32);
        *(_DWORD *)(v22 + 24) = *(_DWORD *)(*(_QWORD *)(v36 + 32) + 4LL);
        *(_DWORD *)(v22 + 44) = **(_DWORD **)(v36 + 40);
        *(_DWORD *)(v22 + 48) = *(_DWORD *)(*(_QWORD *)(v36 + 40) + 4LL);
        *(_DWORD *)(v22 + 40) = DWORD1(v71);
        *(_WORD *)(v22 + 60) = *(_WORD *)(v36 + 86);
        PopEtDataSectionCopyData(&v70, *(_QWORD *)(v36 + 72), *(unsigned __int16 *)(v36 + 86));
        *(_WORD *)(v22 + 52) = *(_WORD *)(v36 + 80);
        *(_DWORD *)(v22 + 16) = DWORD1(v66);
        PopEtDataSectionCopyData(&v65, *(_QWORD *)(v36 + 48), 2 * (unsigned int)*(unsigned __int16 *)(v36 + 80));
        *(_WORD *)(v22 + 54) = *(_WORD *)(v36 + 82);
        *(_DWORD *)(v22 + 28) = DWORD1(v66);
        PopEtDataSectionCopyData(&v65, *(_QWORD *)(v36 + 56), 2 * (unsigned int)*(unsigned __int16 *)(v36 + 82));
        *(_WORD *)(v22 + 56) = *(_WORD *)(v36 + 84);
        *(_DWORD *)(v22 + 32) = DWORD1(v66);
        PopEtDataSectionCopyData(&v65, *(_QWORD *)(v36 + 64), 2 * (unsigned int)*(unsigned __int16 *)(v36 + 84));
        v37 = *(_QWORD *)(v21 + 24);
        if ( v37 )
        {
          *(_WORD *)(v22 + 58) = (unsigned __int16)WORD1(*(_QWORD *)(v37 + 24)) >> 1;
          *(_DWORD *)(v22 + 36) = DWORD1(v66);
          PopEtDataSectionCopyData(
            &v65,
            *(_QWORD *)(v21 + 24) + 32LL,
            2 * (unsigned int)*(unsigned __int16 *)(v22 + 58));
        }
        else
        {
          *(_WORD *)(v22 + 58) = 0;
          *(_DWORD *)(v22 + 36) = DWORD1(v66);
        }
        *(_DWORD *)(v22 + 64) = DWORD1(v78);
        *(_DWORD *)(v22 + 68) = 432;
        PopEtDataSectionCopyData(&v77, v21 + 48, HIDWORD(v77));
        if ( (unsigned int)(HIDWORD(v72) + DWORD1(v73)) <= DWORD2(v72) )
        {
          DWORD1(v73) += HIDWORD(v72);
          v22 += HIDWORD(v72);
          *((_QWORD *)&v73 + 1) = v22;
        }
      }
    }
  }
LABEL_82:
  if ( v5 )
    PopReleaseRwLock((ULONG_PTR)Object + 16);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x74456F50u);
  return (unsigned int)v6;
}
