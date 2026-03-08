/*
 * XREFs of ?ConfigureInteractionContextIfNecessary@?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@PEAUTemporaryConfiguration@@@Z @ 0x1801A990C
 * Callers:
 *     ?ProcessInput@?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@AEBUtagPOINTER_INFO@@PEAUTemporaryConfiguration@@@Z @ 0x1801ABFB0 (-ProcessInput@-$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U-$TMILFlagsE.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800BADC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetConfig@?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@QEAA?AUDwmMousewheelInteractionConfigurationPrimitive@@IPEAUTemporaryConfiguration@@@Z @ 0x1801AB600 (-GetConfig@-$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U-$TMILFlagsEnum.c)
 *     ?UpdateActiveConfig@?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@QEAAXAEBUDwmMousewheelInteractionConfigurationPrimitive@@@Z @ 0x1801AD5F8 (-UpdateActiveConfig@-$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U-$TMIL.c)
 */

__int64 __fastcall CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::ConfigureInteractionContextIfNecessary(
        _QWORD *a1,
        int *a2,
        __int64 a3)
{
  int v5; // r14d
  char v6; // r13
  char v7; // di
  char v8; // r10
  unsigned __int8 v9; // si
  bool v10; // al
  char v11; // al
  char v12; // al
  _DWORD *v13; // rax
  unsigned int v14; // ecx
  char v15; // al
  int v16; // r9d
  __int64 v17; // rcx
  unsigned __int8 v18; // dl
  int v19; // ecx
  int v20; // r9d
  unsigned int v21; // ecx
  unsigned __int8 v22; // r8
  char v23; // cl
  int v24; // xmm1_4
  char v25; // dl
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // xmm1_8
  __int128 v30; // [rsp+38h] [rbp-41h] BYREF
  __int64 v31; // [rsp+48h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+50h] [rbp-29h] BYREF
  __int128 *v33; // [rsp+70h] [rbp-9h]
  __int64 v34; // [rsp+78h] [rbp-1h]

  if ( !*a1 )
    return (unsigned int)-2147019873;
  v6 = 8;
  v5 = 0;
  v7 = 0;
  v8 = 1;
  if ( (*((_BYTE *)a1 + 148) & 1) != 0 || *((_DWORD *)a1 + 36) != a2[2] )
  {
    CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::GetConfig(
      a1,
      &v30,
      (unsigned int)a2[2],
      a3);
    if ( (a2[6] & 8) == 0 && (unsigned int)(*a2 - 2) <= 2 )
      DWORD2(v30) &= 0xFFFFFF3F;
    CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::UpdateActiveConfig(
      a1,
      &v30);
    if ( (unsigned int)(*a2 - 2) > 2 )
      v9 = BYTE8(v30) | 0xC0;
    else
      v9 = BYTE8(v30) & 0x3F;
    v10 = (v9 & 1) != 0 || (v9 & 2) != 0;
    if ( ((*((_BYTE *)a1 + 124) & 3) != 0) != v10
      || ((v9 & 4) != 0 || (v9 & 8) != 0 ? (v11 = 1) : (v11 = 0),
          ((*((_BYTE *)a1 + 124) & 0xC) != 0) != v11
       || ((v9 & 0x10) != 0 || (v9 & 0x20) != 0 ? (v12 = 1) : (v12 = 0), ((*((_BYTE *)a1 + 124) & 0x30) != 0) != v12)) )
    {
      v7 = 1;
    }
    v13 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, struct _EVENT_DATA_DESCRIPTOR *))(*(_QWORD *)*a1 + 40LL))(
                      *a1,
                      &v32);
    v8 = 1;
    if ( *v13 != 1 )
      v7 = v7 || ((v9 ^ *((_BYTE *)a1 + 124)) & 0x40) != 0 || ((v9 ^ *((_DWORD *)a1 + 31)) & 0x80u) != 0;
    v14 = *((unsigned __int8 *)a1 + 148);
    if ( (v14 & 0x20) != 0 )
    {
      if ( !v7 )
      {
LABEL_41:
        if ( (unsigned int)(*a2 - 2) > 2 && (a1[17] & 8) != 0 )
          v7 = 1;
        goto LABEL_44;
      }
    }
    else
    {
      if ( ((v14 >> 6) & 1) != (*((float *)a1 + 32) == 45.0) || (v15 = 0, v14 >> 7 != (*((float *)a1 + 33) == 45.0)) )
        v15 = 1;
      v7 |= v15;
    }
    if ( *((_DWORD *)a1 + 38) != *((_DWORD *)a1 + 35) )
      v7 = 1;
    goto LABEL_41;
  }
