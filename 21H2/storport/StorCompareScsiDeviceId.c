/*
 * XREFs of StorCompareScsiDeviceId @ 0x1C0014704
 * Callers:
 *     StorCompareScsiIdentity @ 0x1C00190F0 (StorCompareScsiIdentity.c)
 *     RaidCheckEnclosureIdMapping @ 0x1C00356BC (RaidCheckEnclosureIdMapping.c)
 * Callees:
 *     StorGetNextVPDIdDescriptor @ 0x1C0014868 (StorGetNextVPDIdDescriptor.c)
 *     StorInitVPDIdEnumeration @ 0x1C00148B8 (StorInitVPDIdEnumeration.c)
 *     __security_check_cookie @ 0x1C001D620 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C001D660 (__report_rangecheckfailure.c)
 *     memcmp @ 0x1C0020170 (memcmp.c)
 */

__int64 __fastcall StorCompareScsiDeviceId(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  __int64 v5; // rcx
  __int64 NextVPDIdDescriptor; // rax
  _BYTE *v7; // rbx
  unsigned __int8 v8; // si
  _BYTE *v9; // rax
  unsigned int v10; // ecx
  bool v12; // zf
  __int128 v13; // [rsp+20h] [rbp-60h] BYREF
  __int64 v14; // [rsp+30h] [rbp-50h]
  __int128 v15; // [rsp+38h] [rbp-48h] BYREF
  __int64 v16; // [rsp+48h] [rbp-38h]
  _BYTE v17[16]; // [rsp+50h] [rbp-30h]
  _BYTE v18[16]; // [rsp+60h] [rbp-20h]

  v2 = 0;
  v14 = 0LL;
  v16 = 0LL;
  v13 = 0LL;
  v15 = 0LL;
  do
  {
    v5 = v2;
    if ( v2 >= 9uLL )
      _report_rangecheckfailure(v2, a1);
    ++v2;
    v17[v5] = 0;
    v18[v5] = 0;
  }
  while ( v2 <= 8u );
  if ( (unsigned __int8)StorInitVPDIdEnumeration(&v13, a1) )
  {
    while ( 1 )
    {
      NextVPDIdDescriptor = StorGetNextVPDIdDescriptor(&v13);
      v7 = (_BYTE *)NextVPDIdDescriptor;
      if ( !NextVPDIdDescriptor )
        break;
      v8 = *(_BYTE *)(NextVPDIdDescriptor + 1);
      if ( (v8 & 0x30) == 0 && (v8 & 0xFu) <= 8 )
      {
        if ( !(unsigned __int8)StorInitVPDIdEnumeration(&v15, a2) )
          break;
        while ( 1 )
        {
          v9 = (_BYTE *)StorGetNextVPDIdDescriptor(&v15);
          if ( !v9 )
            break;
          if ( ((v8 ^ v9[1]) & 0x30) == 0 && ((*v7 ^ *v9) & 0xF) == 0 && (v8 & 0xF) == (v9[1] & 0xF) )
          {
            v10 = (unsigned __int8)v7[3];
            v17[v8 & 0xF] = 1;
            if ( (_BYTE)v10 == v9[3] && !memcmp(v7 + 4, v9 + 4, v10) )
              v18[v8 & 0xF] = 1;
          }
        }
      }
    }
  }
  if ( v17[3] || v17[2] || v17[8] )
  {
    if ( v18[3] || v18[2] || v18[8] )
      return 0LL;
  }
  else
  {
    if ( v17[1] )
    {
      v12 = v18[1] == 0;
    }
    else
    {
      if ( !v17[0] )
        return 1LL;
      v12 = v18[0] == 0;
    }
    if ( !v12 )
      return 0LL;
  }
  return 1LL;
}
