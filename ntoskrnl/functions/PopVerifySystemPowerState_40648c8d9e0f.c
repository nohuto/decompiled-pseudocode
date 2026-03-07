void __fastcall PopVerifySystemPowerState(int *a1, unsigned int a2)
{
  unsigned int v2; // r10d
  int *v3; // r11
  int v4; // r9d
  int v5; // r8d
  char v6; // al

  v2 = a2;
  v3 = a1;
  if ( a1 )
  {
    v4 = *a1;
    v5 = *a1;
    if ( *a1 <= -1 || (unsigned int)(v4 - 2) <= 3 )
    {
      if ( a2 > 1 )
      {
        if ( a2 != 2 )
          goto LABEL_7;
        v6 = 1;
        if ( v5 != 2 )
        {
          if ( v5 != 3 )
          {
            if ( v5 != 4 )
            {
              if ( v5 != 5 )
                goto LABEL_7;
LABEL_31:
              if ( !v6
                || !(unsigned __int8)PopIsHiberbootSupported(&PopCapabilities)
                && !(unsigned __int8)PopIsHibernateSupported(&PopCapabilities) )
              {
                v4 = 1;
              }
              goto LABEL_7;
            }
LABEL_30:
            if ( BYTE5(PopCapabilities) )
              goto LABEL_7;
            goto LABEL_31;
          }
LABEL_28:
          if ( BYTE4(PopCapabilities) )
            goto LABEL_7;
          v4 = 4;
          goto LABEL_30;
        }
LABEL_26:
        if ( BYTE3(PopCapabilities) )
          goto LABEL_7;
        v4 = 3;
        goto LABEL_28;
      }
      if ( v4 == 5 )
      {
        if ( (unsigned __int8)PopIsHiberbootSupported(&PopCapabilities)
          || (unsigned __int8)PopIsHibernateSupported(&PopCapabilities) )
        {
          goto LABEL_7;
        }
        v4 = 4;
      }
      else if ( v5 != 4 )
      {
        if ( v5 != 3 )
        {
          if ( v5 != 2 )
            goto LABEL_7;
LABEL_23:
          if ( BYTE3(PopCapabilities) )
            goto LABEL_7;
          v4 = 1;
          if ( v2 != 1 )
            goto LABEL_7;
          v6 = 0;
          v4 = 2;
          goto LABEL_26;
        }
LABEL_21:
        if ( BYTE4(PopCapabilities) )
          goto LABEL_7;
        v4 = 2;
        goto LABEL_23;
      }
      if ( BYTE5(PopCapabilities) )
      {
LABEL_7:
        *v3 = v4;
        return;
      }
      v4 = 3;
      goto LABEL_21;
    }
  }
}
