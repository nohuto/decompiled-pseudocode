/*
 * XREFs of MiPCheckMsgFilter @ 0x1C00A70C0
 * Callers:
 *     <none>
 * Callees:
 *     IsMiPActive @ 0x1C003C2F4 (IsMiPActive.c)
 *     ?CheckMsgRange@@YAHIIII@Z @ 0x1C01499A0 (-CheckMsgRange@@YAHIIII@Z.c)
 */

__int64 __fastcall MiPCheckMsgFilter(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v6; // rdx
  unsigned int v7; // r9d
  unsigned int v8; // r10d
  int v9; // eax
  unsigned int v10; // r8d
  unsigned int v11; // r9d
  unsigned int v12; // r10d
  unsigned int v13; // r11d
  int v14; // edx
  unsigned int v15; // edi
  unsigned int v16; // eax
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  unsigned int v19; // ebx
  unsigned int v20; // ebx
  bool v21; // cf
  bool v22; // cf
  unsigned int v23; // eax
  unsigned int v24; // eax

  if ( !a3 && a4 == -1 )
    return 1LL;
  if ( a3 <= a4 )
  {
    if ( a2 > a4 || a2 < a3 )
      goto LABEL_7;
    return 1LL;
  }
  if ( a2 < a4 || a2 > a3 )
    return 1LL;
LABEL_7:
  if ( !IsMiPActive((__int64)gptiCurrent, a1) )
    return 0LL;
  if ( (*(_DWORD *)(v6 + 100) & 0x400) == 0 )
    return 0LL;
  v9 = CheckMsgRange(0x245u, 0x257u, v8, v7);
  v15 = v14 - 22;
  if ( !v9 && !(unsigned int)CheckMsgRange(v15, 0x244u, v10, v11) )
    return 0LL;
  if ( a2 > 0x200 )
  {
    switch ( a2 )
    {
      case 0x201u:
      case 0x203u:
      case 0x204u:
      case 0x206u:
      case 0x207u:
      case 0x209u:
      case 0x20Bu:
      case 0x20Du:
        goto LABEL_24;
      case 0x202u:
      case 0x205u:
      case 0x208u:
      case 0x20Cu:
        goto LABEL_72;
      case 0x20Au:
        if ( !v12 && v11 == -1 )
          return 1;
        v23 = 590;
        break;
      case 0x20Eu:
        if ( !v12 && v11 == -1 )
          return 1;
        v23 = 591;
        break;
      default:
        return 0LL;
    }
    if ( v12 > v11 )
    {
      if ( v11 <= v23 )
      {
        v21 = v12 < v23;
        goto LABEL_43;
      }
      return 1;
    }
    if ( v12 > v23 )
      return v13;
    v22 = v11 < v23;
LABEL_51:
    if ( v22 )
      return v13;
    return 1;
  }
  if ( a2 != 512 )
  {
    if ( a2 > 0xA7 )
    {
      v17 = a2 - 168;
      if ( !v17 )
        goto LABEL_72;
      v18 = v17 - 1;
      if ( !v18 )
        goto LABEL_24;
      v19 = v18 - 2;
      if ( !v19 )
        goto LABEL_24;
      v20 = v19 - 1;
      if ( !v20 )
        goto LABEL_72;
      if ( v20 == 1 )
      {
LABEL_24:
        if ( !v12 && v11 == -1 )
          return 1;
        if ( v12 > v11 )
        {
          if ( v11 > 0x246 || v12 < 0x246 )
            return 1;
          v16 = 578;
LABEL_58:
          if ( v11 > v16 || v12 < v16 )
            return 1;
          goto LABEL_40;
        }
        if ( v12 <= 0x246 && v11 >= 0x246 || !v12 && v11 == -1 )
          return 1;
        v24 = 578;
LABEL_67:
        if ( v12 <= v24 && v11 >= v24 || !v12 && v11 == -1 )
          return 1;
LABEL_45:
        if ( v12 <= 0x245 && v11 >= 0x245 || !v12 && v11 == -1 )
          return 1;
        if ( v12 > v15 )
          return v13;
        v22 = v11 < v15;
        goto LABEL_51;
      }
      return 0LL;
    }
    if ( a2 >= 0xA6 )
      goto LABEL_24;
    if ( a2 != 160 )
    {
      if ( a2 == 161 )
        goto LABEL_24;
      if ( a2 == 162 )
        goto LABEL_72;
      if ( a2 > 0xA2 )
      {
        if ( a2 <= 0xA4 )
          goto LABEL_24;
LABEL_72:
        if ( !v12 && v11 == -1 )
          return 1;
        if ( v12 > v11 )
        {
          if ( v11 > 0x247 || v12 < 0x247 )
            return 1;
          v16 = 579;
          goto LABEL_58;
        }
        if ( v12 <= 0x247 && v11 >= 0x247 || !v12 && v11 == -1 )
          return 1;
        v24 = 579;
        goto LABEL_67;
      }
      return 0LL;
    }
  }
  if ( !v12 && v11 == -1 )
    return 1;
  if ( v12 <= v11 )
    goto LABEL_45;
  if ( v11 > 0x245 )
    return 1;
LABEL_40:
  if ( v12 < 0x245 || v11 > v15 )
    return 1;
  v21 = v12 < v15;
LABEL_43:
  if ( v21 )
    return 1;
  return v13;
}
