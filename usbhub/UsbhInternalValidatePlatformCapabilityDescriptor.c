char __fastcall UsbhInternalValidatePlatformCapabilityDescriptor(__int64 a1, unsigned __int8 *a2, ULONG **a3)
{
  char v6; // bp
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r9
  int v11; // r8d
  ULONG v12; // r15d
  unsigned int v13; // r10d
  unsigned int v14; // r9d
  ULONG *v15; // r14
  unsigned int *v16; // r11
  unsigned int v17; // edx
  unsigned int v18; // ecx
  __int64 v19; // r8
  __int64 v20; // rbx
  __int64 v21; // rax

  *a3 = 0LL;
  v6 = 1;
  FdoExt(a1);
  if ( *a2 < 0x14u )
  {
    Log(a1, 256, 1448100913, *a2, 0LL);
    return 0;
  }
  if ( a2[3] )
    Log(a1, 256, 1448100914, a2[3], 0LL);
  v8 = *(_QWORD *)(a2 + 4) - *(_QWORD *)&GUID_NULL.Data1;
  if ( !v8 )
    v8 = *(_QWORD *)(a2 + 12) - *(_QWORD *)GUID_NULL.Data4;
  if ( !v8 )
  {
    Log(a1, 256, 1448100915, 0LL, 0LL);
    v6 = 0;
  }
  v9 = *(_QWORD *)(a2 + 4) - *(_QWORD *)&GUID_USB_MSOS20_PLATFORM_CAPABILITY_ID.Data1;
  if ( !v9 )
    v9 = *(_QWORD *)(a2 + 12) - *(_QWORD *)GUID_USB_MSOS20_PLATFORM_CAPABILITY_ID.Data4;
  if ( !v9 )
  {
    v10 = *a2;
    if ( (unsigned __int8)v10 >= 0x1Cu )
    {
      if ( (((_BYTE)v10 - 4) & 7) == 0 )
      {
        v12 = 0;
        v13 = 0;
        v14 = ((unsigned __int64)(v10 - 28) >> 3) + 1;
        if ( v14 )
        {
          v15 = (ULONG *)(a2 + 20);
          v16 = (unsigned int *)(a2 + 20);
          v17 = 1;
          do
          {
            v18 = v17;
            if ( v17 < v14 )
            {
              v19 = *v16;
              while ( *(_DWORD *)&a2[8 * v18 + 20] != (_DWORD)v19 )
              {
                if ( ++v18 >= v14 )
                  goto LABEL_22;
              }
              Log(a1, 256, 1146308913, v19, 0LL);
              return 0;
            }
LABEL_22:
            ++v13;
            ++v17;
            v16 += 2;
          }
          while ( v13 < v14 );
          v20 = v14;
          do
          {
            if ( *v15 > v12 )
            {
              if ( RtlIsNtDdiVersionAvailable(*v15) )
              {
                v12 = *v15;
                *a3 = v15;
              }
            }
            v15 += 2;
            --v20;
          }
          while ( v20 );
          if ( v12 )
            return v6;
        }
        Log(a1, 256, 1146308915, 0LL, 0LL);
        return v6;
      }
      v11 = 1297105970;
    }
    else
    {
      v11 = 1297105969;
    }
    goto LABEL_41;
  }
  v21 = *(_QWORD *)(a2 + 4) - *(_QWORD *)&GUID_USB_PLATFORM_FEATURES.Data1;
  if ( !v21 )
    v21 = *(_QWORD *)(a2 + 12) - *(_QWORD *)GUID_USB_PLATFORM_FEATURES.Data4;
  if ( !v21 )
  {
    Log(a1, 256, 1146242608, a2[20], *a2);
    if ( *a2 < 0x1Au )
    {
      v10 = *a2;
      v11 = 1146242609;
      goto LABEL_41;
    }
    if ( a2[20] == 1 )
    {
      if ( *a2 != 26 )
      {
        v10 = *a2;
        v11 = 1146242610;
        goto LABEL_41;
      }
    }
    else if ( !a2[20] )
    {
      v10 = *a2;
      v11 = 1146242611;
LABEL_41:
      Log(a1, 256, v11, v10, 0LL);
      return 0;
    }
  }
  return v6;
}
