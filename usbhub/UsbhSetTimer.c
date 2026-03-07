__int64 __fastcall UsbhSetTimer(__int64 a1, int a2, struct _KTIMER *a3, struct _KDPC *a4, int a5, char a6)
{
  __int64 result; // rax
  ULONG TimeIncrement; // eax

  if ( !a6 || (result = UsbhReferenceListAdd(a1, (__int64)a3, a5), (result & 0xC0000000) != 0xC0000000) )
  {
    TimeIncrement = KeQueryTimeIncrement();
    if ( KeSetTimer(a3, (LARGE_INTEGER)(int)(1 - 10000 * a2 - TimeIncrement), a4) )
    {
      if ( a6 )
        UsbhReferenceListRemove(a1, (__int64)a3);
    }
    return 0LL;
  }
  return result;
}
