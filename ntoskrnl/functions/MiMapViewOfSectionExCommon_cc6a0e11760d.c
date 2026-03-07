__int64 __fastcall MiMapViewOfSectionExCommon(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        int a7,
        int a8,
        volatile void *Address,
        ULONGLONG ullMultiplicand,
        int a11,
        __int64 a12,
        char a13,
        int a14)
{
  __int64 result; // rax
  int MapExtendedParameters; // ebx
  void *v19; // [rsp+20h] [rbp-168h]
  int v20[2]; // [rsp+28h] [rbp-160h]
  __int64 v21[2]; // [rsp+50h] [rbp-138h] BYREF
  __int128 v22; // [rsp+60h] [rbp-128h] BYREF
  PVOID Object[2]; // [rsp+70h] [rbp-118h]
  int v24; // [rsp+80h] [rbp-108h]
  _QWORD v25[16]; // [rsp+90h] [rbp-F8h] BYREF
  _QWORD v26[15]; // [rsp+110h] [rbp-78h] BYREF

  memset(v25, 0, sizeof(v25));
  *(_OWORD *)v21 = 0LL;
  v22 = 0LL;
  *(_OWORD *)Object = 0LL;
  memset(v26, 0, 0x48uLL);
  result = MiMapViewOfSectionCommon(a2, a1, a3, a4, a6, a5, a8, 0LL, a13, v21);
  if ( (int)result < 0 )
  {
    if ( v21[0] )
      ++dword_140C67C1C;
    else
      ++dword_140C67C18;
    return result;
  }
  MapExtendedParameters = MiCaptureAllocateMapExtendedParameters(Address, (unsigned int)ullMultiplicand, v26);
  if ( MapExtendedParameters < 0 )
  {
LABEL_12:
    if ( MapExtendedParameters >= 0 )
      goto LABEL_13;
    goto LABEL_22;
  }
  if ( (v26[7] & 0xFFFFFFFFFFFFFF1FuLL) == 0 )
  {
    MapExtendedParameters = MiMapParametersInitialize(v25, v21[1], a7, a8, 0LL);
    if ( MapExtendedParameters >= 0 )
    {
      MapExtendedParameters = MiMapExParametersInitialize(v25, v21, v26);
      if ( MapExtendedParameters >= 0 )
      {
        HIDWORD(v25[8]) = a11;
        v25[9] = a12;
        LODWORD(v25[8]) |= a14;
        MapExtendedParameters = MiMapViewOfSection(
                                  Object[0],
                                  (unsigned int)v25,
                                  (unsigned int)v21,
                                  0,
                                  (__int64)&v22,
                                  1,
                                  0);
        v24 = MapExtendedParameters;
        if ( MapExtendedParameters >= 0 )
        {
          if ( (v25[7] & 0x400000000LL) != 0 )
            DbgkMapViewOfSection(Object[1]);
          if ( (*((_DWORD *)Object[0] + 14) & 0x20) == 0 && (BYTE8(v22) & 2) != 0 )
          {
            v20[0] = a8;
            LODWORD(v19) = a7;
            EtwTiLogMapExecView((__int64)Object[1], a13, v21[0], v21[1], v19, *(_QWORD *)v20);
          }
          *a4 = v21[0];
          *a6 = v25[3];
          if ( a5 )
            *a5 = v22;
        }
      }
    }
    goto LABEL_12;
  }
  MapExtendedParameters = -1073741811;
LABEL_22:
  if ( v21[0] )
    ++dword_140C67C1C;
  else
    ++dword_140C67C18;
LABEL_13:
  if ( !a3 )
  {
    ObfDereferenceObject(Object[0]);
    ObfDereferenceObjectWithTag(Object[1], 0x77566D4Du);
  }
  return (unsigned int)MapExtendedParameters;
}
