/*
 * XREFs of rimIsWakeablePointerFrame @ 0x1C00DC55C
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C01A62A0 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     RIMCmActiveContactsBegin @ 0x1C00E74FA (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsEnd @ 0x1C00E756C (RIMCmActiveContactsEnd.c)
 *     ??9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z @ 0x1C0186AAC (--9tagLIST_TABLE_ITERATOR@@QEBA_NAEBU0@@Z.c)
 *     RIMCmActiveContactsNext @ 0x1C01B6120 (RIMCmActiveContactsNext.c)
 */

char __fastcall rimIsWakeablePointerFrame(__int64 a1)
{
  char v2; // bl
  __int64 active; // rax
  __int64 v4; // xmm1_8
  __int64 v5; // rax
  __int64 v6; // xmm1_8
  __int128 v8; // [rsp+20h] [rbp-50h] BYREF
  __int64 v9; // [rsp+30h] [rbp-40h]
  __int128 v10; // [rsp+38h] [rbp-38h] BYREF
  __int64 v11; // [rsp+48h] [rbp-28h]
  _BYTE v12[32]; // [rsp+50h] [rbp-20h] BYREF

  v2 = 0;
  active = RIMCmActiveContactsBegin(v12, a1);
  v4 = *(_QWORD *)(active + 16);
  v10 = *(_OWORD *)active;
  v11 = v4;
  while ( 1 )
  {
    v5 = RIMCmActiveContactsEnd(v12, a1);
    v6 = *(_QWORD *)(v5 + 16);
    v8 = *(_OWORD *)v5;
    v9 = v6;
    if ( !(unsigned __int8)tagLIST_TABLE_ITERATOR::operator!=(&v10, &v8) )
      break;
    if ( (*(_DWORD *)(v11 - 8) & 0x400) == 0 )
      return 1;
    RIMCmActiveContactsNext(a1, &v10);
  }
  return v2;
}
