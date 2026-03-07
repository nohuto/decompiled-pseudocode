__int64 __fastcall AccessProceduresStream(struct tagKE *a1, unsigned int a2, signed int a3)
{
  unsigned int v3; // edi
  __int64 (__fastcall **i)(struct tagKE *, unsigned int, int); // rbx

  v3 = a3;
  if ( (unsigned __int64)a3 >= 5 )
    return 1LL;
  for ( i = &off_1C0281D00[a3]; ; ++i )
  {
    ++v3;
    if ( !((unsigned int (__fastcall *)(struct tagKE *, _QWORD))*i)(a1, a2) )
      break;
    if ( v3 >= 5 )
      return 1LL;
  }
  InputTraceLogging::Keyboard::DropInput(11LL);
  return 0LL;
}
