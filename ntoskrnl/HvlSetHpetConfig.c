/*
 * XREFs of HvlSetHpetConfig @ 0x1405435A0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403C81E0 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x140456EEE (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHandleInsufficientMemory @ 0x14053DA58 (HvlpHandleInsufficientMemory.c)
 *     HvlpAcquireHypercallPage @ 0x14053E3C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x14053F010 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlSetHpetConfig(ULONG a1, PHYSICAL_ADDRESS a2, char a3, _OWORD *a4)
{
  unsigned int v8; // edi
  PHYSICAL_ADDRESS *v9; // rax
  __int16 v10; // bx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 result; // rax
  PHYSICAL_ADDRESS *v15; // rbx
  PHYSICAL_ADDRESS *v16; // rsi
  __int128 v17; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v18; // [rsp+30h] [rbp-D0h]
  __int64 v19; // [rsp+38h] [rbp-C8h]
  __int128 v20; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h]
  __int64 v22; // [rsp+58h] [rbp-A8h]
  _BYTE v23[2080]; // [rsp+60h] [rbp-A0h] BYREF

  v18 = 0LL;
  LODWORD(v19) = 0;
  v21 = 0LL;
  LODWORD(v22) = 0;
  v17 = 0LL;
  v20 = 0LL;
  memset(v23, 0, 0x81FuLL);
  v8 = 0;
  while ( 1 )
  {
    v9 = HvlpAcquireHypercallPage((__int64)&v17, 1, (__int64)v23, 40LL);
    v9->LowPart = 6;
    v9[2].LowPart = a1;
    v9[3] = a2;
    LOBYTE(v9[4].LowPart) = a3;
    v10 = HvcallInitiateHypercall(111);
    HvlpReleaseHypercallPage((__int64)&v17);
    if ( !HvlpHvStatusIsInsufficientMemory(v10) )
      break;
    result = HvlpHandleInsufficientMemory(v10, v11, v12, v13);
    if ( (int)result < 0 )
      return result;
  }
  if ( v10 )
    return 3221225473LL;
  v15 = HvlpAcquireHypercallPage((__int64)&v17, 1, (__int64)v23, 8LL);
  v16 = HvlpAcquireHypercallPage((__int64)&v20, 2, (__int64)&v23[16], 1032LL);
  v15->LowPart = 7;
  if ( (unsigned __int16)HvcallInitiateHypercall(123) )
    v8 = -1073741823;
  else
    *a4 = *(_OWORD *)&v16->LowPart;
  HvlpReleaseHypercallPage((__int64)&v20);
  HvlpReleaseHypercallPage((__int64)&v17);
  return v8;
}
