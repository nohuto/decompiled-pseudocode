void EditionHandleRawInputThrottlingTimer()
{
  __int64 v0; // rcx
  struct tagPROCESS_HID_TABLE **v1; // rbx
  struct tagPROCESS_HID_TABLE *i; // rdi

  if ( (unsigned int)RawInputRequestedForMouse() )
  {
    v1 = (struct tagPROCESS_HID_TABLE **)(SGDGetUserSessionState(v0) + 408);
    for ( i = *v1; i != (struct tagPROCESS_HID_TABLE *)v1; i = *(struct tagPROCESS_HID_TABLE **)i )
      FlushThrottledRawMouseInput(i, (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  }
}
