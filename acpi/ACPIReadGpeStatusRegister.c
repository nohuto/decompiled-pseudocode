char __fastcall ACPIReadGpeStatusRegister(unsigned int a1)
{
  unsigned int v1; // ebx
  int (__fastcall *v2)(__int64); // rax
  __int64 v3; // rcx
  char v5; // [rsp+40h] [rbp+8h] BYREF

  v1 = a1;
  v5 = 0;
  v2 = *(int (__fastcall **)(__int64))(PmHalDispatchTable + 120);
  if ( a1 >= *((unsigned __int16 *)AcpiInformation + 43) )
  {
    if ( v2(7LL) >= 0 )
    {
      v3 = 7LL;
      v1 -= *((unsigned __int16 *)AcpiInformation + 43);
      goto LABEL_6;
    }
  }
  else if ( v2(6LL) >= 0 )
  {
    v3 = 6LL;
LABEL_6:
    (*(void (__fastcall **)(__int64, _QWORD, char *, __int64, _QWORD))(PmHalDispatchTable + 128))(v3, v1, &v5, 1LL, 0LL);
  }
  return v5;
}
