/*
 * XREFs of UsbhMakeId @ 0x1C0051A64
 * Callers:
 *     UsbhBuildClassCompatibleID @ 0x1C004F94C (UsbhBuildClassCompatibleID.c)
 *     UsbhBuildContainerID @ 0x1C0050024 (UsbhBuildContainerID.c)
 *     UsbhBuildDeviceID @ 0x1C005068C (UsbhBuildDeviceID.c)
 *     UsbhBuildHardwareID @ 0x1C00509B0 (UsbhBuildHardwareID.c)
 *     UsbhBuildUnknownIds @ 0x1C0050E08 (UsbhBuildUnknownIds.c)
 *     UsbhGetLocationIdString @ 0x1C0051374 (UsbhGetLocationIdString.c)
 * Callees:
 *     Feature_2473223486__private_IsEnabledDeviceUsage @ 0x1C001CFD8 (Feature_2473223486__private_IsEnabledDeviceUsage.c)
 *     memmove @ 0x1C001DEC0 (memmove.c)
 *     memset @ 0x1C001E180 (memset.c)
 */

char *__fastcall UsbhMakeId(
        int a1,
        _WORD *a2,
        void *a3,
        _DWORD *a4,
        unsigned __int16 a5,
        __int16 a6,
        unsigned __int16 a7,
        char *Str)
{
  __int64 v8; // rbx
  __int64 v10; // r15
  size_t v12; // r15
  int IsEnabledDeviceUsage; // eax
  char *v14; // rsi
  __int64 v15; // rdx
  SIZE_T v16; // rdi
  SIZE_T v17; // rdi
  char *PoolWithTag; // rax
  char *v19; // rbx
  size_t v20; // rbx
  char *v21; // rbx
  int v22; // ebp
  unsigned int i; // ecx
  __int16 v24; // ax
  char *v26; // [rsp+20h] [rbp-38h]

  v8 = -1LL;
  v10 = -1LL;
  do
    ++v10;
  while ( a2[v10] );
  v12 = 2 * v10;
  IsEnabledDeviceUsage = Feature_2473223486__private_IsEnabledDeviceUsage();
  v14 = Str;
  v15 = 2LL * a5;
  if ( IsEnabledDeviceUsage )
  {
    v16 = v12 + v15 + (unsigned int)*a4;
    if ( a1 == 2 && Str )
    {
      v17 = v16 + 2 * strnlen(Str, 8uLL);
LABEL_11:
      v16 = v17 - 2;
    }
  }
  else
  {
    v16 = v12 + v15 + *(unsigned __int16 *)a4;
    if ( a1 == 2 && Str )
    {
      do
        ++v8;
      while ( Str[v8] );
      v17 = v16 + 2 * v8;
      goto LABEL_11;
    }
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(SHIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory), v16, 0x42554855u);
  v26 = PoolWithTag;
  v19 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v16);
    v20 = (unsigned int)*a4;
    memmove(v26, a3, v20);
    v21 = &v26[v20];
    memmove(v21, a2, v12);
    *a4 = v16;
    while ( *(_WORD *)v21 != 110 && a6 )
      v21 += 2;
    if ( a1 )
    {
      v22 = a1 - 1;
      if ( v22 )
      {
        if ( v22 == 1 && Str )
        {
          for ( i = 0; i < 8; ++i )
          {
            v24 = (unsigned __int8)*v14;
            if ( !(_BYTE)v24 )
              break;
            *(_WORD *)v21 = v24;
            v21 += 2;
            ++v14;
          }
        }
      }
      else if ( a6 == 2 )
      {
        *(_WORD *)v21 = ((unsigned __int8)a7 >> 4) + 48;
        *((_WORD *)v21 + 1) = (a7 & 0xF) + 48;
      }
      else if ( a6 == 4 )
      {
        *(_WORD *)v21 = (a7 >> 12) + 48;
        *((_WORD *)v21 + 1) = (HIBYTE(a7) & 0xF) + 48;
        *((_WORD *)v21 + 2) = ((unsigned __int8)a7 >> 4) + 48;
        *((_WORD *)v21 + 3) = (a7 & 0xF) + 48;
      }
    }
    else if ( a6 == 2 )
    {
      *(_WORD *)v21 = (unsigned __int8)Nibble[((unsigned __int64)a7 >> 4) & 0xF];
      *((_WORD *)v21 + 1) = (unsigned __int8)Nibble[a7 & 0xF];
    }
    else if ( a6 == 4 )
    {
      *(_WORD *)v21 = (unsigned __int8)Nibble[(unsigned __int64)a7 >> 12];
      *((_WORD *)v21 + 1) = (unsigned __int8)Nibble[((unsigned __int64)a7 >> 8) & 0xF];
      *((_WORD *)v21 + 2) = (unsigned __int8)Nibble[((unsigned __int64)a7 >> 4) & 0xF];
      *((_WORD *)v21 + 3) = (unsigned __int8)Nibble[a7 & 0xF];
    }
    v19 = v26;
  }
  else
  {
    *a4 = 0;
  }
  if ( a3 )
    ExFreePoolWithTag(a3, 0);
  return v19;
}
