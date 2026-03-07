char __fastcall PiDaFastIoDispatch(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rax
  char v6; // r10
  __int64 (__fastcall *v7)(__int64, __int64, __int64, __int64, __int64); // r11

  v5 = *(_QWORD *)(a1 + 24);
  v6 = 0;
  if ( v5 < 5 )
  {
    v7 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64))qword_140006CD0[3 * v5];
    if ( v7 )
      return v7(a1, a2, a3, a4, a5);
  }
  return v6;
}
