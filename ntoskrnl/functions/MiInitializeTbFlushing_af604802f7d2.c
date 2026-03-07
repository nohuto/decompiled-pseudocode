__int64 MiInitializeTbFlushing()
{
  __int64 TbSize; // rbx
  __int64 result; // rax

  TbSize = KeGetTbSize();
  if ( !TbSize )
    TbSize = 2048LL;
  qword_140C65810 = -1LL;
  result = MiInitializeTbFlush(TbSize);
  if ( qword_140C65810 == TbSize && TbSize != 2048 )
  {
    qword_140C65810 = -1LL;
    return MiInitializeTbFlush(2048LL);
  }
  return result;
}
