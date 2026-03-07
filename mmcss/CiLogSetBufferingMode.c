NTSTATUS __fastcall CiLogSetBufferingMode(__int64 a1, int a2)
{
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-38h] BYREF
  int *v4; // [rsp+40h] [rbp-28h]
  __int64 v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+78h] [rbp+10h] BYREF

  v6 = a2;
  *(_QWORD *)&v3.Size = 4LL;
  v3.Ptr = a1 + 144;
  v5 = 4LL;
  v4 = &v6;
  return EtwWrite(RegHandle, &CiSetMultimediaModeEvent, 0LL, 2u, &v3);
}
