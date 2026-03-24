/*
 * XREFs of ?UnmarshalReceive@ReceiveProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallReceiveHost@@PEBUMsgCallTypeDefinition@@PEBEIIPEBXI@Z @ 0x1C00AA7E0
 * Callers:
 *     CoreUICallReceive @ 0x1C00AA718 (CoreUICallReceive.c)
 * Callees:
 *     ?ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAIPEA_N0@Z @ 0x1C00A7CCC (-ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAIPEA_N0@Z.c)
 *     ?NotifyProtocolViolationHelper@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallReceiveHost@@PEAUMsgCallState@@@Z @ 0x1C00CE83C (-NotifyProtocolViolationHelper@ReceiveProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallRece.c)
 *     ?Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z @ 0x1C0200DC8 (-Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z.c)
 */

__int64 __fastcall CoreMessaging::Calling::ReceiveProcessor::UnmarshalReceive(
        CoreMessaging::Calling::ReceiveProcessor *this,
        struct IMessageCallReceiveHost *a2,
        const struct MsgCallTypeDefinition *a3,
        const unsigned __int8 *a4,
        bool a5,
        unsigned int a6,
        _DWORD *a7,
        unsigned int a8)
{
  _DWORD *v8; // r8
  __int64 v10; // rsi
  struct MsgCallState *v12; // rdi
  int v13; // r9d
  __int64 v14; // rax
  _DWORD *v15; // rdx
  unsigned int v16; // r8d
  int v17; // ecx
  int v18; // eax
  __int64 v19; // rcx
  char *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  int v23; // r8d
  char *v24; // rcx
  char v25; // al
  _BYTE *v26; // rcx
  __int64 v27; // rbp
  unsigned int v28; // ecx
  unsigned int *v29; // rcx
  unsigned int v30; // eax
  unsigned int v31; // edx
  __int64 v32; // rcx
  CoreMessaging::Calling::ReceiveProcessor *v33; // rcx
  const unsigned __int8 *v34; // [rsp+48h] [rbp+20h] BYREF

  v34 = a4;
  v8 = a7;
  if ( !a2 )
    return 2147942487LL;
  v10 = a8;
  if ( !a8 )
    return 0LL;
  if ( !a7 )
    return 2147942487LL;
  *((_DWORD *)this + 31) = -1;
  v12 = (CoreMessaging::Calling::ReceiveProcessor *)((char *)this + 120);
  v13 = 0;
  *((_QWORD *)this + 17) = a2;
  *((_DWORD *)this + 30) = 0;
  if ( (((_DWORD)v10 + 3) & 0xFFFFFFFC) != (_DWORD)v10 )
    goto LABEL_50;
  *((_BYTE *)this + 112) = 1;
  v14 = -1LL;
  *((_QWORD *)this + 11) = v8;
  *((_QWORD *)this + 12) = v8;
  if ( (_DWORD *)((char *)v8 + v10) >= v8 )
    v14 = (__int64)v8 + v10;
  *((_QWORD *)this + 13) = v14;
  if ( (_DWORD *)((char *)v8 + v10) < v8 || (unsigned int)v10 < 8 )
  {
LABEL_50:
    *(_DWORD *)v12 = 102;
    goto LABEL_51;
  }
  if ( (unsigned int)(v14 - (_DWORD)v8) < 8 || (v15 = v8, *((_QWORD *)this + 12) = v8 + 2, !v8) )
    CoreMessaging::Calling::FailFast::Error((ULONG_PTR)"mincore\\coreui\\dev\\calling\\receiveprocessor.cpp", 0x86uLL);
  v16 = *v8;
  v17 = *((_DWORD *)this + 32);
  if ( !(v16 >> v17) )
  {
    if ( (v16 & ((1 << v17) - 1)) << *((_DWORD *)this + 33) <= (unsigned int)v10 )
    {
      v18 = 0;
      v19 = 0LL;
      while ( *(_WORD *)((char *)&Microsoft::CoreUI::Registrar::IRegistrarClient_Receive<CoreMessagingK::RegistrarClientThunk>::Interfaces
                       + v19) != *((_WORD *)v15 + 2) )
      {
        ++v18;
        v19 += 16LL;
        if ( v18 >= 1 )
          goto LABEL_20;
      }
      v20 = (char *)&Microsoft::CoreUI::Registrar::IRegistrarClient_Receive<CoreMessagingK::RegistrarClientThunk>::Interfaces
          + 16 * v18;
      if ( !v20 )
      {
LABEL_20:
        *(_DWORD *)v12 = 103;
        goto LABEL_51;
      }
      v21 = *((unsigned __int16 *)v15 + 3);
      if ( (unsigned __int16)v21 < *((_WORD *)v20 + 1) )
      {
        *((_QWORD *)this + 18) = v20;
        v22 = *((_QWORD *)v20 + 1) + 16 * v21;
        *((_QWORD *)this + 19) = v22;
        if ( v22 )
        {
          v23 = *(unsigned __int8 *)(v22 + 10);
          *((_DWORD *)this + 20) = v23;
          if ( v23 )
          {
            *(_QWORD *)this = Microsoft::CoreUI::MessageCall::CoreMessagingK_g_parameters_tIzsWgdZFlpFj7khRRzdWgeERWU_IRegistrar;
            v24 = &Microsoft::CoreUI::MessageCall::CoreMessagingK_g_parameters_tIzsWgdZFlpFj7khRRzdWgeERWU_IRegistrar[*(unsigned __int16 *)(v22 + 8)];
            *(_QWORD *)this = v24;
            if ( v24 >= byte_1C020DE06
              || v24 < Microsoft::CoreUI::MessageCall::CoreMessagingK_g_parameters_tIzsWgdZFlpFj7khRRzdWgeERWU_IRegistrar )
            {
              *(_DWORD *)v12 = 202;
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
                  v28 = *((_DWORD *)this + 26) - *((_DWORD *)this + 24);
                  a6 = 0;
                  LODWORD(v34) = 0;
                  a5 = 0;
                  if ( v28 < 4 )
                    break;
                  v29 = (unsigned int *)*((_QWORD *)this + 12);
                  *((_QWORD *)this + 12) = v29 + 1;
                  if ( !v29 )
                    break;
                  v30 = *v29;
                  *((_DWORD *)this + 21) = *v29;
                  if ( v30 > 0xFFFFFFFC )
                    goto LABEL_48;
                  if ( v30 )
                  {
                    v31 = (v30 + 3) & 0xFFFFFFFC;
                    if ( *((_DWORD *)this + 26) - *((_DWORD *)this + 24) >= v31 )
                    {
                      v32 = *((_QWORD *)this + 12);
                      *((_QWORD *)this + 12) = v32 + v31;
                    }
                    else
                    {
                      v32 = 0LL;
                    }
                    *((_QWORD *)this + 52) = v32;
                    if ( !v32 )
                      goto LABEL_50;
                  }
                  else
                  {
                    *((_QWORD *)this + 52) = 0LL;
                  }
                  v13 = CoreMessaging::Calling::ReceiveProcessor::ReadExpectedParameterSize(
                          this,
                          &a6,
                          &a5,
                          (unsigned int *)&v34);
                  if ( v13 < 0 )
                    goto LABEL_51;
                  if ( a6 != *((_DWORD *)this + 21) && a6 )
                    goto LABEL_48;
                  *((_QWORD *)this + v27 + 20) = *((_QWORD *)this + 52);
                  v27 = (unsigned int)(v27 + 1);
                  if ( a5 )
                  {
                    *((_QWORD *)this + v27 + 20) = (unsigned int)v34;
                    v27 = (unsigned int)(v27 + 1);
                  }
                  if ( ++*((_DWORD *)this + 31) >= *((_DWORD *)this + 20) )
                    goto LABEL_46;
                }
              }
              *(_DWORD *)v12 = 106;
            }
          }
          else
          {
LABEL_46:
            if ( *((_DWORD *)this + 24) - *((_DWORD *)this + 22) == (_DWORD)v10 )
              v13 = 0;
            else
LABEL_48:
              *(_DWORD *)v12 = 107;
          }
        }
        else
        {
          *(_DWORD *)v12 = 201;
        }
      }
      else
      {
        *(_DWORD *)v12 = 105;
      }
      goto LABEL_51;
    }
    goto LABEL_50;
  }
  *(_DWORD *)v12 = 108;
LABEL_51:
  v33 = (CoreMessaging::Calling::ReceiveProcessor *)*(unsigned int *)v12;
  if ( (_DWORD)v33 )
  {
    if ( (unsigned int)((_DWORD)v33 - 100) > 0x63 && (unsigned int)((_DWORD)v33 - 200) > 0x63 )
      CoreMessaging::Calling::FailFast::Error(
        (ULONG_PTR)"mincore\\coreui\\dev\\calling\\receiveprocessor.cpp",
        0x181uLL);
    return (unsigned int)CoreMessaging::Calling::ReceiveProcessor::NotifyProtocolViolationHelper(
                           v33,
                           *((struct IMessageCallReceiveHost **)this + 17),
                           v12);
  }
  return (unsigned int)v13;
}
