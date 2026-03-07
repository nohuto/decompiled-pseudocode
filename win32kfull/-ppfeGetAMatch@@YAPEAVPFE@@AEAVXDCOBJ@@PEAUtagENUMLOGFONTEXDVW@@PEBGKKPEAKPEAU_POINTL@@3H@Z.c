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
  Gre::Base *v10; // rcx
  struct Gre::Base::SESSION_GLOBALS *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rbx
  unsigned int v16; // eax
  struct _FONTHASH **v17; // rdi
  struct PFE *result; // rax
  unsigned int v19; // eax
  struct PFF *v20; // rax
  int v21; // r8d
  struct PFF *v22; // rbx
  _QWORD *v23; // rdi
  unsigned int v24; // [rsp+38h] [rbp-C8h]
  _QWORD v25[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v26; // [rsp+60h] [rbp-A0h]
  _BYTE v27[180]; // [rsp+70h] [rbp-90h] BYREF
  int v28; // [rsp+124h] [rbp+24h]
  struct PFE *v29; // [rsp+138h] [rbp+38h]
  int v30; // [rsp+140h] [rbp+40h]
  _DWORD *v31; // [rsp+148h] [rbp+48h]
  _DWORD *v32; // [rsp+150h] [rbp+50h]
  _DWORD *v33; // [rsp+158h] [rbp+58h]
  unsigned int v34; // [rsp+16Ch] [rbp+6Ch]

  MAPPER::MAPPER((MAPPER *)v27, a1, a6, a7, a8, a2, Src, v24, a9, a5);
  v11 = Gre::Base::Globals(v10);
  v13 = *(_QWORD *)(SGDGetSessionState(v12) + 32);
  v14 = *(unsigned int *)(*(_QWORD *)a1 + 252LL);
  if ( (v14 & 4) != 0 )
  {
    v25[0] = *(_QWORD *)(*(_QWORD *)a1 + 256LL);
    if ( (unsigned int)MAPPER::bFoundForcedMatch((MAPPER *)v27, (struct _UNIVERSAL_FONT_ID *)v25) )
      return v29;
  }
  v15 = *((_QWORD *)v11 + 796);
  if ( v15 )
  {
    if ( *(_DWORD *)(v15 + 28) )
    {
      v34 &= ~0x80u;
      if ( (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v27, (struct _FONTHASH **)v15, 0)
        || (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v27, (struct _FONTHASH **)(v15 + 8), 0) )
      {
        return v29;
      }
    }
  }
  v25[0] = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v14) + 32) + 20280LL);
  v16 = v34;
  if ( (v34 & 0x200) != 0 )
  {
    v34 |= 0x80u;
    v20 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)v25, *(_QWORD *)(*(_QWORD *)a1 + 48LL), 0LL);
    v22 = v20;
    if ( v20 )
    {
      v23 = (_QWORD *)((char *)v20 + 112);
      if ( (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v27, (struct _FONTHASH **)v20 + 14, v21)
        || (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v27, (struct _FONTHASH **)v22 + 13, 0) )
      {
        return v29;
      }
      v16 = v34;
      if ( (v34 & 0x20000000) != 0 )
      {
        result = v29;
        if ( !v29 || *(struct PFF **)v29 != v22 )
        {
          *a6 = 0;
          *a8 = 0;
          a7->y = 1;
          a7->x = 1;
          v25[1] = *v23;
          v25[0] = v23;
          v26 = 0LL;
          return ENUMFHOBJ::ppfeFirst((ENUMFHOBJ *)v25);
        }
        return result;
      }
    }
    else
    {
      v16 = v34;
    }
  }
  v17 = *(struct _FONTHASH ***)(v13 + 20272);
  v34 = v16 & 0xFFFFFF7F;
  if ( (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v27, v17, 1)
    || (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v27, v17 + 1, 1) )
  {
    return v29;
  }
  result = v29;
  if ( !v29 )
  {
    result = MAPPER::ppfeSynthesizeAMatch((MAPPER *)v27, a6, a8, a7);
    if ( !result )
    {
      if ( (*(_DWORD *)(*(_QWORD *)a1 + 72LL) & 0x20000000) == 0 )
      {
        v19 = v34;
        if ( (v34 & 0x200) == 0 )
        {
LABEL_10:
          if ( (v19 & 0x20000) != 0 )
          {
LABEL_33:
            v34 = v19 | 0x4000000;
            MAPPER::vEmergency((MAPPER *)v27);
            return v29;
          }
          MAPPER::bGetFaceName((MAPPER *)v27);
          *v33 = 0;
          v30 = -1;
          v29 = 0LL;
          *v31 = 0;
          *v32 = 1;
          v32[1] = 1;
          v34 &= ~0x80u;
          v28 = -2;
          if ( (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v27, v17, 0)
            || (unsigned int)MAPPER::bFoundExactMatch((MAPPER *)v27, v17 + 1, 0) )
          {
            return v29;
          }
          result = v29;
          if ( !v29 )
          {
            v19 = v34;
            goto LABEL_33;
          }
          return result;
        }
        MAPPER::vAttemptDeviceMatch((MAPPER *)v27);
        result = v29;
        if ( v29 )
          return result;
      }
      v19 = v34;
      goto LABEL_10;
    }
  }
  return result;
}
