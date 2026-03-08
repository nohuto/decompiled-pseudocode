/*
 * XREFs of HvHiveStartMemoryBacked @ 0x1407FF060
 * Callers:
 *     CmpCreateHive @ 0x14072C06C (CmpCreateHive.c)
 *     CmpGetSystemControlValues @ 0x140B33800 (CmpGetSystemControlValues.c)
 * Callees:
 *     SetFailureLocation @ 0x140243E5C (SetFailureLocation.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HvpFillFileName @ 0x14072F4B8 (HvpFillFileName.c)
 *     HvpAdjustHiveFreeDisplay @ 0x1407300D8 (HvpAdjustHiveFreeDisplay.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x1407FF548 (HvpBuildMapForMemoryBackedHive.c)
 *     HvIsInPlaceBaseBlockValid @ 0x140A1E0E4 (HvIsInPlaceBaseBlockValid.c)
 *     HvpHeaderCheckSum @ 0x140AF2414 (HvpHeaderCheckSum.c)
 */

__int64 __fastcall HvHiveStartMemoryBacked(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        int a3,
        __int64 a4,
        _DWORD *a5,
        _QWORD *a6,
        int a7,
        unsigned __int16 *a8,
        int a9,
        _OWORD *a10,
        _OWORD *a11,
        _BYTE *a12,
        int *a13,
        __int64 a14)
{
  __int64 v16; // r13
  __int64 v17; // rbx
  __int64 v18; // rdx
  char v19; // r9
  int v20; // ebx
  __int64 v21; // rax
  _OWORD *v22; // rax
  _OWORD *v23; // rcx
  __int128 v24; // xmm1
  int v25; // eax
  int v26; // ebx
  int v28; // eax
  _DWORD *v29; // rsi
  int v30; // eax
  int v31; // r12d
  int v32; // eax
  int v33; // ecx
  int v34; // eax
  __int64 v35; // rdx
  int v36; // r10d
  int v37; // r11d
  int v38; // ecx
  int v39; // eax
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rax
  int v43; // [rsp+20h] [rbp-38h]

  *(_QWORD *)(BugCheckParameter2 + 56) = a14;
  if ( (_DWORD)a2 == 2
    || (unsigned int)a2 >= 5
    || (a3 & 0xFD617CEC) != 0
    || (unsigned int)a4 > 2
    || (unsigned int)(a7 - 1) > 7
    || !a5 && (((_DWORD)a2 - 1) & 0xFFFFFFFC) == 0 )
  {
    __fastfail(5u);
  }
  if ( a12 )
    *a12 = 0;
  if ( a6 )
  {
    *(_QWORD *)(BugCheckParameter2 + 24) = *a6;
    *(_QWORD *)(BugCheckParameter2 + 32) = a6[1];
    *(_QWORD *)(BugCheckParameter2 + 40) = a6[3];
    *(_QWORD *)(BugCheckParameter2 + 48) = a6[4];
  }
  v16 = 4LL;
  if ( (_DWORD)a4 )
  {
    v28 = 4;
    if ( (_DWORD)a4 == 1 )
      v28 = 1;
    *(_DWORD *)(BugCheckParameter2 + 168) = v28;
  }
  else
  {
    *(_DWORD *)(BugCheckParameter2 + 168) = 0;
  }
  *(_DWORD *)(BugCheckParameter2 + 160) = a3;
  *(_QWORD *)(BugCheckParameter2 + 8) = HvpGetCellPaged;
  *(_DWORD *)(BugCheckParameter2 + 136) = a7;
  *(_DWORD *)(BugCheckParameter2 + 216) = 2;
  *(_QWORD *)(BugCheckParameter2 + 16) = HvpReleaseCellPaged;
  *(_DWORD *)(BugCheckParameter2 + 132) = 4096;
  LOBYTE(a4) = (a3 & 1) == 0;
  v17 = MEMORY[0xFFFFF78000000014];
  *(_QWORD *)(BugCheckParameter2 + 200) = MEMORY[0xFFFFF78000000014];
  *(_BYTE *)(BugCheckParameter2 + 194) = 1;
  if ( !(_DWORD)a2 )
  {
    LODWORD(a2) = (unsigned __int8)a4;
    v29 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(BugCheckParameter2 + 24))(
                      *(unsigned int *)(BugCheckParameter2 + 132),
                      a2,
                      825314627LL);
    if ( v29 )
    {
      if ( (((a7 << 9) - 1) & (unsigned int)v29) != 0 )
      {
        (*(void (__fastcall **)(_DWORD *, _QWORD))(BugCheckParameter2 + 32))(
          v29,
          *(unsigned int *)(BugCheckParameter2 + 132));
        LOBYTE(v35) = 1;
        v29 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64, __int64))(BugCheckParameter2 + 24))(
                          4096LL,
                          v35,
                          842091843LL);
        if ( !v29 )
        {
          v43 = 112;
          goto LABEL_56;
        }
        *(_DWORD *)(BugCheckParameter2 + 132) = 4096;
        if ( a13 )
          *a13 = 842091843;
      }
      else if ( a13 )
      {
        *a13 = 825314627;
      }
      memset(v29, 0, 0x1000uLL);
      v29[9] = -1;
      *v29 = 1718052210;
      v29[1] = 1;
      v29[2] = 1;
      v29[8] = 1;
      v29[11] = 1;
      HvpFillFileName((__int64)v29, a8);
      v29[36] = 0;
      v30 = v29[36];
      v31 = a3 & 0x80000;
      if ( v31 )
        v30 = 2;
      v29[36] = v30;
      v29[5] = 1;
      v32 = v31 != 0 ? 6 : 3;
      v29[6] = v32;
      *(_DWORD *)(BugCheckParameter2 + 220) = v32;
      v29[41] = 1836346738;
      *(_DWORD *)(BugCheckParameter2 + 172) = 1;
      *(_DWORD *)(BugCheckParameter2 + 184) = 1;
      *(_DWORD *)(BugCheckParameter2 + 176) = 1;
      *(_QWORD *)(v29 + 3) = v17;
      if ( a10 )
      {
        *((_OWORD *)v29 + 7) = *a10;
        *((_OWORD *)v29 + 8) = *a10;
      }
      if ( a11 )
        *(_OWORD *)(v29 + 37) = *a11;
      *(_QWORD *)(BugCheckParameter2 + 64) = v29;
      v29[1022] = 0;
      return 0LL;
    }
    v43 = 96;
