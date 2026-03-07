__int64 __fastcall sub_14005C040(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  int v5; // edx
  unsigned int v6; // ebx
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  v2 = -10000 * a2;
  v3 = *(_QWORD *)(a1 + 16);
  v8 = v2;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(qword_1400DF678 + 2504))(qword_1400DF6A8, v3, &v8);
  if ( v6 )
  {
    if ( off_1400DF038 != (_UNKNOWN *)&off_1400DF038 )
    {
      LOBYTE(v5) = 2;
      sub_1400A1CFC(
        *(_QWORD *)(*((_QWORD *)P + 1) + 16LL),
        v5,
        3,
        11,
        (__int64)&unk_1400D7C88,
        (__int64)L"WdfWaitLockAcquire(m_lock, &timeout)",
        v6);
    }
    return v6;
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 1;
    return 0LL;
  }
}
