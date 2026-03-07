__int64 __fastcall ProcgrpQueryActiveProcessorCountEx(unsigned __int16 GroupNumber)
{
  unsigned __int8 *v2; // rax

  if ( (unsigned __int16)(GroupNumber - 1) <= 0xFFFDu )
    return 0LL;
  v2 = *(unsigned __int8 **)&KeNumberProcessors;
  return *v2;
}