LABEL_56:
    v26 = -1073741670;
    goto LABEL_58;
  }
  if ( (_DWORD)a2 == 4 )
  {
    *(_QWORD *)(BugCheckParameter2 + 64) = a5;
    v33 = a5[5];
    v34 = a5[6] - 4096;
    *(_BYTE *)(BugCheckParameter2 + 140) |= 3u;
    *(_QWORD *)(BugCheckParameter2 + 8) = HvpGetCellFlat;
    *(_QWORD *)(BugCheckParameter2 + 16) = HvpReleaseCellFlat;
    *(_DWORD *)(BugCheckParameter2 + 220) = v34 + (v33 << 12);
    *(_DWORD *)(BugCheckParameter2 + 280) = a5[10];
    *(_DWORD *)(BugCheckParameter2 + 216) = 1;
    if ( a13 )
      *a13 = 0;
    return 0LL;
  }
  if ( (_DWORD)a2 != 3 )
  {
    if ( *a5 == 1718052210
      && !a5[7]
      && a5[8] == 1
      && a5[5] <= 1u
      && (unsigned int)(a5[6] - 3) <= 3
      && a5[10] <= 0x7FFFE000u
      && (unsigned int)HvpHeaderCheckSum(a5, a2, 2LL) == a5[127] )
    {
      v20 = 858869059;
      LOBYTE(v18) = v19;
      v21 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(BugCheckParameter2 + 24))(
              *(unsigned int *)(BugCheckParameter2 + 132),
              v18,
              858869059LL);
      *(_QWORD *)(BugCheckParameter2 + 64) = v21;
      if ( v21 )
      {
        if ( (((a7 << 9) - 1) & (unsigned int)v21) == 0 )
        {
LABEL_25:
          if ( a13 )
            *a13 = v20;
          v22 = *(_OWORD **)(BugCheckParameter2 + 64);
          v23 = a5;
          do
          {
            *v22 = *v23;
            v22[1] = v23[1];
            v22[2] = v23[2];
            v22[3] = v23[3];
            v22[4] = v23[4];
            v22[5] = v23[5];
            v22[6] = v23[6];
            v22 += 8;
            v24 = v23[7];
            v23 += 8;
            *(v22 - 1) = v24;
            --v16;
          }
          while ( v16 );
          *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4092LL) = a5[1023];
          *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) = a5[1022];
          v25 = a5[1];
          *(_DWORD *)(BugCheckParameter2 + 172) = v25;
          *(_DWORD *)(BugCheckParameter2 + 184) = v25;
          *(_DWORD *)(BugCheckParameter2 + 176) = v25;
          *(_DWORD *)(BugCheckParameter2 + 220) = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 24LL)
                                                - 4096
                                                + (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 20LL) << 12);
          v26 = HvpAdjustHiveFreeDisplay(BugCheckParameter2, a5[10], 0);
          if ( v26 >= 0 )
          {
            if ( (int)HvpBuildMapForMemoryBackedHive(BugCheckParameter2) >= 0 )
            {
              if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) & 1) != 0 )
              {
                if ( a12 )
                  *a12 = 1;
              }
              *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) &= ~1u;
              HvpFillFileName(*(_QWORD *)(BugCheckParameter2 + 64), a8);
              return 0LL;
            }
            v26 = -1073741492;
            SetFailureLocation(a14, 0, 25, -1073741492, 240);
            (*(void (__fastcall **)(_QWORD, _QWORD))(BugCheckParameter2 + 32))(
              *(_QWORD *)(BugCheckParameter2 + 64),
              *(unsigned int *)(BugCheckParameter2 + 132));
            *(_QWORD *)(BugCheckParameter2 + 64) = 0LL;
            return (unsigned int)v26;
          }
          (*(void (__fastcall **)(_QWORD, _QWORD))(BugCheckParameter2 + 32))(
            *(_QWORD *)(BugCheckParameter2 + 64),
            *(unsigned int *)(BugCheckParameter2 + 132));
          *(_QWORD *)(BugCheckParameter2 + 64) = 0LL;
          v43 = 224;
