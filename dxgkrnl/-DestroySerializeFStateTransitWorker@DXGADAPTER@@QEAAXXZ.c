void __fastcall DXGADAPTER::DestroySerializeFStateTransitWorker(DXGADAPTER *this)
{
  if ( *((_QWORD *)this + 379) )
  {
    if ( *((_QWORD *)this + 480) )
    {
      *((_BYTE *)this + 3848) = 1;
      KeSetEvent((PRKEVENT)((char *)this + 3712), 0, 0);
      ZwWaitForSingleObject(*((HANDLE *)this + 480), 0, 0LL);
      ZwClose(*((HANDLE *)this + 480));
      *((_QWORD *)this + 480) = 0LL;
    }
  }
}
