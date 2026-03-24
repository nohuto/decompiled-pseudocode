/*
 * XREFs of HvlSetHpetConfig @ 0x1404F61E0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     HvlpHandleInsufficientMemory @ 0x1404F1CE8 (HvlpHandleInsufficientMemory.c)
 *     HvlpAcquireHypercallPage @ 0x1404F24C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F30B0 (HvlpReleaseHypercallPage.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x1404FA958 (HvlpHvStatusIsInsufficientMemory.c)
 */

__int64 __fastcall HvlSetHpetConfig(__int64 a1, int a2, __int64 a3, char a4, _OWORD *a5)
{
  unsigned int v9; // esi
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r9
  unsigned __int16 v13; // bx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int16 v16; // cx
  __int64 v17; // r8
  __int64 result; // rax
  _QWORD *v19; // rbx
  _QWORD *v20; // rax
  __int64 v21; // r8
  __int64 v22; // rdx
  _OWORD *v23; // rdi
  __int64 v24; // r9
  __int128 v25; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v26; // [rsp+38h] [rbp-D0h]
  __int128 v27; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v28; // [rsp+58h] [rbp-B0h]
  _BYTE v29[2080]; // [rsp+68h] [rbp-A0h] BYREF

  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  memset(v29, 0, sizeof(v29));
  v9 = 0;
  while ( 1 )
  {
    v10 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v25, 1, (__int64)v29, 40LL);
    v11 = *((_QWORD *)&v26 + 1);
    *(_DWORD *)v10 = 6;
    v10[1] = a1;
    *((_DWORD *)v10 + 4) = a2;
    v10[3] = a3;
    *((_BYTE *)v10 + 32) = a4;
    v13 = HvcallInitiateHypercall(111, v11, 0LL, v12);
    HvlpReleaseHypercallPage((__int64)&v25);
    if ( !(unsigned __int8)HvlpHvStatusIsInsufficientMemory(v13, v14) )
      break;
    result = HvlpHandleInsufficientMemory(v16, v15, v17);
    if ( (int)result < 0 )
      goto LABEL_8;
  }
  if ( v13 )
    return 3221225473LL;
  result = 0LL;
LABEL_8:
  if ( (int)result >= 0 )
  {
    v19 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v25, 1, (__int64)v29, 8LL);
    v20 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v27, 2, (__int64)&v29[16], 1032LL);
    v21 = *((_QWORD *)&v28 + 1);
    v22 = *((_QWORD *)&v26 + 1);
    v23 = v20;
    *(_DWORD *)v19 = 7;
    if ( (unsigned __int16)HvcallInitiateHypercall(123, v22, v21, v24) )
      v9 = -1073741823;
    else
      *a5 = *v23;
    HvlpReleaseHypercallPage((__int64)&v27);
    HvlpReleaseHypercallPage((__int64)&v25);
    return v9;
  }
  return result;
}
