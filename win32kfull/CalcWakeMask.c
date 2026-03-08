/*
 * XREFs of CalcWakeMask @ 0x1C0071660
 * Callers:
 *     EditionPostMouseMoveToQ @ 0x1C0037070 (EditionPostMouseMoveToQ.c)
 *     xxxRealInternalGetMessage @ 0x1C006F2F0 (xxxRealInternalGetMessage.c)
 *     AdjustPwndPtiPqForDelegation @ 0x1C009FA68 (AdjustPwndPtiPqForDelegation.c)
 *     TransferWakeBit @ 0x1C00CCF54 (TransferWakeBit.c)
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C00D895C (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall CalcWakeMask(unsigned int a1, unsigned int a2, int a3)
{
  int result; // eax
  unsigned int v6; // eax
  int v7; // r8d
  unsigned int v8; // ecx
  unsigned int v9; // edx
  int v10; // edx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  unsigned int v16; // edx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx

  if ( a3 )
  {
    v10 = a3 | 0x3C07;
    if ( (a3 & 0x1C07) == 0 )
      v10 = a3;
    result = v10 | 0x98;
    if ( (v10 & 0x98) == 0 )
      result = v10;
  }
  else
  {
    result = 15871;
  }
  if ( a1 || a2 != -1 )
  {
    v6 = result & 0xFFFFFEFF;
    v7 = 0;
    if ( a1 )
    {
      if ( a1 > a2 )
      {
        if ( a2 > 0xA0 || (v11 = 0, a1 < 0xA0) )
          v11 = 1;
        if ( v11 )
          goto LABEL_19;
LABEL_12:
        if ( !a1 )
        {
          if ( a2 == -1 )
            goto LABEL_26;
LABEL_15:
          if ( a2 >= 0x200 )
          {
LABEL_19:
            if ( a1 <= a2 )
            {
              if ( a1 <= 0xA9 && a2 >= 0xA1 )
              {
                v8 = v6;
LABEL_78:
                if ( a2 >= 0x100 )
                {
LABEL_29:
                  if ( a1 > 0xFF || a2 < 0xFF )
                  {
                    v8 &= ~0x400u;
                    result = v8;
                    v9 = v8;
                    if ( a1 > 0x240 )
                      goto LABEL_33;
                  }
                  else
                  {
                    result = v8;
                    v9 = v8;
                  }
                  if ( a2 >= 0x240 )
                    goto LABEL_42;
LABEL_33:
                  if ( a1 )
                  {
                    if ( a1 > a2 )
                    {
                      if ( a2 > 0x11B || (v19 = 0, a1 < 0x11B) )
                        v19 = 1;
                      v8 = v9;
                      if ( v19 )
                        goto LABEL_40;
                      goto LABEL_39;
                    }
                    if ( a1 > 0x11B )
                    {
LABEL_39:
                      v8 = v9 & 0xFFFFF7FF;
                      goto LABEL_40;
                    }
                  }
                  else
                  {
                    result = v9;
                    if ( a2 == -1 )
                      return result;
                  }
                  if ( a2 >= 0x11B )
                  {
LABEL_40:
                    result = v8;
                    if ( a1 > a2 )
                    {
                      if ( a2 >= 0x257 || (v20 = 1, a1 <= 0x245) )
                        v20 = 0;
                      if ( v20 )
                        goto LABEL_52;
LABEL_45:
                      if ( a1 > a2 )
                      {
                        if ( a2 >= 0x244 || (v21 = 1, a1 <= 0x241) )
                          v21 = 0;
                        if ( !v21 )
                        {
                          if ( a2 >= 0x238 || (v22 = 1, a1 <= 0x238) )
                            v22 = 0;
                          if ( !v22 )
                            goto LABEL_51;
                        }
                        goto LABEL_52;
                      }
LABEL_46:
                      if ( (a1 > 0x244 || a2 < 0x241) && (a1 > 0x238 || a2 < 0x238) )
LABEL_51:
                        result &= ~0x1000u;
LABEL_52:
                      if ( a1 )
                      {
                        if ( a1 > a2 )
                        {
                          if ( a2 > 0xF || (v23 = 0, a1 < 0xF) )
                            v23 = 1;
                          if ( v23 )
                            goto LABEL_143;
                        }
                        else if ( a1 <= 0xF )
                        {
                          goto LABEL_55;
                        }
LABEL_58:
                        result &= ~0x20u;
LABEL_59:
                        if ( !a1 )
                        {
                          if ( a2 == -1 )
                            return result;
LABEL_62:
                          if ( a2 >= 0x113 )
                            goto LABEL_72;
LABEL_65:
                          if ( !a1 )
                          {
                            if ( a2 == -1 )
                              return result;
LABEL_68:
                            if ( a2 >= 0x118 )
                              goto LABEL_72;
                            goto LABEL_71;
                          }
                          if ( a1 > a2 )
                          {
                            if ( a2 > 0x118 || a1 < 0x118 )
                              v7 = 1;
                            if ( v7 )
                              goto LABEL_72;
                            goto LABEL_71;
                          }
LABEL_67:
                          if ( a1 <= 0x118 )
                            goto LABEL_68;
LABEL_71:
                          result &= ~0x10u;
LABEL_72:
                          if ( a1 == 35 )
                            return result | 0x3C07;
                          return result;
                        }
                        if ( a1 <= a2 )
                        {
                          if ( a1 > 0x113 )
                            goto LABEL_67;
                          goto LABEL_62;
                        }
LABEL_143:
                        if ( a2 > 0x113 || (v24 = 0, a1 < 0x113) )
                          v24 = 1;
                        if ( v24 )
                          goto LABEL_72;
                        goto LABEL_65;
                      }
                      if ( a2 == -1 )
                        return result;
LABEL_55:
                      if ( a2 >= 0xF )
                        goto LABEL_59;
                      goto LABEL_58;
                    }
                    if ( a1 > 0x257 )
                      goto LABEL_46;
LABEL_42:
                    if ( a2 >= 0x245 )
                      goto LABEL_52;
                    goto LABEL_45;
                  }
                  goto LABEL_39;
                }
LABEL_28:
                v8 = v6 & 0xFFFFFFFE;
                goto LABEL_29;
              }
              if ( a1 <= 0x20E && a2 >= 0x201 )
              {
LABEL_27:
                v8 = v6;
                if ( a1 > 0x109 )
                  goto LABEL_28;
                goto LABEL_78;
              }
              goto LABEL_25;
            }
            if ( a2 >= 0xA9 || (v13 = 1, a1 <= 0xA1) )
              v13 = 0;
            if ( !v13 )
            {
              if ( a2 >= 0x20E || (v14 = 1, a1 <= 0x201) )
                v14 = 0;
              if ( !v14 )
LABEL_25:
                v6 &= ~4u;
            }
LABEL_26:
            if ( a1 > a2 )
            {
              if ( a2 >= 0x109 || (v15 = 1, a1 <= 0x100) )
                v15 = 0;
              v16 = v6 & 0xFFFFFFFE;
              if ( v15 )
                v16 = v6;
              if ( a2 >= 0xFF || (v17 = 1, a1 <= 0xFF) )
                v17 = 0;
              v8 = v16 & 0xFFFFFBFF;
              if ( v17 )
                v8 = v16;
              if ( a2 >= 0x240 || (v18 = 1, a1 <= 0x240) )
                v18 = 0;
              v9 = v8;
              if ( v18 )
                goto LABEL_40;
              goto LABEL_33;
            }
            goto LABEL_27;
          }
LABEL_18:
          v6 &= ~2u;
          goto LABEL_19;
        }
        if ( a1 > a2 )
        {
          if ( a2 > 0x200 || (v12 = 0, a1 < 0x200) )
            v12 = 1;
          if ( v12 )
            goto LABEL_19;
          goto LABEL_18;
        }
LABEL_14:
        if ( a1 > 0x200 )
          goto LABEL_18;
        goto LABEL_15;
      }
      if ( a1 > 0xA0 )
        goto LABEL_14;
    }
    else if ( a2 == -1 )
    {
      goto LABEL_26;
    }
    if ( a2 >= 0xA0 )
      goto LABEL_19;
    goto LABEL_12;
  }
  return result;
}
