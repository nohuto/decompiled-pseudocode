__int64 __fastcall PnpCmResourcesToBiosResources(__int64 a1, __int64 a2, unsigned __int8 *a3, unsigned int a4)
{
  unsigned __int8 v4; // r14
  unsigned int v5; // ebp
  __int64 v6; // rsi
  __int64 v8; // r13
  __int64 v9; // r10
  signed int v10; // ebx
  unsigned __int64 v11; // rdi
  unsigned __int8 *v12; // rax
  unsigned __int16 v13; // r12
  int v14; // r9d
  signed int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // r8
  int v19; // eax
  unsigned int v20; // r8d
  char v21; // cl
  _BYTE *v22; // rax
  unsigned int v24; // eax
  unsigned int v25; // ecx
  _BYTE *v26; // rdx
  __int64 v27; // [rsp+28h] [rbp-50h]
  unsigned __int64 v29; // [rsp+90h] [rbp+18h]

  v4 = *a3;
  v5 = 0;
  v6 = a4;
  v8 = a2;
  v9 = a1;
  v10 = 0;
  v11 = (unsigned __int64)a3;
  v12 = &a3[a4];
  while ( 1 )
  {
    v29 = (unsigned __int64)v12;
    if ( (v4 & 0x80u) == 0 )
    {
      v13 = (v4 & 7) + 1;
      v4 &= 0x78u;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_9;
      v14 = 10;
      goto LABEL_8;
    }
    if ( v11 >= (unsigned __int64)(v12 - 2) )
      goto LABEL_79;
    v13 = *(_WORD *)(v11 + 1) + 3;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 11;
LABEL_8:
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_DD(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        14,
        v14,
        (__int64)&WPP_52f1d9ae2bb33d21e69d5020d30b72bd_Traceguids,
        v4,
        v13);
      v9 = a1;
    }
LABEL_9:
    if ( v4 == 120 )
      break;
    LODWORD(a2) = v4;
    if ( v4 > 0x85u )
    {
      switch ( v4 )
      {
        case 0x86u:
          if ( (unsigned __int64)&a3[v6 - v11] < 0xC )
            return (unsigned int)-1072431089;
          v15 = PnpiCmResourceToBiosMemory32Fixed(v11, v8, &WPP_RECORDER_INITIALIZED, 1LL);
          goto LABEL_70;
        case 0x87u:
          if ( (unsigned __int64)&a3[v6 - v11] < 0x1A )
            return (unsigned int)-1072431089;
          v15 = PnpiCmResourceToBiosAddressDouble(v11, v8, &WPP_RECORDER_INITIALIZED, 1LL);
          goto LABEL_70;
        case 0x88u:
          if ( (unsigned __int64)&a3[v6 - v11] < 0x10 )
            return (unsigned int)-1072431089;
          v15 = PnpiCmResourceToBiosAddress(v11, v8, &WPP_RECORDER_INITIALIZED, 1LL);
          goto LABEL_70;
        case 0x89u:
          if ( (unsigned __int64)&a3[v6 - v11] < 9 )
            return (unsigned int)-1072431089;
          v15 = PnpiCmResourceToBiosExtendedIrq(v9, v11, v8, 1LL);
          goto LABEL_70;
        case 0x8Au:
          if ( (unsigned __int64)&a3[v6 - v11] < 0x2E )
            return (unsigned int)-1072431089;
          v15 = PnpiCmResourceToBiosAddressQuad(v11, v8, &WPP_RECORDER_INITIALIZED, 1LL);
          goto LABEL_70;
        case 0x8Cu:
          if ( (unsigned __int64)&a3[v6 - v11] < 0x17 )
            return (unsigned int)-1072431089;
          v15 = PnpiCmResourceToBiosGpioInterruptIoDescriptor(v11, v8, &WPP_RECORDER_INITIALIZED, 1LL);
          goto LABEL_70;
        case 0x8Du:
          return (unsigned int)((unsigned __int64)&a3[v6 - v11] < 0x12 ? -1072431089 : -1073741822);
      }
      if ( v4 != 142 )
        goto LABEL_48;
      if ( (unsigned __int64)&a3[v6 - v11] < 0xC )
        return (unsigned int)-1072431089;
      v20 = *(_DWORD *)(v8 + 16);
      v21 = 0;
      LODWORD(a2) = 0;
      if ( v20 )
      {
        v22 = (_BYTE *)(v8 + 20);
        while ( *v22 != 0x84 )
        {
          LODWORD(a2) = a2 + 1;
          v22 += 20;
          if ( (unsigned int)a2 >= v20 )
            goto LABEL_57;
        }
        v21 = 1;
        *v22 = 0;
      }
LABEL_57:
      v10 = v21 == 0 ? 0xC0000001 : 0;
    }
    else
    {
      switch ( v4 )
      {
        case 0x85u:
          if ( (unsigned __int64)&a3[v6 - v11] < 0x14 )
            return (unsigned int)-1072431089;
          *(_BYTE *)(v11 + 3) = 0;
          v16 = 0;
          *(_QWORD *)(v11 + 4) = 0LL;
          *(_QWORD *)(v11 + 12) = 0LL;
          v17 = *(_DWORD *)(v8 + 16);
          if ( v17 )
          {
            v18 = v8 + 20;
            while ( *(_BYTE *)v18 != 3 )
            {
              ++v16;
              v18 += 20LL;
              if ( v16 >= v17 )
                goto LABEL_39;
            }
            LODWORD(a2) = *(unsigned __int8 *)(v11 + 3);
            *(_DWORD *)(v11 + 16) = *(_DWORD *)(v18 + 12);
            v19 = *(_DWORD *)(v18 + 4);
            *(_DWORD *)(v11 + 8) = v19;
            *(_DWORD *)(v11 + 4) = v19;
            if ( (*(_BYTE *)(v18 + 2) & 1) == 0 )
              LODWORD(a2) = (unsigned __int8)a2 | 1;
            *(_BYTE *)(v11 + 3) = a2;
            *(_BYTE *)v18 = 0;
          }
LABEL_39:
          v10 = 0;
          goto LABEL_72;
        case 0x20u:
          if ( (unsigned __int64)&a3[v6 - v11] < 4 )
            return (unsigned int)-1072431089;
          v15 = PnpiCmResourceToBiosIrq(v11, v8, &WPP_RECORDER_INITIALIZED, 1LL);
          goto LABEL_70;
        case 0x28u:
          if ( (unsigned __int64)&a3[v6 - v11] < 3 )
            return (unsigned int)-1072431089;
          v15 = PnpiCmResourceToBiosDma(v11, v8, &WPP_RECORDER_INITIALIZED, 1LL);
          goto LABEL_70;
      }
      if ( v4 != 48 && v4 != 56 )
      {
        switch ( v4 )
        {
          case 0x40u:
            if ( (unsigned __int64)&a3[v6 - v11] < 8 )
              return (unsigned int)-1072431089;
            v15 = PnpiCmResourceToBiosIoPort(v11, v8, &WPP_RECORDER_INITIALIZED, 1LL);
            goto LABEL_70;
          case 0x48u:
            if ( (unsigned __int64)&a3[v6 - v11] < 4 )
              return (unsigned int)-1072431089;
            v15 = PnpiCmResourceToBiosIoFixedPort(v11, v8, &WPP_RECORDER_INITIALIZED, 1LL);
            goto LABEL_70;
          case 0x70u:
            goto LABEL_71;
          case 0x81u:
            if ( (unsigned __int64)&a3[v6 - v11] < 0xC )
              return (unsigned int)-1072431089;
            v15 = PnpiCmResourceToBiosMemory(v11, v8, &WPP_RECORDER_INITIALIZED, 1LL);
LABEL_70:
            v10 = v15;
            goto LABEL_71;
        }
LABEL_48:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v27) = v4;
          LOBYTE(a2) = 2;
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            a2,
            14,
            13,
            (__int64)&WPP_52f1d9ae2bb33d21e69d5020d30b72bd_Traceguids,
            v27);
        }
      }
    }
LABEL_71:
    if ( v10 < 0 )
      return (unsigned int)v10;
LABEL_72:
    v11 += v13;
    v12 = (unsigned __int8 *)v29;
    if ( v11 >= v29 )
      goto LABEL_79;
    v4 = *(_BYTE *)v11;
    v9 = a1;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      14,
      12,
      (__int64)&WPP_52f1d9ae2bb33d21e69d5020d30b72bd_Traceguids);
  }
LABEL_79:
  v24 = *(_DWORD *)(v8 + 16);
  v25 = 0;
  if ( v24 )
  {
    v26 = (_BYTE *)(v8 + 20);
    do
    {
      if ( !*v26 )
        break;
      ++v25;
      v26 += 20;
    }
    while ( v25 < v24 );
  }
  if ( v25 == v24 )
    return (unsigned int)-1073741823;
  return v5;
}
