void __fastcall CaptureCOLORADJUSTMENT(struct tagCOLORADJUSTMENT **a1, struct tagCOLORADJUSTMENT *a2)
{
  struct tagCOLORADJUSTMENT *v2; // r9

  v2 = *a1;
  if ( *a1 )
  {
    if ( (unsigned __int64)v2 >= MmUserProbeAddress )
      v2 = (struct tagCOLORADJUSTMENT *)MmUserProbeAddress;
    *a2 = *v2;
    *a1 = a2;
  }
}
