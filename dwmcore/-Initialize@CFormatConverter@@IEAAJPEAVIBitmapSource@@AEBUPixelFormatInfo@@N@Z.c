__int64 __fastcall CFormatConverter::Initialize(
        CFormatConverter *this,
        struct IBitmapSource *a2,
        enum DXGI_FORMAT *a3,
        double a4)
{
  bool v7; // zf
  float v8; // xmm0_4
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  int v13; // eax
  unsigned __int64 v14; // r9
  int v15; // eax
  int v16; // eax
  char *v17; // rcx
  unsigned __int8 v19; // [rsp+20h] [rbp-68h]
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v21[16]; // [rsp+38h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v20 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  if ( !a2 || !IsValidPixelFormatInfo(a3) )
  {
    v10 = 402LL;
    goto LABEL_24;
  }
  *(_QWORD *)((char *)this + 84) = *(_QWORD *)a3;
  *((enum DXGI_FORMAT *)this + 23) = a3[2];
  if ( a4 < 0.0 || a4 > 100.0 )
  {
    v10 = 406LL;
LABEL_24:
    v9 = -2147024809;
    goto LABEL_25;
  }
  v7 = *((_QWORD *)this + 8) == 0LL;
  v8 = a4;
  *((float *)this + 26) = v8;
  if ( !v7 )
  {
    v9 = -2003292412;
    v10 = 413LL;
LABEL_25:
    v14 = v9;
    goto LABEL_26;
  }
  v11 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, _BYTE *))a2)(a2, v21);
  v9 = -2003292288;
  *((_QWORD *)this + 9) = *(_QWORD *)v11;
  *((_DWORD *)this + 20) = *(_DWORD *)(v11 + 8);
  v12 = (unsigned int)(*((_DWORD *)this + 18) - 2);
  if ( *((_DWORD *)this + 18) != 2 )
  {
    v12 = (unsigned int)(*((_DWORD *)this + 18) - 10);
    if ( *((_DWORD *)this + 18) != 10 )
    {
      v12 = (unsigned int)(*((_DWORD *)this + 18) - 11);
      if ( *((_DWORD *)this + 18) != 11 )
      {
        v12 = (unsigned int)(*((_DWORD *)this + 18) - 24);
        if ( *((_DWORD *)this + 18) != 24 )
        {
          v12 = (unsigned int)(*((_DWORD *)this + 18) - 28);
          if ( *((_DWORD *)this + 18) != 28 )
          {
            v12 = (unsigned int)(*((_DWORD *)this + 18) - 65);
            if ( *((_DWORD *)this + 18) != 65 )
            {
              v12 = (unsigned int)(*((_DWORD *)this + 18) - 87);
              if ( (unsigned int)v12 >= 2 )
              {
                v10 = 417LL;
                goto LABEL_25;
              }
            }
          }
        }
      }
    }
  }
  v13 = CFormatConverter::HrCheckDstPixelFormat((CFormatConverter *)v12, (enum DXGI_FORMAT)*((_DWORD *)this + 21));
  v9 = v13;
  if ( v13 < 0 )
  {
    v14 = (unsigned int)v13;
    v10 = 418LL;
LABEL_26:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecoreuap\\windows\\dwm\\common\\formatconverter\\formatconverter.cpp",
      (const char *)v14);
    goto LABEL_27;
  }
  v15 = (*(__int64 (__fastcall **)(struct IBitmapSource *, char *, char *))(*(_QWORD *)a2 + 8LL))(
          a2,
          (char *)this + 96,
          (char *)this + 100);
  v9 = v15;
  if ( v15 < 0 )
  {
    v14 = (unsigned int)v15;
    v10 = 420LL;
    goto LABEL_26;
  }
  v16 = CScanPipeline::InitializeForFormatConversion(
          (CFormatConverter *)((char *)this + 112),
          (CFormatConverter *)((char *)this + 84),
          (CFormatConverter *)((char *)this + 72),
          *((_DWORD *)this + 24),
          v19);
  v9 = v16;
  if ( v16 < 0 )
  {
    v14 = (unsigned int)v16;
    v10 = 427LL;
    goto LABEL_26;
  }
  *((_QWORD *)this + 8) = a2;
  v17 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 4LL) + 8;
  (*(void (__fastcall **)(char *))(*(_QWORD *)v17 + 8LL))(v17);
  v9 = 0;
LABEL_27:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v20);
  return v9;
}
