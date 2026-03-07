void *__fastcall MiGetSharedVm(__int64 a1)
{
  void *result; // rax

  result = &unk_140C69E00;
  if ( (*(_BYTE *)(a1 + 184) & 7) != 2 )
    return (void *)(a1 + 192);
  return result;
}
