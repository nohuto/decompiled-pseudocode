__int64 __fastcall PnpBiosResourcesToNtResources(ULONG_PTR a1, ULONG_PTR a2, unsigned int a3, __int64 *a4)
{
  int v4; // esi
  int v5; // eax
  int v6; // edx
  int v7; // r8d
  int v8; // ebx
  ULONG_PTR v9; // r10
  PVOID v10; // r12
  unsigned __int8 v11; // di
  int v12; // edx
  int v13; // r15d
  char v14; // al
  _BYTE *v15; // rsi
  __int16 v16; // cx
  int v17; // edx
  int v18; // eax
  int v19; // r9d
  unsigned int v20; // edi
  int v21; // eax
  unsigned __int8 v22; // di
  __int16 v23; // r15
  char j; // si
  int v25; // r9d
  unsigned __int16 v26; // di
  unsigned __int16 i; // si
  char v28; // al
  int v29; // edx
  char v30; // di
  unsigned __int8 v31; // r15
  unsigned __int8 v32; // al
  int DeviceExtension; // edi
  unsigned __int8 v34; // r13
  unsigned int v35; // edi
  unsigned int v36; // esi
  unsigned int v37; // ebx
  int v38; // r15d
  unsigned int v39; // r15d
  __int64 v40; // rcx
  int v41; // eax
  __int64 Pool2; // rax
  int v44; // edx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rsi
  int v48; // edx
  char *v49; // rsi
  unsigned int v50; // r15d
  __int64 v51; // rcx
  int v52; // eax
  size_t v53; // rbx
  int v54; // [rsp+28h] [rbp-49h]
  __int64 v55; // [rsp+30h] [rbp-41h]
  char v56; // [rsp+30h] [rbp-41h]
  unsigned int v57; // [rsp+58h] [rbp-19h]
  char v58; // [rsp+5Ch] [rbp-15h]
  char v59[3]; // [rsp+5Dh] [rbp-14h] BYREF
  int v60; // [rsp+60h] [rbp-11h] BYREF
  int v61; // [rsp+64h] [rbp-Dh]
  int v62; // [rsp+68h] [rbp-9h]
  unsigned __int16 v63; // [rsp+6Ch] [rbp-5h]
  unsigned int v64; // [rsp+70h] [rbp-1h]
  int v65; // [rsp+74h] [rbp+3h]
  PVOID P; // [rsp+78h] [rbp+7h] BYREF
  int v67; // [rsp+80h] [rbp+Fh]

  P = 0LL;
  v60 = 0;
  v4 = 0;
  v57 = 0;
  v64 = 0;
  v59[0] = 0;
  v61 = 0;
  v62 = 0;
  v5 = PnpiGrowResourceList(&P, &v60);
  v8 = v5;
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v6,
        13,
        33,
        (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids,
        v5);
    }
    return (unsigned int)v8;
  }
  v9 = a2;
  v10 = P;
  v65 = 32;
  while ( 1 )
  {
    v11 = *(_BYTE *)v9;
    v12 = 3;
    v13 = v4;
    if ( *(char *)v9 < 0 )
    {
      v15 = (_BYTE *)(v9 + 1);
      v16 = *(_WORD *)(v9 + 1) + 3;
      v63 = v16;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 4;
        WPP_RECORDER_SF_DD(
          WPP_GLOBAL_Control->DeviceExtension,
          v12,
          14,
          35,
          (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids,
          v11,
          v16);
        v9 = a2;
      }
    }
    else
    {
      v14 = (v11 & 7) + 1;
      v63 = (v11 & 7) + 1;
      v11 &= 0x78u;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 4;
        WPP_RECORDER_SF_DD(
          WPP_GLOBAL_Control->DeviceExtension,
          v12,
          14,
          34,
          (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids,
          v11,
          v14);
        v9 = a2;
      }
      v15 = (_BYTE *)(v9 + 1);
    }
    if ( v11 == 120 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 4;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v12,
          14,
          36,
          (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids);
      }
      if ( !v61 || v62 == v61 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = 4;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v12,
            14,
            55,
            (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids);
        }
        PnpiClearAllocatedMemory(v10);
        *a4 = 0LL;
        return (unsigned int)v8;
      }
      if ( *(_QWORD *)v10 )
        v35 = *(_DWORD *)(*(_QWORD *)v10 + 4LL);
      else
        v35 = 0;
      v36 = v64;
      v37 = 1;
      if ( v64 )
      {
        while ( 1 )
        {
          v40 = *((_QWORD *)v10 + v37);
          if ( !v40 )
            break;
          v41 = *(_DWORD *)(v40 + 4);
          v39 = v65;
          if ( v41 )
          {
            v39 = 32 * (v35 + v41) + v65 + 8;
            v65 = v39;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v12) = 4;
              WPP_RECORDER_SF_dL(WPP_GLOBAL_Control->DeviceExtension, v12, 14, 58, v54, v37, v39);
            }
          }
          if ( ++v37 > v36 )
            goto LABEL_136;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v55) = v37;
          LOBYTE(v12) = 2;
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            v12,
            13,
            57,
            (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids,
            v55);
        }
      }
      else if ( *(_QWORD *)v10 && (v38 = *(_DWORD *)(*(_QWORD *)v10 + 4LL)) != 0 )
      {
        v39 = 32 * v38 + 40;
LABEL_136:
        if ( v39 >= 0x48 )
        {
          Pool2 = ExAllocatePool2(256LL, v39, 1383097153LL);
          *a4 = Pool2;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v44) = 4;
            WPP_RECORDER_SF_qD(
              WPP_GLOBAL_Control->DeviceExtension,
              v44,
              14,
              61,
              (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids,
              Pool2,
              v39);
          }
          v47 = *a4;
          v48 = 0;
          if ( !*a4 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v48) = 2;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v48,
                13,
                62,
                (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids);
            }
            v8 = -1073741670;
            goto LABEL_155;
          }
          *(_QWORD *)(v47 + 4) = 15LL;
          *(_DWORD *)v47 = v39;
          v49 = (char *)(v47 + 32);
          v50 = 1;
          if ( v64 )
          {
            do
            {
              v51 = *((_QWORD *)v10 + v50);
              v52 = *(_DWORD *)(v51 + 4);
              if ( v52 )
              {
                v53 = (unsigned int)(32 * v52 + 8);
                *(_DWORD *)(v51 + 4) = v35 + v52;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_dqLD((__int64)WPP_GLOBAL_Control->DeviceExtension, 0LL, v45, v46, v54);
                memmove(v49, *((const void **)v10 + v50), v53);
                v49 += v53;
                if ( v35 )
                {
                  memmove(v49, (const void *)(*(_QWORD *)v10 + 8LL), 32LL * v35);
                  v49 += 32 * v35;
                }
                ++*(_DWORD *)(*a4 + 28);
              }
              ++v50;
            }
            while ( v50 <= v64 );
          }
          else
          {
            memmove(v49, *(const void **)v10, 32 * v35 + 8);
            ++*(_DWORD *)(*a4 + 28);
          }
          PnpiClearAllocatedMemory(v10);
          return 0LL;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = 2;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v12,
            13,
            60,
            (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids);
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 2;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v12,
          13,
          59,
          (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids);
      }
      PnpiClearAllocatedMemory(v10);
      *a4 = 0LL;
      return 3221225473LL;
    }
    v17 = v11;
    ++v61;
    v67 = v11;
    if ( v11 > 0x85u )
      break;
    if ( v11 == 133 )
      goto LABEL_113;
    if ( v11 <= 0x48u )
    {
      if ( v11 != 72 )
      {
        switch ( v11 )
        {
          case ' ':
            v26 = *(_WORD *)(v9 + 1);
            v23 = 0;
            for ( i = 0; v26; v26 >>= 1 )
            {
              if ( v8 < 0 )
                break;
              if ( (v26 & 1) != 0 )
                v8 = PnpiBiosIrqToIoDescriptor(a2, i, (_DWORD)v10, v57, v23++);
              ++i;
            }
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_117;
            v25 = 37;
            break;
          case '(':
            v22 = *(_BYTE *)(v9 + 1);
            v23 = 0;
            for ( j = 0; v22; v22 >>= 1 )
            {
              if ( v8 < 0 )
                break;
              if ( (v22 & 1) != 0 )
              {
                LOBYTE(v17) = j;
                v8 = PnpiBiosDmaToIoDescriptor(a2, v17, (_DWORD)v10, v57, v23++);
              }
              ++j;
            }
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_117;
            v25 = 39;
            break;
          case '0':
            v20 = v64 + 1;
            v64 = v20;
            v57 = v20;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v17) = 4;
              WPP_RECORDER_SF_d(
                WPP_GLOBAL_Control->DeviceExtension,
                v17,
                14,
                41,
                (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids);
            }
            if ( v20 == v60 )
            {
              v21 = PnpiGrowResourceList(&P, &v60);
              v10 = P;
              v8 = v21;
            }
            goto LABEL_117;
          case '8':
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v17) = 4;
              WPP_RECORDER_SF_d(
                WPP_GLOBAL_Control->DeviceExtension,
                v17,
                14,
                42,
                (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids);
            }
            v57 = 0;
            goto LABEL_117;
          case '@':
            v18 = PnpiBiosPortToIoDescriptor(v9, v10, v57, a3);
            v8 = v18;
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_117;
            v19 = 43;
            goto LABEL_115;
          default:
            goto LABEL_71;
        }
        v28 = v23;
        goto LABEL_45;
      }
      v18 = PnpiBiosPortFixedToIoDescriptor(v9, v10, v57, a3);
      v8 = v18;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_117;
      v19 = 44;
