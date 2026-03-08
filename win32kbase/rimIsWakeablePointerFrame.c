/*
 * XREFs of rimIsWakeablePointerFrame @ 0x1C01CF08C
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C01CD424 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledDeviceUsage @ 0x1C00DD67C (Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledDeviceUsage.c)
 *     ??9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z @ 0x1C00EF7D2 (--9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z.c)
 *     RIMCmActiveContactsBegin @ 0x1C00F19A8 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x1C00F1A04 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsNext @ 0x1C01DE0AC (RIMCmActiveContactsNext.c)
 */

char __fastcall rimIsWakeablePointerFrame(__int64 a1)
{
  char v2; // di
  __int64 active; // rax
  __int64 v4; // xmm1_8
  __int64 v5; // rax
  __int64 v6; // xmm1_8
  __int64 v7; // rbx
  bool v8; // zf
  __int128 v10; // [rsp+20h] [rbp-50h] BYREF
  __int64 v11; // [rsp+30h] [rbp-40h]
  __int128 v12; // [rsp+38h] [rbp-38h] BYREF
  __int64 v13; // [rsp+48h] [rbp-28h]
  _BYTE v14[32]; // [rsp+50h] [rbp-20h] BYREF

  v2 = 0;
  active = RIMCmActiveContactsBegin((__int64)v14, a1);
  v4 = *(_QWORD *)(active + 16);
  v12 = *(_OWORD *)active;
  v13 = v4;
  while ( 1 )
  {
    v5 = RIMCmActiveContactsEnd((__int64)v14, a1);
    v6 = *(_QWORD *)(v5 + 16);
    v10 = *(_OWORD *)v5;
    v11 = v6;
    if ( !tagLIST_TABLE_ITERATOR::operator!=((__int64)&v12, (__int64)&v10) )
      break;
    v7 = v13;
    if ( (unsigned int)Feature_Servicing_SpuriousWakesFixPartOne__private_IsEnabledDeviceUsage() )
      v8 = (*(_DWORD *)(v7 - 8) & 0x404) == 0;
    else
      v8 = (*(_DWORD *)(v7 - 8) & 0x400) == 0;
    if ( v8 )
      return 1;
    RIMCmActiveContactsNext(a1, &v12);
  }
  return v2;
}
