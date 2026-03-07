__int64 __fastcall VfTargetDriversGetVerifierData(unsigned __int64 a1)
{
  int v1; // eax
  __int64 v2; // rcx
  bool v3; // zf
  __int64 Node; // rax

  LOBYTE(v1) = VfDriverIsKernelImageAddress(a1);
  if ( v1 )
  {
    v3 = KernelVerifier == 0;
  }
  else
  {
    if ( KernelVerifier )
    {
      if ( dword_140C36F48 >= 2 )
        goto LABEL_8;
      return 0LL;
    }
    v3 = dword_140C36F48 == 0;
  }
  if ( v3 )
    return 0LL;
LABEL_8:
  Node = VfTargetDriversGetNode(v2);
  if ( !Node )
    return 0LL;
  return *(_QWORD *)(Node + 56);
}
