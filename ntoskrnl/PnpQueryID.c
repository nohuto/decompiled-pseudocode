__int64 __fastcall PnpQueryID(__int64 a1, __int64 a2, PVOID *a3, _DWORD *a4)
{
  __int64 v5; // rcx
  int v8; // esi
  int ID; // eax
  unsigned int v10; // ebx
  int v11; // r9d
  int v12; // r8d
  int v13; // edx
  int v14; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  _DWORD v18[2]; // [rsp+30h] [rbp-28h] BYREF
  const wchar_t *v19; // [rsp+38h] [rbp-20h]

  v18[1] = 0;
  v5 = *(_QWORD *)(a1 + 32);
  *a4 = 0;
  v8 = a2;
  ID = PnpIrpQueryID(v5, a2, a3);
  v10 = ID;
  if ( ID >= 0 )
  {
    if ( v8 )
    {
      if ( v8 == 1 || v8 == 2 )
      {
        v11 = -1;
        v13 = 1024;
        v12 = 1;
        goto LABEL_9;
      }
      if ( v8 != 3 )
      {
        v14 = 0;
        goto LABEL_10;
      }
      v11 = 0;
    }
    else
    {
      v11 = 1;
    }
    v12 = 0;
    v13 = 200;
LABEL_9:
    v14 = PnpFixupID((unsigned int)*a3, v13, v12, v11, *(_QWORD *)(a1 + 16) + 56LL);
LABEL_10:
    *a4 = 2 * v14;
    if ( 2 * v14 )
      return v10;
    v10 = -1073479624;
    goto LABEL_24;
  }
  if ( ID == -1073479624 || !v8 || v8 == 3 && ID == -1073741670 )
  {
LABEL_24:
    PipSetDevNodeProblem(a1, 9LL, v10);
    v16 = *(_QWORD *)(a1 + 16);
    if ( (*(_DWORD *)(v16 + 396) & 0x200000) == 0 )
    {
      PipSetDevNodeFlags(v16, 0x200000);
      PnpSetInvalidIDEvent(*(_QWORD *)(a1 + 16) + 40LL);
    }
    if ( v10 != -1073479624 && !v8 && v10 != -1073741670 && v10 != -1073741810 )
    {
      v17 = *(_QWORD *)(a1 + 16) + 56LL;
      v18[0] = 5242958;
      v19 = L"failed IRP_MN_QUERY_ID-BusQueryDeviceID";
      PnpLogEvent(v17, v18, v10, 0LL, 0);
    }
  }
  if ( *a3 )
  {
    ExFreePoolWithTag(*a3, 0);
    *a3 = 0LL;
    *a4 = 0;
  }
  return v10;
}
