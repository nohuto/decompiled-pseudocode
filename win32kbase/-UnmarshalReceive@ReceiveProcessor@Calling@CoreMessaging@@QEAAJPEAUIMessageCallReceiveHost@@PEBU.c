__int64 __fastcall CoreMessaging::Calling::ReceiveProcessor::UnmarshalReceive(
        CoreMessaging::Calling::ReceiveProcessor *this,
        struct IMessageCallReceiveHost *a2,
        const struct MsgCallTypeDefinition *a3,
        const unsigned __int8 *a4,
        bool a5,
        unsigned int a6,
        char *a7,
        unsigned int a8)
{
  __int64 v9; // rsi
  char *v10; // rcx
  _DWORD *v11; // rdi
  __int64 v12; // r8
  char *v13; // rdx
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // eax
  __int64 v17; // rcx
  char *v18; // rax
  unsigned int v19; // ecx
  __int64 v20; // rdx
  bool v21; // zf
  __int64 v22; // rdx
  int v23; // ecx
  char *v24; // rdx
  char v25; // al
  _BYTE *v26; // rdx
  __int64 v27; // rbp
  int v28; // ecx
  unsigned int v29; // eax
  unsigned int *v30; // rdx
  unsigned int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rcx
  int v34; // eax
  const unsigned __int8 *v36; // [rsp+48h] [rbp+20h] BYREF

  v36 = a4;
  if ( !a2 )
    return 2147942487LL;
  v9 = a8;
  if ( !a8 )
    return 0LL;
  v10 = a7;
  if ( !a7 )
    return 2147942487LL;
  *((_DWORD *)this + 31) = -1;
  v11 = (_DWORD *)((char *)this + 120);
  v12 = 0LL;
  *((_QWORD *)this + 17) = a2;
  *((_DWORD *)this + 30) = 0;
  if ( (((_DWORD)v9 + 3) & 0xFFFFFFFC) != (_DWORD)v9 )
    goto LABEL_52;
  v13 = &v10[v9];
  *((_BYTE *)this + 112) = 1;
  *((_QWORD *)this + 11) = v10;
  *((_QWORD *)this + 12) = v10;
  if ( &v10[v9] < v10 )
  {
    *((_QWORD *)this + 13) = -1LL;
    goto LABEL_52;
  }
  *((_QWORD *)this + 13) = v13;
  if ( (unsigned int)v9 < 8 )
  {
LABEL_52:
    *v11 = 2;
    goto LABEL_36;
  }
  if ( (unsigned int)((_DWORD)v13 - *((_DWORD *)this + 24)) < 8
    || (v14 = *((_QWORD *)this + 12), *((_QWORD *)this + 12) = v14 + 8, !v14) )
  {
    CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\receiveprocessor.cpp", 0x86uLL);
  }
  v15 = *((_DWORD *)this + 32);
  if ( !(*(_DWORD *)v14 >> v15) )
  {
    if ( (*(_DWORD *)v14 & (unsigned int)((1 << v15) - 1)) << *((_DWORD *)this + 33) <= (unsigned int)v9 )
    {
      v16 = 0;
      v17 = 0LL;
      while ( *(_WORD *)((char *)&Microsoft::CoreUI::Registrar::IRegistrarClient_Receive<CoreMessagingK::RegistrarClientThunk>::Interfaces
                       + v17) != *(_WORD *)(v14 + 4) )
      {
        ++v16;
        v17 += 16LL;
        if ( v16 >= 1 )
          goto LABEL_45;
      }
      v18 = (char *)&Microsoft::CoreUI::Registrar::IRegistrarClient_Receive<CoreMessagingK::RegistrarClientThunk>::Interfaces
          + 16 * v16;
      if ( !v18 )
      {
LABEL_45:
        *v11 = 3;
        goto LABEL_36;
      }
      v19 = *(unsigned __int16 *)(v14 + 6);
      if ( (unsigned __int16)v19 >= *((_WORD *)v18 + 1) )
      {
        *v11 = 5;
      }
      else
      {
        *((_QWORD *)this + 18) = v18;
        v20 = 16LL * v19;
        v21 = *((_QWORD *)v18 + 1) + v20 == 0;
        v22 = *((_QWORD *)v18 + 1) + v20;
        *((_QWORD *)this + 19) = v22;
        if ( v21 )
        {
          *v11 = 201;
        }
        else
        {
          v23 = *(unsigned __int8 *)(v22 + 10);
          *((_DWORD *)this + 20) = v23;
          if ( v23 )
          {
            *(_QWORD *)this = Microsoft::CoreUI::MessageCall::CoreMessagingK_g_parameters_v6_E_vySEVWcCmpXKquzqZATsBE_IRegistrar;
            v24 = &Microsoft::CoreUI::MessageCall::CoreMessagingK_g_parameters_v6_E_vySEVWcCmpXKquzqZATsBE_IRegistrar[*(unsigned __int16 *)(v22 + 8)];
            *(_QWORD *)this = v24;
            if ( v24 >= byte_1C0287284
              || v24 < Microsoft::CoreUI::MessageCall::CoreMessagingK_g_parameters_v6_E_vySEVWcCmpXKquzqZATsBE_IRegistrar )
            {
              *v11 = 202;
            }
            else
            {
              v25 = *v24;
              v26 = v24 + 1;
              *(_QWORD *)this = v26;
              if ( v25 == (_BYTE)v23 )
              {
                v27 = 0LL;
                *((_QWORD *)this + 1) = v26;
                *((_DWORD *)this + 31) = 0;
                while ( 1 )
                {
                  v28 = *((_DWORD *)this + 26);
                  v29 = v28 - *((_DWORD *)this + 24);
                  a6 = 0;
                  LODWORD(v36) = 0;
                  a5 = 0;
                  if ( v29 < 4 )
                    break;
                  v30 = (unsigned int *)*((_QWORD *)this + 12);
                  *((_QWORD *)this + 12) = v30 + 1;
                  if ( !v30 )
                    break;
                  v31 = *v30;
                  *((_DWORD *)this + 21) = *v30;
                  if ( v31 > 0xFFFFFFFC )
                    goto LABEL_42;
                  if ( v31 )
                  {
                    v32 = (v31 + 3) & 0xFFFFFFFC;
                    if ( v28 - *((_DWORD *)this + 24) >= (unsigned int)v32 )
                    {
                      v33 = *((_QWORD *)this + 12);
                      *((_QWORD *)this + 12) = v33 + v32;
                    }
                    else
                    {
                      v33 = 0LL;
                    }
                    *((_QWORD *)this + 52) = v33;
                    if ( !v33 )
                      goto LABEL_52;
                  }
                  else
                  {
                    *((_QWORD *)this + 52) = 0LL;
                  }
                  v34 = CoreMessaging::Calling::ReceiveProcessor::ReadExpectedParameterSize(
                          this,
                          &a6,
                          &a5,
                          (unsigned int *)&v36);
                  v12 = (unsigned int)v34;
                  if ( v34 < 0 )
                    goto LABEL_36;
                  if ( a6 != *((_DWORD *)this + 21) && a6 )
                    goto LABEL_42;
                  *((_QWORD *)this + v27 + 20) = *((_QWORD *)this + 52);
                  v27 = (unsigned int)(v27 + 1);
                  if ( a5 )
                  {
                    *((_QWORD *)this + v27 + 20) = (unsigned int)v36;
                    v27 = (unsigned int)(v27 + 1);
                  }
                  if ( ++*((_DWORD *)this + 31) >= *((_DWORD *)this + 20) )
                    goto LABEL_33;
                }
              }
              *v11 = 6;
            }
          }
          else
          {
LABEL_33:
            if ( *((_DWORD *)this + 24) - *((_DWORD *)this + 22) == (_DWORD)v9 )
              v12 = 0LL;
            else
LABEL_42:
              *v11 = 7;
          }
        }
      }
      goto LABEL_36;
    }
    goto LABEL_52;
  }
  *v11 = 8;
LABEL_36:
  if ( *v11 )
  {
    LODWORD(v12) = (*(__int64 (__fastcall **)(_QWORD, char *, __int64))(**((_QWORD **)this + 17) + 32LL))(
                     *((_QWORD *)this + 17),
                     (char *)this + 120,
                     v12);
    if ( (int)v12 >= 0 )
      LODWORD(v12) = -2018375668;
  }
  return (unsigned int)v12;
}
