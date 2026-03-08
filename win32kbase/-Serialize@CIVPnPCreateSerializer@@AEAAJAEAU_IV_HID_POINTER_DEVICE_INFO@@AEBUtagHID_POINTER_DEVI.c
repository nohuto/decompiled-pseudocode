/*
 * XREFs of ?Serialize@CIVPnPCreateSerializer@@AEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEBUtagHID_POINTER_DEVICE_INFO@@_N@Z @ 0x1C0233674
 * Callers:
 *     ?Serialize@CIVPnPCreateSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@AEBUtagHID_DEVICE_INFO@@_N@Z @ 0x1C0233F84 (-Serialize@CIVPnPCreateSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@AEBUtagHID_DEVICE_INFO@@_N@Z.c)
 * Callees:
 *     ?Serialize@CIVPnPCreateSerializer@@AEAAJAEAU_IV_HPD_CALIBRATION_INFO@@AEBUtagHPD_CALIBRATION_INFO@@_N@Z @ 0x1C0233CC4 (-Serialize@CIVPnPCreateSerializer@@AEAAJAEAU_IV_HPD_CALIBRATION_INFO@@AEBUtagHPD_CALIBRATION_INF.c)
 *     ?Serialize@CIVPnPCreateSerializer@@AEAAJPEAPEAU_IV_HIDP_LINK_COLLECTION_NODE@@PEBU_HIDP_LINK_COLLECTION_NODE@@K_K_N@Z @ 0x1C0233E0C (-Serialize@CIVPnPCreateSerializer@@AEAAJPEAPEAU_IV_HIDP_LINK_COLLECTION_NODE@@PEBU_HIDP_LINK_COL.c)
 *     ?Serialize@CIVPnPCreateSerializer@@AEAAJPEAPEAU_IV_HPD_CURSOR@@PEBUtagHPD_CURSOR@@K_K_N@Z @ 0x1C0233EF4 (-Serialize@CIVPnPCreateSerializer@@AEAAJPEAPEAU_IV_HPD_CURSOR@@PEBUtagHPD_CURSOR@@K_K_N@Z.c)
 *     ?Serialize@CIVSerializer@@IEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z @ 0x1C02340D0 (-Serialize@CIVSerializer@@IEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z.c)
 *     ?Serialize@CIVSerializer@@IEAAJPEAPEAXQEAX_K_N@Z @ 0x1C0234168 (-Serialize@CIVSerializer@@IEAAJPEAPEAXQEAX_K_N@Z.c)
 */

