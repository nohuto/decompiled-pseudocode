struct tagPROCESS_HID_REQUEST *__fastcall HidIsRequestedByThisProcess(
        struct DEVICEINFO *a1,
        struct tagPROCESS_HID_TABLE *a2)
{
  struct tagPROCESS_HID_REQUEST *result; // rax
  __int64 v4; // rax
  unsigned __int16 v5; // si
  unsigned __int16 v6; // di

  if ( !a2 )
    return 0LL;
  v4 = *((_QWORD *)a1 + 57);
  v5 = *(_WORD *)(v4 + 42);
  v6 = *(_WORD *)(v4 + 40);
  if ( __PAIR32__(*((_WORD *)a2 + 48), *((_WORD *)a2 + 49)) == __PAIR32__(v5, v6) )
    return (struct tagPROCESS_HID_REQUEST *)*((_QWORD *)a2 + 11);
  result = InProcessDeviceTypeRequestTable(a2, v5, v6);
  if ( result )
  {
    *((_WORD *)a2 + 48) = v5;
    *((_WORD *)a2 + 49) = v6;
    *((_QWORD *)a2 + 11) = result;
  }
  return result;
}