LABEL_115:
      LODWORD(v55) = v18;
      goto LABEL_116;
    }
    switch ( v11 )
    {
      case 0x50u:
        v18 = PnpiBiosDmaToIoDescriptorV3(v9, v10, v57);
        v8 = v18;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_117;
        v19 = 40;
        goto LABEL_115;
      case 0x70u:
        ++v62;
        v8 = 0;
        goto LABEL_119;
      case 0x81u:
        goto LABEL_113;
      case 0x84u:
        v8 = 0;
        if ( a1 )
        {
          if ( (int)PnpiBiosVendorToNtIoDescriptor(a1, v9, v7, (_DWORD)v10, v57, a3, (__int64)v59) < 0 || !v59[0] )
            ++v62;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v29) = 4;
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              v29,
              14,
              53,
              (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids);
          }
        }
        else
        {
          ++v62;
        }
        goto LABEL_118;
    }
LABEL_71:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = 4;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v17,
        13,
        54,
        (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids);
    }
    v9 = a2;
    v8 = 0;
    v61 = v13;
    v4 = v13;
LABEL_120:
    v9 += v63;
    a2 = v9;
  }
  switch ( v11 )
  {
    case 0x86u:
LABEL_113:
      v18 = PnpiBiosMemoryToIoDescriptor(v9, v10, v57);
      v8 = v18;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_117;
      v19 = 45;
      goto LABEL_115;
    case 0x87u:
      v18 = PnpiBiosAddressDoubleToIoDescriptor(v9);
      v8 = v18;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_117;
      v19 = 47;
      goto LABEL_115;
    case 0x88u:
      v18 = PnpiBiosAddressToIoDescriptor(v9);
      v8 = v18;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_117;
      v19 = 46;
      goto LABEL_115;
  }
  if ( v11 != 137 )
  {
    switch ( v11 )
    {
      case 0x8Au:
        v18 = PnpiBiosAddressQuadToIoDescriptor(v9);
        v8 = v18;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_117;
        v19 = 48;
        goto LABEL_115;
      case 0x8Bu:
        v18 = PnpiBiosAddressExtendedToIoDescriptor(v9);
        v8 = v18;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_117;
        v19 = 49;
        goto LABEL_115;
      case 0x8Cu:
        v30 = 0;
        if ( a1 )
        {
          do
          {
            if ( v8 < 0 )
              break;
            v8 = PnpiBiosGpioInterruptIoToNtIoDescriptor(a1, a2, v7, (_DWORD)v10, v57, a3);
            ++v30;
          }
          while ( !v30 );
        }
        else
        {
          v8 = -1073741637;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_117;
        v28 = v30;
        v25 = 51;
        goto LABEL_45;
      case 0x8Du:
        if ( a1 )
          v8 = PnpiBiosGpioInterruptIoToNtIoDescriptor(a1, v9, v7, (_DWORD)v10, v57, a3);
        else
          v8 = -1073741637;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_117;
        v19 = 50;
LABEL_84:
        LODWORD(v55) = v8;
LABEL_116:
        LOBYTE(v17) = 4;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v17,
          14,
          v19,
          (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids,
          v55);
        goto LABEL_117;
      case 0x8Eu:
        if ( a1 )
          v8 = PnpiBiosGpioInterruptIoToNtIoDescriptor(a1, v9, v7, (_DWORD)v10, v57, a3);
        else
          v8 = -1073741637;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v19 = 52;
          goto LABEL_84;
        }
LABEL_117:
        if ( v8 < 0 )
        {
          v17 = v67;
          goto LABEL_123;
        }
LABEL_118:
        v9 = a2;
LABEL_119:
        v4 = v61;
        goto LABEL_120;
    }
    goto LABEL_71;
  }
  v31 = *(_BYTE *)(v9 + 4);
  v58 = 0;
  v32 = 4 * v31 + 5;
  if ( AcpiInterruptCombiningSupported != 1 || (LOBYTE(v7) = *v15 + 3, (unsigned __int8)v7 <= v32) )
  {
    DeviceExtension = 0;
    if ( gAcpiHonorBiosPolarities && a1 )
      DeviceExtension = ACPIInternalGetDeviceExtension(a1);
    if ( v31 )
    {
      v34 = 0;
      do
      {
        if ( v8 < 0 )
          break;
        LOBYTE(v7) = v34++;
        v8 = PnpiBiosExtendedIrqToIoDescriptor(DeviceExtension, a2, v7, (_DWORD)v10, v57);
      }
      while ( v34 < v31 );
      v58 = v34;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_117;
    v28 = v58;
    v25 = 38;
LABEL_45:
    LOBYTE(v17) = 4;
    WPP_RECORDER_SF_DD(
      WPP_GLOBAL_Control->DeviceExtension,
      v17,
      14,
      v25,
      (__int64)&WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids,
      v28,
      v8);
    goto LABEL_117;
  }
  if ( a1 )
  {
    v8 = PnpiBiosInterruptCombineToIoDescriptor(a1, v9, (unsigned __int8)v7 - v32 - 1, (int)v10, v57, a3);
    goto LABEL_117;
  }
  v8 = -1073741637;
LABEL_123:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v56 = v17;
    LOBYTE(v17) = 2;
    WPP_RECORDER_SF_dL(WPP_GLOBAL_Control->DeviceExtension, v17, 13, 56, v54, v56, v8);
  }
LABEL_155:
  PnpiClearAllocatedMemory(v10);
  return (unsigned int)v8;
}
