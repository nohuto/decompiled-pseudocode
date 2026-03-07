__int64 __fastcall sub_14005BF44(__int64 a1, __int64 a2)
{
  int v2; // edx
  unsigned int v3; // ebx
  __int128 v5; // [rsp+40h] [rbp-48h] BYREF
  __int128 v6; // [rsp+50h] [rbp-38h]
  __int128 v7; // [rsp+60h] [rbp-28h]
  __int64 v8; // [rsp+70h] [rbp-18h]

  v5 = 0LL;
  v8 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( byte_1400DF688 )
  {
    if ( (unsigned int)dword_1400DF0C0 <= 0x26 )
      LODWORD(v5) = -1;
    else
      LODWORD(v5) = stru_1400DF410.Queue.ListEntry.Flink[19].Flink;
  }
  else
  {
    LODWORD(v5) = 56;
  }
  *((_QWORD *)&v6 + 1) = 0x100000001LL;
  *(_QWORD *)&v7 = a2;
  v3 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64))(qword_1400DF678 + 2496))(qword_1400DF6A8, &v5, a1 + 16);
  if ( !v3 )
    return 0LL;
  if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
  {
    LOBYTE(v2) = 2;
    sub_1400A1CFC(
      *(_QWORD *)(*((_QWORD *)P + 1) + 16LL),
      v2,
      3,
      10,
      (__int64)&unk_1400D7C88,
      (__int64)L"WdfWaitLockCreate(&Attributes, &m_lock)",
      v3);
  }
  return v3;
}
