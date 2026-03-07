PFFMEMOBJ *__fastcall PFFMEMOBJ::PFFMEMOBJ(
        PFFMEMOBJ *this,
        unsigned int a2,
        const unsigned __int16 *a3,
        unsigned int a4,
        unsigned int a5,
        struct tagDESIGNVECTOR *Src,
        size_t Size,
        unsigned __int64 a8,
        HDEV a9,
        struct DHPDEV__ *a10,
        struct PFT *a11,
        unsigned int a12,
        unsigned int a13,
        struct _FNTCHECKSUM *a14,
        struct _FONTFILEVIEW **a15,
        struct _UNIVERSAL_FONT_ID *a16,
        int a17)
{
  __int64 v18; // r14
  unsigned __int64 v20; // rax
  int v21; // r9d
  unsigned int v22; // r13d
  unsigned int v23; // r12d
  unsigned int v24; // edx
  int v25; // r8d
  int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  unsigned int v35; // edx
  int v36; // ecx
  __int64 v37; // rax
  unsigned int v39; // eax

  v18 = a4;
  v20 = 8LL * a2;
  v21 = -1;
  *(_QWORD *)this = 0LL;
  v22 = 0;
  *((_WORD *)this + 8) = 0;
  v23 = 0;
  *((_DWORD *)this + 5) = a13;
  *((_DWORD *)this + 2) = 0;
  if ( v20 > 0xFFFFFFFF || (v24 = v20 + 216, (unsigned int)v20 >= 0xFFFFFF28) )
  {
    v24 = -1;
    v25 = 0;
  }
  else
  {
    v25 = 1;
  }
  if ( a3 && v25 )
  {
    v23 = v24;
    v26 = -1;
    v27 = v24 + ((2 * v18 + 3) & 0xFFFFFFFC);
    v25 = 0;
    if ( v27 >= v24 )
      v26 = v24 + ((2 * v18 + 3) & 0xFFFFFFFC);
    v24 = v26;
    LOBYTE(v25) = v27 >= v23;
  }
  v28 = v24;
  if ( (_DWORD)Size )
  {
    if ( !v25 )
      return this;
    v39 = v24 + Size;
    v25 = 0;
    v22 = v24;
    if ( v24 + (unsigned int)Size >= v24 )
      v21 = v24 + Size;
    v24 = v21;
    LOBYTE(v25) = v39 >= v28;
  }
  if ( v25 )
  {
    v29 = v24;
    if ( v24 )
    {
      v30 = Win32AllocPoolZInit(v24, 1717989447LL);
      *(_QWORD *)this = v30;
      if ( v30 )
      {
        PushThreadGuardedObject(v30 + 160, v30, CleanUpPFF);
        **(_QWORD **)this = v29;
        *(_QWORD *)(*(_QWORD *)this + 16LL) = 0LL;
        *(_QWORD *)(*(_QWORD *)this + 8LL) = 0LL;
        *(_QWORD *)(*(_QWORD *)this + 80LL) = a8;
        *(_QWORD *)(*(_QWORD *)this + 88LL) = a9;
        *(_QWORD *)(*(_QWORD *)this + 96LL) = a10;
        *(_QWORD *)(*(_QWORD *)this + 128LL) = a11;
        *(_DWORD *)(*(_QWORD *)this + 36LL) = a5;
        *(_DWORD *)(*(_QWORD *)this + 32LL) = v18;
        v31 = *(_QWORD *)this;
        if ( (_DWORD)v18 )
        {
          *(_QWORD *)(v31 + 24) = v31 + v23;
          memmove(*(void **)(*(_QWORD *)this + 24LL), a3, 2 * v18);
        }
        else
        {
          *(_QWORD *)(v31 + 24) = 0LL;
        }
        *(_DWORD *)(*(_QWORD *)this + 48LL) = Size;
        v32 = *(_QWORD *)this;
        if ( (_DWORD)Size )
        {
          *(_QWORD *)(v32 + 40) = v32 + v22;
          memmove(*(void **)(*(_QWORD *)this + 40LL), Src, (unsigned int)Size);
        }
        else
        {
          *(_QWORD *)(v32 + 40) = 0LL;
        }
        v33 = SGDGetSessionState(v32);
        if ( gbNetworkFontsLoaded
          && *(_BYTE *)(*(_QWORD *)(v33 + 32) + 13296LL)
          && *(_BYTE *)(*(_QWORD *)(SGDGetSessionState(v34) + 32) + 19404LL) )
        {
          v35 = a12;
        }
        else
        {
          v35 = a12 | 0x200;
        }
        v36 = v35 | 0x1000;
        *(_QWORD *)(*(_QWORD *)this + 200LL) = a15;
        if ( !a17 )
          v36 = v35;
        *(_DWORD *)(*(_QWORD *)this + 208LL) = 0;
        *(_DWORD *)(*(_QWORD *)this + 68LL) = 0;
        *(_DWORD *)(*(_QWORD *)this + 52LL) = v36;
        *(_QWORD *)(*(_QWORD *)this + 104LL) = 0LL;
        *(_QWORD *)(*(_QWORD *)this + 112LL) = 0LL;
        *(_QWORD *)(*(_QWORD *)this + 120LL) = 0LL;
        *(_QWORD *)(*(_QWORD *)this + 72LL) = 0LL;
        *(_QWORD *)(*(_QWORD *)this + 144LL) = 0LL;
        v37 = *(_QWORD *)this;
        if ( (a13 & 0x1C) != 0 )
        {
          *(_DWORD *)(v37 + 56) = 0;
          *(_DWORD *)(*(_QWORD *)this + 60LL) = 0;
          PFFOBJ::bAddPvtData(this, a13);
        }
        else if ( (a13 & 0x20) != 0 )
        {
          *(_DWORD *)(v37 + 56) = 0;
          *(_DWORD *)(*(_QWORD *)this + 60LL) = 1;
        }
        else
        {
          *(_DWORD *)(v37 + 56) = 1;
          *(_DWORD *)(*(_QWORD *)this + 60LL) = 0;
        }
        *(_QWORD *)(*(_QWORD *)this + 152LL) = 0LL;
        *(_DWORD *)(*(_QWORD *)this + 136LL) = 0;
        if ( a16 )
        {
          *(_DWORD *)(*(_QWORD *)this + 136LL) = *(_DWORD *)a16;
        }
        else if ( a15 )
        {
          *(_DWORD *)(*(_QWORD *)this + 136LL) = *((_DWORD *)a14 + 1);
          if ( !*(_DWORD *)(*(_QWORD *)this + 136LL) )
          {
            *(_DWORD *)(*(_QWORD *)this + 136LL) += ComputeFileviewCheckSumInFontDriverAddressSpace(a15, a5);
            if ( (a13 & 0x10) == 0 )
              PutFNTCacheCheckSum(*(_DWORD *)a14, *(_DWORD *)(*(_QWORD *)this + 136LL));
          }
          if ( *(_DWORD *)(*(_QWORD *)this + 48LL) )
            *(_DWORD *)(*(_QWORD *)this + 136LL) += ComputeFileviewCheckSum(Src, Size);
        }
      }
    }
  }
  return this;
}
