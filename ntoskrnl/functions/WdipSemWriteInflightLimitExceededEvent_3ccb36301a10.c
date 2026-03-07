NTSTATUS __fastcall WdipSemWriteInflightLimitExceededEvent(ULONGLONG a1, __int16 a2, const GUID *a3, __int64 *a4)
{
  char *v6; // rcx
  unsigned int v7; // eax
  ULONG v8; // r10d
  __int64 v9; // rdx
  __int64 v10; // rax
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-D0h] BYREF
  __int16 *v12; // [rsp+40h] [rbp-C0h]
  __int64 v13; // [rsp+48h] [rbp-B8h]
  __int64 *v14; // [rsp+50h] [rbp-B0h]
  __int64 v15; // [rsp+58h] [rbp-A8h]
  char v16; // [rsp+6Ch] [rbp-94h] BYREF
  __int16 v17; // [rsp+858h] [rbp+758h] BYREF

  v17 = a2;
  if ( !a1 )
    return -1073741811;
  if ( !a3 )
    return -1073741811;
  if ( !a4 )
    return -1073741811;
  v6 = (char *)(a4 + 125);
  v7 = *((_DWORD *)a4 + 250);
  if ( v7 > 0x7D )
    return -1073741811;
  v11.Ptr = a1;
  v12 = &v17;
  v8 = v7 + 3;
  *(_QWORD *)&v11.Size = 16LL;
  v13 = 2LL;
  v14 = a4 + 125;
  v15 = 4LL;
  if ( v7 )
  {
    v6 = &v16;
    v9 = v7;
    do
    {
      v10 = *a4++;
      *(_QWORD *)(v6 - 12) = v10;
      *(_QWORD *)(v6 - 4) = 24LL;
      v6 += 16;
      --v9;
    }
    while ( v9 );
  }
  return WdipSemWriteEvent((__int64)v6, &WDI_SEM_EVENT_SCENARIO_INFLIGHT_MAX, a3, v8, &v11);
}
