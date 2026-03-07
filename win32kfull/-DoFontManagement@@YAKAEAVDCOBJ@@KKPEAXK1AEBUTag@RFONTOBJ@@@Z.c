__int64 __fastcall DoFontManagement(
        struct DCOBJ *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int16 *a4,
        unsigned int a5,
        void *a6,
        const struct RFONTOBJ::Tag *a7)
{
  size_t v8; // rsi
  unsigned int v9; // edi
  unsigned int v11; // ebx
  __int64 v12; // r8
  __int64 (__fastcall *v13)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // r15
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // r15
  unsigned __int16 *v18; // rdi
  void *v19; // rax
  struct _SURFOBJ *v21; // rcx
  __int64 v22; // r9
  __int64 v23; // r10
  struct _SURFOBJ *v24; // rax
  _QWORD v25[2]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v26[16]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 (__fastcall *v27)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // [rsp+60h] [rbp-A8h]
  _BYTE v28[32]; // [rsp+68h] [rbp-A0h] BYREF
  int v29; // [rsp+88h] [rbp-80h]
  _BYTE v30[80]; // [rsp+90h] [rbp-78h] BYREF
  Gre::Base *v31; // [rsp+110h] [rbp+8h] BYREF
  unsigned int v32; // [rsp+118h] [rbp+10h]

  v32 = a2;
  v8 = a3;
  v9 = a2;
  v11 = 0;
  v25[0] = 0LL;
  v31 = (Gre::Base *)v25;
  wil::scope_exit__lambda_3c37ad0d9e9c71fe69a6ff6ac7bd17c8___((__int64)v26, &v31);
  v13 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))(v12 + 3040);
  v27 = v13;
  if ( v13 )
  {
    if ( v9 == 8 )
    {
      if ( (*(_DWORD *)(v12 + 40) & 0x8000) != 0 )
        v14 = *(_QWORD *)(v12 + 1768);
      else
        v14 = 0LL;
      v11 = v13(v14, 0LL, 8LL, (unsigned int)v8, a4, 0, 0LL);
      goto LABEL_39;
    }
    v31 = 0LL;
    if ( (unsigned int)RFONTOBJ::bInit(&v31, a1, 0, 2u, a7) )
      GreAcquireSemaphore(*((_QWORD *)v31 + 63));
    if ( v31 )
    {
      v29 = 0;
      if ( v9 == 514 )
      {
        v17 = (unsigned __int64)(int)v8 >> 1;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + 40LL) & 0x8000) != 0 )
        {
          if ( (unsigned int)v8 > 0x2710000 )
            goto LABEL_26;
          v18 = (_DWORD)v8 ? (unsigned __int16 *)Win32AllocPool(v8, 1886221383LL, v15, v16) : 0LL;
          v25[1] = v18;
          if ( !v18 )
            goto LABEL_26;
          memmove(v18, a4, v8);
        }
        else
        {
          v18 = a4;
        }
        LODWORD(v8) = 4 * v17;
        if ( (unsigned int)v17 <= 0x9C4000 && (_DWORD)v8 )
          v19 = (void *)Win32AllocPoolZInit((unsigned int)v8, 1835426887LL);
        else
          v19 = 0LL;
        v25[0] = v19;
        if ( !v19 )
        {
          if ( v18 != a4 )
            Win32FreePool(v18);
          goto LABEL_26;
        }
        CAutoTGO::vGuard((CAutoTGO *)v28, v19, Win32FreePool);
        if ( (int)v17 > 1 )
          RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v31, v18 + 1, v17 - 1, (unsigned int *)(v25[0] + 4LL), 0, 0);
        *(_DWORD *)v25[0] = *v18;
        if ( v18 != a4 )
          Win32FreePool(v18);
        a4 = (unsigned __int16 *)v25[0];
        v9 = v32;
        v13 = v27;
      }
      v21 = SURFACE::pSurfobj(*(SURFACE **)(*(_QWORD *)a1 + 496LL));
      if ( v21 )
      {
        v11 = v13(v21, v23, v9, (unsigned int)v8, a4, a5, a6);
      }
      else
      {
        SURFFAKEOBJ::SURFFAKEOBJ((SURFFAKEOBJ *)v30, *(HDEV *)(v22 + 48), *(struct DHPDEV__ **)(v22 + 24));
        if ( !SURFREF::bValid((SURFREF *)v30) )
        {
          SURFFAKEOBJ::~SURFFAKEOBJ((SURFFAKEOBJ *)v30);
LABEL_26:
          CAutoTGO::~CAutoTGO((CAutoTGO *)v28);
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v31);
          wil::details::lambda_call__lambda_3c37ad0d9e9c71fe69a6ff6ac7bd17c8___::_lambda_call__lambda_3c37ad0d9e9c71fe69a6ff6ac7bd17c8___((__int64)v26);
          return 0LL;
        }
        v24 = SURFREF::pSurfobj((SURFREF *)v30);
        v11 = v13(v24, v31, v9, (unsigned int)v8, a4, a5, a6);
        SURFFAKEOBJ::~SURFFAKEOBJ((SURFFAKEOBJ *)v30);
      }
      CAutoTGO::~CAutoTGO((CAutoTGO *)v28);
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v31);
  }
LABEL_39:
  wil::details::lambda_call__lambda_3c37ad0d9e9c71fe69a6ff6ac7bd17c8___::_lambda_call__lambda_3c37ad0d9e9c71fe69a6ff6ac7bd17c8___((__int64)v26);
  return v11;
}
