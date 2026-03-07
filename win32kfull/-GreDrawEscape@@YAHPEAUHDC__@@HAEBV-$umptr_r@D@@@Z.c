__int64 __fastcall GreDrawEscape(HDC a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v5; // r14d
  DC *v6; // rdx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64, _BYTE *, struct _RECTL *, int, _QWORD); // r12
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // eax
  struct REGION *v13; // rax
  Gre::Base *v14; // rcx
  __int64 v15; // rax
  _QWORD *v16; // rdi
  DC *v17[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v18[32]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+70h] [rbp-90h] BYREF
  int v20; // [rsp+78h] [rbp-88h]
  int v21; // [rsp+7Ch] [rbp-84h]
  __int16 v22; // [rsp+80h] [rbp-80h]
  struct _RECTL v23; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v24[32]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v25; // [rsp+D0h] [rbp-30h]
  _BYTE v26[4]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v27[76]; // [rsp+E4h] [rbp-1Ch] BYREF
  __int64 v28; // [rsp+130h] [rbp+30h]
  int v29; // [rsp+138h] [rbp+38h]
  int v30; // [rsp+160h] [rbp+60h]
  __int64 v31; // [rsp+170h] [rbp+70h]

  v5 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v17, a1);
  v6 = v17[0];
  if ( !v17[0] )
    return v5;
  if ( *((_QWORD *)v17[0] + 62) && (**((_DWORD **)v17[0] + 122) & 1) == 0 )
  {
    if ( a2 == 8 && a3[1] - a3[2] < 4uLL )
    {
      DCOBJ::~DCOBJ((DCOBJ *)v17);
      return 0LL;
    }
    v19 = 0LL;
    v20 = 0;
    v21 = 0;
    v22 = 256;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v18, (struct XDCOBJ *)v17, 0);
    v8 = *((_QWORD *)v17[0] + 6);
    v9 = *(__int64 (__fastcall **)(__int64, __int64, _BYTE *, struct _RECTL *, int, _QWORD))(v8 + 2864);
    if ( !v9 )
      goto LABEL_25;
    if ( a2 == 8 )
    {
      v10 = *((_QWORD *)v17[0] + 62);
      v11 = v10 + 112;
      if ( !v10 )
        v11 = 88LL;
      if ( (*(_DWORD *)v11 & 0x200000) == 0 )
        goto LABEL_25;
      v12 = v9((v10 + 24) & -(__int64)(v10 != 0), 8LL, 0LL, 0LL, *((_DWORD *)a3 + 2) - *((_DWORD *)a3 + 4), a3[2] + *a3);
    }
    else
    {
      if ( (v18[24] & 1) != 0 )
      {
        v23 = *(struct _RECTL *)((char *)v17[0] + 1032);
        v13 = XDCOBJ::prgnEffRao(v17);
        v28 = 0LL;
        v29 = 0;
        v31 = 0LL;
        v30 = 1;
        XCLIPOBJ::vSetup((XCLIPOBJ *)v26, v13, (struct ERECTL *)&v23, 0);
        if ( ERECTL::bEmpty((ERECTL *)v27) )
        {
          v5 = 1;
        }
        else
        {
          v14 = (Gre::Base *)*((_QWORD *)v17[0] + 62);
          v15 = (__int64)v14 + 112;
          if ( !v14 )
            v15 = 88LL;
          if ( (*(_DWORD *)v15 & 0x200000) != 0 )
          {
            v16 = (_QWORD *)((char *)Gre::Base::Globals(v14) + 112);
            if ( (*(_DWORD *)(v8 + 40) & 1) != 0 )
            {
              GreAcquireSemaphore(*v16);
              EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemSprite", *v16, 5LL);
            }
            v25 = 0LL;
            DEVEXCLUDERECT::vExclude((DEVEXCLUDERECT *)v24, (struct XDCOBJ *)v17, &v23);
            ++*(_DWORD *)(*((_QWORD *)v17[0] + 62) + 92LL);
            v5 = v9(
                   (*((_QWORD *)v17[0] + 62) + 24LL) & -(__int64)(*((_QWORD *)v17[0] + 62) != 0LL),
                   a2,
                   v26,
                   &v23,
                   *((_DWORD *)a3 + 2) - *((_DWORD *)a3 + 4),
                   a3[2] + *a3);
            DEVEXCLUDERECT::~DEVEXCLUDERECT((DEVEXCLUDERECT *)v24);
            if ( (*(_DWORD *)(v8 + 40) & 1) != 0 )
            {
              EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemSprite");
              GreReleaseSemaphoreInternal(*v16);
            }
          }
        }
        goto LABEL_25;
      }
      v12 = XDCOBJ::bFullScreen((XDCOBJ *)v17);
    }
    v5 = v12;
LABEL_25:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v18);
    if ( v19 )
      DLODCOBJ::vUnlock((DLODCOBJ *)&v19);
    v6 = v17[0];
  }
  if ( v6 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v17);
  return v5;
}
