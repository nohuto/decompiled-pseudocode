__int64 __fastcall GreSetSystemPaletteUse(HDC a1, int a2)
{
  int v2; // edi
  unsigned int v3; // ebx
  int v4; // r14d
  struct Gre::Base::SESSION_GLOBALS *v5; // rsi
  __int64 v6; // rax
  Gre::Base *v7; // rcx
  _DWORD *v8; // rax
  int v9; // ecx
  __int64 v10; // rcx
  unsigned int v11; // edx
  __int64 v12; // r9
  __int64 v13; // r10
  __int64 v14; // r11
  __int64 v15; // rdx
  __int64 v16; // r10
  __int64 v17; // r11
  __int64 v18; // rdx
  int v19; // ecx
  unsigned int v20; // r8d
  __int64 v21; // rdx
  unsigned int v22; // ecx
  unsigned int i; // r8d
  __int64 v24; // rdx
  DC *v25; // rcx
  struct _DC_ATTR *UserAttr; // rax
  __int64 v27; // rdi
  DC *v29; // [rsp+30h] [rbp-59h] BYREF
  int v30; // [rsp+38h] [rbp-51h]
  unsigned int v31; // [rsp+3Ch] [rbp-4Dh]
  __int64 v32; // [rsp+40h] [rbp-49h] BYREF
  __int64 v33; // [rsp+48h] [rbp-41h] BYREF
  _BYTE v34[16]; // [rsp+50h] [rbp-39h] BYREF
  __int128 v35; // [rsp+60h] [rbp-29h] BYREF
  __int64 v36; // [rsp+70h] [rbp-19h]
  int v37; // [rsp+78h] [rbp-11h]
  _QWORD v38[2]; // [rsp+80h] [rbp-9h] BYREF
  __int16 v39; // [rsp+90h] [rbp+7h]
  __int64 v40; // [rsp+98h] [rbp+Fh]
  __int64 v41; // [rsp+A0h] [rbp+17h]
  int v42; // [rsp+F8h] [rbp+6Fh] BYREF
  _DWORD *v43; // [rsp+100h] [rbp+77h] BYREF
  __int64 v44; // [rsp+108h] [rbp+7Fh] BYREF

  v2 = a2;
  if ( (unsigned int)(a2 - 1) > 2 )
    v2 = 1;
  v3 = 0;
  v4 = 0;
  DCOBJ::DCOBJ((DCOBJ *)&v29, a1);
  if ( v29 )
  {
    v5 = Gre::Base::Globals(v29);
    v44 = *((_QWORD *)v29 + 6);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v42);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v34, (struct PDEVOBJ *)&v44);
    v33 = *(_QWORD *)(v44 + 56);
    GreAcquireSemaphore(v33);
    v6 = v44;
    v38[1] = 0LL;
    v39 = 256;
    v35 = 0LL;
    v41 = 0LL;
    v40 = 0LL;
    v38[0] = 0LL;
    v37 = 1;
    v7 = (Gre::Base *)*(unsigned int *)(v44 + 40);
    if ( ((unsigned __int8)v7 & 1) != 0 )
    {
      Gre::Base::Globals(v7);
      *(_QWORD *)&v35 = *(_QWORD *)(v44 + 48);
      v36 = v44;
      GreAcquireSemaphore(v35);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v35, 11LL);
      v6 = v44;
    }
    v43 = *(_DWORD **)(v6 + 1776);
    if ( (*(_DWORD *)(v6 + 2140) & 0x100) == 0 )
      goto LABEL_37;
    v32 = *((_QWORD *)v5 + 5);
    GreAcquireSemaphore(v32);
    v8 = v43;
    v9 = v43[6];
    if ( (v9 & 0x1000) != 0 )
      v3 = 2;
    else
      v3 = (v9 & 0x10000 | 0x8000u) >> 15;
    if ( v2 == 1 )
    {
      if ( (v9 & 0x11000) != 0 )
      {
        v10 = *((_QWORD *)v5 + 750);
        v11 = v43[15] >> 1;
        v12 = 10LL;
        if ( v11 > 0xA || (v12 = v11) != 0 )
        {
          v13 = 0LL;
          v14 = (unsigned int)v12;
          do
          {
            v15 = *((_QWORD *)v8 + 14);
            v42 = *(_DWORD *)(v13 + *(_QWORD *)(v10 + 112));
            HIBYTE(v42) = 48;
            *(_DWORD *)(v13 + v15) = v42;
            v13 += 4LL;
            v8 = v43;
            --v14;
          }
          while ( v14 );
        }
        else
        {
          v12 = 0LL;
        }
        LODWORD(v16) = v8[7];
        LODWORD(v17) = 20;
        if ( (_DWORD)v12 )
        {
          while ( 1 )
          {
            v17 = (unsigned int)(v17 - 1);
            v16 = (unsigned int)(v16 - 1);
            v18 = *((_QWORD *)v8 + 14);
            v42 = *(_DWORD *)(*(_QWORD *)(v10 + 112) + 4 * v17);
            HIBYTE(v42) = 48;
            *(_DWORD *)(v18 + 4 * v16) = v42;
            if ( !--v12 )
              break;
            v8 = v43;
          }
        }
        *(_DWORD *)(*((_QWORD *)v29 + 122) + 152LL) |= 0xFu;
        v43[6] &= 0xFFFEEFFF;
        XEPALOBJ::vUpdateTime((XEPALOBJ *)&v43);
        v4 = 1;
      }
      goto LABEL_32;
    }
    if ( v2 == 2 )
    {
      v19 = v43[7];
      if ( !v19 )
      {
        v3 = 0;
LABEL_32:
        SEMOBJ::vUnlock((SEMOBJ *)&v32);
        if ( v4 && (*(_DWORD *)(v44 + 40) & 0x400) == 0 )
        {
          if ( *(_QWORD *)(v44 + 1736) )
            (*(void (__fastcall **)(_QWORD, _DWORD **, _QWORD, _QWORD, _DWORD))(v44 + 1736))(
              *(_QWORD *)(*(_QWORD *)(v44 + 24) + 1768LL),
              &v43,
              0LL,
              0LL,
              v43[7]);
          else
            v3 = 0;
        }
LABEL_37:
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v35);
        if ( v38[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v38);
        SEMOBJ::vUnlock((SEMOBJ *)&v33);
        NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v34);
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v42);
        v25 = v29;
        if ( v29 )
        {
          if ( v30 && (*((_DWORD *)v29 + 11) & 2) != 0 )
          {
            if ( !v31 )
            {
              UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v29);
              v25 = v29;
              if ( UserAttr )
              {
                DC::RestoreAttributes(v29, UserAttr);
                v25 = v29;
              }
            }
            *((_DWORD *)v25 + 11) &= ~2u;
            v25 = v29;
            v30 = 0;
          }
          v42 = 0;
          v27 = *(_QWORD *)v25;
          HmgDecrementExclusiveReferenceCountEx(v25, v31, &v42);
          if ( v42 )
            GrepDeleteDC(v27, 0x2000000LL);
        }
        return v3;
      }
      v20 = 1;
      if ( (unsigned int)(v19 - 1) > 1 )
      {
        do
        {
          v21 = v20++;
          *(_BYTE *)(*((_QWORD *)v8 + 14) + 4 * v21 + 3) = 0;
          v8 = v43;
        }
        while ( v20 < v43[7] - 1 );
      }
      v22 = v8[6] & 0xFFFEEFFF | 0x1000;
    }
    else
    {
      for ( i = 0; i < v43[7]; v8 = v43 )
      {
        v24 = i++;
        *(_BYTE *)(*((_QWORD *)v8 + 14) + 4 * v24 + 3) = 0;
      }
      v22 = v8[6] & 0xFFFEEFFF | 0x10000;
    }
    v8[6] = v22;
    goto LABEL_32;
  }
  return v3;
}
