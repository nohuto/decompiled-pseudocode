__int64 __fastcall UsbhDriverNotFoundTimer(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  _DWORD *v8; // rax

  v6 = UsbhLatchPdo(a2, a3, 0LL, 0x444E4654u);
  v7 = v6;
  if ( v6 )
  {
    if ( v6 != a4
      || (v8 = PdoExt(a4),
          (int)UsbhQueueWorkItemEx(
                 *((_QWORD *)v8 + 148),
                 1u,
                 (int)UsbhDriverNotFoundWorker,
                 a4,
                 *((unsigned __int16 *)v8 + 714),
                 0x77464E44u,
                 0LL) < 0) )
    {
      UsbhUnlatchPdo(a2, v7, 0LL, 0x444E4654u);
    }
  }
  return 0LL;
}
