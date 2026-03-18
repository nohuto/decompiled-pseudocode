/*
 * XREFs of ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C001D14C
 * Callers:
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C001CC60 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 * Callees:
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C000F69C (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C001D360 (-bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z.c)
 *     ??0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z @ 0x1C001E390 (--0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z.c)
 *     ?bGetFaceName@MAPPER@@AEAAHXZ @ 0x1C001EDA4 (-bGetFaceName@MAPPER@@AEAAHXZ.c)
 *     ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1C001F018 (-ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z.c)
 *     ?bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C013AE1C (-bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ @ 0x1C016EEB6 (-ppfeFirst@ENUMFHOBJ@@QEAAPEAVPFE@@XZ.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1C0291D74 (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
 *     ?vEmergency@MAPPER@@QEAAXXZ @ 0x1C0291F30 (-vEmergency@MAPPER@@QEAAXXZ.c)
 */

struct PFE *__fastcall ppfeGetAMatch(
        struct XDCOBJ *a1,
        struct tagENUMLOGFONTEXDVW *a2,
        const unsigned __int16 *Src,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6,
        struct _POINTL *a7,
        unsigned int *a8,
        int a9)
{
  unsigned int v10; // eax
  struct _FONTHASH **v11; // rbx
  struct PFE *result; // rax
  unsigned int v13; // eax
  int found; // eax
  struct PFF *v15; // rax
  int v16; // r8d
  struct PFF *v17; // rbx
  _QWORD *v18; // rsi
  unsigned int v20; // [rsp+38h] [rbp-C8h]
  struct PFT *v21; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v22[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v23; // [rsp+68h] [rbp-98h]
  _BYTE v24[180]; // [rsp+80h] [rbp-80h] BYREF
  int v25; // [rsp+134h] [rbp+34h]
  struct PFE *v26; // [rsp+148h] [rbp+48h]
  int v27; // [rsp+150h] [rbp+50h]
  _DWORD *v28; // [rsp+158h] [rbp+58h]
  _DWORD *v29; // [rsp+160h] [rbp+60h]
  _DWORD *v30; // [rsp+168h] [rbp+68h]
  unsigned int v31; // [rsp+17Ch] [rbp+7Ch]

  MAPPER::MAPPER((MAPPER *)v24, a1, a6, a7, a8, a2, Src, v20, a9, a5);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 252LL) & 4) != 0 )
  {
    v21 = *(struct PFT **)(*(_QWORD *)a1 + 256LL);
    if ( (unsigned int)MAPPER::bFoundForcedMatch((MAPPER *)v24, (struct _UNIVERSAL_FONT_ID *)&v21) )
      return v26;
  }
  if ( gpPFTPrivate )
  {
    if ( *((_DWORD *)gpPFTPrivate + 7) )
    {
      v31 &= ~0x80u;
      found = MAPPER::bFoundExactMatch((MAPPER *)v24, gpPFTPrivate, 0);
      if ( found || (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v24, gpPFTPrivate + 1, 0) )
        return v26;
    }
  }
  v21 = gpPFTDevice;
  v10 = v31;
  if ( (v31 & 0x200) != 0 )
  {
    v31 |= 0x80u;
    v15 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)&v21, *(_QWORD *)(*(_QWORD *)a1 + 48LL), 0LL);
    v17 = v15;
    if ( v15 )
    {
      v18 = (_QWORD *)((char *)v15 + 112);
      if ( (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v24, (struct _FONTHASH **)v15 + 14, v16)
        || (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v24, (struct _FONTHASH **)v17 + 13, 0) )
      {
        return v26;
      }
      v10 = v31;
      if ( (v31 & 0x20000000) != 0 )
      {
        result = v26;
        if ( !v26 || *(struct PFF **)v26 != v17 )
        {
          *a6 = 0;
          *a8 = 0;
          a7->y = 1;
          a7->x = 1;
          v22[1] = *v18;
          v22[0] = v18;
          v23 = 0LL;
          return ENUMFHOBJ::ppfeFirst((ENUMFHOBJ *)v22);
        }
        return result;
      }
    }
    else
    {
      v10 = v31;
    }
  }
  v11 = gpPFTPublic;
  v31 = v10 & 0xFFFFFF7F;
  if ( (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v24, gpPFTPublic, 1)
    || (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v24, v11 + 1, 1) )
  {
    return v26;
  }
  result = v26;
  if ( !v26 )
  {
    result = MAPPER::ppfeSynthesizeAMatch((MAPPER *)v24, a6, a8, a7);
    if ( !result )
    {
      if ( (*(_DWORD *)(*(_QWORD *)a1 + 72LL) & 0x20000000) == 0 )
      {
        v13 = v31;
        if ( (v31 & 0x200) == 0 )
        {
LABEL_13:
          if ( (v13 & 0x20000) != 0 )
          {
LABEL_35:
            v31 = v13 | 0x4000000;
            MAPPER::vEmergency((MAPPER *)v24);
            return v26;
          }
          MAPPER::bGetFaceName((MAPPER *)v24);
          *v30 = 0;
          v27 = -1;
          v26 = 0LL;
          *v28 = 0;
          *v29 = 1;
          v29[1] = 1;
          v31 &= ~0x80u;
          v25 = -2;
          if ( (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v24, v11, 0) )
            return v26;
          if ( (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v24, v11 + 1, 0) )
            return v26;
          result = v26;
          if ( !v26 )
          {
            v13 = v31;
            goto LABEL_35;
          }
          return result;
        }
        MAPPER::vAttemptDeviceMatch((MAPPER *)v24);
        result = v26;
        if ( v26 )
          return result;
      }
      v13 = v31;
      goto LABEL_13;
    }
  }
  return result;
}
