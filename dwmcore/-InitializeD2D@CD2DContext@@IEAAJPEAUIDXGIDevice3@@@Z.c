__int64 __fastcall CD2DContext::InitializeD2D(struct CD2DResourceManager **this, struct IDXGIDevice3 *a2)
{
  __int64 v2; // rax
  bool v5; // zf
  __int64 v6; // rcx
  int v7; // ebx
  int D2DDevice; // eax
  _QWORD *v9; // rsi
  _QWORD *v10; // r14
  __int64 v11; // rcx
  int v13; // r9d
  unsigned int v14; // [rsp+20h] [rbp-48h]
  __int64 v15; // [rsp+30h] [rbp-38h] BYREF
  __int128 v16; // [rsp+38h] [rbp-30h] BYREF

  v15 = 0LL;
  v2 = (__int64)(this + 134);
  v5 = this == 0LL;
  v6 = 1088LL;
  if ( v5 )
    v2 = 1088LL;
  v7 = *(_DWORD *)v2;
  if ( *(int *)v2 < 0 )
  {
    v13 = *(_DWORD *)v2;
    v14 = 33;
  }
  else
  {
    D2DDevice = CD2DResourceManager::Create((struct CD2DContext *)this, this + 21);
    v7 = D2DDevice;
    if ( D2DDevice < 0 )
    {
      v14 = 35;
    }
    else
    {
      v9 = this + 23;
      D2DDevice = CD2DFactory::CreateD2DDevice((CD2DFactory *)v6, a2, this + 23);
      v7 = D2DDevice;
      if ( D2DDevice < 0 )
      {
        v14 = 38;
      }
      else
      {
        D2DDevice = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v9)(
                      *v9,
                      &GUID_46fdbfea_53f8_440c_b9e2_81dfec612a72,
                      (char *)this + 192);
        v7 = D2DDevice;
        if ( D2DDevice < 0 )
        {
          v14 = 40;
        }
        else
        {
          D2DDevice = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)*v9 + 32LL))(*v9, 0LL, &v15);
          v7 = D2DDevice;
          if ( D2DDevice < 0 )
          {
            v14 = 43;
          }
          else
          {
            v10 = this + 25;
            D2DDevice = (**(__int64 (__fastcall ***)(__int64, GUID *, char *))v15)(
                          v15,
                          &GUID_394ea6a3_0c34_4321_950b_6ca20f0be6c7,
                          (char *)this + 200);
            v7 = D2DDevice;
            if ( D2DDevice < 0 )
            {
              v14 = 45;
            }
            else
            {
              D2DDevice = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v10)(
                            *v10,
                            &GUID_2ea67ed7_d42e_4c07_9dd5_a91ea23e01d2,
                            (char *)this + 208);
              v7 = D2DDevice;
              if ( D2DDevice < 0 )
              {
                v14 = 47;
              }
              else
              {
                v11 = *v10;
                v16 = 0LL;
                D2DDevice = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD, char *))(*(_QWORD *)v11 + 64LL))(
                              v11,
                              &v16,
                              0LL,
                              (char *)this + 312);
                v7 = D2DDevice;
                if ( D2DDevice < 0 )
                {
                  v14 = 51;
                }
                else
                {
                  D2DDevice = CD2DContext::PopulateEffectTable((CD2DContext *)this);
                  v7 = D2DDevice;
                  if ( D2DDevice >= 0 )
                  {
                    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v9 + 48LL))(*v9, 0x40000000LL);
                    CD2DContext::D2DRemoveClip((CD2DContext *)this);
                    goto LABEL_13;
                  }
                  v14 = 53;
                }
              }
            }
          }
        }
      }
    }
    v13 = D2DDevice;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v13, v14, 0LL);
LABEL_13:
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return CD3DDevice::TranslateDXGIorD3DErrorInContext((unsigned __int64)(this - 2) & -(__int64)(this != 0LL), v7, 0);
}
