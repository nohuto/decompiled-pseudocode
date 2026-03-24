/*
 * XREFs of HvlDmaMapDeviceLogicalRange @ 0x1404F4470
 * Callers:
 *     <none>
 * Callees:
 *     HvcallFastExtended @ 0x14038FC00 (HvcallFastExtended.c)
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     HvlpHandleInsufficientMemory @ 0x1404F1CE8 (HvlpHandleInsufficientMemory.c)
 *     HvlpAcquireHypercallPage @ 0x1404F24C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F30B0 (HvlpReleaseHypercallPage.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x1404FA958 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x1404FA974 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlDmaMapDeviceLogicalRange(__int64 a1, int a2, __int64 a3, _QWORD *a4, _QWORD *a5, char a6)
{
  bool v6; // zf
  _DWORD *v7; // rdi
  _QWORD *v8; // r10
  _DWORD *v10; // rbx
  __int64 result; // rax
  unsigned __int64 v12; // rdx
  int v13; // r15d
  __int64 v14; // r14
  int v15; // r12d
  __int64 v16; // r9
  int v17; // esi
  _QWORD *v18; // rcx
  unsigned int v19; // r8d
  char v20; // r11
  int v21; // eax
  int v22; // eax
  _QWORD *v23; // rdx
  char *v24; // r10
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int16 v28; // bx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // [rsp+38h] [rbp-A9h]
  __int64 v36; // [rsp+50h] [rbp-91h]
  __int128 v38; // [rsp+68h] [rbp-79h] BYREF
  __int128 v39; // [rsp+78h] [rbp-69h]
  _BYTE v40[112]; // [rsp+88h] [rbp-59h] BYREF

  v6 = *(_BYTE *)(a1 + 4) == 0;
  v7 = a5;
  v8 = a4;
  v38 = 0LL;
  v10 = (_DWORD *)a1;
  v39 = 0LL;
  if ( !v6 )
    return 3221225659LL;
  v12 = *a5;
  result = 0LL;
  v13 = 0;
  v14 = 0LL;
  if ( *a5 )
  {
    v15 = 0;
    v16 = 1LL;
    v17 = 179;
    while ( 1 )
    {
      if ( v12 <= 9 )
      {
        v18 = v40;
        v19 = v12 >= 9 ? 9 : *v7;
        v20 = 1;
        v17 |= 0x10000u;
      }
      else
      {
        v18 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v38, 1, 0LL, 0LL);
        v19 = *(_QWORD *)v7 >= 0x1FBuLL ? 507 : *v7;
        v8 = a4;
        v20 = 0;
        v17 &= ~0x10000u;
        v16 = 1LL;
      }
      LODWORD(v33) = v17;
      v18[1] = 0LL;
      v18[2] = 0LL;
      v18[3] = 0LL;
      v18[4] = 0LL;
      *v18 = -1LL;
      *((_DWORD *)v18 + 4) &= 0xFFFFFFF0;
      *((_DWORD *)v18 + 5) = *v10;
      v18[4] = a3;
      if ( a2 )
      {
        v22 = (a2 & 1) != 0;
        if ( (a2 & 2) != 0 )
          v22 |= 2u;
        v21 = v13 | v22;
      }
      else
      {
        v21 = 1024;
      }
      *((_DWORD *)v18 + 7) = v21;
      if ( v19 )
      {
        v23 = v18 + 5;
        v16 = 0LL;
        v24 = (char *)v8 + 8 * v14 - 40 - (_QWORD)v18;
        v25 = v19;
        do
        {
          if ( a2 )
          {
            if ( a6 )
              v26 = v14 + v16 + *a4;
            else
              v26 = *(_QWORD *)((char *)v23 + (_QWORD)v24);
          }
          else
          {
            v26 = 0LL;
          }
          *v23 = v26;
          ++v16;
          ++v23;
          --v25;
        }
        while ( v25 );
        v7 = a5;
      }
      v15 ^= ((unsigned __int16)v19 ^ (unsigned __int16)v15) & 0xFFF;
      HIDWORD(v33) = v15;
      if ( v20 )
      {
        v27 = HvcallFastExtended(v33, (__int64)v40, 8 * v19 + 40, 0LL, 0);
        v28 = v27;
        WORD2(v36) = WORD2(v27);
      }
      else
      {
        v36 = HvcallInitiateHypercall(v17, *((__int64 *)&v39 + 1), 0LL, v16);
        v28 = v36;
        HvlpReleaseHypercallPage((__int64)&v38);
      }
      v29 = WORD2(v36) & 0xFFF;
      *(_QWORD *)v7 -= v29;
      v14 += v29;
      a3 += (unsigned __int16)(WORD2(v36) & 0xFFF) << 12;
      if ( !(unsigned __int8)HvlpHvStatusIsInsufficientMemory(v28, 4095LL) )
        break;
      result = HvlpHandleInsufficientMemory(v31, v30, v32);
      if ( (int)result < 0 )
      {
        if ( v13 != 0x8000 )
        {
          v13 = 0x8000;
          result = 0LL;
        }
LABEL_36:
        if ( (int)result < 0 )
          goto LABEL_38;
      }
      v12 = *(_QWORD *)v7;
      v16 = 1LL;
      v10 = (_DWORD *)a1;
      v8 = a4;
      if ( !*(_QWORD *)v7 )
        goto LABEL_38;
    }
    result = HvlpHvToNtStatus(v31);
    goto LABEL_36;
  }
LABEL_38:
  *(_QWORD *)v7 = v14;
  return result;
}
