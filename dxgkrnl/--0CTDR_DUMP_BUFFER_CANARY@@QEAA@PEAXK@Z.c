CTDR_DUMP_BUFFER_CANARY *__fastcall CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY(
        CTDR_DUMP_BUFFER_CANARY *this,
        char *a2,
        int a3)
{
  char *v3; // rdx

  *(_QWORD *)this = 0LL;
  if ( a2 )
  {
    v3 = &a2[a3];
    *(_QWORD *)this = v3;
    *(_DWORD *)v3 = 5394245;
  }
  return this;
}
