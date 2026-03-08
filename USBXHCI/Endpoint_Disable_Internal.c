/*
 * XREFs of Endpoint_Disable_Internal @ 0x1C000B8A4
 * Callers:
 *     Endpoint_Disable @ 0x1C000B0AC (Endpoint_Disable.c)
 *     Endpoint_Enable @ 0x1C000BDC0 (Endpoint_Enable.c)
 * Callees:
 *     TR_Disable_Internal @ 0x1C0008044 (TR_Disable_Internal.c)
 *     WPP_RECORDER_SF_ddql @ 0x1C000BB30 (WPP_RECORDER_SF_ddql.c)
 *     Controller_ClearHSIIWorkaround @ 0x1C001E9C0 (Controller_ClearHSIIWorkaround.c)
 *     Endpoint_IsCandidateForSplitTransactionHSIIWorkaround @ 0x1C001EDF8 (Endpoint_IsCandidateForSplitTransactionHSIIWorkaround.c)
 *     XilEndpoint_FreeStreamContextArray @ 0x1C003915C (XilEndpoint_FreeStreamContextArray.c)
 */

void __fastcall Endpoint_Disable_Internal(__int64 *a1, char a2, int a3)
{
  char v3; // si
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  _DWORD *v8; // rdi
  unsigned int i; // ebp
  __int64 v10; // rdx

  v3 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddql(*(_QWORD *)(*a1 + 72), a2, a3, *(unsigned __int8 *)(a1[2] + 135));
  if ( ((*((_DWORD *)a1 + 30) - 3) & 0xFFFFFFFB) == 0 )
  {
    v5 = 120LL * (unsigned int)(*(_DWORD *)(a1[2] + 44) - 1);
    v6 = *(_QWORD *)(*(_QWORD *)(*a1 + 152) + 48LL);
    if ( *(_DWORD *)(v5 + v6 + 108) )
      _InterlockedDecrement((volatile signed __int32 *)(v5 + v6 + 108));
  }
  if ( (unsigned __int8)Endpoint_IsCandidateForSplitTransactionHSIIWorkaround(a1) )
  {
    if ( *((_BYTE *)a1 + 38) )
    {
      v7 = *a1;
      *((_BYTE *)a1 + 38) = 0;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 656), 0xFFFFFFFF) == 1 )
        Controller_ClearHSIIWorkaround();
    }
  }
  if ( !*((_BYTE *)a1 + 36) && !*((_BYTE *)a1 + 1344) || v3 )
    v3 = 1;
  if ( *((_BYTE *)a1 + 37) )
  {
    v8 = (_DWORD *)a1[17];
    if ( v8 )
    {
      for ( i = 1; i <= v8[2]; ++i )
        TR_Disable_Internal(*(_QWORD *)(104LL * (i - 1) + a1[17] + 48), v3);
    }
  }
  else
  {
    v8 = 0LL;
    TR_Disable_Internal(a1[11], v3);
  }
  if ( v3 )
  {
    if ( v8 )
    {
      XilEndpoint_FreeStreamContextArray(v8);
      if ( v8 == (_DWORD *)a1[16] )
      {
        ExFreePoolWithTag(v8, 0x49434858u);
        a1[16] = 0LL;
      }
      a1[17] = 0LL;
    }
    v10 = a1[10];
    if ( v10 )
    {
      if ( v10 != *(_QWORD *)(*a1 + 72) )
        imp_WppRecorderLogDelete(WPP_GLOBAL_Control);
    }
    a1[10] = 0LL;
  }
}
