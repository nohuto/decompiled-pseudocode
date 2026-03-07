__int64 __fastcall NVMeLogTelemetry(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        _BYTE *Src,
        int a6,
        int a7,
        int a8,
        int a9,
        _BYTE *a10,
        __int64 a11,
        _BYTE *a12,
        __int64 a13,
        _BYTE *a14,
        __int64 a15,
        _BYTE *a16,
        __int64 a17,
        _BYTE *a18,
        __int64 a19,
        _BYTE *a20,
        __int64 a21,
        _BYTE *a22,
        __int64 a23,
        _BYTE *a24,
        __int64 a25)
{
  unsigned int v26; // eax
  _BYTE *v27; // rcx
  unsigned int v28; // ebx
  unsigned int v29; // eax
  _BYTE *v30; // rcx
  unsigned int v31; // eax
  _BYTE *v32; // rcx
  unsigned int v33; // eax
  _BYTE *v34; // rcx
  unsigned int v35; // eax
  _BYTE *v36; // rcx
  unsigned int v37; // eax
  _BYTE *v38; // rcx
  unsigned int v39; // eax
  _BYTE *v40; // rcx
  unsigned int v41; // eax
  _BYTE *v42; // rcx
  unsigned int v43; // eax
  _BYTE *v44; // rcx
  _QWORD v48[48]; // [rsp+60h] [rbp-A0h] BYREF

  memset(v48, 0, sizeof(v48));
  v26 = 0;
  HIDWORD(v48[0]) = a4;
  LODWORD(v48[0]) = 1;
  v27 = Src;
  v28 = 32;
  while ( *v27 )
  {
    ++v26;
    ++v27;
    if ( v26 >= 0x20 )
    {
      v26 = 32;
      break;
    }
  }
  memmove(&v48[1], Src, v26);
  v48[5] = 1LL;
  if ( a10 )
  {
    v29 = 0;
    v30 = a10;
    while ( *v30 )
    {
      ++v29;
      ++v30;
      if ( v29 >= 0x20 )
      {
        v29 = 32;
        break;
      }
    }
    memmove(&v48[8], a10, v29);
    v48[12] = a11;
  }
  if ( a12 )
  {
    v31 = 0;
    v32 = a12;
    while ( *v32 )
    {
      ++v31;
      ++v32;
      if ( v31 >= 0x20 )
      {
        v31 = 32;
        break;
      }
    }
    memmove(&v48[13], a12, v31);
    v48[17] = a13;
  }
  if ( a14 )
  {
    v33 = 0;
    v34 = a14;
    while ( *v34 )
    {
      ++v33;
      ++v34;
      if ( v33 >= 0x20 )
      {
        v33 = 32;
        break;
      }
    }
    memmove(&v48[18], a14, v33);
    v48[22] = a15;
  }
  if ( a16 )
  {
    v35 = 0;
    v36 = a16;
    while ( *v36 )
    {
      ++v35;
      ++v36;
      if ( v35 >= 0x20 )
      {
        v35 = 32;
        break;
      }
    }
    memmove(&v48[23], a16, v35);
    v48[27] = a17;
  }
  if ( a18 )
  {
    v37 = 0;
    v38 = a18;
    while ( *v38 )
    {
      ++v37;
      ++v38;
      if ( v37 >= 0x20 )
      {
        v37 = 32;
        break;
      }
    }
    memmove(&v48[28], a18, v37);
    v48[32] = a19;
  }
  if ( a20 )
  {
    v39 = 0;
    v40 = a20;
    while ( *v40 )
    {
      ++v39;
      ++v40;
      if ( v39 >= 0x20 )
      {
        v39 = 32;
        break;
      }
    }
    memmove(&v48[33], a20, v39);
    v48[37] = a21;
  }
  if ( a22 )
  {
    v41 = 0;
    v42 = a22;
    while ( *v42 )
    {
      ++v41;
      ++v42;
      if ( v41 >= 0x20 )
      {
        v41 = 32;
        break;
      }
    }
    memmove(&v48[38], a22, v41);
    v48[42] = a23;
  }
  if ( a24 )
  {
    v43 = 0;
    v44 = a24;
    while ( *v44 )
    {
      ++v43;
      ++v44;
      if ( v43 >= 0x20 )
        goto LABEL_53;
    }
    v28 = v43;
LABEL_53:
    memmove(&v48[43], a24, v28);
    v48[47] = a25;
  }
  return StorPortExtendedFunction(96LL, a1, a2, v48);
}
