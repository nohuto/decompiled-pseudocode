__int64 __fastcall IommuHvFlushTb(__int64 a1, unsigned int a2, __int64 a3)
{
  char v4; // [rsp+20h] [rbp-18h]

  if ( qword_140C62218 )
  {
    v4 = 0;
    qword_140C62218(0LL, *(unsigned int *)(*(_QWORD *)(a1 + 8) + 16LL), a2, a3, v4);
  }
  return 0LL;
}
