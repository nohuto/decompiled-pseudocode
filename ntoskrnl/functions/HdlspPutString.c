__int64 __fastcall HdlspPutString(_BYTE *a1)
{
  _BYTE *v1; // rbx
  PKSPIN_LOCK v2; // r10
  _BYTE *v3; // r9
  _BYTE *v4; // rax
  unsigned int v5; // edx
  bool v6; // zf
  unsigned int v7; // ecx
  __int64 v8; // rcx
  __int16 *v9; // rdx
  PKSPIN_LOCK v10; // rcx
  __int16 v12; // [rsp+30h] [rbp+8h] BYREF
  char v13; // [rsp+32h] [rbp+Ah]

  v1 = a1;
  v2 = HeadlessGlobals + 3;
  v3 = (_BYTE *)HeadlessGlobals[3];
  if ( *a1 )
  {
    while ( 1 )
    {
      v4 = (_BYTE *)(*v2 + 79);
      if ( v3 < v4 )
        break;
      *v4 = 0;
      HdlspSendStringAtBaud(*v2);
      v2 = HeadlessGlobals + 3;
      v3 = (_BYTE *)HeadlessGlobals[3];
LABEL_42:
      if ( !*v1 )
        goto LABEL_43;
    }
    v5 = (unsigned __int8)*v1;
    if ( (v5 & 0x80u) == 0 )
      goto LABEL_40;
    if ( v5 > 0xC4 )
    {
      if ( v5 > 0xDB )
      {
        if ( v5 != 220 && v5 != 221 && v5 - 222 >= 2 )
          goto LABEL_34;
        goto LABEL_39;
      }
      switch ( v5 )
      {
        case 0xDBu:
          goto LABEL_14;
        case 0xC8u:
        case 0xC9u:
          goto LABEL_29;
        case 0xCDu:
          LOBYTE(v5) = 61;
          goto LABEL_40;
      }
      v7 = v5 - 217;
      v6 = v5 == 217;
    }
    else
    {
      if ( v5 == 196 )
      {
        LOBYTE(v5) = 45;
        goto LABEL_40;
      }
      if ( v5 <= 0xB3 )
      {
        if ( v5 == 179 )
          goto LABEL_19;
        if ( v5 != 169 && v5 != 170 )
        {
          if ( v5 != 176 )
          {
            if ( v5 != 177 )
            {
              if ( v5 == 178 )
              {
LABEL_14:
                LOBYTE(v5) = 35;
LABEL_40:
                *v3++ = v5;
LABEL_41:
                ++v1;
                goto LABEL_42;
              }
LABEL_34:
              v12 = 0;
              v13 = 0;
              HdlspUTF8Encode(*((_WORD *)HdlpsPcAnsiToUnicode + (v5 & 0x7F)), &v12);
              v8 = 3LL;
              v9 = &v12;
              do
              {
                if ( *(_BYTE *)v9 )
                  *v3++ = *(_BYTE *)v9;
                v9 = (__int16 *)((char *)v9 + 1);
                --v8;
              }
              while ( v8 );
              goto LABEL_41;
            }
LABEL_39:
            LOBYTE(v5) = 37;
            goto LABEL_40;
          }
LABEL_19:
          LOBYTE(v5) = 124;
          goto LABEL_40;
        }
LABEL_29:
        LOBYTE(v5) = 43;
        goto LABEL_40;
      }
      if ( v5 == 186 )
        goto LABEL_19;
      if ( v5 == 187 || v5 == 188 )
        goto LABEL_29;
      v7 = v5 - 191;
      v6 = v5 == 191;
    }
    if ( !v6 && v7 != 1 )
      goto LABEL_34;
    goto LABEL_29;
  }
LABEL_43:
  v10 = HeadlessGlobals;
  *v3 = 0;
  return HdlspSendStringAtBaud(v10[3]);
}
