__int64 __fastcall InteractiveControlDevice::GetInputReport(
        InteractiveControlDevice *this,
        int a2,
        struct InteractiveControlInput **a3)
{
  struct InteractiveControlInput **v3; // rcx
  struct InteractiveControlInput *i; // rax

  v3 = (struct InteractiveControlInput **)((char *)this + 16);
  for ( i = *v3; ; i = *(struct InteractiveControlInput **)i )
  {
    if ( i == (struct InteractiveControlInput *)v3 )
    {
      *a3 = 0LL;
      return 0LL;
    }
    if ( *((_DWORD *)i + 8) == a2 )
      break;
  }
  *a3 = i;
  return 1LL;
}
