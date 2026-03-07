char __fastcall UsbhValidateMsOs20ModelId(__int64 a1, int *a2, __int64 a3)
{
  int v3; // r9d
  int v4; // r8d
  __int64 v6; // rax

  v3 = *a2;
  if ( (*a2 & 0x100) != 0 )
  {
    v4 = 1447905584;
LABEL_3:
    Log(a1, 256, v4, 0LL, 0LL);
    return 0;
  }
  if ( *(_WORD *)a3 != 20 )
  {
    v4 = 1447905585;
    goto LABEL_3;
  }
  v6 = *(_QWORD *)(a3 + 4) - *(_QWORD *)&GUID_NULL.Data1;
  if ( !v6 )
    v6 = *(_QWORD *)(a3 + 12) - *(_QWORD *)GUID_NULL.Data4;
  if ( !v6 )
  {
    v4 = 1447905586;
    goto LABEL_3;
  }
  *((_QWORD *)a2 + 5) = a3;
  *a2 = v3 | 0x100;
  return 1;
}