LABEL_44:
  v16 = *((_DWORD *)a1 + 39);
  if ( v16 == 2 && ((*((_BYTE *)a1 + 136) ^ (*((_BYTE *)a1 + 148) >> 1)) & 1) != 0 )
  {
    v7 = 1;
    if ( (*((_BYTE *)a1 + 148) & 2) != 0
      && (unsigned int)dword_1803E07D0 > 4
      && tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
    {
      *(_QWORD *)&v30 = a1;
      v33 = &v30;
      v34 = 8LL;
      tlgWriteTransfer_EventWriteTransfer(v17, (unsigned __int8 *)dword_18037AE8A, 0LL, 0LL, 3u, &v32);
      v16 = *((_DWORD *)a1 + 39);
      v8 = 1;
    }
  }
  if ( v16 != 3
    || (v18 = *((_BYTE *)a1 + 136), ((v18 ^ (*((_BYTE *)a1 + 148) >> 1)) & 2) == 0)
    && ((v18 ^ (*((_BYTE *)a1 + 148) >> 1)) & 4) == 0 )
  {
    if ( !v7 && (*((_BYTE *)a1 + 148) & 0x10) == 0 )
      goto LABEL_73;
  }
  v19 = *((_DWORD *)a1 + 4);
  LODWORD(v30) = v16;
  v20 = *a2;
  LODWORD(v31) = 0;
  if ( (unsigned int)(v20 - 2) > 2 )
    v21 = v19 | 0xC0;
  else
    v21 = v19 & 0xFFFFFF3F;
  v22 = *((_BYTE *)a1 + 148);
  DWORD1(v30) = v21;
  v23 = v22 >> 1;
  if ( (v22 & 0x20) != 0 )
  {
    v24 = *((_DWORD *)a1 + 33);
    DWORD2(v30) = *((_DWORD *)a1 + 32);
    HIDWORD(v30) = v24;
  }
  else
  {
    if ( (v22 & 0x40) != 0 )
      DWORD2(v30) = 1110704128;
    else
      DWORD2(v30) = 0;
    if ( (v22 & 0x80u) == 0 )
      HIDWORD(v30) = 0;
    else
      HIDWORD(v30) = 1110704128;
  }
  if ( (unsigned int)(v20 - 2) <= 2 )
    v23 = 0;
  v25 = v8 & ((v31 ^ (v22 >> 1)) & 6 ^ v31 ^ v23) ^ (v31 ^ (v22 >> 1)) & 6 ^ v31;
  *((_BYTE *)a1 + 148) = v22 ^ (v22 ^ (2 * v25)) & 2;
  if ( (unsigned int)(*a2 - 2) > 2 || (a2[6] & 4) == 0 )
    v6 = 0;
  v26 = *((_DWORD *)a1 + 38);
  v27 = *a1;
  LOBYTE(v31) = v6 | v25 & 0xF7;
  HIDWORD(v31) = v26;
  v5 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v27 + 16LL))(v27, &v30);
  if ( v5 >= 0 )
  {
    v28 = v31;
    *(_OWORD *)(a1 + 15) = v30;
    a1[17] = v28;
LABEL_73:
    *((_BYTE *)a1 + 148) &= ~0x10u;
  }
  return (unsigned int)v5;
}
