_USB_COMMON_DESCRIPTOR *__fastcall FxUsbFindDescriptorType(
        char *Buffer,
        unsigned __int64 BufferLength,
        unsigned __int8 *Start,
        int DescriptorType)
{
  while ( 1 )
  {
    if ( Start >= (unsigned __int8 *)&Buffer[BufferLength] )
      return 0LL;
    if ( Start[1] == DescriptorType )
      break;
    Start += *Start;
  }
  return (_USB_COMMON_DESCRIPTOR *)Start;
}
