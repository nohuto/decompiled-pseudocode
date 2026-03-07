void __fastcall VidSchTerminateDoorbell(__int64 a1)
{
  __int64 v2; // rax
  void *v3; // rcx
  _QWORD v4[4]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v5; // [rsp+40h] [rbp-18h]

  v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 16LL) + 24LL);
  v5 = 0;
  v4[0] = v2 + 1728;
  AcquireSpinLock::Acquire((Acquire *)v4);
  v3 = *(void **)(a1 + 264);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    *(_QWORD *)(a1 + 264) = 0LL;
  }
  AcquireSpinLock::Release((AcquireSpinLock *)v4);
}
