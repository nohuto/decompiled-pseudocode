__int64 __fastcall NtUserfnSENTDDEMSG(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  PtiCurrentShared(a1);
  if ( a6 == 692 )
    return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))qword_1C0360EE0)(
             a1,
             a2 | 0x40000000u,
             a3,
             a4,
             a5);
  else
    return 0LL;
}
