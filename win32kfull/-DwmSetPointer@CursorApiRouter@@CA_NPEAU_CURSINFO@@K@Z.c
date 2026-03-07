bool __fastcall CursorApiRouter::DwmSetPointer(struct _CURSINFO *a1, unsigned int a2)
{
  _OWORD v3[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+40h] [rbp-18h]

  if ( a1 )
    return CursorApiRouter::SendMITCursorShape(a1, a2);
  memset(v3, 0, sizeof(v3));
  v4 = 0LL;
  SendShape(v3, 40LL);
  return 1;
}
