__int64 __fastcall HalSetProfileInterval(unsigned int a1)
{
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  if ( ((int (__fastcall *)(_QWORD, unsigned int *))HalpProfileInterface[3])(0LL, &v2) >= 0 )
    return v2;
  else
    return 0LL;
}
