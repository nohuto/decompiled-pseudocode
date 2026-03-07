__int64 __fastcall CFlipToken::InitializeCompleted(__int64 a1, __int64 a2, char a3, int a4)
{
  int v7; // esi
  _DWORD *v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // ebp
  int v13; // ecx
  int v14; // ecx
  int v16; // [rsp+48h] [rbp+20h] BYREF

  v16 = a4;
  v7 = CToken::Initialize(a1, 2);
  if ( v7 >= 0 )
  {
    v7 = ValidateDXGIAlphaMode((*(_DWORD *)(a2 + 44) >> 7) & 3);
    if ( v7 >= 0 )
    {
      *(_QWORD *)(a1 + 96) = *(_QWORD *)a2;
      if ( *(_DWORD *)(a2 + 84) < *(_DWORD *)(a2 + 92) && *(_DWORD *)(a2 + 88) < *(_DWORD *)(a2 + 96) )
      {
        *(_DWORD *)(a1 + 52) = 1;
        *(_OWORD *)(a1 + 56) = *(_OWORD *)(a2 + 84);
        *(_QWORD *)(a1 + 72) = *(_QWORD *)(a2 + 100);
      }
      v8 = (_DWORD *)(a1 + 188);
      *(_DWORD *)(a1 + 112) = *(_DWORD *)(a2 + 40);
      v9 = 6LL;
      *(_DWORD *)(a1 + 108) = *(_DWORD *)(a2 + 108);
      *(_DWORD *)(a1 + 104) = *(_DWORD *)(a2 + 28);
      *(_DWORD *)(a1 + 212) = *(_DWORD *)(a2 + 788);
      *(_BYTE *)(a1 + 116) = (*(_DWORD *)(a2 + 44) & 0x800000) != 0;
      *(_BYTE *)(a1 + 118) = (*(_DWORD *)(a2 + 44) & 2) != 0;
      *(_BYTE *)(a1 + 136) = (*(_DWORD *)(a2 + 44) & 8) != 0;
      *(_BYTE *)(a1 + 137) = (*(_DWORD *)(a2 + 44) & 0x10) != 0;
      *(_BYTE *)(a1 + 117) = (*(_DWORD *)(a2 + 44) & 0x20) != 0;
      *(_BYTE *)(a1 + 138) = (*(_DWORD *)(a2 + 44) & 0x40) != 0;
      *(_DWORD *)(a1 + 140) = (*(_DWORD *)(a2 + 44) >> 7) & 3;
      *(_DWORD *)(a1 + 120) = *(_DWORD *)(a2 + 112);
      *(_DWORD *)(a1 + 124) = *(_DWORD *)(a2 + 116);
      *(_DWORD *)(a1 + 128) = *(_DWORD *)(a2 + 120);
      *(_DWORD *)(a1 + 132) = *(_DWORD *)(a2 + 124);
      *(_DWORD *)(a1 + 144) = *(_DWORD *)(a2 + 128);
      *(_OWORD *)(a1 + 148) = *(_OWORD *)(a2 + 724);
      *(_OWORD *)(a1 + 164) = *(_OWORD *)(a2 + 748);
      *(_DWORD *)(a1 + 180) = *(_DWORD *)(a2 + 740);
      *(_DWORD *)(a1 + 184) = *(_DWORD *)(a2 + 744);
      *(_DWORD *)(a1 + 556) = *(_DWORD *)(a2 + 720);
      *(_BYTE *)(a1 + 560) = (*(_DWORD *)(a2 + 44) & 0x2000) != 0;
      *(_QWORD *)(a1 + 568) = *(_QWORD *)(a2 + 16);
      *(_DWORD *)(a1 + 584) = *(_DWORD *)(a2 + 24);
      *(_DWORD *)(a1 + 216) = *(_DWORD *)(a2 + 800);
      *(_DWORD *)(a1 + 588) = *(_DWORD *)(a2 + 796);
      *(_BYTE *)(a1 + 565) = (*(_DWORD *)(a2 + 44) & 0x8000000) != 0;
      do
      {
        *v8 = *(_DWORD *)((char *)v8 + a2 - a1 + 576);
        ++v8;
        --v9;
      }
      while ( v9 );
      if ( !*(_QWORD *)(a2 + 32) )
        *(_BYTE *)(a1 + 89) = 1;
      *(_BYTE *)(a1 + 563) = a3;
      v10 = *(_DWORD *)(a2 + 44);
      if ( (v10 & 0x100000) != 0 )
      {
        *(_QWORD *)(a1 + 576) = *(_QWORD *)(a2 + 64);
        *(_BYTE *)(a1 + 561) = 1;
      }
      else if ( (v10 & 0x1000000) != 0 )
      {
        *(_BYTE *)(a1 + 562) = 1;
      }
      v11 = *(_DWORD *)(a2 + 804);
      if ( v11 )
      {
        if ( v11 > 0x10 )
        {
          v7 = -1073741811;
        }
        else
        {
          v12 = 0;
          for ( *(_DWORD *)(a1 + 296) = v11; v12 < *(_DWORD *)(a2 + 804); ++v12 )
          {
            *(_OWORD *)(16LL * v12 + a1 + 300) = *(_OWORD *)(16LL * v12 + a2 + 808);
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 80) + 40LL))(*(_QWORD *)(a1 + 80));
          }
        }
      }
      if ( *(_BYTE *)(a1 + 138) )
      {
        v13 = *(_DWORD *)(a2 + 144);
        *(_DWORD *)(a1 + 220) = v13;
        v14 = v13 - 1;
        if ( v14 )
        {
          if ( v14 == 1 )
          {
            *(_OWORD *)(a1 + 224) = *(_OWORD *)(a2 + 148);
            *(_OWORD *)(a1 + 240) = *(_OWORD *)(a2 + 164);
            *(_OWORD *)(a1 + 256) = *(_OWORD *)(a2 + 180);
            *(_OWORD *)(a1 + 272) = *(_OWORD *)(a2 + 196);
            *(_QWORD *)(a1 + 288) = *(_QWORD *)(a2 + 212);
          }
        }
        else
        {
          *(_OWORD *)(a1 + 224) = *(_OWORD *)(a2 + 148);
          *(_QWORD *)(a1 + 240) = *(_QWORD *)(a2 + 164);
          *(_DWORD *)(a1 + 248) = *(_DWORD *)(a2 + 172);
        }
      }
    }
  }
  CFlipToken::TraceStateChanged((CFlipToken *)a1);
  if ( v7 >= 0 )
  {
    v7 = CompositionSurfaceObject::NotifyTokenCompleted(
           *(CompositionSurfaceObject **)(a1 + 32),
           (const struct CFlipToken *)a1);
    if ( v7 >= 0 && !*(_BYTE *)(a1 + 563) )
    {
      LOBYTE(v16) = 0;
      *(_DWORD *)(a1 + 24) = 3;
      CFlipToken::TraceStateChanged((CFlipToken *)a1);
      return (unsigned int)CompositionSurfaceObject::NotifyTokenInFrame(
                             *(CompositionSurfaceObject **)(a1 + 32),
                             (const struct CToken *)a1,
                             (bool *)&v16);
    }
  }
  return (unsigned int)v7;
}
