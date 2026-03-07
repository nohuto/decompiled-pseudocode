char __fastcall VidSchiCheckHwSchNodeProgress(struct _VIDSCH_NODE *a1, char a2)
{
  char v2; // bl
  __int64 v3; // rax
  _QWORD v6[4]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v7; // [rsp+40h] [rbp-18h]

  v2 = 0;
  v3 = *((_QWORD *)a1 + 3) + 1728LL;
  v7 = 0;
  v6[0] = v3;
  if ( a2 )
    AcquireSpinLock::Acquire((Acquire *)v6);
  if ( *((_DWORD *)a1 + 428) || *((_DWORD *)a1 + 430) )
    v2 = 1;
  else
    *((_DWORD *)a1 + 110) = 0;
  AcquireSpinLock::Release((AcquireSpinLock *)v6);
  return v2;
}
