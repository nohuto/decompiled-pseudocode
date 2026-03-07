void __fastcall SpbApcRundown(struct _KAPC *a1)
{
  Win32FreePool(a1);
}
