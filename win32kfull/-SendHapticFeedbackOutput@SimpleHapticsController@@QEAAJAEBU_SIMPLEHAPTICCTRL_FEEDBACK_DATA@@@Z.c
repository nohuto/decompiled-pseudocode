/*
 * XREFs of ?SendHapticFeedbackOutput@SimpleHapticsController@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1C024C3D0
 * Callers:
 *     ?SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z @ 0x1C0248D88 (-SendHapticFeedbackOutput@InteractiveControlDevice@@QEAAJAEBU_SIMPLEHAPTICCTRL_FEEDBACK_DATA@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0242D44 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@55@Z @ 0x1C024ADE0 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U3@@-$_tlgWriteTe.c)
 */

__int64 __fastcall SimpleHapticsController::SendHapticFeedbackOutput(
        SimpleHapticsController *this,
        const struct _SIMPLEHAPTICCTRL_FEEDBACK_DATA *a2,
        __int64 a3,
        __int64 a4)
{
  NTSTATUS v6; // edi
  ULONG v7; // r15d
  _BYTE *v8; // r10
  int v9; // eax
  ULONG UsageValue; // r14d
  unsigned int v11; // ecx
  __int64 v12; // rdx
  int v13; // ecx
  void *v14; // rcx
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+28h] [rbp-38h]
  ULONG Report; // [rsp+30h] [rbp-30h]
  int v18; // [rsp+50h] [rbp-10h] BYREF
  const char *v19; // [rsp+58h] [rbp-8h] BYREF
  union _LARGE_INTEGER ByteOffset; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v21; // [rsp+B0h] [rbp+50h] BYREF
  int v22; // [rsp+B8h] [rbp+58h] BYREF

  v6 = 0;
  v7 = 0;
  if ( (unsigned int)dword_1C0357118 > 4 )
  {
    LODWORD(v21) = *((_DWORD *)a2 + 3);
    v22 = *((_DWORD *)a2 + 2);
    v18 = *((_DWORD *)a2 + 1);
    LOWORD(ByteOffset.LowPart) = *(_WORD *)a2;
    v19 = "SimpleHapticsController::GetReportInfo entry";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)this,
      byte_1C031FC0D,
      a3,
      a4,
      (void **)&v19,
      (__int64)&ByteOffset,
      (__int64)&v18,
      (__int64)&v22,
      (__int64)&v21);
  }
  if ( *((_WORD *)this + 36) && (v8 = (_BYTE *)*((_QWORD *)this + 8)) != 0LL && *((_QWORD *)this + 3) )
  {
    v9 = *((_DWORD *)a2 + 2);
    a4 = *(unsigned __int16 *)a2;
    UsageValue = v9 - 1;
    if ( v9 <= 0 )
      UsageValue = 0;
    if ( (unsigned __int16)a4 > 2u )
    {
      a3 = *((unsigned int *)this + 22);
      v11 = 0;
      if ( !(_DWORD)a3 )
        goto LABEL_12;
      while ( 1 )
      {
        v12 = *((_QWORD *)this + 10) + 8LL * v11;
        if ( *(_WORD *)v12 == (_WORD)a4 )
          break;
        if ( ++v11 >= (unsigned int)a3 )
          goto LABEL_12;
      }
      if ( !v12 )
      {
LABEL_12:
        v6 = -1073741811;
        goto LABEL_20;
      }
      v13 = *((_DWORD *)a2 + 3);
      if ( v13 > 0 )
        v7 = v13 + *(_DWORD *)(v12 + 4);
    }
    *v8 = 1;
    if ( HidP_SetUsageValue(
           HidP_Output,
           0xEu,
           0,
           0x21u,
           *(unsigned __int16 *)a2,
           *((PHIDP_PREPARSED_DATA *)this + 2),
           *((PCHAR *)this + 8),
           *((unsigned __int16 *)this + 36)) >= 0 )
    {
      HidP_SetUsageValue(
        HidP_Output,
        0xEu,
        0,
        0x24u,
        UsageValue,
        *((PHIDP_PREPARSED_DATA *)this + 2),
        *((PCHAR *)this + 8),
        *((unsigned __int16 *)this + 36));
      HidP_SetUsageValue(
        HidP_Output,
        0xEu,
        0,
        0x25u,
        v7,
        *((PHIDP_PREPARSED_DATA *)this + 2),
        *((PCHAR *)this + 8),
        *((unsigned __int16 *)this + 36));
      HidP_SetUsageValue(
        HidP_Output,
        0xEu,
        0,
        0x23u,
        *((_DWORD *)a2 + 1),
        *((PHIDP_PREPARSED_DATA *)this + 2),
        *((PCHAR *)this + 8),
        *((unsigned __int16 *)this + 36));
      v14 = (void *)*((_QWORD *)this + 3);
      Report = *((unsigned __int16 *)this + 36);
      PreparsedData = (PHIDP_PREPARSED_DATA)*((_QWORD *)this + 8);
      ByteOffset.QuadPart = 0LL;
      v6 = ZwWriteFile(
             v14,
             0LL,
             0LL,
             0LL,
             (PIO_STATUS_BLOCK)((char *)this + 40),
             PreparsedData,
             Report,
             &ByteOffset,
             0LL);
      if ( v6 >= 0 )
      {
        *(_OWORD *)((char *)this + 40) = 0LL;
        v6 = ZwFlushBuffersFile(*((HANDLE *)this + 3), (PIO_STATUS_BLOCK)((char *)this + 40));
      }
    }
  }
  else
  {
    v6 = -1073740701;
  }
LABEL_20:
  if ( (unsigned int)dword_1C0357118 > 4 )
  {
    ByteOffset.LowPart = v6;
    v21 = (__int64)"SimpleHapticsController::SendHapticFeedbackOutput exit";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C0357118,
      byte_1C031FB66,
      a3,
      a4,
      (void **)&v21,
      (__int64)&ByteOffset);
  }
  return (unsigned int)v6;
}
