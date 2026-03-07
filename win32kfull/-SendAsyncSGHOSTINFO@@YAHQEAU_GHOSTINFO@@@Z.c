_BOOL8 __fastcall SendAsyncSGHOSTINFO(struct _GHOSTINFO *const a1)
{
  void *v1; // rax

  v1 = (void *)ReferenceDwmApiPort(a1);
  return (int)DwmAsyncSignalGhost(v1) >= 0;
}