LABEL_58:
          SetFailureLocation(a14, 0, 25, v26, v43);
          return (unsigned int)v26;
        }
        (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter2 + 32))(
          v21,
          *(unsigned int *)(BugCheckParameter2 + 132));
        v20 = 875646275;
        LOBYTE(v41) = 1;
        v42 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(BugCheckParameter2 + 24))(4096LL, v41, 875646275LL);
        *(_QWORD *)(BugCheckParameter2 + 64) = v42;
        if ( v42 )
        {
          *(_DWORD *)(BugCheckParameter2 + 132) = 4096;
          goto LABEL_25;
        }
        v43 = 208;
      }
      else
      {
        v43 = 192;
      }
      goto LABEL_56;
    }
    v43 = 176;
LABEL_68:
    v26 = -1073741492;
    goto LABEL_58;
  }
  if ( !(unsigned __int8)HvIsInPlaceBaseBlockValid(a5, a2, 2LL, a4) )
  {
    v43 = 128;
    goto LABEL_68;
  }
  v38 = a5[5];
  v39 = a5[6];
  *(_BYTE *)(BugCheckParameter2 + 140) &= ~2u;
  *(_QWORD *)(BugCheckParameter2 + 64) = a5;
  *(_DWORD *)(BugCheckParameter2 + 216) = v37;
  *(_DWORD *)(BugCheckParameter2 + 220) = v39 - 4096 + (v38 << 12);
  a5[1022] = v36;
  v40 = a5[1];
  *(_DWORD *)(BugCheckParameter2 + 172) = v40;
  *(_DWORD *)(BugCheckParameter2 + 184) = v40;
  *(_DWORD *)(BugCheckParameter2 + 176) = v40;
  v26 = HvpAdjustHiveFreeDisplay(BugCheckParameter2, a5[10], 0);
  if ( v26 >= 0 )
  {
    v26 = HvpBuildMapForMemoryBackedHive(BugCheckParameter2);
    if ( v26 >= 0 )
    {
      if ( a13 )
        *a13 = 0;
      return 0LL;
    }
    SetFailureLocation(a14, 0, 25, v26, 160);
  }
  else
  {
    SetFailureLocation(a14, 0, 25, v26, 144);
  }
  return (unsigned int)v26;
}
