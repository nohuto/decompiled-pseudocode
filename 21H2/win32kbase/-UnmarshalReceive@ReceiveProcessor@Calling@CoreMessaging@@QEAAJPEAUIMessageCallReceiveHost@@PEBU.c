/*
 * XREFs of ?UnmarshalReceive@ReceiveProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallReceiveHost@@PEBUMsgCallTypeDefinition@@PEBEIIPEBXI@Z @ 0x1C00AA7A8
 * Callers:
 *     CoreUICallReceive @ 0x1C00AA6F0 (CoreUICallReceive.c)
 * Callees:
 *     ?ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAIPEA_N0@Z @ 0x1C00AAA48 (-ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAIPEA_N0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z @ 0x1C0241F9C (-Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z.c)
 */

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
  __int64 v12; // r9
  char *v13; // rdx
  int v14; // ecx
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  bool v18; // zf
  __int64 v19; // rdx
  char *v20; // rcx
  char v21; // al
  _BYTE *v22; // rcx
  __int64 v23; // rbp
  int v24; // edx
  unsigned int v25; // eax
  unsigned int *v26; // rax
  _DWORD *v27; // rcx
  unsigned int v28; // eax
  __int64 v29; // rax
  int v30; // eax
  const unsigned __int8 *v32; // [rsp+48h] [rbp+20h] BYREF

  v32 = a4;
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
    goto LABEL_50;
  v13 = &v10[v9];
  *((_BYTE *)this + 112) = 1;
  *((_QWORD *)this + 11) = v10;
  *((_QWORD *)this + 12) = v10;
  if ( &v10[v9] < v10 )
  {
    *((_QWORD *)this + 13) = -1LL;
    goto LABEL_50;
  }
  *((_QWORD *)this + 13) = v13;
  if ( (unsigned int)v9 < 8 )
  {
LABEL_50:
    *v11 = 2;
    goto LABEL_34;
  }
  if ( (unsigned int)((_DWORD)v13 - *((_DWORD *)this + 24)) < 8
    || (a3 = (const struct MsgCallTypeDefinition *)*((_QWORD *)this + 12), *((_QWORD *)this + 12) = (char *)a3 + 8, !a3) )
  {
    CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\receiveprocessor.cpp", 0x86uLL);
  }
  v14 = *((_DWORD *)this + 32);
  if ( !(*(_DWORD *)a3 >> v14) )
  {
    if ( (*(_DWORD *)a3 & (unsigned int)((1 << v14) - 1)) << *((_DWORD *)this + 33) <= (unsigned int)v9 )
    {
      if ( Microsoft::CoreUI::Registrar::IRegistrarClient_Receive<CoreMessagingK::RegistrarClientThunk>::Interfaces == *((_WORD *)a3 + 2)
        && &Microsoft::CoreUI::Registrar::IRegistrarClient_Receive<CoreMessagingK::RegistrarClientThunk>::Interfaces )
      {
        v15 = *((unsigned __int16 *)a3 + 3);
        if ( (unsigned __int16)v15 >= *((_WORD *)&Microsoft::CoreUI::Registrar::IRegistrarClient_Receive<CoreMessagingK::RegistrarClientThunk>::Interfaces
                                      + 1) )
        {
          *v11 = 5;
        }
        else
        {
          *((_QWORD *)this + 18) = &Microsoft::CoreUI::Registrar::IRegistrarClient_Receive<CoreMessagingK::RegistrarClientThunk>::Interfaces;
          v16 = *((_QWORD *)&Microsoft::CoreUI::Registrar::IRegistrarClient_Receive<CoreMessagingK::RegistrarClientThunk>::Interfaces
                + 1);
          v17 = 16LL * v15;
          v18 = v17 + v16 == 0;
          v19 = v17 + v16;
          *((_QWORD *)this + 19) = v19;
          if ( v18 )
          {
            *v11 = 201;
          }
          else
          {
            a3 = (const struct MsgCallTypeDefinition *)*(unsigned __int8 *)(v19 + 10);
            *((_DWORD *)this + 20) = (_DWORD)a3;
            if ( (_DWORD)a3 )
            {
              *(_QWORD *)this = Microsoft::CoreUI::MessageCall::CoreMessagingK_g_parameters_v6_E_vySEVWcCmpXKquzqZATsBE_IRegistrar;
              v20 = &Microsoft::CoreUI::MessageCall::CoreMessagingK_g_parameters_v6_E_vySEVWcCmpXKquzqZATsBE_IRegistrar[*(unsigned __int16 *)(v19 + 8)];
              *(_QWORD *)this = v20;
              if ( v20 >= byte_1C0250E34
                || v20 < Microsoft::CoreUI::MessageCall::CoreMessagingK_g_parameters_v6_E_vySEVWcCmpXKquzqZATsBE_IRegistrar )
              {
                *v11 = 202;
              }
              else
              {
                v21 = *v20;
                v22 = v20 + 1;
                *(_QWORD *)this = v22;
                if ( v21 == (_BYTE)a3 )
                {
                  v23 = 0LL;
                  *((_QWORD *)this + 1) = v22;
                  *((_DWORD *)this + 31) = 0;
                  while ( 1 )
                  {
                    v24 = *((_DWORD *)this + 26);
                    v25 = v24 - *((_DWORD *)this + 24);
                    a6 = 0;
                    LODWORD(v32) = 0;
                    a5 = 0;
                    if ( v25 < 4 )
                      break;
                    v26 = (unsigned int *)*((_QWORD *)this + 12);
                    v27 = v26 + 1;
                    *((_QWORD *)this + 12) = v26 + 1;
                    if ( !v26 )
                      break;
                    v28 = *v26;
                    *((_DWORD *)this + 21) = v28;
                    if ( v28 > 0xFFFFFFFC )
                      goto LABEL_39;
                    if ( v28 )
                    {
                      v29 = (v28 + 3) & 0xFFFFFFFC;
                      if ( v24 - (int)v27 >= (unsigned int)v29 )
                        *((_QWORD *)this + 12) = (char *)v27 + v29;
                      else
                        v27 = 0LL;
                      *((_QWORD *)this + 52) = v27;
                      if ( !v27 )
                        goto LABEL_50;
                    }
                    else
                    {
                      *((_QWORD *)this + 52) = 0LL;
                    }
                    v30 = CoreMessaging::Calling::ReceiveProcessor::ReadExpectedParameterSize(
                            this,
                            &a6,
                            &a5,
                            (unsigned int *)&v32);
                    v12 = (unsigned int)v30;
                    if ( v30 < 0 )
                      goto LABEL_34;
                    if ( a6 != *((_DWORD *)this + 21) && a6 )
                      goto LABEL_39;
                    *((_QWORD *)this + v23 + 20) = *((_QWORD *)this + 52);
                    v23 = (unsigned int)(v23 + 1);
                    if ( a5 )
                    {
                      *((_QWORD *)this + v23 + 20) = (unsigned int)v32;
                      v23 = (unsigned int)(v23 + 1);
                    }
                    if ( ++*((_DWORD *)this + 31) >= *((_DWORD *)this + 20) )
                      goto LABEL_32;
                  }
                }
                *v11 = 6;
              }
            }
            else
            {
LABEL_32:
              if ( *((_DWORD *)this + 24) - *((_DWORD *)this + 22) == (_DWORD)v9 )
                v12 = 0LL;
              else
LABEL_39:
                *v11 = 7;
            }
          }
        }
      }
      else
      {
        *v11 = 3;
      }
      goto LABEL_34;
    }
    goto LABEL_50;
  }
  *v11 = 8;
LABEL_34:
  if ( *v11 )
  {
    LODWORD(v12) = (*(__int64 (__fastcall **)(_QWORD, char *, const struct MsgCallTypeDefinition *, __int64))(**((_QWORD **)this + 17) + 32LL))(
                     *((_QWORD *)this + 17),
                     (char *)this + 120,
                     a3,
                     v12);
    if ( (int)v12 >= 0 )
      LODWORD(v12) = -2018375668;
  }
  return (unsigned int)v12;
}
