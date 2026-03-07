__int64 __fastcall ntoskrnl_27(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v7; // r8
  int v8; // r9d
  __int64 v9; // r11

  Blink = PsGetCurrentServerSiloGlobals()[56].Blink;
  if ( qword_140D534F0 )
    return qword_140D534F0(Blink, v9, v5, v7, v8, a5);
  else
    return SLQueryLicenseValueInternal(Blink, v9, v5, v7, v8, a5);
}
