/*
 * XREFs of CalcWakeMask @ 0x1C0057150
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0055460 (xxxRealInternalGetMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     AdjustPwndPtiPqForDelegation @ 0x1C00AC8D8 (AdjustPwndPtiPqForDelegation.c)
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C00F61A4 (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalcWakeMask(unsigned int a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned int v6; // eax
  int v7; // r11d
  unsigned int v8; // r8d
  unsigned int v9; // edx
  unsigned int v10; // eax
  unsigned int v11; // r8d
  int v12; // edx
  unsigned int v13; // eax
  int v14; // edx
  int v15; // r10d

  if ( a3 )
  {
    v11 = a3 | 0x3C07;
    if ( (a3 & 0x1C07) == 0 )
      v11 = a3;
    result = v11 | 0x98;
    if ( (v11 & 0x98) == 0 )
      result = v11;
  }
  else
  {
    result = 15871LL;
  }
  if ( a1 || a2 != -1 )
  {
    v6 = result & 0xFFFFFEFF;
    v7 = 0;
    if ( a1 )
    {
      if ( a1 > a2 )
      {
        if ( a2 <= 0xA0 && a1 >= 0xA0 )
          goto LABEL_90;
        goto LABEL_88;
      }
      if ( a1 > 0xA0 )
      {
LABEL_8:
        if ( !a1 )
        {
          if ( a2 == -1 )
            goto LABEL_17;
LABEL_11:
          if ( a2 >= 0x200 )
            goto LABEL_13;
          goto LABEL_12;
        }
        if ( a1 <= a2 )
        {
          if ( a1 <= 0x200 )
            goto LABEL_11;
LABEL_12:
          v6 &= ~2u;
          goto LABEL_13;
        }
        if ( a2 <= 0x200 )
        {
LABEL_90:
          if ( a1 < 0x200 )
          {
            v8 = v6;
            goto LABEL_92;
          }
          goto LABEL_12;
        }
LABEL_88:
        v8 = v6;
        goto LABEL_92;
      }
    }
    else if ( a2 == -1 )
    {
      goto LABEL_17;
    }
    if ( a2 >= 0xA0 )
    {
LABEL_13:
      v8 = v6;
      if ( a1 <= a2 )
      {
        if ( a1 <= 0xA9 && a2 >= 0xA1 )
        {
LABEL_17:
          v8 = v6;
          if ( a1 <= a2 )
          {
LABEL_18:
            if ( a1 > 0x109 || a2 < 0x100 )
              v8 &= ~1u;
            if ( a1 > 0xFF || a2 < 0xFF )
            {
              v8 &= ~0x400u;
              v9 = v8;
              v10 = v8;
              if ( a1 > 0x240 )
                goto LABEL_25;
            }
            else
            {
              v9 = v8;
              v10 = v8;
            }
            if ( a2 >= 0x240 )
              goto LABEL_33;
LABEL_25:
            if ( a1 )
            {
              if ( a1 > a2 )
              {
                if ( a2 > 0x11B || a1 < 0x11B )
                  v7 = 1;
                v9 = v10;
                if ( !v7 )
                  goto LABEL_30;
                goto LABEL_31;
              }
              if ( a1 > 0x11B )
                goto LABEL_30;
            }
            else
            {
              v9 = v10;
              if ( a2 == -1 )
                goto LABEL_38;
            }
            if ( a2 < 0x11B )
            {
LABEL_30:
              v9 = v10 & 0xFFFFF7FF;
              goto LABEL_31;
            }
            v9 = v8;
LABEL_31:
            if ( a1 > a2 )
            {
              if ( a2 < 0x257 && a1 > 0x245 )
                goto LABEL_118;
              goto LABEL_114;
            }
            if ( a1 > 0x257 )
            {
LABEL_34:
              if ( a1 <= a2 )
              {
                if ( a2 >= 0x241 && a1 <= 0x244 || a2 >= 0x238 && a1 <= 0x238 )
                  goto LABEL_38;
                goto LABEL_37;
              }
LABEL_114:
              if ( a2 < 0x244 && a1 > 0x241 || a2 < 0x238 && a1 > 0x238 )
                goto LABEL_118;
LABEL_37:
              v9 &= ~0x1000u;
              goto LABEL_38;
            }
LABEL_33:
            if ( a2 >= 0x245 )
            {
LABEL_38:
              if ( !a1 )
              {
                if ( a2 == -1 )
                  goto LABEL_49;
                goto LABEL_77;
              }
              if ( a1 <= a2 )
              {
                if ( a1 > 0xF )
                {
LABEL_41:
                  v9 &= ~0x20u;
LABEL_42:
                  if ( !a1 )
                  {
                    if ( a2 == -1 )
                      goto LABEL_49;
                    goto LABEL_62;
                  }
                  if ( a1 <= a2 )
                  {
                    if ( a1 > 0x113 )
                    {
LABEL_45:
                      if ( !a1 )
                      {
                        if ( a2 == -1 )
                          goto LABEL_49;
                        goto LABEL_65;
                      }
                      if ( a1 <= a2 )
                      {
                        if ( a1 > 0x118 )
                        {
LABEL_48:
                          v9 &= ~0x10u;
                          goto LABEL_49;
                        }
LABEL_65:
                        if ( a2 < 0x118 )
                          goto LABEL_48;
LABEL_49:
                        result = v9 | 0x3C07;
                        if ( a1 != 35 )
                          return v9;
                        return result;
                      }
                      if ( a2 > 0x118 )
                        goto LABEL_49;
LABEL_125:
                      if ( a1 >= 0x118 )
                        goto LABEL_48;
                      goto LABEL_49;
                    }
LABEL_62:
                    if ( a2 >= 0x113 )
                      goto LABEL_49;
                    goto LABEL_45;
                  }
                  goto LABEL_121;
                }
LABEL_77:
                if ( a2 >= 0xF )
                  goto LABEL_42;
                goto LABEL_41;
              }
LABEL_118:
              if ( a2 > 0xF )
              {
LABEL_121:
                if ( a2 > 0x113 )
                  goto LABEL_49;
LABEL_122:
                if ( a1 < 0x113 )
                  goto LABEL_49;
                goto LABEL_125;
              }
              if ( a1 < 0xF )
                goto LABEL_122;
              goto LABEL_41;
            }
            goto LABEL_34;
          }
          goto LABEL_96;
        }
        if ( a2 >= 0x201 && a1 <= 0x20E )
          goto LABEL_18;
LABEL_16:
        v6 &= ~4u;
        goto LABEL_17;
      }
LABEL_92:
      if ( a2 < 0xA9 && a1 > 0xA1 )
        goto LABEL_97;
      if ( a2 < 0x20E && a1 > 0x201 )
      {
LABEL_96:
        if ( a2 >= 0x109 )
        {
LABEL_98:
          v12 = 0;
LABEL_99:
          v13 = v8 & 0xFFFFFFFE;
          if ( v12 )
            v13 = v8;
          if ( a2 >= 0xFF || (v14 = 1, a1 <= 0xFF) )
            v14 = 0;
          v8 = v13 & 0xFFFFFBFF;
          if ( v14 )
            v8 = v13;
          if ( a2 >= 0x240 || (v15 = 1, a1 <= 0x240) )
            v15 = 0;
          v9 = v8;
          v10 = v8;
          if ( v15 )
            goto LABEL_31;
          goto LABEL_25;
        }
LABEL_97:
        v12 = 1;
        if ( a1 > 0x100 )
          goto LABEL_99;
        goto LABEL_98;
      }
      goto LABEL_16;
    }
    goto LABEL_8;
  }
  return result;
}
