__int64 __fastcall GreRealizeDefaultPalette(HDC a1, int a2)
{
  struct Gre::Base::SESSION_GLOBALS *v3; // rsi
  __int64 v4; // rax
  Gre::Base *v5; // rcx
  DC *v6; // rcx
  struct _DC_ATTR *UserAttr; // rax
  __int64 v8; // rbx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned int v13; // edx
  __int64 v14; // r8
  __int64 v15; // rcx
  DC *v16; // [rsp+20h] [rbp-49h] BYREF
  int v17; // [rsp+28h] [rbp-41h]
  unsigned int v18; // [rsp+2Ch] [rbp-3Dh]
  __int64 v19; // [rsp+30h] [rbp-39h] BYREF
  __int64 v20; // [rsp+38h] [rbp-31h] BYREF
  _BYTE v21[16]; // [rsp+40h] [rbp-29h] BYREF
  __int128 v22; // [rsp+50h] [rbp-19h] BYREF
  __int64 v23; // [rsp+60h] [rbp-9h]
  int v24; // [rsp+68h] [rbp-1h]
  _QWORD v25[2]; // [rsp+70h] [rbp+7h] BYREF
  __int16 v26; // [rsp+80h] [rbp+17h]
  __int64 v27; // [rsp+88h] [rbp+1Fh]
  __int64 v28; // [rsp+90h] [rbp+27h]
  int v29; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v30; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v31; // [rsp+E8h] [rbp+7Fh] BYREF

  v29 = a2;
  DCOBJ::DCOBJ((DCOBJ *)&v16, a1);
  if ( v16 )
  {
    v3 = Gre::Base::Globals(v16);
    v30 = *((_QWORD *)v16 + 6);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v29);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v21, (struct PDEVOBJ *)&v30);
    v20 = *(_QWORD *)(v30 + 56);
    GreAcquireSemaphore(v20);
    v4 = v30;
    v25[1] = 0LL;
    v26 = 256;
    v22 = 0LL;
    v28 = 0LL;
    v27 = 0LL;
    v25[0] = 0LL;
    v24 = 1;
    v5 = (Gre::Base *)*(unsigned int *)(v30 + 40);
    if ( ((unsigned __int8)v5 & 1) != 0 )
    {
      Gre::Base::Globals(v5);
      *(_QWORD *)&v22 = *(_QWORD *)(v30 + 48);
      v23 = v30;
      GreAcquireSemaphore(v22);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v22, 11LL);
      v4 = v30;
    }
    if ( (*(_DWORD *)(v4 + 2140) & 0x100) != 0 )
    {
      v11 = *((_QWORD *)v3 + 5);
      v31 = *(_QWORD *)(v4 + 1776);
      v10 = v31;
      v19 = v11;
      GreAcquireSemaphore(v11);
      if ( (*(_DWORD *)(v10 + 24) & 0x11000) != 0 )
        GreSetSystemPaletteUse(a1);
      v12 = *(_DWORD *)(v10 + 60) >> 1;
      v13 = *(_DWORD *)(v10 + 28) - v12;
      if ( (unsigned int)v12 < v13 )
      {
        v14 = 4 * v12;
        v15 = v13 - (unsigned int)v12;
        do
        {
          v14 += 4LL;
          *(_BYTE *)(v14 + *(_QWORD *)(v10 + 112) - 1) &= ~0x20u;
          --v15;
        }
        while ( v15 );
      }
      *((_QWORD *)v3 + 479) = 0LL;
      XEPALOBJ::vUpdateTime((XEPALOBJ *)&v31);
      *(_DWORD *)(*((_QWORD *)v16 + 122) + 152LL) |= 0xFu;
      SEMOBJ::vUnlock((SEMOBJ *)&v19);
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v22);
    if ( v25[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v25);
    SEMOBJ::vUnlock((SEMOBJ *)&v20);
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v21);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v29);
    v6 = v16;
    if ( v16 )
    {
      if ( v17 && (*((_DWORD *)v16 + 11) & 2) != 0 )
      {
        if ( !v18 )
        {
          UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v16);
          v6 = v16;
          if ( UserAttr )
          {
            DC::RestoreAttributes(v16, UserAttr);
            v6 = v16;
          }
        }
        *((_DWORD *)v6 + 11) &= ~2u;
        v6 = v16;
        v17 = 0;
      }
      v29 = 0;
      v8 = *(_QWORD *)v6;
      HmgDecrementExclusiveReferenceCountEx(v6, v18, &v29);
      if ( v29 )
        GrepDeleteDC(v8, 0x2000000LL);
    }
  }
  return 0LL;
}
