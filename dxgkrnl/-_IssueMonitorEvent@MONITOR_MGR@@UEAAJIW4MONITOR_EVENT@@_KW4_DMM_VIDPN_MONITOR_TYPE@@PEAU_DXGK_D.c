__int64 __fastcall MONITOR_MGR::_IssueMonitorEvent(_QWORD *a1, unsigned int a2, int a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v6; // rdi
  __int64 v9; // r12
  __int64 v10; // rcx
  struct _LUID *v11; // rdx
  struct DXGGLOBAL *Global; // rax
  __int64 v13; // r9
  int v14; // eax
  GUID *p_ActivityId; // r8
  __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD *i; // rbx
  int v20; // [rsp+70h] [rbp-69h] BYREF
  DXGFASTMUTEX *v21; // [rsp+78h] [rbp-61h] BYREF
  unsigned __int64 v22; // [rsp+80h] [rbp-59h] BYREF
  int v23; // [rsp+88h] [rbp-51h] BYREF
  int v24; // [rsp+8Ch] [rbp-4Dh] BYREF
  int v25; // [rsp+90h] [rbp-49h] BYREF
  struct _GUID *v26; // [rsp+98h] [rbp-41h] BYREF
  unsigned __int64 v27; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v28; // [rsp+A8h] [rbp-31h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-29h]
  struct _GUID v30; // [rsp+B8h] [rbp-21h] BYREF
  GUID ActivityId; // [rsp+C8h] [rbp-11h] BYREF

  v6 = a3;
  v29 = a4;
  v9 = a2;
  if ( !a3 || a3 == 7 )
  {
    ActivityId = 0LL;
    EtwActivityIdControl(3u, &ActivityId);
    v10 = a1[2];
    v22 = 0LL;
    DXGADAPTER::IsAdapterSessionized(*(DXGADAPTER **)(v10 + 16), v11, 0LL, &v22);
    v20 = 0;
    v30 = 0LL;
    Global = DXGGLOBAL::GetGlobal();
    RAPID_HPD_MANAGER::GetCurrenRapidHPDState(
      (struct DXGGLOBAL *)((char *)Global + 305192),
      0,
      (enum _DXGK_RAPID_HPD_TYPE *)&v20,
      &v30,
      0LL);
    if ( (unsigned int)dword_1C013A918 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C013A918, 0x400000000080LL) )
      {
        v26 = &v30;
        v27 = v22;
        if ( a6 )
          v14 = *(unsigned __int8 *)(a6 + 48);
        else
          v14 = -1;
        v23 = v14;
        p_ActivityId = (GUID *)(a6 + 8);
        v24 = a5;
        v16 = a1[2];
        v28 = a4;
        v25 = v6;
        v17 = *(_QWORD *)(v16 + 16);
        v21 = *(DXGFASTMUTEX **)(v17 + 404);
        LODWORD(v22) = v9;
        LOWORD(v20) = 3;
        if ( !a6 )
          p_ActivityId = &ActivityId;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByRef<16>>(
          v17,
          byte_1C00A0E00,
          p_ActivityId,
          v13,
          (__int64)&v20,
          (__int64)&v22,
          (__int64)&v21,
          (__int64)&v25,
          (__int64)&v28,
          (__int64)&v24,
          (__int64)&v23,
          (__int64)&v27,
          (__int64 *)&v26);
      }
    }
  }
  if ( (int)v6 <= 6 )
  {
    if ( (_DWORD)v6 == 6 || !(_DWORD)v6 )
      goto LABEL_18;
    if ( (_DWORD)v6 == 1 || (_DWORD)v6 == 2 )
    {
LABEL_19:
      if ( (unsigned int)v6 <= 3 )
        goto LABEL_22;
      goto LABEL_20;
    }
    if ( (_DWORD)v6 == 3 || (unsigned int)(v6 - 4) <= 1 )
      goto LABEL_18;
LABEL_29:
    WdLogSingleEntry1(1LL, 3249LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"Unknown monitor event was processed. This switch block should be updated to decide whether the monitor un"
                "iqueness is affected.",
      3249LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_19;
  }
  if ( (_DWORD)v6 == 7 )
  {
LABEL_18:
    DxgkIncreaseMonitorUniqueness();
    goto LABEL_19;
  }
  if ( (_DWORD)v6 != 8 && (_DWORD)v6 != 9 )
  {
    if ( (_DWORD)v6 == 10 || (_DWORD)v6 == 11 )
      goto LABEL_18;
    if ( (_DWORD)v6 != 12 )
      goto LABEL_29;
  }
LABEL_20:
  if ( (unsigned int)(v6 - 7) > 5 )
    WdLogSingleEntry0(1LL);
LABEL_22:
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v21, (struct DXGFASTMUTEX *)(a1 + 15));
  for ( i = (_QWORD *)a1[6]; ; i = (_QWORD *)*i )
  {
    if ( i == a1 + 6 )
      i = 0LL;
    MUTEX_LOCK::~MUTEX_LOCK(&v21);
    if ( !i )
      break;
    if ( ((int (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, int, __int64))i[2])(
           *(_QWORD *)(a1[2] + 16LL),
           (unsigned int)v9,
           i[3],
           (unsigned int)v6,
           v29,
           a5,
           a6) < 0 )
      WdLogSingleEntry4(2LL, i[2], i[3], v6, v9);
    MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v21, (struct DXGFASTMUTEX *)(a1 + 15));
  }
  return 0LL;
}
