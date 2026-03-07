void __fastcall VidSchiStartHwSchNodeProgressMonitoring(struct _VIDSCH_NODE *a1)
{
  __int64 v1; // rax
  _QWORD v3[4]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v4; // [rsp+40h] [rbp-18h]

  v1 = *((_QWORD *)a1 + 3);
  v4 = 0;
  v3[0] = v1 + 1728;
  AcquireSpinLock::Acquire((Acquire *)v3);
  if ( *((_DWORD *)a1 + 428) || *((_DWORD *)a1 + 430) )
    *((_DWORD *)a1 + 110) = 1;
  AcquireSpinLock::Release((AcquireSpinLock *)v3);
}