__int64 __fastcall CIVPnPCreateSerializer::Serialize(
        CIVPnPCreateSerializer *this,
        struct _IV_HID_POINTER_DEVICE_INFO *a2,
        const struct tagHID_POINTER_DEVICE_INFO *a3,
        bool a4)
{
  __int64 v5; // rsi
  _WORD *v6; // rdx
  __int16 *v9; // r8
  __int64 v11; // rcx
  __int16 v12; // ax
  int v13; // ecx
  const struct tagHPD_CALIBRATION_INFO *v14; // r8
  _DWORD *v15; // rcx
  _DWORD *v16; // rdx
  int v17; // eax
  __int64 v18; // rsi
  unsigned int v19; // r9d

  *(_DWORD *)a2 = *((_DWORD *)a3 + 6);
  v5 = 6LL;
  v6 = (_WORD *)((char *)a2 + 8);
  v9 = (__int16 *)((char *)a3 + 30);
  v11 = 6LL;
  do
  {
    *(v6 - 2) = *(v9 - 1);
    v12 = *v9;
    v9 += 8;
    *v6 = v12;
    v6 += 10;
    *((_DWORD *)v6 - 4) = *(_DWORD *)(v9 - 7);
    *((_DWORD *)v6 - 3) = *(_DWORD *)(v9 - 5);
    *((_DWORD *)v6 - 2) = *(_DWORD *)(v9 - 3);
    --v11;
  }
  while ( v11 );
  *(_OWORD *)((char *)a2 + 124) = *(_OWORD *)((char *)a3 + 124);
  *(_OWORD *)((char *)a2 + 140) = *(_OWORD *)((char *)a3 + 140);
  *((_DWORD *)a2 + 39) = *((_DWORD *)a3 + 39);
  *((_OWORD *)a2 + 10) = *((_OWORD *)a3 + 10);
  *((_OWORD *)a2 + 11) = *((_OWORD *)a3 + 11);
  *((_OWORD *)a2 + 12) = *((_OWORD *)a3 + 12);
  *((_OWORD *)a2 + 13) = *((_OWORD *)a3 + 13);
  *((_DWORD *)a2 + 56) = *((_DWORD *)a3 + 56);
  *((_DWORD *)a2 + 59) = *((_DWORD *)a3 + 67);
  *((_DWORD *)a2 + 60) = *((_DWORD *)a3 + 68);
  *((_DWORD *)a2 + 61) = *((_DWORD *)a3 + 69);
  *((_DWORD *)a2 + 62) = *((_DWORD *)a3 + 70);
  *((_DWORD *)a2 + 63) = *((_DWORD *)a3 + 71);
  *((_DWORD *)a2 + 64) = *((_DWORD *)a3 + 72);
  *((_DWORD *)a2 + 65) = *((_DWORD *)a3 + 73);
  *((_DWORD *)a2 + 66) = *((_DWORD *)a3 + 74);
  *((_DWORD *)a2 + 67) = *((_DWORD *)a3 + 75);
  *((_DWORD *)a2 + 68) = *((_DWORD *)a3 + 76);
  *((_DWORD *)a2 + 69) = *((_DWORD *)a3 + 77);
  *(_OWORD *)((char *)a2 + 280) = *(_OWORD *)((char *)a3 + 312);
  *(_OWORD *)((char *)a2 + 296) = *(_OWORD *)((char *)a3 + 328);
  *(_OWORD *)((char *)a2 + 312) = *(_OWORD *)((char *)a3 + 344);
  *((_DWORD *)a2 + 82) = *((_DWORD *)a3 + 90) & 1;
  *((_DWORD *)a2 + 83) = (*((_DWORD *)a3 + 90) & 2u) >> 1;
  *((_DWORD *)a2 + 84) = (*((_DWORD *)a3 + 90) & 4u) >> 2;
  *((_DWORD *)a2 + 85) = (*((_DWORD *)a3 + 90) & 8u) >> 3;
  *((_DWORD *)a2 + 86) = (*((_DWORD *)a3 + 90) & 0x10u) >> 4;
  *((_DWORD *)a2 + 87) = (*((_DWORD *)a3 + 90) & 0x20u) >> 5;
  *((_DWORD *)a2 + 88) = (*((_DWORD *)a3 + 90) & 0x40u) >> 6;
  *((_DWORD *)a2 + 89) = (*((_DWORD *)a3 + 90) & 0x80u) >> 7;
  *((_DWORD *)a2 + 90) = (*((_DWORD *)a3 + 90) & 0x100u) >> 8;
  *((_DWORD *)a2 + 91) = (*((_DWORD *)a3 + 90) & 0x200u) >> 9;
  *((_DWORD *)a2 + 92) = (*((_DWORD *)a3 + 90) & 0x400u) >> 10;
  *((_DWORD *)a2 + 93) = (*((_DWORD *)a3 + 90) & 0x800u) >> 11;
  *((_DWORD *)a2 + 94) = (*((_DWORD *)a3 + 90) & 0x1000u) >> 12;
  *((_DWORD *)a2 + 95) = (*((_DWORD *)a3 + 90) & 0x2000u) >> 13;
  *((_DWORD *)a2 + 96) = (*((_DWORD *)a3 + 90) & 0x4000u) >> 14;
  *((_DWORD *)a2 + 97) = (*((_DWORD *)a3 + 90) & 0x8000u) >> 15;
  *((_DWORD *)a2 + 98) = (*((_DWORD *)a3 + 90) & 0x10000u) >> 16;
  v13 = CIVSerializer::Serialize(this, (struct _UNICODE_STRING *)a2 + 25, (const struct _UNICODE_STRING *)a3 + 23, a4);
  if ( v13 >= 0 )
  {
    *((_QWORD *)a2 + 52) = *((unsigned int *)a3 + 96);
    v14 = (const struct tagHPD_CALIBRATION_INFO *)*((_QWORD *)a3 + 49);
    if ( v14 )
    {
      v13 = CIVPnPCreateSerializer::Serialize(this, (struct _IV_HID_POINTER_DEVICE_INFO *)((char *)a2 + 424), v14, a4);
      if ( v13 < 0 )
        return (unsigned int)v13;
      *((_DWORD *)a2 + 105) = 1;
    }
    v15 = (_DWORD *)((char *)a2 + 516);
    v16 = (_DWORD *)((char *)a3 + 404);
    do
    {
      *((_WORD *)v15 - 2) = *((_WORD *)v16 - 2);
      v17 = *v16;
      v16 += 15;
      *v15 = v17;
      v15 += 16;
      *((_WORD *)v15 - 30) = *((_WORD *)v16 - 28);
      *((_WORD *)v15 - 28) = *((_WORD *)v16 - 27);
      *((_WORD *)v15 - 26) = *((_WORD *)v16 - 26);
      *(v15 - 12) = *(v16 - 12);
      *((_WORD *)v15 - 22) = *((_WORD *)v16 - 22);
      *(v15 - 10) = *(v16 - 10);
      *(v15 - 9) = *(v16 - 9);
      *(v15 - 8) = *(v16 - 8);
      *(v15 - 7) = *(v16 - 7);
      *(v15 - 6) = *(v16 - 6);
      *(v15 - 5) = *(v16 - 5);
      *(v15 - 4) = *(v16 - 4);
      *(v15 - 3) = *(v16 - 3);
      *((_WORD *)v15 - 4) = *((_WORD *)v16 - 4);
      --v5;
    }
    while ( v5 );
    *((_DWORD *)a2 + 224) = 0;
    v18 = *((_QWORD *)a3 + 95);
    if ( v18 )
    {
      *((_DWORD *)a2 + 226) = *(_DWORD *)v18;
      *((_WORD *)a2 + 454) = *(_WORD *)(v18 + 4);
      *((_WORD *)a2 + 456) = *(_WORD *)(v18 + 6);
      *((_WORD *)a2 + 458) = *(_WORD *)(v18 + 8);
      *((_WORD *)a2 + 460) = *(_WORD *)(v18 + 10);
      *((_DWORD *)a2 + 231) = *(_DWORD *)(v18 + 12);
      v13 = CIVPnPCreateSerializer::Serialize(
              this,
              (struct _IV_HIDP_LINK_COLLECTION_NODE **)a2 + 116,
              *(const struct _HIDP_LINK_COLLECTION_NODE **)(v18 + 16),
              *(_DWORD *)(v18 + 12),
              48LL * *(unsigned int *)(v18 + 12),
              a4);
      if ( v13 < 0 )
        return (unsigned int)v13;
      *((_DWORD *)a2 + 234) = *(_DWORD *)(v18 + 32) & 1;
      *((_DWORD *)a2 + 235) = *(_DWORD *)(v18 + 36);
      *((_DWORD *)a2 + 224) = 1;
    }
    *((_DWORD *)a2 + 236) = *((_DWORD *)a3 + 192);
    *((_DWORD *)a2 + 237) = *((_DWORD *)a3 + 193);
    *((_WORD *)a2 + 476) = *((_WORD *)a3 + 388);
    *((_DWORD *)a2 + 239) = *((_DWORD *)a3 + 198);
    *((_QWORD *)a2 + 120) = *((_QWORD *)a3 + 100);
    *((_DWORD *)a2 + 242) = *((_DWORD *)a3 + 202);
    v13 = CIVSerializer::Serialize(
            this,
            (void **)a2 + 122,
            *((void *const *)a3 + 102),
            2LL * *((unsigned int *)a3 + 260),
            a4);
    if ( v13 >= 0 )
    {
      *((_BYTE *)a2 + 984) = *((_BYTE *)a3 + 824);
      *((_DWORD *)a2 + 248) = *((_DWORD *)a3 + 208);
      *((_DWORD *)a2 + 249) = *((_DWORD *)a3 + 209);
      *((_DWORD *)a2 + 250) = *((_DWORD *)a3 + 210);
      *((_DWORD *)a2 + 251) = *((_DWORD *)a3 + 211);
      *((_DWORD *)a2 + 252) = *((_DWORD *)a3 + 212);
      *((_DWORD *)a2 + 253) = *((_DWORD *)a3 + 213);
      *((_DWORD *)a2 + 254) = *((_DWORD *)a3 + 214);
      *((_DWORD *)a2 + 255) = *((_DWORD *)a3 + 215);
      *((_QWORD *)a2 + 128) = *((_QWORD *)a3 + 108);
      *((_QWORD *)a2 + 129) = *((_QWORD *)a3 + 109);
      *((_DWORD *)a2 + 260) = *((_DWORD *)a3 + 220) & 1;
      *((_DWORD *)a2 + 262) = *((_DWORD *)a3 + 222);
      v13 = CIVSerializer::Serialize(
              this,
              (struct _UNICODE_STRING *)a2 + 66,
              (const struct _UNICODE_STRING *)a3 + 56,
              a4);
      if ( v13 >= 0 )
      {
        *((_WORD *)a2 + 540) = *((_WORD *)a3 + 468);
        *((_DWORD *)a2 + 271) = *((_DWORD *)a3 + 235);
        *((_QWORD *)a2 + 136) = *((_QWORD *)a3 + 118);
        *((_DWORD *)a2 + 274) = *((_DWORD *)a3 + 238);
        if ( (unsigned int)(*((_DWORD *)a3 + 6) - 5) <= 1 )
          v19 = *((_DWORD *)a3 + 260);
        else
          v19 = *((_DWORD *)a3 + 192);
        v13 = CIVPnPCreateSerializer::Serialize(
                this,
                (struct _IV_HPD_CURSOR **)a2 + 138,
                *((const struct tagHPD_CURSOR **)a3 + 128),
                v19,
                12LL * v19,
                a4);
        if ( v13 >= 0 )
          *((_DWORD *)a2 + 279) = *((_DWORD *)a3 + 260);
      }
    }
  }
  return (unsigned int)v13;
}
